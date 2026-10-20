// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DF760 .. +0x14FE bytes.
extern "C" __declspec(naked) void FUN_100df760_100DF760() {
    __asm {
        push -1
        push 10173a22h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 24h]
        push ebx
        mov ebx, dword ptr [esp + 24h]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 38h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push ebx
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 0B F2 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], edi
        xor ebp, ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebp
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esp + 1ch], ebp
        cmp eax, ebp
        mov dword ptr [esi], 101764fch
        ; Exact mapped bytes 75 30: jne 0x100df803
        __asm _emit 0x75
        __asm _emit 0x30
        push 198h
        ; Exact mapped bytes E8 C3 CF 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 0F: je 0x100df7fc
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebp
        push 101ac2f8h
        mov ecx, eax
        ; Exact mapped bytes E8 C6 02 02 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100df7fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 1ch], 0
        push 198h
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 90 CF 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 0F: je 0x100df82f
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebp
        push 101aab8ch
        mov ecx, eax
        ; Exact mapped bytes E8 93 02 02 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100df831
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 60 CF 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 6D: je 0x100df8bf
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 4bh
        ; Exact mapped bytes 7E 12: jle 0x100df870
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100df870
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 12ch]
        ; Exact mapped bytes EB 02: jmp 0x100df872
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2A F1 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100df8c1
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100df8c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 D0 CE 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 6D: je 0x100df94f
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 4ch
        ; Exact mapped bytes 7E 12: jle 0x100df900
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100df900
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 130h]
        ; Exact mapped bytes EB 02: jmp 0x100df902
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 9A F0 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100df951
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100df951
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 40 CE 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 6D: je 0x100df9df
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 4dh
        ; Exact mapped bytes 7E 12: jle 0x100df990
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100df990
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 134h]
        ; Exact mapped bytes EB 02: jmp 0x100df992
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0A F0 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100df9e1
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100df9e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes E8 B0 CD 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 6D: je 0x100dfa6f
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 4eh
        ; Exact mapped bytes 7E 12: jle 0x100dfa20
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dfa20
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 138h]
        ; Exact mapped bytes EB 02: jmp 0x100dfa22
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7A EF 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dfa71
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100dfa71
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 20 CD 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 6D: je 0x100dfaff
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 61h
        ; Exact mapped bytes 7E 12: jle 0x100dfab0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dfab0
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 184h]
        ; Exact mapped bytes EB 02: jmp 0x100dfab2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EA EE 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dfb01
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100dfb01
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 90 CC 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 6D: je 0x100dfb8f
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 60h
        ; Exact mapped bytes 7E 12: jle 0x100dfb40
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dfb40
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 180h]
        ; Exact mapped bytes EB 02: jmp 0x100dfb42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5A EE 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dfb91
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100dfb91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 68h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E8 BA F5 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 0fffffeffh
        ; Exact mapped bytes E8 AD F5 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 101h
        ; Exact mapped bytes E8 A0 F5 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 0fffffeffh
        ; Exact mapped bytes E8 93 F5 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 101h
        ; Exact mapped bytes E8 86 F5 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        mov ecx, 0fffeh
        push 54h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 AC CB 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 6D: je 0x100dfc73
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 65h
        ; Exact mapped bytes 7E 12: jle 0x100dfc24
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dfc24
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 194h]
        ; Exact mapped bytes EB 02: jmp 0x100dfc26
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 76 ED 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dfc75
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100dfc75
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], edi
        ; Exact mapped bytes E8 19 CB 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 73: je 0x100dfd0c
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 64h
        ; Exact mapped bytes 7E 12: jle 0x100dfcb7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dfcb7
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 190h]
        ; Exact mapped bytes EB 02: jmp 0x100dfcb9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esi + 80h]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 DD EC 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dfd0e
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100dfd0e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], edi
        ; Exact mapped bytes E8 80 CA 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 6D: je 0x100dfd9f
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 67h
        ; Exact mapped bytes 7E 12: jle 0x100dfd50
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dfd50
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 19ch]
        ; Exact mapped bytes EB 02: jmp 0x100dfd52
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4A EC 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dfda1
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100dfda1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], edi
        ; Exact mapped bytes E8 ED C9 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc9
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 73: je 0x100dfe38
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 66h
        ; Exact mapped bytes 7E 12: jle 0x100dfde3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dfde3
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 198h]
        ; Exact mapped bytes EB 02: jmp 0x100dfde5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esi + 88h]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 B1 EB 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dfe3a
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100dfe3a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], edi
        ; Exact mapped bytes E8 54 C9 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc9
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 6D: je 0x100dfecb
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 63h
        ; Exact mapped bytes 7E 12: jle 0x100dfe7c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dfe7c
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 18ch]
        ; Exact mapped bytes EB 02: jmp 0x100dfe7e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1E EB 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dfecd
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100dfecd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90h], edi
        ; Exact mapped bytes E8 C1 C8 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 73: je 0x100dff64
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 62h
        ; Exact mapped bytes 7E 12: jle 0x100dff0f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dff0f
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 188h]
        ; Exact mapped bytes EB 02: jmp 0x100dff11
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 85 EA 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dff66
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100dff66
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 80h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 94h], edi
        ; Exact mapped bytes E8 DF F1 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 101h
        ; Exact mapped bytes E8 CF F1 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 0fffffeffh
        ; Exact mapped bytes E8 BF F1 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        ; Exact mapped bytes E8 AF F1 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 0fffffeffh
        ; Exact mapped bytes E8 9F F1 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 101h
        ; Exact mapped bytes E8 8F F1 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        mov ecx, 0fffeh
        push 54h
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 A5 C7 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc7
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 6D: je 0x100e007a
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 68h
        ; Exact mapped bytes 7E 12: jle 0x100e002b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100e002b
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1a0h]
        ; Exact mapped bytes EB 02: jmp 0x100e002d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6F E9 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100e007c
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100e007c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 98h], edi
        ; Exact mapped bytes E8 CD F0 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 FA C6 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 2A: je 0x100e00e2
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ebp, dword ptr [esp + 2ch]
        push 40h
        push 0
        lea ecx, [ebx + 50h]
        push 0
        lea edx, [ebp + 2dh]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DE E8 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 06: jmp 0x100e00e8
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 2ch]
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 9ch], edi
        mov dword ptr [esi + 0a0h], 0
        ; Exact mapped bytes E8 9C C6 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 4E: je 0x100e0164
        __asm _emit 0x74
        __asm _emit 0x4e
        push 3c3c3ch
        push 0
        lea eax, [ebx + 1fh]
        push 0c8c8c8h
        lea ecx, [ebp + 0fah]
        push eax
        lea edx, [ebx + 13h]
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebp + 3bh]
        push edx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3C 5A F3 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x5a
        __asm _emit 0xf3
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 12h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 47 C6 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e0166
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a4h], edi
        ; Exact mapped bytes E8 28 C6 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 74 4E: je 0x100e01d8
        __asm _emit 0x74
        __asm _emit 0x4e
        push 3c3c3ch
        push 0
        lea edx, [ebx + 31h]
        push 0c8c8c8h
        lea eax, [ebp + 0fah]
        push edx
        ; Exact mapped bytes 8B 15 98 56 1C 10: mov edx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 25h]
        push eax
        add ebp, 3bh
        push ecx
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C8 59 F3 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x59
        __asm _emit 0xf3
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 14h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 D3 C5 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e01da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esi + 0a8h], edi
        mov byte ptr [esp + 1ch], 0
        lea ebp, [esi + 0ach]
        lea edi, [eax + 0c8h]
        mov dword ptr [esp + 3ch], 2
        push 0fch
        ; Exact mapped bytes E8 99 C5 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 38: je 0x100e024f
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100e0238
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e0238
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b80h]
        ; Exact mapped bytes EB 02: jmp 0x100e023a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 86h]
        push ecx
        push edi
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 43 F0 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e0251
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        mov eax, dword ptr [esp + 3ch]
        add ebp, 4
        add edi, 2dh
        dec eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 75 93: jne 0x100e01fd
        __asm _emit 0x75
        __asm _emit 0x93
        mov edx, dword ptr [esp + 2ch]
        lea ebp, [esi + 0b4h]
        mov dword ptr [esp + 3ch], 2
        lea edi, [edx + 0c8h]
        push 0fch
        ; Exact mapped bytes E8 14 C5 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 38: je 0x100e02d4
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100e02bd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e02bd
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b80h]
        ; Exact mapped bytes EB 02: jmp 0x100e02bf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 92h]
        push ecx
        push edi
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BE EF 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e02d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        mov eax, dword ptr [esp + 3ch]
        add ebp, 4
        add edi, 2dh
        dec eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 75 93: jne 0x100e0282
        __asm _emit 0x75
        __asm _emit 0x93
        push 70h
        ; Exact mapped bytes E8 AA C4 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 74 57: je 0x100e035f
        __asm _emit 0x74
        __asm _emit 0x57
        mov ebp, dword ptr [esp + 2ch]
        push 3c3c3ch
        push 0
        lea edx, [ebx + 0d1h]
        push 0c8c8c8h
        lea eax, [ebp + 0c3h]
        push edx
        lea ecx, [ebx + 0c5h]
        push eax
        ; Exact mapped bytes A1 98 56 1C 10: mov eax, dword ptr [0x101c5698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 1fh]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 41 58 F3 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0xf3
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 18h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 4C C4 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 06: jmp 0x100e0365
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 2ch]
        xor edi, edi
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0bch], edi
        ; Exact mapped bytes E8 26 C4 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 3E: je 0x100e03c8
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100e03ab
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e03ab
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x100e03ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0c2h]
        push edx
        lea edx, [ebp + 0efh]
        push edx
        push 7
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CA EE 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e03ca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 C1 C3 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1ah
        ; Exact mapped bytes 74 3E: je 0x100e042d
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100e0410
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e0410
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x100e0412
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0cdh]
        push edx
        lea edx, [ebp + 0efh]
        push edx
        push 7
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 65 EE 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e042f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 5F C3 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc3
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 74 78: je 0x100e04cb
        __asm _emit 0x74
        __asm _emit 0x78
        lea eax, [ebx + 101h]
        push 40h
        push eax
        mov eax, dword ptr [esp + 34h]
        ; Exact mapped bytes 8B 2D 98 56 1C 10: mov ebp, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 0f5h]
        lea ecx, [eax + 0c3h]
        add eax, 1fh
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 30 E5 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 60h], 0c8c8c8h
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], 3c3c3ch
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 1ch
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 E4 C2 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 30h]
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e04cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c8h], edi
        ; Exact mapped bytes E8 BE C2 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1dh
        ; Exact mapped bytes 74 3E: je 0x100e0530
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100e0513
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e0513
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x100e0515
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0f5h]
        push edx
        lea edx, [ebp + 0efh]
        push edx
        push 7
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 62 ED 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e0532
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 59 C2 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1eh
        ; Exact mapped bytes 74 3E: je 0x100e0595
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100e0578
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e0578
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x100e057a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 102h]
        add ebp, 0efh
        push edx
        push ebp
        push 7
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FD EC 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e0597
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d0h], eax
        lea eax, [esi + 0d4h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esp + 3ch], eax
        lea ebp, [ebx + 127h]
        mov dword ptr [esp + 38h], 4
        push 70h
        ; Exact mapped bytes E8 DF C1 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc1
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1fh
        ; Exact mapped bytes 74 6F: je 0x100e0642
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [esp + 2ch]
        ; Exact mapped bytes 8B 1D 98 56 1C 10: mov ebx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 0ch]
        push 40h
        lea edx, [eax + 0c3h]
        push ecx
        push edx
        add eax, 4ah
        push ebp
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B9 E3 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 60h], 0c8c8c8h
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], 3c3c3ch
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 20h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 6D C1 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc1
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 34h]
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e0644
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        add ebp, 0dh
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esp + 38h]
        dec eax
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 85 52 FF FF FF: jne 0x100e05ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edi, [ebx + 128h]
        lea ebp, [esi + 0e4h]
        mov ebx, 2
        push 0fch
        ; Exact mapped bytes E8 1D C1 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 21h
        ; Exact mapped bytes 74 3C: je 0x100e06cf
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100e06b4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e06b4
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b80h]
        ; Exact mapped bytes EB 02: jmp 0x100e06b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        push edi
        add ecx, 0bbh
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C3 EB 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e06d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 0dh
        dec ebx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 75 97: jne 0x100e0679
        __asm _emit 0x75
        __asm _emit 0x97
        mov edx, dword ptr [esp + 30h]
        lea ebx, [esi + 0ech]
        mov dword ptr [esp + 3ch], 2
        lea ebp, [edx + 128h]
        push 0fch
        ; Exact mapped bytes E8 9C C0 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 22h
        ; Exact mapped bytes 74 3C: je 0x100e0750
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100e0735
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e0735
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [ecx + 0b80h]
        ; Exact mapped bytes EB 02: jmp 0x100e0737
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 2ch]
        push ebp
        lea edx, [ecx + 0c8h]
        mov ecx, eax
        push edx
        push 1
        push edi
        push esi
        ; Exact mapped bytes E8 42 EB 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e0752
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx], eax
        mov eax, dword ptr [esp + 3ch]
        add ebx, 4
        add ebp, 0dh
        dec eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 75 90: jne 0x100e06fa
        __asm _emit 0x75
        __asm _emit 0x90
        mov edx, dword ptr [esp + 30h]
        lea ebp, [esi + 0f4h]
        mov ebx, 2
        lea edi, [edx + 142h]
        push 0fch
        ; Exact mapped bytes E8 17 C0 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 23h
        ; Exact mapped bytes 74 3C: je 0x100e07d5
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100e07ba
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e07ba
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b80h]
        ; Exact mapped bytes EB 02: jmp 0x100e07bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        push edi
        add ecx, 0bch
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BD EA 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e07d7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 0dh
        dec ebx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 75 97: jne 0x100e077f
        __asm _emit 0x75
        __asm _emit 0x97
        mov edx, dword ptr [esp + 30h]
        lea ebp, [esi + 0fch]
        mov ebx, 4
        lea edi, [edx + 128h]
        push 0fch
        ; Exact mapped bytes E8 99 BF 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xbf
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 24h
        ; Exact mapped bytes 74 3C: je 0x100e0853
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100e0838
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e0838
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b80h]
        ; Exact mapped bytes EB 02: jmp 0x100e083a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        push edi
        add ecx, 0ceh
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3F EA 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e0855
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 0dh
        dec ebx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 75 97: jne 0x100e07fd
        __asm _emit 0x75
        __asm _emit 0x97
        mov edx, dword ptr [esp + 30h]
        lea ebp, [esi + 10ch]
        mov ebx, 4
        lea edi, [edx + 128h]
        push 0fch
        ; Exact mapped bytes E8 1B BF 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xbf
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 25h
        ; Exact mapped bytes 74 3C: je 0x100e08d1
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100e08b6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e08b6
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b80h]
        ; Exact mapped bytes EB 02: jmp 0x100e08b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        push edi
        add ecx, 107h
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C1 E9 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e08d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 0dh
        dec ebx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 75 97: jne 0x100e087b
        __asm _emit 0x75
        __asm _emit 0x97
        push 0a0h
        ; Exact mapped bytes E8 B2 BE 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xbe
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 26h
        ; Exact mapped bytes 74 51: je 0x100e094f
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [esi + 60h]
        cmp dword ptr [edx + 160h], 0fh
        ; Exact mapped bytes 7E 12: jle 0x100e091c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x100e091c
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x100e091e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        push 40h
        lea ecx, [edi + 160h]
        push ecx
        lea ecx, [ebx + 0d4h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 73 69 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x69
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x100e0959
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [esp + 2ch]
        mov edi, dword ptr [esp + 30h]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 11ch], eax
        ; Exact mapped bytes E8 32 BE 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xbe
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 27h
        ; Exact mapped bytes 74 49: je 0x100e09c7
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 10h
        ; Exact mapped bytes 7E 12: jle 0x100e099c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e099c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 400h
        ; Exact mapped bytes EB 02: jmp 0x100e099e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 160h]
        push 40h
        push edx
        lea edx, [ebx + 0efh]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 FB 68 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x68
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e09c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 120h], eax
        ; Exact mapped bytes E8 C2 BD 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbd
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 28h
        ; Exact mapped bytes 74 49: je 0x100e0a37
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 11h
        ; Exact mapped bytes 7E 12: jle 0x100e0a0c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e0a0c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 440h
        ; Exact mapped bytes EB 02: jmp 0x100e0a0e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add edi, 160h
        push 40h
        add ebx, 10ah
        push edi
        push ebx
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 8B 68 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e0a39
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 124h], eax
        mov eax, dword ptr [esi + 11ch]
        mov ecx, 1
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax + 50h], 5
        mov eax, dword ptr [esi + 120h]
        mov dword ptr [esp + 38h], 4
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [esi + 124h]
        mov dword ptr [eax + 50h], ecx
        mov ecx, dword ptr [esp + 30h]
        lea eax, [esi + 128h]
        lea ebx, [ecx + 192h]
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 34h], ebx
        push 58h
        ; Exact mapped bytes E8 11 BD 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xbd
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 29h
        ; Exact mapped bytes 74 77: je 0x100e0b18
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 12h
        ; Exact mapped bytes 7E 12: jle 0x100e0abf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100e0abf
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 480h]
        ; Exact mapped bytes EB 02: jmp 0x100e0ac1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        add edx, 28h
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D8 DE 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100e0b1a
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100e0b1a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        add ebx, 0eh
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esp + 38h]
        dec eax
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 85 44 FF FF FF: jne 0x100e0a88
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 52 BC 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2ah
        ; Exact mapped bytes 74 36: je 0x100e0b94
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 2ch]
        push 0
        push 0
        add edx, 1cch
        push 9696h
        push edx
        mov edx, dword ptr [esp + 44h]
        lea ecx, [edi + 48h]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [edi + 3bh]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EE 2F 02 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100e0b9a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        lea ebx, [esi + 138h]
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebx], eax
        ; Exact mapped bytes E8 EF BB 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2bh
        ; Exact mapped bytes 74 35: je 0x100e0bf6
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esp + 30h]
        push 0
        push 0
        add ecx, 1cch
        push 969696h
        push ecx
        mov ecx, dword ptr [esp + 44h]
        lea edx, [edi + 11eh]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add edi, 49h
        push ecx
        push edi
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8C 2F 02 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e0bf8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 13ch], eax
        mov eax, ebx
        mov ecx, 2
        mov edi, 0fh
        mov edx, 1
        mov ebp, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [ebp + 5ch], edi
        mov ebp, dword ptr [eax - 4]
        mov dword ptr [ebp + 74h], edx
        ; Exact mapped bytes 75 EF: jne 0x100e0c0f
        __asm _emit 0x75
        __asm _emit 0xef
        mov eax, dword ptr [ebx]
        pop edi
        mov dword ptr [eax + 6ch], 0ffffh
        mov ecx, dword ptr [esi + 13ch]
        mov eax, esi
        mov dword ptr [ecx + 6ch], 0ffffffh
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 10h]
        and edx, 0e5f0h
        or dh, 5
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
