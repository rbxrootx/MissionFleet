// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58843200 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_58843200() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 130h]
        test esi, esi
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x588432d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        mov eax, dword ptr [eax + 6ch]
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push ebp
        ; Exact mapped bytes 8B 2D A4 C1 98 58: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push ebx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x58843249
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x588432ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        mov eax, dword ptr [ecx + 6ch]
        push ebx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 75 E7: jne 0x58843230
        __asm _emit 0x75
        __asm _emit 0xe7
        cmp esi, dword ptr [edi + 130h]
        ; Exact mapped bytes 75 09: jne 0x5884325a
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edi + 130h], edx
        cmp esi, dword ptr [edi + 134h]
        ; Exact mapped bytes 75 09: jne 0x5884326b
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [esi + 50h]
        mov dword ptr [edi + 134h], eax
        mov eax, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x58843278
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [eax + 54h], ecx
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x58843285
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [esi + 50h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [edi + 144h]
        cmp esi, eax
        ; Exact mapped bytes 75 09: jne 0x58843298
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [eax + 54h]
        mov dword ptr [edi + 144h], eax
        cmp dword ptr [edi + 144h], 0
        ; Exact mapped bytes 75 0C: jne 0x588432ad
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [edi + 130h]
        mov dword ptr [edi + 144h], ecx
        cmp dword ptr [esi + 0a4h], 0
        ; Exact mapped bytes 74 07: je 0x588432bd
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 43 6E F1 FF: call 0x5875a100
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x6e
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 66 FF 8F FA 00 00 00: dec word ptr [edi + 0xfa]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x8f
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
