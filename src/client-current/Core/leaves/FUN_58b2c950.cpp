// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B2C950 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58b2c950() {
    __asm {
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes 80 FB 09: cmp bl, 9
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x09
        ; Exact mapped bytes E9 7B 78 1F 00: jmp 0x58d241d5
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x78
        __asm _emit 0x1f
        __asm _emit 0x00
    }
}
