// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10015710 .. +0x358 bytes.
extern "C" __declspec(naked) void FUN_10015710_10015710() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        mov ebx, ecx
        push esi
        ; Exact mapped bytes 66 0F B6 45 00: movzx ax, byte ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 83 A8 00 00 00: mov word ptr [ebx + 0xa8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 70h]
        lea ecx, [ebp + 1]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1001573e
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1001573e
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
        mov eax, dword ptr [ebx + 70h]
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes 66 8B 4B 26: mov cx, word ptr [ebx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x26
        mov esi, dword ptr [ebx + 70h]
        ; Exact mapped bytes 66 41: inc cx
        __asm _emit 0x66
        __asm _emit 0x41
        ; Exact mapped bytes 66 89 4E 26: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1001575f
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 41 98 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x98
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1001576c
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 94 97 0E 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x97
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 3ch]
        mov dword ptr [ebx + 78h], edx
        mov eax, dword ptr [ebp + 40h]
        mov dword ptr [ebx + 7ch], eax
        mov ecx, dword ptr [ebp + 48h]
        mov dword ptr [ebx + 84h], ecx
        ; Exact mapped bytes 66 8B 55 44: mov dx, word ptr [ebp + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x44
        ; Exact mapped bytes 66 89 93 80 00 00 00: mov word ptr [ebx + 0x80], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 58h]
        mov dword ptr [ebx + 94h], eax
        ; Exact mapped bytes 66 83 7D 44 00: cmp word ptr [ebp + 0x44], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 2A: je 0x100157c6
        __asm _emit 0x74
        __asm _emit 0x2a
        push edi
        lea edi, [ebp + 4ch]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        lea edx, [ebx + 88h]
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        pop edi
        ; Exact mapped bytes EB 0C: jmp 0x100157d2
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea ecx, [ebx + 88h]
        mov dword ptr [ecx], 0
        mov eax, dword ptr [ebx + 84h]
        test eax, eax
        ; Exact mapped bytes 75 7F: jne 0x1001585b
        __asm _emit 0x75
        __asm _emit 0x7f
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x100157fc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100157fc
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x100157fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 58h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10015830
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
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 0F 8E F5 00 00 00: jle 0x10015937
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x10015937
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x10015939
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 57 1C 10: mov ecx, dword ptr [0x101c5734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x1001594c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 4]
        test edx, edx
        ; Exact mapped bytes 74 53: je 0x100158c3
        __asm _emit 0x74
        __asm _emit 0x53
        mov esi, dword ptr [edx + 164h]
        dec eax
        cmp esi, eax
        ; Exact mapped bytes 76 48: jbe 0x100158c3
        __asm _emit 0x76
        __asm _emit 0x48
        push eax
        mov ecx, edx
        ; Exact mapped bytes E8 6D 03 00 00: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 5ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100158b5
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
        mov eax, dword ptr [ebx + 58h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x10015a01
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x100158e3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100158e3
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x100158e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 58h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10015917
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
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x10015937
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10015937
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x10015939
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 5ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x100159f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x100159cc
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x1001596c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1001596c
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x1001596e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 58h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100159a0
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
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x100159c0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100159c0
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x100159c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 5ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100159f4
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
        mov ecx, dword ptr [ebx + 5ch]
        push 101h
        ; Exact mapped bytes E8 5F 97 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x97
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 34h]
        mov ecx, dword ptr [ebx + 60h]
        mov dword ptr [ebx + 0a0h], eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 66 8B 55 1A: mov dx, word ptr [ebp + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x1a
        mov eax, dword ptr [ebx + 74h]
        ; Exact mapped bytes 66 89 93 9E 00 00 00: mov word ptr [ebx + 0x9e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 1ch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x10015a34
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10015a34
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
        mov eax, dword ptr [ebx + 74h]
        or byte ptr [eax + 24h], 1
        mov esi, dword ptr [ebx + 74h]
        ; Exact mapped bytes 66 8B 43 26: mov ax, word ptr [ebx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 40: inc ax
        __asm _emit 0x66
        __asm _emit 0x40
        test ecx, ecx
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10015a55
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 4B 95 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x95
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10015a62
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 9E 94 0E 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x0e
        __asm _emit 0x00
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
