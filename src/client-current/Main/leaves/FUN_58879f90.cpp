// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879F90 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58879f90() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 68 FC FF FF: call 0x58879c00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F6 44 24 08 01: test byte ptr [esp + 8], 1
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        ; Exact mapped bytes 74 09: je 0x58879fa8
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 9D 2C 10 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
    }
}
