// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B46B01 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58b46b01() {
    __asm {
        ; Exact mapped bytes 0F 85 8A 56 1D 00: jne 0x58d1c191
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x56
        __asm _emit 0x1d
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 08 02 72: cmp byte ptr [eax + ecx + 2], 0x72
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x72
        ; Exact mapped bytes E9 13 48 3E 00: jmp 0x58f2b324
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x48
        __asm _emit 0x3e
        __asm _emit 0x00
    }
}
