"""Stage repeated virtual-interface leaf functions with indirect dispatch."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = []


def pair(game, save, kind, size):
    TARGETS.extend((("game-server", game, kind, size), ("save-server", save, kind, size)))


pair("004fb3a1", "004da4a1", "serializable", 35)
pair("00525833", "005180b3", "dispatch_200", 35)
pair("00534af6", "00528826", "release_member", 37)
pair("005749bd", "0058109d", "type_info_count", 37)
pair("00560758", "005637d8", "can_activate", 38)
pair("00572b03", "0057b4b3", "query_data", 39)
pair("004a79e2", "00463ff2", "control_bars", 41)


def body(kind):
    local = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx")
    end = ("mov esp, ebp", "pop ebp", "ret")
    if kind == "serializable":
        return local + ("mov eax, dword ptr [ebp-4]", "mov edx, dword ptr [eax]",
                        "mov ecx, dword ptr [ebp-4]", "call dword ptr [edx]", "xor ecx, ecx",
                        "cmp dword ptr [eax+8], 0ffffh", "setne cl", "mov eax, ecx") + end
    if kind == "dispatch_200":
        return ("push ebp", "mov ebp, esp", "sub esp, 8", "mov dword ptr [ebp-8], ecx",
                "mov eax, dword ptr [ebp-8]", "mov edx, dword ptr [eax]",
                "mov ecx, dword ptr [ebp-8]", "call dword ptr [edx+200]",
                "mov dword ptr [ebp-4], eax", "mov eax, dword ptr [ebp-4]") + end[:-1] + ("ret 8",)
    if kind == "release_member":
        return local + ("mov eax, dword ptr [ebp-4]", "cmp dword ptr [eax+4], 0", "je done",
                        "mov ecx, dword ptr [ebp-4]", "mov ecx, dword ptr [ecx+4]",
                        "mov edx, dword ptr [ebp-4]", "mov eax, dword ptr [edx+4]",
                        "mov edx, dword ptr [eax]", "call dword ptr [edx+80]", "done:") + end
    if kind == "type_info_count":
        return ("push ebp", "mov ebp, esp", "push ecx", "mov eax, dword ptr [ebp+8]",
                "sub eax, 16", "mov dword ptr [ebp-4], eax", "mov ecx, dword ptr [ebp-4]",
                "mov edx, dword ptr [ecx]", "mov ecx, dword ptr [ebp-4]",
                "call dword ptr [edx+36]", "mov ecx, dword ptr [ebp+12]",
                "mov dword ptr [ecx], eax", "xor eax, eax") + end[:-1] + ("ret 8",)
    if kind == "can_activate":
        return ("push ebp", "mov ebp, esp", "push ecx", "mov eax, dword ptr [ebp+8]",
                "sub eax, 112", "mov dword ptr [ebp-4], eax", "mov ecx, dword ptr [ebp-4]",
                "mov edx, dword ptr [ecx]", "mov ecx, dword ptr [ebp-4]",
                "call dword ptr [edx+148]", "neg eax", "sbb eax, eax", "inc eax") + end[:-1] + ("ret 4",)
    if kind == "query_data":
        return ("push ebp", "mov ebp, esp", "push ecx", "mov eax, dword ptr [ebp+8]",
                "sub eax, 112", "mov dword ptr [ebp-4], eax", "mov ecx, dword ptr [ebp+12]",
                "push ecx", "mov edx, dword ptr [ebp-4]", "add edx, 104",
                "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+104]", "push edx",
                "call dword ptr [ecx+20]") + end[:-1] + ("ret 8",)
    if kind == "control_bars":
        return local + ("mov eax, dword ptr [ebp+12]", "push eax", "mov ecx, dword ptr [ebp+8]",
                        "push ecx", "mov edx, dword ptr [ebp-4]", "mov ecx, dword ptr [edx+32]",
                        "mov eax, dword ptr [ebp-4]", "mov edx, dword ptr [eax+32]",
                        "mov eax, dword ptr [edx]", "call dword ptr [eax+280]") + end[:-1] + ("ret 8",)
    raise ValueError(kind)


def render(address, kind):
    lines = "\n".join(f"    __asm {line}" for line in body(kind))
    return ("// Exact recovered repeated virtual-interface leaf helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredVirtualLeaf{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
