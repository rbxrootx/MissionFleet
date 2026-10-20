// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D1230F .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58d1230f() {
    __asm {
        ; Exact mapped bytes 0F 84 5C 1D 00 00: je 0x58d14071
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 80 F9 2E: cmp cl, 0x2e
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x2e
        ; Exact mapped bytes E9 2E EF 25 00: jmp 0x58f7124d
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0xef
        __asm _emit 0x25
        __asm _emit 0x00
    }
}
