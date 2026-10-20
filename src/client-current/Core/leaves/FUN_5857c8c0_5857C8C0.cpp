// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857C8C0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5857c8c0_5857C8C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 130h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 134h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
