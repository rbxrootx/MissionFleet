"""Stage the shared optimized VC6 strcat implementation."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("login-server", "00426190", 224),
    ("game-server", "004a9e50", 224),
    ("save-server", "00465980", 224),
)

BODY = (
    "mov ecx, dword ptr [esp+4]", "push edi", "test ecx, 3", "je scan_words",
    "scan_bytes:", "mov al, byte ptr [ecx]", "inc ecx", "test al, al", "je end1",
    "test ecx, 3", "jne scan_bytes", "scan_words:", "mov eax, dword ptr [ecx]",
    "mov edx, 07efefeffh", "add edx, eax", "xor eax, 0ffffffffh", "xor eax, edx",
    "add ecx, 4", "test eax, 081010100h", "je scan_words",
    "mov eax, dword ptr [ecx-4]", "test al, al", "je end4", "test ah, ah", "je end3",
    "test eax, 00ff0000h", "je end2", "test eax, 0ff000000h", "je end1", "jmp scan_words",
    "end1:", "lea edi, [ecx-1]", "jmp source", "end2:", "lea edi, [ecx-2]", "jmp source",
    "end3:", "lea edi, [ecx-3]", "jmp source", "end4:", "lea edi, [ecx-4]", "source:",
    "mov ecx, dword ptr [esp+0ch]", "test ecx, 3", "je copy_words",
    "copy_bytes:", "mov dl, byte ptr [ecx]", "inc ecx", "test dl, dl", "je copy_zero",
    "mov byte ptr [edi], dl", "inc edi", "test ecx, 3", "jne copy_bytes", "jmp copy_words",
    "store_word:", "mov dword ptr [edi], edx", "add edi, 4", "copy_words:",
    "mov edx, 07efefeffh", "mov eax, dword ptr [ecx]", "add edx, eax",
    "xor eax, 0ffffffffh", "xor eax, edx", "mov edx, dword ptr [ecx]", "add ecx, 4",
    "test eax, 081010100h", "je store_word", "test dl, dl", "je copy_zero",
    "test dh, dh", "je copy_word", "test edx, 00ff0000h", "je copy_two",
    "test edx, 0ff000000h", "je copy_four", "jmp store_word", "copy_four:",
    "mov dword ptr [edi], edx", "mov eax, dword ptr [esp+8]", "pop edi", "ret",
    "copy_two:", "mov word ptr [edi], dx", "mov eax, dword ptr [esp+8]",
    "mov byte ptr [edi+2], 0", "pop edi", "ret", "copy_word:",
    "mov word ptr [edi], dx", "mov eax, dword ptr [esp+8]", "pop edi", "ret",
    "copy_zero:", "mov byte ptr [edi], dl", "mov eax, dword ptr [esp+8]", "pop edi", "ret",
)


def render(address):
    lines = "\n".join(f"    __asm {line}" for line in BODY)
    return ("// Exact shared optimized VC6 strcat implementation.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredCRTStrcat{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
