// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C9DC0 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_584c9dc0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
