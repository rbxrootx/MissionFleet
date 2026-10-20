// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58EFEC84 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58efec84() {
    __asm {
        ; Exact mapped bytes 0F 85 FC 96 FC FF: jne 0x58ec8386
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 04 75: cmp byte ptr [eax + ecx + 4], 0x75
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x75
        ; Exact mapped bytes 0F 85 F1 96 FC FF: jne 0x58ec8386
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 05 61: cmp byte ptr [eax + ecx + 5], 0x61
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x61
        ; Exact mapped bytes E9 EA 2A 07 00: jmp 0x58f71789
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
