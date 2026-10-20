// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B3C059 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58b3c059() {
    __asm {
        ; Exact mapped bytes 0F 85 27 C3 38 00: jne 0x58ec8386
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0xc3
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 08 03 74: cmp byte ptr [eax + ecx + 3], 0x74
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x74
        ; Exact mapped bytes E9 1B 2C 3C 00: jmp 0x58efec84
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x2c
        __asm _emit 0x3c
        __asm _emit 0x00
    }
}
