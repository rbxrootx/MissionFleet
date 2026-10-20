// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D1C9A4 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58d1c9a4() {
    __asm {
        ; Exact mapped bytes 0F 84 2E EA DE FF: je 0x58b0b3d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0xea
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 8A CA: mov cl, dl
        __asm _emit 0x8a
        __asm _emit 0xca
        ; Exact mapped bytes BB 03 75 2C 71: mov ebx, 0x712c7503
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0x2c
        __asm _emit 0x71
        ; Exact mapped bytes D3 C3: rol ebx, cl
        __asm _emit 0xd3
        __asm _emit 0xc3
        ; Exact mapped bytes 8A 4D FF: mov cl, byte ptr [ebp - 1]
        __asm _emit 0x8a
        __asm _emit 0x4d
        __asm _emit 0xff
        ; Exact mapped bytes 02 DA: add bl, dl
        __asm _emit 0x02
        __asm _emit 0xda
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes E9 B6 2F 00 00: jmp 0x58d1f974
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
