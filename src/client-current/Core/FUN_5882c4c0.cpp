// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882C4C0 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_5882c4c0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 218h]
        mov esp, ebp
        pop ebp
        ret
    }
}
