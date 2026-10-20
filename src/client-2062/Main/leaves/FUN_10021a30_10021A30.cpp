// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10021A30 .. +0x29B bytes.
extern "C" __declspec(naked) void FUN_10021a30_10021A30() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 88 02 00 00: je 0x10021cc7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x10021af6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 50h]
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [esi + 68h]
        mov ebx, dword ptr [esi + 6ch]
        inc edx
        add ecx, eax
        mov eax, dword ptr [esi + 64h]
        mov dword ptr [esi + 50h], edx
        mov edx, dword ptr [esi + 70h]
        add ebx, -0dh
        add eax, edx
        mov edx, dword ptr [esi + 60h]
        mov dword ptr [esi + 64h], eax
        mov edi, eax
        mov eax, ebx
        mov dword ptr [esi + 6ch], ebx
        add edx, eax
        mov dword ptr [esi + 68h], ecx
        mov eax, edx
        mov dword ptr [esi + 60h], edx
        cdq
        and edx, 7
        add eax, edx
        mov ebx, eax
        mov eax, 51eb851fh
        imul edi
        sar edx, 5
        mov eax, edx
        mov edi, dword ptr [esi + 7ch]
        shr eax, 1fh
        sar ebx, 3
        add edx, eax
        mov eax, 51eb851fh
        sub edx, ebx
        mov ebx, dword ptr [esi + 78h]
        add edx, ebx
        push edx
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, esi
        add edx, edi
        push edx
        ; Exact mapped bytes E8 10 D2 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd2
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x10021ace
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [esi + 5ch], 1
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 EE 01 00 00: je 0x10021cc7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x10021c31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 E7: jne 0x10021ad9
        __asm _emit 0x75
        __asm _emit 0xe7
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 1
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x10021c3a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [ecx + 0ch]
        test edi, edi
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x10021bdf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 0fh
        mov ecx, edi
        ; Exact mapped bytes E8 B4 CA 0C 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xca
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 65: je 0x10021b85
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        push 0
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 3F D6 0C 00: call 0x100ef170
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd6
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x10021b8e
        __asm _emit 0x75
        __asm _emit 0x59
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 11: jle 0x10021b53
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10021b53
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x10021b55
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x10021b85
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 89: jne 0x10021b15
        __asm _emit 0x75
        __asm _emit 0x89
        ; Exact mapped bytes EB 51: jmp 0x10021bdf
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes A1 EC 57 1C 10: mov eax, dword ptr [0x101c57ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 14h
        ; Exact mapped bytes 7E 11: jle 0x10021bad
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10021bad
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 500h
        ; Exact mapped bytes EB 02: jmp 0x10021baf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x10021bdf
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push 101h
        mov ecx, esi
        ; Exact mapped bytes E8 75 D5 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd5
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [esi + 50h], 0
        test ecx, ecx
        mov dword ptr [esi + 5ch], 2
        ; Exact mapped bytes 74 08: je 0x10021c08
        __asm _emit 0x74
        __asm _emit 0x08
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 0C: mov ax, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x10021c0a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3ch]
        mov dword ptr [esi + 58h], eax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x10021cc7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0F: je 0x10021c31
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10021c18
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebx
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 2
        ; Exact mapped bytes 75 6E: jne 0x10021cad
        __asm _emit 0x75
        __asm _emit 0x6e
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x10021c7d
        __asm _emit 0x74
        __asm _emit 0x37
        xor ecx, ecx
        mov edx, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        imul ecx, dword ptr [eax + 8]
        dec ecx
        xor eax, eax
        cmp edx, ecx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x10021c7d
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, esi
        ; Exact mapped bytes E8 FA D3 0D 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 43 D4 0D 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd4
        __asm _emit 0x0d
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 56: je 0x10021cc7
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        pop edi
        pop esi
        pop ebx
        ret
        mov ecx, dword ptr [esi + 50h]
        inc ecx
        mov dword ptr [esi + 50h], ecx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 3C: je 0x10021cc7
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0F: je 0x10021ca4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10021c8b
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebx
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 AC D3 0D 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 F5 D3 0D 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd3
        __asm _emit 0x0d
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x10021cc7
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebx
        ret
    }
}
