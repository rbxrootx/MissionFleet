// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848C0B0 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_5848c0b0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
