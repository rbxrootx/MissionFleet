// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B65024 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58b65024() {
    __asm {
        ; Exact mapped bytes 0F 85 B2 44 FB FF: jne 0x58b194dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x44
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 03 61: cmp byte ptr [eax + ecx + 3], 0x61
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x61
        ; Exact mapped bytes E9 1D 12 19 00: jmp 0x58cf6251
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0x19
        __asm _emit 0x00
    }
}
