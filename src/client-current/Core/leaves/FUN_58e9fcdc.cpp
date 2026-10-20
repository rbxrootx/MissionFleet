// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58E9FCDC .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58e9fcdc() {
    __asm {
        ; Exact mapped bytes 0F 85 A4 86 02 00: jne 0x58ec8386
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 08 01 69: cmp byte ptr [eax + ecx + 1], 0x69
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x69
        ; Exact mapped bytes E9 8C 8C C5 FF: jmp 0x58af8978
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x8c
        __asm _emit 0xc5
        __asm _emit 0xff
    }
}
