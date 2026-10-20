// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A2920 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_587a2920_587A2920() {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov eax, edx
        mov ecx, dword ptr [esp + 4]
        shr eax, 18h
        mov byte ptr [ecx], al
        mov eax, edx
        shr eax, 10h
        mov byte ptr [ecx + 1], al
        mov eax, edx
        shr eax, 8
        mov byte ptr [ecx + 2], al
        mov byte ptr [ecx + 3], dl
        ret
    }
}
