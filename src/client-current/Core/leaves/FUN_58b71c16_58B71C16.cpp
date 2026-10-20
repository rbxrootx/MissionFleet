// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B71C16 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58b71c16_58B71C16() {
    __asm {
        ; Exact mapped bytes 0F 84 14 00 00 00: je 0x58b71c30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc edx
        cmp edx, 164d3e49h
        cmc
        cmp edx, 104h
        ; Exact mapped bytes 0F 82 AD 0E F9 FF: jb 0x58b02add
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xad
        __asm _emit 0x0e
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [ebp - 104h]
        setle al
        ; Exact mapped bytes 66 0F 45 C5: cmovne ax, bp
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc5
        ; Exact mapped bytes 66 0F C8: bswap ax
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc8
        push ecx
        ; Exact mapped bytes 66 0F C8: bswap ax
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc8
        ; Exact mapped bytes 66 F7 D0: not ax
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xd0
        ; Exact mapped bytes A1 C0 35 D1 58: mov eax, dword ptr [0x58d135c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x35
        __asm _emit 0xd1
        __asm _emit 0x58
        ; Exact mapped bytes E9 35 19 16 00: jmp 0x58cd3586
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x19
        __asm _emit 0x16
        __asm _emit 0x00
    }
}
