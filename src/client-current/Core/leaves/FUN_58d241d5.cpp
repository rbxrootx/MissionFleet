// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D241D5 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_58d241d5() {
    __asm {
        ; Exact mapped bytes 0F 87 A3 08 FF FF: ja 0x58d14a7e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE C9: movsx ecx, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc9
        ; Exact mapped bytes 66 81 FE 26 5C: cmp si, 0x5c26
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0x26
        __asm _emit 0x5c
        ; Exact mapped bytes 8D 14 92: lea edx, [edx + edx*4]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x92
        ; Exact mapped bytes E9 62 9E 20 00: jmp 0x58f2e04d
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x9e
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
