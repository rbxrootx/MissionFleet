// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891490 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891490() {
    __asm {
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 88 67 F0 FF: jmp 0x58797c20
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
