// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EB550 .. +0x35E bytes.
extern "C" __declspec(naked) void FUN_100eb550_100EB550() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 5c70h]
        cmp eax, 50000h
        ; Exact mapped bytes 0F 85 9F 02 00 00: jne 0x100eb805
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 374h]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 0F 84 09 02 00 00: je 0x100eb780
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5c60h]
        test eax, eax
        ; Exact mapped bytes 0F 84 FB 01 00 00: je 0x100eb780
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5c5ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 ED 01 00 00: jne 0x100eb780
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D D4 92 1C 10: mov ebx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 8]
        mov edx, dword ptr [ecx + 104e0h]
        lea eax, [eax + eax*4]
        mov ecx, dword ptr [edx + 110h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ecx
        mov esi, eax
        mov eax, dword ptr [esp + 14h]
        add esi, eax
        mov eax, dword ptr [ebx + 4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ecx
        mov ecx, dword ptr [esp + 10h]
        add eax, ecx
        mov ecx, dword ptr [edi + 5cb8h]
        mov edx, dword ptr [ecx + 4]
        mov ebx, dword ptr [ecx + 14h]
        add ebx, edx
        cmp eax, ebx
        ; Exact mapped bytes 0F 8C 14 01 00 00: jl 0x100eb707
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ecx + 1ch]
        add ebx, edx
        cmp eax, ebx
        ; Exact mapped bytes 0F 8D 07 01 00 00: jge 0x100eb707
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ecx + 18h]
        add edx, eax
        cmp esi, edx
        ; Exact mapped bytes 0F 8C F7 00 00 00: jl 0x100eb707
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 20h]
        add ecx, eax
        cmp esi, ecx
        ; Exact mapped bytes 0F 8D EA 00 00 00: jge 0x100eb707
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5c84h]
        test eax, eax
        ; Exact mapped bytes 0F 85 77 02 00 00: jne 0x100eb8a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [edi + 5c84h], 40000000h
        test eax, eax
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x100eb6ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 5ce0h]
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, 0ddh
        mov ecx, dword ptr [edx + 54h]
        mov edx, dword ptr [eax + 160h]
        cmp edx, esi
        ; Exact mapped bytes 7E 11: jle 0x100eb66f
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100eb66f
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 3740h
        ; Exact mapped bytes EB 02: jmp 0x100eb671
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp ecx, eax
        ; Exact mapped bytes 74 7A: je 0x100eb6ef
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 12ch
        mov ebx, dword ptr [edx + 8]
        mov eax, dword ptr [edx + 4]
        sub ecx, ebx
        sub eax, 190h
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 F6 D2 F5 FF: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd2
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], esi
        ; Exact mapped bytes 7E 11: jle 0x100eb6b8
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100eb6b8
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 3740h
        ; Exact mapped bytes EB 02: jmp 0x100eb6ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 5ce0h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100eb6ef
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push 40000000h
        mov ecx, edi
        ; Exact mapped bytes E8 B5 24 00 00: call 0x100edbb0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5c84h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [edi + 5c84h], 40000000h
        ; Exact mapped bytes 0F 85 8B 01 00 00: jne 0x100eb8a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 5c84h], 0
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 7
        ; Exact mapped bytes 7E 11: jle 0x100eb740
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100eb740
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x100eb742
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 5ce0h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x100eb899
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x100eb899
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 5c84h], 40000000h
        ; Exact mapped bytes 75 13: jne 0x100eb79f
        __asm _emit 0x75
        __asm _emit 0x13
        push 0
        mov ecx, edi
        mov dword ptr [edi + 5c84h], 0
        ; Exact mapped bytes E8 11 24 00 00: call 0x100edbb0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 7
        ; Exact mapped bytes 7E 11: jle 0x100eb7be
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100eb7be
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x100eb7c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 5ce0h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x100eb8a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi + 5c84h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 40000h
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x100eb8a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [eax + 8]
        add edx, ecx
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 10h]
        add ecx, eax
        mov eax, dword ptr [edi + 5cb8h]
        mov esi, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        add ebx, esi
        cmp ecx, ebx
        ; Exact mapped bytes 7C 4A: jl 0x100eb883
        __asm _emit 0x7c
        __asm _emit 0x4a
        mov ebx, dword ptr [eax + 1ch]
        add ebx, esi
        cmp ecx, ebx
        ; Exact mapped bytes 7D 41: jge 0x100eb883
        __asm _emit 0x7d
        __asm _emit 0x41
        mov ecx, dword ptr [eax + 8]
        mov esi, dword ptr [eax + 18h]
        add esi, ecx
        cmp edx, esi
        ; Exact mapped bytes 7C 35: jl 0x100eb883
        __asm _emit 0x7c
        __asm _emit 0x35
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7D 2C: jge 0x100eb883
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov eax, dword ptr [edi + 5c84h]
        test eax, eax
        ; Exact mapped bytes 75 41: jne 0x100eb8a2
        __asm _emit 0x75
        __asm _emit 0x41
        push 40000000h
        mov ecx, edi
        mov dword ptr [edi + 5c84h], 40000000h
        ; Exact mapped bytes E8 39 23 00 00: call 0x100edbb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5c84h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [edi + 5c84h], 40000000h
        ; Exact mapped bytes 75 13: jne 0x100eb8a2
        __asm _emit 0x75
        __asm _emit 0x13
        mov dword ptr [edi + 5c84h], 0
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 0E 23 00 00: call 0x100edbb0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5c84h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
