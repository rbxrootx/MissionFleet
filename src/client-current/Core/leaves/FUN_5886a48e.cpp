// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A48E .. +0xD bytes.
extern "C" __declspec(naked) void FUN_5886a48e() {
    __asm {
        ; Exact mapped bytes 66 81 3C 24 7F 02: cmp word ptr [esp], 0x27f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 74 03: je 0x5886a499
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes D9 2C 24: fldcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x2c
        __asm _emit 0x24
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
