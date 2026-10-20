// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58DDFD93 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_58ddfd93() {
    __asm {
        ; Exact mapped bytes 0F 84 06 22 FF FF: je 0x58dd1f9f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, dl
        ; Exact mapped bytes 0F BF DF: movsx ebx, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xdf
        ; Exact mapped bytes 66 C1 DB C8: rcr bx, 0xc8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xdb
        __asm _emit 0xc8
        ror bl, 86h
        mov ebx, 120f7adch
        cmc
        clc
        rol ebx, cl
        shl cl, 26h
        cmc
        mov cl, byte ptr [ebp - 1]
        cmp edi, 4c566311h
        add bl, dl
        xor al, bl
        ; Exact mapped bytes E9 D9 21 FF FF: jmp 0x58dd1f9d
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
