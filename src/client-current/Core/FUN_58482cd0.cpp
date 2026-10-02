// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58482CD0 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_58482cd0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 18h
        mov esp, ebp
        pop ebp
        ret
    }
}
