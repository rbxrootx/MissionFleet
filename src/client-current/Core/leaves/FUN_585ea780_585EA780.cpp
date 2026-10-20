// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EA780 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_585ea780_585EA780() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax + 0c04h]
        xor eax, 55555555h
        mov esp, ebp
        pop ebp
        ret
    }
}
