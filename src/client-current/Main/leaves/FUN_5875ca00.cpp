// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875CA00 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_5875ca00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 78 F8 FF FF: call 0x5875c280
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F6 44 24 08 01: test byte ptr [esp + 8], 1
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        ; Exact mapped bytes 74 09: je 0x5875ca18
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 2D 02 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x22
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
