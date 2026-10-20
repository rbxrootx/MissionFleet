// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B5AA0 .. +0x4AD bytes.
extern "C" __declspec(naked) void FUN_587b5aa0() {
    __asm {
        sub esp, 3ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 1
        ; Exact mapped bytes 0F 84 8E 04 00 00: je 0x587b5f43
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 3910h], 0
        mov ebp, dword ptr [esp + 54h]
        ; Exact mapped bytes 0F 84 F2 03 00 00: je 0x587b5eb8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 144h], 0
        ; Exact mapped bytes 0F 84 E5 03 00 00: je 0x587b5eb8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 148h], 0
        ; Exact mapped bytes 0F 84 D8 03 00 00: je 0x587b5eb8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CB AC FF FF: call 0x587b07b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [esi + 4]
        mov ebx, dword ptr [esi + 8]
        mov ecx, eax
        mov eax, dword ptr [edx + 10524h]
        sub edi, dword ptr [eax + 50h]
        sub ebx, dword ptr [eax + 54h]
        mov eax, dword ptr [esi + 391ch]
        cdq
        sub eax, edx
        mov dword ptr [esp + 18h], ecx
        mov edx, dword ptr [esp + 18h]
        sar eax, 1
        sub ecx, eax
        lea edx, [eax + edx]
        mov dword ptr [esp + 24h], 32h
        mov dword ptr [esp + 28h], 0
        mov dword ptr [esp + 54h], edx
        ; Exact mapped bytes 79 08: jns 0x587b5b35
        __asm _emit 0x79
        __asm _emit 0x08
        add ecx, 0e10h
        ; Exact mapped bytes EB 1F: jmp 0x587b5b54
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, 6e5d4c3bh
        imul ecx
        sub edx, ecx
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 54h]
        imul eax, eax, 0e10h
        add ecx, eax
        test edx, edx
        ; Exact mapped bytes 7D 0C: jge 0x587b5b64
        __asm _emit 0x7d
        __asm _emit 0x0c
        add edx, 0e10h
        mov dword ptr [esp + 54h], edx
        ; Exact mapped bytes EB 1F: jmp 0x587b5b83
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, 6e5d4c3bh
        imul edx
        sub edx, dword ptr [esp + 54h]
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        add dword ptr [esp + 54h], eax
        push ecx
        lea eax, [esi + 3940h]
        push eax
        lea ecx, [esp + 2ch]
        push ecx
        ; Exact mapped bytes E8 0B 64 FB FF: call 0x5876bfa0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x64
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [esp + 60h]
        push edx
        lea eax, [esi + 3948h]
        push eax
        lea eax, [esp + 38h]
        push eax
        ; Exact mapped bytes E8 F5 63 FB FF: call 0x5876bfa0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x63
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 3930h]
        mov ecx, dword ptr [esi + 3918h]
        add eax, edi
        mov dword ptr [esp + 54h], eax
        mov eax, dword ptr [esi + 3934h]
        add eax, ecx
        add eax, ebx
        mov dword ptr [esp + 58h], eax
        mov eax, dword ptr [esi + 3938h]
        add eax, edi
        mov dword ptr [esp + 5ch], eax
        mov eax, dword ptr [esi + 393ch]
        add eax, ecx
        mov ecx, dword ptr [esp + 68h]
        add eax, ebx
        mov dword ptr [esp + 60h], eax
        mov eax, dword ptr [ecx + 50h]
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x587b5bf8
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x587b5bfa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 44h]
        lea ecx, [esp + 10h]
        push ecx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 0F 85 79 01 00 00: jne 0x587b5d88
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 3910h], 2
        ; Exact mapped bytes 75 16: jne 0x587b5c2e
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [esi + 0f4h], eax
        ; Exact mapped bytes 74 07: je 0x587b5c27
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes A1 44 4A A2 58: mov eax, dword ptr [0x58a24a44]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes EB 0C: jmp 0x587b5c33
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes A1 40 4A A2 58: mov eax, dword ptr [0x58a24a40]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes EB 05: jmp 0x587b5c33
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes A1 4C 4A A2 58: mov eax, dword ptr [0x58a24a4c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        mov eax, dword ptr [esp + 14h]
        push eax
        ; Exact mapped bytes FF 15 74 C0 98 58: call dword ptr [0x5898c074]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 392ch]
        mov edx, dword ptr [esp + 10h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 74 C0 98 58: call dword ptr [0x5898c074]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        cmp dword ptr [esi + 3910h], 2
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 43: jne 0x587b5ca2
        __asm _emit 0x75
        __asm _emit 0x43
        cmp dword ptr [esi + 0f4h], 0
        ; Exact mapped bytes 74 1D: je 0x587b5c85
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [eax + 164h], 6
        ; Exact mapped bytes 7E 4E: jle 0x587b5cbf
        __asm _emit 0x7e
        __asm _emit 0x4e
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 45: je 0x587b5cbf
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 18h]
        ; Exact mapped bytes EB 3C: jmp 0x587b5cc1
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp dword ptr [eax + 164h], 7
        ; Exact mapped bytes 7E 31: jle 0x587b5cbf
        __asm _emit 0x7e
        __asm _emit 0x31
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 28: je 0x587b5cbf
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes EB 1F: jmp 0x587b5cc1
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp dword ptr [eax + 164h], 5
        ; Exact mapped bytes 7E 14: jle 0x587b5cbf
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587b5cbf
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x587b5cc1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 3a54h], eax
        mov eax, dword ptr [esi + 88h]
        mov ecx, dword ptr [eax + 100ch]
        mov dl, byte ptr [ecx + 4]
        and dl, 1fh
        cmp dl, 9
        ; Exact mapped bytes 75 14: jne 0x587b5cf2
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 66 83 BE B0 01 00 00 04: cmp word ptr [esi + 0x1b0], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 0A: jne 0x587b5cf2
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 BE B2 01 00 00 01: cmp word ptr [esi + 0x1b2], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 77: je 0x587b5d69
        __asm _emit 0x74
        __asm _emit 0x77
        mov edx, dword ptr [esi + 394ch]
        imul edx, edx, 56h
        mov ecx, dword ptr [esi + 3918h]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, ecx
        sub edx, eax
        mov eax, dword ptr [esi + 3948h]
        add edx, ebx
        push edx
        mov edx, dword ptr [esi + 3944h]
        imul edx, edx, 56h
        add eax, edi
        push eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 50h]
        sub ecx, eax
        mov eax, dword ptr [esp + 4ch]
        add ecx, ebx
        push ecx
        mov ecx, dword ptr [esi + 3940h]
        add ecx, edi
        push ecx
        mov ecx, dword ptr [esp + 50h]
        push edx
        mov edx, dword ptr [esp + 50h]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF 15 78 C0 98 58: call dword ptr [0x5898c078]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 50h]
        mov eax, dword ptr [ecx + 50h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x587b5d79
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x587b5d7b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 68h]
        push ecx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp dword ptr [esi + 3a54h], 0
        ; Exact mapped bytes 0F 84 23 01 00 00: je 0x587b5eb8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [esp + 54h], 0
        test eax, eax
        ; Exact mapped bytes 0F 8E 07 01 00 00: jle 0x587b5eb8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 14h], 10h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 14h]
        push ecx
        lea edx, [esp + 20h]
        mov dword ptr [esp + 30h], eax
        push edx
        lea eax, [esp + 34h]
        push eax
        mov dword ptr [esp + 3ch], 0
        ; Exact mapped bytes E8 BC 61 FB FF: call 0x5876bfa0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [esp + 64h]
        mov ecx, dword ptr [esi + 4]
        add ecx, dword ptr [edx]
        mov ebx, dword ptr [esp + 28h]
        add ebx, ecx
        mov ecx, dword ptr [esp + 2ch]
        mov edi, dword ptr [esi + 8]
        imul ecx, ecx, 56h
        mov eax, 51eb851fh
        imul ecx
        mov ecx, dword ptr [esp + 64h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub edi, eax
        add edi, dword ptr [esi + 3918h]
        mov eax, 66666667h
        add edi, dword ptr [ecx + 4]
        mov ecx, dword ptr [esp + 60h]
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        add esp, 0ch
        lea edx, [eax + eax*4]
        add edx, edx
        add edx, edx
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        sub ecx, edx
        mov edx, dword ptr [ebp]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 68h]
        mov dword ptr [esp + 34h], ebx
        mov dword ptr [esp + 38h], edi
        ; Exact mapped bytes 75 08: jne 0x587b5e7a
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 3a58h]
        ; Exact mapped bytes EB 06: jmp 0x587b5e80
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [esi + 3a54h]
        add ebx, dword ptr [ecx + 10h]
        mov dword ptr [esp + 34h], ebx
        add edi, dword ptr [ecx + 14h]
        push edi
        push ebx
        push eax
        mov dword ptr [esp + 44h], edi
        ; Exact mapped bytes E8 CA DE 14 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xde
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [esp + 54h]
        add dword ptr [esp + 14h], 4
        cdq
        and edx, 3
        add eax, edx
        inc ecx
        sar eax, 2
        cmp ecx, eax
        mov dword ptr [esp + 54h], ecx
        ; Exact mapped bytes 0F 8C 08 FF FF FF: jl 0x587b5dc0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esi + 4ch]
        test edi, edi
        ; Exact mapped bytes 74 22: je 0x587b5ee1
        __asm _emit 0x74
        __asm _emit 0x22
        mov ebx, dword ptr [esp + 50h]
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 17: jge 0x587b5ee1
        __asm _emit 0x7d
        __asm _emit 0x17
        mov eax, dword ptr [esp + 58h]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 14h]
        push eax
        push ebp
        push ebx
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E2: jne 0x587b5ec3
        __asm _emit 0x75
        __asm _emit 0xe2
        mov ecx, dword ptr [esi + 54h]
        mov ebx, dword ptr [esp + 58h]
        test ecx, ecx
        ; Exact mapped bytes 74 3A: je 0x587b5f26
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 0ch]
        add eax, dword ptr [esi + 4]
        mov edx, dword ptr [ebx + 4]
        add edx, dword ptr [esi + 10h]
        add eax, dword ptr [ebx]
        add edx, dword ptr [esi + 8]
        mov dword ptr [esp + 34h], eax
        mov eax, dword ptr [esi + 2ch]
        push eax
        mov eax, dword ptr [esi + 0a0h]
        mov dword ptr [esp + 3ch], edx
        mov edx, dword ptr [esi + 28h]
        mov esi, dword ptr [esp + 54h]
        push edx
        push eax
        push ebp
        lea edx, [esp + 44h]
        push edx
        push esi
        ; Exact mapped bytes E8 AC 46 F8 FF: call 0x5873a5d0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x46
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x587b5f2a
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 50h]
        test edi, edi
        ; Exact mapped bytes 74 15: je 0x587b5f43
        __asm _emit 0x74
        __asm _emit 0x15
        mov edi, edi
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 14h]
        push ebx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 ED: jne 0x587b5f30
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 3ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
