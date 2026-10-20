// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A0430 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_100a0430_100A0430() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        xor ecx, ecx
        mov eax, dword ptr [esi + edi*4 + 868h]
        dec eax
        mov dword ptr [esi + edi*4 + 868h], eax
        lea eax, [edi + edi*2]
        lea eax, [eax + eax*8]
        shl eax, 1
        sub eax, edi
        ; Exact mapped bytes 66 8B 8C 86 10 02 00 00: mov cx, word ptr [esi + eax*4 + 0x210]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + ecx*4 + 834h]
        dec ecx
        xor eax, 0aah
        inc eax
        xor eax, 0aah
        mov dword ptr [esi + ecx*4 + 838h], eax
        mov ecx, dword ptr [esi + ecx*4 + 9d4h]
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 99 F2 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*4 + 868h]
        test eax, eax
        ; Exact mapped bytes 75 75: jne 0x100a0507
        __asm _emit 0x75
        __asm _emit 0x75
        mov dword ptr [esi + edi*4 + 118h], 1
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes E8 87 E8 FC FF: call 0x1006ed30
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp edi, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 75 56: jne 0x100a0507
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 17h
        ; Exact mapped bytes 7E 11: jle 0x100a04d0
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100a04d0
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x100a04d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esi, dword ptr [esi + 9f8h]
        test eax, eax
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100a0507
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        add esi, 14h
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 4], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 8], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 0ch], edx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
