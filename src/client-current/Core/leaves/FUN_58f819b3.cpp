// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F819B3 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58f819b3() {
    __asm {
        ; Exact mapped bytes 0F 85 D8 A7 D9 FF: jne 0x58d1c191
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xa7
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 07 6C: cmp byte ptr [eax + ecx + 7], 0x6c
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x6c
        ; Exact mapped bytes 0F 85 CD A7 D9 FF: jne 0x58d1c191
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0xa7
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 08 73: cmp byte ptr [eax + ecx + 8], 0x73
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x73
        ; Exact mapped bytes E9 BD A7 D9 FF: jmp 0x58d1c18b
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0xa7
        __asm _emit 0xd9
        __asm _emit 0xff
    }
}
