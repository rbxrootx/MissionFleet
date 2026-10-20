// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095AF0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_10095af0_10095AF0() {
    __asm {
        ; Exact mapped bytes 66 8B 44 24 04: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 89 87 B4 00 00 00: mov word ptr [edi + 0xb4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 78h]
        cmp esi, dword ptr [edi + 7ch]
        ; Exact mapped bytes 74 11: je 0x10095b19
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 F1 C6 FE FF: call 0x10082200
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [edi + 7ch]
        add esi, 4
        cmp esi, eax
        ; Exact mapped bytes 75 EF: jne 0x10095b08
        __asm _emit 0x75
        __asm _emit 0xef
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
