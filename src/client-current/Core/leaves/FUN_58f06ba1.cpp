// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F06BA1 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_58f06ba1() {
    __asm {
        ; Exact mapped bytes 0F 84 E8 3F 00 00: je 0x58f0ab8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 66 0F A3 C6: bt si, ax
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xa3
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes E9 0A 85 C4 FF: jmp 0x58b4f0bd
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xff
    }
}
