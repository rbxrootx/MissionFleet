// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10105BD0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_10105bd0_10105BD0() {
    __asm {
        xor eax, eax
        mov dword ptr [ecx + 88h], eax
        mov dword ptr [ecx + 84h], eax
        mov dword ptr [ecx + 94h], eax
        mov dword ptr [ecx + 90h], eax
        mov ecx, dword ptr [ecx + 80h]
        mov byte ptr [ecx], al
        ret
    }
}
