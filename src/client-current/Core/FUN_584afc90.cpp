// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AFC90 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_584afc90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 30h]
        mov esp, ebp
        pop ebp
        ret
    }
}
