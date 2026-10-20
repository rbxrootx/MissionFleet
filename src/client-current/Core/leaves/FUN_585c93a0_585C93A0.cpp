// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C93A0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_585c93a0_585C93A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2c4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2c8h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
