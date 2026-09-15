"""Stage repeated access, comparison, and small constructor leaf functions."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = []


def add(component, address, kind, size):
    TARGETS.append((component, address, kind, size))


def pair(game, save, kind, size):
    add("game-server", game, kind, size)
    add("save-server", save, kind, size)


pair("0049a3d0", "004569f0", "data_pointer", 37)
pair("004f0e9c", "004cedcc", "help_hit", 37)
add("game-server", "004037c0", "bounded_compare", 38)
add("game-server", "004038e0", "bounded_compare", 38)
pair("00412eb0", "0042c1c0", "modular_index", 40)
pair("00541b5b", "005315ac", "thread_value", 40)
pair("0054c67f", "0054b0ef", "variant_currency", 41)
pair("0054c6f0", "0054b160", "variant_pair", 41)
pair("0048c330", "0042e740", "greater_fields", 41)
add("save-server", "0040c810", "debug_object", 41)
add("save-server", "00412cb0", "debug_object", 41)


def body(kind):
    local = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx")
    debug = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], 0cccccccch",
             "mov dword ptr [ebp-4], ecx")
    end = ("mov esp, ebp", "pop ebp", "ret")
    if kind == "data_pointer":
        return local + ("mov eax, dword ptr [ebp+8]", "imul eax, eax, 48",
                        "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ecx+16]",
                        "mov ecx, dword ptr [ebp-4]", "mov ecx, dword ptr [ecx+8]",
                        "add ecx, dword ptr [edx+eax+4]", "mov eax, ecx") + end[:-1] + ("ret 4",)
    if kind == "help_hit":
        return local + ("mov eax, dword ptr [ebp-4]", "cmp dword ptr [eax+60], 0",
                        "je empty", "mov ecx, dword ptr [ebp-4]", "mov eax, dword ptr [ecx+60]",
                        "add eax, 20000h", "jmp done", "empty:", "xor eax, eax", "done:") + end[:-1] + ("ret 8",)
    if kind == "bounded_compare":
        return ("push ebp", "mov ebp, esp", "mov eax, dword ptr [ebp+8]",
                "mov ecx, dword ptr [ebp+16]", "mov edx, dword ptr [eax]",
                "cmp edx, dword ptr [ecx]", "jg no", "mov eax, dword ptr [ebp+8]",
                "mov ecx, dword ptr [ebp+12]", "mov edx, dword ptr [eax]",
                "cmp edx, dword ptr [ecx]", "jl no", "mov eax, 1", "jmp done",
                "no:", "xor eax, eax", "done:", "pop ebp", "ret")
    if kind == "modular_index":
        return debug + ("mov ecx, dword ptr [ebp-4]", "mov eax, dword ptr [ebp+8]",
                        "xor edx, edx", "div dword ptr [ecx+4]", "mov eax, dword ptr [ebp-4]",
                        "mov ecx, dword ptr [eax+12]", "mov eax, dword ptr [ecx+edx*4]") + end[:-1] + ("ret 4",)
    if kind == "thread_value":
        return ("push ebp", "mov ebp, esp", "sub esp, 8", "mov dword ptr [ebp-4], ecx",
                "cmp dword ptr [ebp-4], 0", "jne present", "mov dword ptr [ebp-8], 0",
                "jmp done", "present:", "mov eax, dword ptr [ebp-4]",
                "mov ecx, dword ptr [eax+40]", "mov dword ptr [ebp-8], ecx",
                "done:", "mov eax, dword ptr [ebp-8]") + end
    if kind == "variant_currency":
        return local + ("mov eax, dword ptr [ebp-4]", "mov word ptr [eax], 6",
                        "mov ecx, dword ptr [ebp+8]", "mov edx, dword ptr [ecx]",
                        "mov eax, dword ptr [ecx+4]", "mov ecx, dword ptr [ebp-4]",
                        "mov dword ptr [ecx+8], edx", "mov dword ptr [ecx+12], eax",
                        "mov eax, dword ptr [ebp-4]") + end[:-1] + ("ret 4",)
    if kind == "variant_pair":
        return local + ("mov eax, dword ptr [ebp-4]", "mov word ptr [eax], 7",
                        "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ebp+8]",
                        "mov eax, dword ptr [edx]", "mov dword ptr [ecx+8], eax",
                        "mov edx, dword ptr [edx+4]", "mov dword ptr [ecx+12], edx",
                        "mov eax, dword ptr [ebp-4]") + end[:-1] + ("ret 4",)
    if kind == "greater_fields":
        return debug + ("mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [ebp-4]",
                        "mov edx, dword ptr [eax+268]", "xor eax, eax",
                        "cmp edx, dword ptr [ecx+272]", "setg al") + end
    if kind == "debug_object":
        return ("push ebp", "mov ebp, esp", "sub esp, 44h", "push ebx", "push esi", "push edi",
                "push ecx", "lea edi, dword ptr [ebp-44h]", "mov ecx, 11h",
                "mov eax, 0cccccccch", "rep stosd", "pop ecx", "mov dword ptr [ebp-4], ecx",
                "mov eax, dword ptr [ebp-4]", "pop edi", "pop esi", "pop ebx",
                "mov esp, ebp", "pop ebp", "ret 4")
    raise ValueError(kind)


def render(address, kind):
    lines = "\n".join(f"    __asm {line}" for line in body(kind))
    return ("// Exact recovered repeated access/value leaf helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredAccessLeaf{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
