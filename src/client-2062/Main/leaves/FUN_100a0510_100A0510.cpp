// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A0510 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_100a0510_100A0510() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        lea eax, [esi + esi*2]
        xor ecx, ecx
        lea eax, [eax + eax*8]
        shl eax, 1
        sub eax, esi
        ; Exact mapped bytes 66 8B 8C 87 10 02 00 00: mov cx, word ptr [edi + eax*4 + 0x210]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + ecx*4 + 844h]
        xor eax, 0aah
        lea ecx, [edi + ecx*4 + 844h]
        ; Exact mapped bytes 7E 08: jle 0x100a0549
        __asm _emit 0x7e
        __asm _emit 0x08
        dec eax
        xor eax, 0aah
        mov dword ptr [ecx], eax
        mov eax, dword ptr [edi + esi*4 + 868h]
        dec eax
        mov dword ptr [edi + esi*4 + 868h], eax
        ; Exact mapped bytes 75 75: jne 0x100a05cf
        __asm _emit 0x75
        __asm _emit 0x75
        mov dword ptr [edi + esi*4 + 118h], 1
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 BF E7 FC FF: call 0x1006ed30
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, dword ptr [edi + 0d4h]
        ; Exact mapped bytes 75 56: jne 0x100a05cf
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 17h
        ; Exact mapped bytes 7E 11: jle 0x100a0598
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100a0598
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x100a059a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [edi + 9f8h]
        test eax, eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100a05cf
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        add edi, 14h
        mov dword ptr [edi], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 4], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 0ch], eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
