// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DFD0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887dfd0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 E8 BB C2 FF: jmp 0x584a9bc0
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
