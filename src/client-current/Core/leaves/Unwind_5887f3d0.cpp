// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F3D0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887f3d0() {
    __asm {
        ; Exact mapped bytes 8D 4D 08: lea ecx, [ebp + 8]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E9 58 A9 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xa9
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
