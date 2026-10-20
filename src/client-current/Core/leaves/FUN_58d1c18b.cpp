// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D1C18B .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58d1c18b() {
    __asm {
        ; Exact mapped bytes 0F 84 A0 87 1A 00: je 0x58ec4931
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 85 D7: test edi, edx
        __asm _emit 0x85
        __asm _emit 0xd7
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes E9 23 4C 1B 00: jmp 0x58ed0dbe
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x4c
        __asm _emit 0x1b
        __asm _emit 0x00
    }
}
