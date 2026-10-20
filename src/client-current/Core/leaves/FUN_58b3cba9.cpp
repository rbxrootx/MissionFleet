// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B3CBA9 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58b3cba9() {
    __asm {
        ; Exact mapped bytes 0F 84 CF 7E 1D 00: je 0x58d14a7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x7e
        __asm _emit 0x1d
        __asm _emit 0x00
        ; Exact mapped bytes 8A D9: mov bl, cl
        __asm _emit 0x8a
        __asm _emit 0xd9
        ; Exact mapped bytes 81 FB 15 6D D4 46: cmp ebx, 0x46d46d15
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x15
        __asm _emit 0x6d
        __asm _emit 0xd4
        __asm _emit 0x46
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes 80 EB 30: sub bl, 0x30
        __asm _emit 0x80
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes E9 90 FD FE FF: jmp 0x58b2c950
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
