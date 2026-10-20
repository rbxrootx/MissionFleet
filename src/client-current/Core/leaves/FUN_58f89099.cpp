// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F89099 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_58f89099() {
    __asm {
        ; Exact mapped bytes 0F 85 44 A5 F2 FF: jne 0x58eb35e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xa5
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 80 7D 10 00: cmp byte ptr [ebp + 0x10], 0
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes E9 4A 3C D6 FF: jmp 0x58ceccf2
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x3c
        __asm _emit 0xd6
        __asm _emit 0xff
    }
}
