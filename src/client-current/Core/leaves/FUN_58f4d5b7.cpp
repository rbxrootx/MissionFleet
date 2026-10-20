// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F4D5B7 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58f4d5b7() {
    __asm {
        ; Exact mapped bytes 0F 85 D4 EB DC FF: jne 0x58d1c191
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xeb
        __asm _emit 0xdc
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 06 65: cmp byte ptr [eax + ecx + 6], 0x65
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x65
        ; Exact mapped bytes E9 EC 43 03 00: jmp 0x58f819b3
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
    }
}
