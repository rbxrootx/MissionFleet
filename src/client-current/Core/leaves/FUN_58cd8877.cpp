// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58CD8877 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58cd8877() {
    __asm {
        ; Exact mapped bytes 0F 84 BE BA E5 FF: je 0x58b3433b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0xba
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes E9 F4 6A 01 00: jmp 0x58cef379
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
