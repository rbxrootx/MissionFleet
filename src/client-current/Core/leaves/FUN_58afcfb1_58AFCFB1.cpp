// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58AFCFB1 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58afcfb1_58AFCFB1() {
    __asm {
        ; Exact mapped bytes 8D 4C 24 60: lea ecx, [esp + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 3B E9: cmp ebp, ecx
        __asm _emit 0x3b
        __asm _emit 0xe9
        ; Exact mapped bytes 0F 87 B4 06 44 00: ja 0x58f3d671
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8B C4: mov eax, esp
        __asm _emit 0x8b
        __asm _emit 0xc4
        ; Exact mapped bytes 0F BA E1 F3: bt ecx, 0xf3
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0xe1
        __asm _emit 0xf3
        ; Exact mapped bytes B9 40 00 00 00: mov ecx, 0x40
        __asm _emit 0xb9
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F BA FA 56: btc dx, 0x56
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0xfa
        __asm _emit 0x56
        ; Exact mapped bytes 81 CA C9 56 66 5B: or edx, 0x5b6656c9
        __asm _emit 0x81
        __asm _emit 0xca
        __asm _emit 0xc9
        __asm _emit 0x56
        __asm _emit 0x66
        __asm _emit 0x5b
        ; Exact mapped bytes 8D 54 25 80: lea edx, [ebp - 0x80]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x25
        __asm _emit 0x80
        ; Exact mapped bytes 81 E2 FC FF FF FF: and edx, 0xfffffffc
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes E9 88 75 06 00: jmp 0x58b6456c
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
    }
}
