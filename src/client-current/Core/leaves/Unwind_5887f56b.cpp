// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F56B .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887f56b() {
    __asm {
        ; Exact mapped bytes 8D 8D 54 DB FF FF: lea ecx, [ebp - 0x24ac]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FA 77 F1 FF: jmp 0x58796d70
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x77
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
