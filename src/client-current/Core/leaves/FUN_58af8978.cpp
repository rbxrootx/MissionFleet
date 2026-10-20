// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58AF8978 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58af8978() {
    __asm {
        ; Exact mapped bytes 0F 85 08 FA 3C 00: jne 0x58ec8386
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0xfa
        __asm _emit 0x3c
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 08 02 72: cmp byte ptr [eax + ecx + 2], 0x72
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x72
        ; Exact mapped bytes E9 D1 36 04 00: jmp 0x58b3c059
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
