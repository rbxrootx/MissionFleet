// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D22135 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58d22135() {
    __asm {
        ; Exact mapped bytes 0F 85 A1 73 DF FF: jne 0x58b194dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x73
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 01 4D: cmp byte ptr [eax + ecx + 1], 0x4d
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x4d
        ; Exact mapped bytes 0F 85 96 73 DF FF: jne 0x58b194dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x73
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 02 77: cmp byte ptr [eax + ecx + 2], 0x77
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x77
        ; Exact mapped bytes E9 D4 2E E4 FF: jmp 0x58b65024
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x2e
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
