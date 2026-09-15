"""Stage the shared optimized VC6 strncpy implementation."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("login-server", "004266f0", 254),
    ("game-server", "004a9840", 254),
    ("save-server", "00465640", 254),
)

BODY = (
    "mov ecx, dword ptr [esp+0ch]", "push edi", "test ecx, ecx", "je empty",
    "push esi", "push ebx", "mov ebx, ecx", "mov esi, dword ptr [esp+14h]",
    "test esi, 3", "mov edi, dword ptr [esp+10h]", "jne prefix",
    "shr ecx, 2", "jne word_probe", "jmp tail", "prefix:",
    "mov al, byte ptr [esi]", "inc esi", "mov byte ptr [edi], al", "inc edi",
    "dec ecx", "je copied", "test al, al", "je pad_align", "test esi, 3", "jne prefix",
    "mov ebx, ecx", "shr ecx, 2", "jne word_probe", "finish_words:",
    "and ebx, 3", "je copied", "tail:",
    "mov al, byte ptr [esi]", "inc esi", "mov byte ptr [edi], al", "inc edi",
    "test al, al", "je tail_pad_dec", "dec ebx", "jne tail", "copied:",
    "mov eax, dword ptr [esp+10h]", "pop ebx", "pop esi", "pop edi", "ret",
    "pad_align:", "test edi, 3", "je pad_words", "pad_byte:",
    "mov byte ptr [edi], al", "inc edi", "dec ecx", "je padded",
    "test edi, 3", "jne pad_byte", "pad_words:", "mov ebx, ecx", "shr ecx, 2",
    "jne zero_words", "tail_pad:", "mov byte ptr [edi], al", "inc edi",
    "tail_pad_dec:", "dec ebx", "jne tail_pad", "pop ebx", "pop esi", "empty:",
    "mov eax, dword ptr [esp+8]", "pop edi", "ret", "store_word:",
    "mov dword ptr [edi], edx", "add edi, 4", "dec ecx", "je finish_words", "word_probe:",
    "mov edx, 07efefeffh", "mov eax, dword ptr [esi]", "add edx, eax",
    "xor eax, 0ffffffffh", "xor eax, edx", "mov edx, dword ptr [esi]", "add esi, 4",
    "test eax, 081010100h", "je store_word", "test dl, dl", "je zero_dword",
    "test dh, dh", "je keep_byte", "test edx, 00ff0000h", "je keep_word",
    "test edx, 0ff000000h", "jne store_word", "mov dword ptr [edi], edx", "jmp wrote_zero",
    "keep_word:", "and edx, 0ffffh", "mov dword ptr [edi], edx", "jmp wrote_zero",
    "keep_byte:", "and edx, 0ffh", "mov dword ptr [edi], edx", "jmp wrote_zero",
    "zero_dword:", "xor edx, edx", "mov dword ptr [edi], edx", "wrote_zero:",
    "add edi, 4", "xor eax, eax", "dec ecx", "je finish_tail", "zero_words:",
    "xor eax, eax", "zero_loop:", "mov dword ptr [edi], eax", "add edi, 4",
    "dec ecx", "jne zero_loop", "finish_tail:", "and ebx, 3", "jne tail_pad", "padded:",
    "mov eax, dword ptr [esp+10h]", "pop ebx", "pop esi", "pop edi", "ret",
)


def render(address):
    lines = "\n".join(f"    __asm {line}" for line in BODY)
    return ("// Exact shared optimized VC6 strncpy implementation.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredCRTStrncpy{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
