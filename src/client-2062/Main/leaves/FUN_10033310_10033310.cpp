// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10033310 .. +0x2D2 bytes.
extern "C" __declspec(naked) void FUN_10033310_10033310() {
    __asm {
        push -1
        push 1016e386h
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
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 9D 02 00 00: je 0x100335d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 54h]
        mov ecx, dword ptr [esi + 60h]
        mov eax, edi
        push ebx
        cdq
        mov ebx, eax
        mov eax, ecx
        xor ebx, edx
        sub ebx, edx
        cdq
        xor eax, edx
        sub eax, edx
        cmp ebx, eax
        ; Exact mapped bytes 7E 0F: jle 0x1003335e
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, edi
        sub eax, ecx
        mov ecx, dword ptr [esi + 68h]
        add ecx, eax
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 68h], ecx
        mov edi, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 64h]
        mov eax, edi
        cdq
        mov ebx, eax
        mov eax, ecx
        xor ebx, edx
        sub ebx, edx
        cdq
        xor eax, edx
        sub eax, edx
        cmp ebx, eax
        ; Exact mapped bytes 7E 0F: jle 0x10033387
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, edi
        sub eax, ecx
        mov ecx, dword ptr [esi + 6ch]
        add ecx, eax
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 6ch], ecx
        mov edx, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 70h]
        add edx, -14h
        mov eax, edx
        mov dword ptr [esi + 5ch], edx
        add ecx, eax
        mov dword ptr [esi + 70h], ecx
        mov eax, ecx
        mov ecx, dword ptr [esi + 6ch]
        sub ecx, eax
        mov eax, 51eb851fh
        imul ecx
        mov ecx, dword ptr [esi + 68h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        push edx
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, esi
        push edx
        ; Exact mapped bytes E8 01 B9 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 94h]
        mov ecx, dword ptr [esi + 8]
        lea ebx, [esi + 94h]
        lea edi, [esi + 8ch]
        cmp eax, edx
        mov dword ptr [esi + 90h], ecx
        mov dword ptr [edi], eax
        ; Exact mapped bytes 75 08: jne 0x100333fb
        __asm _emit 0x75
        __asm _emit 0x08
        cmp ecx, dword ptr [esi + 98h]
        ; Exact mapped bytes 74 09: je 0x10033404
        __asm _emit 0x74
        __asm _emit 0x09
        push edi
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 EC 01 00 00: call 0x100335f0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov edx, dword ptr [edi]
        mov dword ptr [esi + 98h], eax
        mov eax, dword ptr [esi + 70h]
        mov dword ptr [ebx], edx
        pop ebx
        test eax, eax
        ; Exact mapped bytes 0F 8D B1 01 00 00: jge 0x100335d1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [ecx + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 2A: je 0x1003345d
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, edi
        ; Exact mapped bytes E8 96 B1 0B 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb1
        __asm _emit 0x0b
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 15: jne 0x10033456
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        push 0
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 1E BD 0B 00: call 0x100ef170
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xbd
        __asm _emit 0x0b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 6E: jne 0x100334c4
        __asm _emit 0x75
        __asm _emit 0x6e
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 D6: jne 0x10033433
        __asm _emit 0x75
        __asm _emit 0xd6
        push 58h
        ; Exact mapped bytes E8 3C 93 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x93
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 8], edi
        test edi, edi
        mov dword ptr [esp + 14h], 1
        ; Exact mapped bytes 0F 84 04 01 00 00: je 0x10033581
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x1003348f
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 18h
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 0F 8E B5 00 00 00: jle 0x10033559
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C AD 00 00 00: jl 0x10033559
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x10033559
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x1003355b
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 D5 92 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x92
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes 74 49: je 0x10033527
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 12: jle 0x100334ff
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x100334ff
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [edx + 500h]
        ; Exact mapped bytes EB 02: jmp 0x10033501
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1388h
        mov edx, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esi + 8]
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push edi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 6D C3 0C 00: call 0x100ff890
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10033529
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 102h
        mov ecx, edi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 23 BC 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbc
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 88 13: mov word ptr [edi + 0x26], 0x1388
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x88
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10033550
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 50 BA 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xba
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 60: je 0x100335b7
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes EB 58: jmp 0x100335b1
        __asm _emit 0xeb
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1388h
        mov ecx, dword ptr [edx + 104e0h]
        mov edx, dword ptr [esi + 8]
        push edx
        mov edx, dword ptr [esi + 4]
        push edx
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 13 C3 0C 00: call 0x100ff890
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10033583
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 102h
        mov ecx, edi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 C9 BB 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbb
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 88 13: mov word ptr [edi + 0x26], 0x1388
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x88
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100335aa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F6 B9 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100335b7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 49 B9 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 A2 BA 0C 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xba
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 EB BA 0C 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xba
        __asm _emit 0x0c
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x100335d1
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
