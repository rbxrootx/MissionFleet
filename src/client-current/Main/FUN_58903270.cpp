// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903270 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_58903270() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 E8 FA FF FF: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F6 44 24 08 01: test byte ptr [esp + 8], 1
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        ; Exact mapped bytes 74 09: je 0x58903288
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 BD 99 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x07
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
