// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F7D975 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58f7d975() {
    __asm {
        ; Exact mapped bytes 0F 84 F6 66 D9 FF: je 0x58d14071
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x66
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes E9 17 B7 00 00: jmp 0x58f89099
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
