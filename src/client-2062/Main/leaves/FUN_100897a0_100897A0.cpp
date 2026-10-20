// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100897A0 .. +0x7CA bytes.
extern "C" __declspec(naked) void FUN_100897a0_100897A0() {
    __asm {
        sub esp, 88h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 10h], esi
        mov al, byte ptr [esi + 2e5h]
        cmp al, 1
        ; Exact mapped bytes 0F 85 4B 04 00 00: jne 0x10089c09
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 9ch]
        test ebx, ebx
        ; Exact mapped bytes 75 30: jne 0x100897f9
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push ebx
        push 24ch
        ; Exact mapped bytes E8 D4 42 F9 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0dch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 90 01 00 00: je 0x10089994
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 57 1C 10: mov eax, dword ptr [0x101c5734]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x10089903
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x10089882
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [eax + 164h]
        dec ecx
        cmp edx, ecx
        ; Exact mapped bytes 76 5F: jbe 0x10089882
        __asm _emit 0x76
        __asm _emit 0x5f
        cmp edx, ecx
        ; Exact mapped bytes 7E 13: jle 0x1008983a
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x1008983a
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1008983a
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + ecx*4]
        ; Exact mapped bytes EB 02: jmp 0x1008983c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10089871
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 E2 01 00 00: jmp 0x10089a64
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x100898a3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100898a3
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x100898a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0bch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100898da
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 0F 8E 8F 00 00 00: jle 0x1008997c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x1008997c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 7B: jmp 0x1008997e
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x10089924
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10089924
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x10089926
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0bch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1008995b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x1008997c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008997c
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x1008997e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x10089a44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x10089a1c
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x100899b5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100899b5
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x100899b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0bch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100899ec
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x10089a0d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10089a0d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x10089a0f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10089a44
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov ecx, dword ptr [esi + 0bch]
        push 0fffffeffh
        ; Exact mapped bytes E8 0C 57 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 FC 56 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ebp, [ebx + 0ch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10089a82
        __asm _emit 0x74
        __asm _emit 0x08
        test ebp, ebp
        ; Exact mapped bytes 74 04: je 0x10089a82
        __asm _emit 0x74
        __asm _emit 0x04
        push ebp
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0c8h]
        lea ecx, [ebx + 2dh]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10089a9a
        __asm _emit 0x74
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10089a9a
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov cl, byte ptr [ebx + 5ah]
        xor edx, edx
        ; Exact mapped bytes 8B 3D 88 51 17 10: mov edi, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov byte ptr [esi + 304h], cl
        ; Exact mapped bytes 66 8B 53 4A: mov dx, word ptr [ebx + 0x4a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x4a
        xor eax, eax
        ; Exact mapped bytes 66 8B 43 48: mov ax, word ptr [ebx + 0x48]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x48
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4B 46: mov cx, word ptr [ebx + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x46
        push edx
        push eax
        push ecx
        lea edx, [esp + 24h]
        push 101abadch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0cch]
        add esp, 14h
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x10089aee
        __asm _emit 0x74
        __asm _emit 0x14
        lea ecx, [esp + 18h]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10089aee
        __asm _emit 0x74
        __asm _emit 0x0c
        lea edx, [esp + 18h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 43 58: mov ax, word ptr [ebx + 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 4B 56: mov cx, word ptr [ebx + 0x56]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x56
        xor edx, edx
        push eax
        ; Exact mapped bytes 66 8B 53 54: mov dx, word ptr [ebx + 0x54]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x54
        push ecx
        push edx
        lea eax, [esp + 24h]
        push 101abadch
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0d0h]
        add esp, 14h
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x10089b33
        __asm _emit 0x74
        __asm _emit 0x14
        lea ecx, [esp + 18h]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10089b33
        __asm _emit 0x74
        __asm _emit 0x0c
        lea edx, [esp + 18h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 50h]
        mov ecx, dword ptr [esi + 0d4h]
        push eax
        ; Exact mapped bytes E8 DE 5B 07 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5b
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 178h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x10089b5b
        __asm _emit 0x74
        __asm _emit 0x0c
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x10089b5b
        __asm _emit 0x74
        __asm _emit 0x08
        push ebp
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov al, byte ptr [ebx + 5ah]
        test al, al
        ; Exact mapped bytes 74 2B: je 0x10089b8d
        __asm _emit 0x74
        __asm _emit 0x2b
        xor edx, edx
        mov byte ptr [esi + 2e5h], 5
        mov dl, byte ptr [ebx + 5ah]
        lea ecx, [ebx + 5ch]
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push 0
        ; Exact mapped bytes E8 20 31 FC FF: call 0x1004cca0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [esi + 2e5h], 0
        lea edi, [esi + 1b4h]
        add esi, 150h
        mov ebx, 5
        xor ebp, ebp
        mov edx, 0fffeh
        mov ecx, 2
        mov eax, dword ptr [esi]
        add esi, 4
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        dec ecx
        ; Exact mapped bytes 75 F4: jne 0x10089bb1
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [edi - 38h]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x10089bd8
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10089bd8
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [edi - 14h]
        push 0fffffeffh
        ; Exact mapped bytes E8 7B 55 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 6F 55 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        add edi, 4
        dec ebx
        mov dword ptr [edx + 50h], ebp
        ; Exact mapped bytes 75 AB: jne 0x10089ba7
        __asm _emit 0x75
        __asm _emit 0xab
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp al, 6
        ; Exact mapped bytes 0F 85 4C 03 00 00: jne 0x10089f5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 9ch]
        lea ecx, [esp + 18h]
        lea eax, [ebp + 24h]
        push eax
        push 101abaach
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        lea edx, [esp + 18h]
        push -1
        push edx
        push 0
        ; Exact mapped bytes E8 BD 6C FF FF: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esi + 228h]
        mov eax, dword ptr [esi + 22ch]
        ; Exact mapped bytes 8B 3D A0 50 17 10: mov edi, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp ebx, eax
        ; Exact mapped bytes 74 4A: je 0x10089ca3
        __asm _emit 0x74
        __asm _emit 0x4a
        add ebp, 2dh
        mov eax, dword ptr [ebx]
        push eax
        push ebp
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x10089c75
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 22ch]
        add ebx, 4
        cmp ebx, eax
        ; Exact mapped bytes 75 E9: jne 0x10089c5c
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 2E: jmp 0x10089ca3
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 22ch]
        lea eax, [ebx + 4]
        cmp eax, ecx
        ; Exact mapped bytes 74 0E: je 0x10089c90
        __asm _emit 0x74
        __asm _emit 0x0e
        sub ebx, eax
        mov edx, dword ptr [eax]
        mov dword ptr [ebx + eax], edx
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F4: jne 0x10089c84
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi + 22ch]
        add eax, -4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esi + 22ch], eax
        mov ebx, dword ptr [esi + 194h]
        mov eax, dword ptr [esi + 198h]
        cmp ebx, eax
        ; Exact mapped bytes 74 2D: je 0x10089ce0
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [esp + 9ch]
        lea ebp, [ebx + 2dh]
        lea edi, [eax + 2dh]
        push ebp
        push edi
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 02 00 00: je 0x10089f5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        add ebx, 54h
        add ebp, 54h
        cmp ebx, eax
        ; Exact mapped bytes 75 E0: jne 0x10089cc0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [esi + 198h]
        mov edx, dword ptr [esi + 19ch]
        lea ebp, [esi + 190h]
        sub edx, ecx
        mov eax, 30c30c31h
        mov ebx, ecx
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        ; Exact mapped bytes 0F 83 19 01 00 00: jae 0x10089e29
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 4]
        test edi, edi
        ; Exact mapped bytes 74 1E: je 0x10089d35
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, ecx
        mov eax, 30c30c31h
        sub edx, edi
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 77 08: ja 0x10089d3d
        __asm _emit 0x77
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 1
        test edi, edi
        ; Exact mapped bytes 75 04: jne 0x10089d45
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 13: jmp 0x10089d58
        __asm _emit 0xeb
        __asm _emit 0x13
        sub ecx, edi
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov eax, dword ptr [esp + 10h]
        lea ecx, [edx + eax]
        test ecx, ecx
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 7D 02: jge 0x10089d69
        __asm _emit 0x7d
        __asm _emit 0x02
        xor ecx, ecx
        lea eax, [ecx*8]
        sub eax, ecx
        lea ecx, [eax + eax*2]
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 22 2A 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x2a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 4]
        add esp, 4
        mov edi, eax
        mov ecx, ebp
        push edi
        push ebx
        push edx
        ; Exact mapped bytes E8 00 0F 00 00: call 0x1008ac90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 9ch]
        mov dword ptr [esp + 10h], eax
        push ecx
        push 1
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 2A 0F 00 00: call 0x1008acd0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [ebp + 8]
        add edx, 54h
        mov ecx, ebp
        push edx
        push eax
        push ebx
        ; Exact mapped bytes E8 D6 0E 00 00: call 0x1008ac90
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 4]
        push ecx
        push edx
        mov ecx, ebp
        ; Exact mapped bytes E8 07 4E 01 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 4]
        push eax
        ; Exact mapped bytes E8 B2 29 0E 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x29
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        add esp, 4
        lea eax, [ecx*8]
        sub eax, ecx
        lea ecx, [eax + eax*2]
        mov eax, dword ptr [ebp + 4]
        test eax, eax
        lea edx, [edi + ecx*4]
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 75 04: jne 0x10089df6
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 16: jmp 0x10089e0c
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        sub ecx, eax
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        lea ecx, [edx + 1]
        mov dword ptr [ebp + 4], edi
        lea eax, [ecx*8]
        sub eax, ecx
        lea ecx, [eax + eax*2]
        lea edx, [edi + ecx*4]
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x10089ef9
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        mov eax, 30c30c31h
        sub edx, ebx
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        ; Exact mapped bytes 73 5D: jae 0x10089ea0
        __asm _emit 0x73
        __asm _emit 0x5d
        lea edx, [ebx + 54h]
        push edx
        push ecx
        push ebx
        mov ecx, ebp
        ; Exact mapped bytes E8 40 0E 00 00: call 0x1008ac90
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [esp + 9ch]
        mov ecx, esi
        push eax
        sub ecx, ebx
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
        mov ecx, edx
        mov eax, 1
        shr ecx, 1fh
        add edx, ecx
        mov ecx, ebp
        sub eax, edx
        push eax
        push esi
        ; Exact mapped bytes E8 50 0E 00 00: call 0x1008acd0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp ebx, eax
        ; Exact mapped bytes 74 65: je 0x10089eec
        __asm _emit 0x74
        __asm _emit 0x65
        mov esi, dword ptr [esp + 9ch]
        mov edi, ebx
        add ebx, 54h
        mov ecx, 15h
        cmp ebx, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 E9: jne 0x10089e87
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 4C: jmp 0x10089eec
        __asm _emit 0xeb
        __asm _emit 0x4c
        push ecx
        push ecx
        add ecx, -54h
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 E3 0D 00 00: call 0x1008ac90
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        lea eax, [edx - 54h]
        cmp ebx, eax
        ; Exact mapped bytes 74 15: je 0x10089ecc
        __asm _emit 0x74
        __asm _emit 0x15
        sub eax, 54h
        sub edx, 54h
        mov ecx, 15h
        mov esi, eax
        mov edi, edx
        cmp eax, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 EB: jne 0x10089eb7
        __asm _emit 0x75
        __asm _emit 0xeb
        lea edx, [ebx + 54h]
        mov eax, ebx
        cmp ebx, edx
        ; Exact mapped bytes 74 17: je 0x10089eec
        __asm _emit 0x74
        __asm _emit 0x17
        mov esi, dword ptr [esp + 9ch]
        mov edi, eax
        add eax, 54h
        mov ecx, 15h
        cmp eax, edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 E9: jne 0x10089ed5
        __asm _emit 0x75
        __asm _emit 0xe9
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [esp + 10h]
        add eax, 54h
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 1f00h
        cmp ecx, 200h
        ; Exact mapped bytes 75 4B: jne 0x10089f56
        __asm _emit 0x75
        __asm _emit 0x4b
        mov edx, dword ptr [esp + 9ch]
        mov ecx, dword ptr [esi + 218h]
        push 0add783h
        add edx, 2dh
        push 0
        push edx
        ; Exact mapped bytes E8 88 9D 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 21ch]
        push 0ffffffh
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 71 9D 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 220h]
        push 0ffffffh
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 5A 9D 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        mov byte ptr [esi + 2e5h], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
