// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D6E20 .. +0x12EB bytes.
extern "C" __declspec(naked) void FUN_587d6e20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x587d6e44
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B4 12 00 00: jmp 0x587d80f8
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F 8D 90 12 00 00: jge 0x587d80f8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F 8E 84 12 00 00: jle 0x587d80f8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 0F 8D 78 12 00 00: jge 0x587d80f8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 8E 6C 12 00 00: jle 0x587d80f8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C 50 CB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x50
        __asm _emit 0xcb
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4ch], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 08 52 CB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0xcb
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 44h], eax
        mov esi, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 7D 03: jge 0x587d6ec2
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 3ch], ecx
        mov ebx, dword ptr [ebp - 48h]
        mov edi, dword ptr [ebp + 10h]
        cmp edi, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7D 13: jge 0x587d6ee0
        __asm _emit 0x7d
        __asm _emit 0x13
        sub edi, dword ptr [ebp + 18h]
        imul edi, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F AF 3D 98 5F 90 58: imul edi, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        sub esi, edi
        mov edi, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 3ch]
        sub edx, edi
        imul edi, ebx
        add edi, dword ptr [ebp - 50h]
        ; Exact mapped bytes 0F 6E 75 24: movd mm6, dword ptr [ebp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 0F 62 F6: punpckldq mm6, mm6
        __asm _emit 0x0f
        __asm _emit 0x62
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 6F FE: movq mm7, mm6
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xfe
        ; Exact mapped bytes 0F DB 35 54 5F 96 58: pand mm6, qword ptr [0x58965f54]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 3D 5C 5F 96 58: pand mm7, qword ptr [0x58965f5c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 7E 75 24: movd dword ptr [ebp + 0x24], mm6
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 0F 7E 7D AC: movd dword ptr [ebp - 0x54], mm7
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x7d
        __asm _emit 0xac
        mov eax, dword ptr [ebp - 40h]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 35: jle 0x587d6f4e
        __asm _emit 0x7e
        __asm _emit 0x35
        sub eax, ecx
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 34h], ecx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        add edi, ecx
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 7E 3B: jle 0x587d6f7b
        __asm _emit 0x7e
        __asm _emit 0x3b
        sub eax, ecx
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 2D: jmp 0x587d6f7b
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        add edi, ecx
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F 8E 81 08 00 00: jle 0x587d77e7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        sub eax, ecx
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 00: jmp 0x587d6f7b
        __asm _emit 0xeb
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 05 98 5F 90 58: imul eax, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        sub ebx, eax
        cmp dword ptr [ebp + 28h], 100h
        ; Exact mapped bytes 0F 8C D8 02 00 00: jl 0x587d7269
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 75 49: jne 0x587d6fe0
        __asm _emit 0x75
        __asm _emit 0x49
        add esi, dword ptr [ebp - 34h]
        mov ecx, eax
        ; Exact mapped bytes 73 00: jae 0x587d6f9e
        __asm _emit 0x73
        __asm _emit 0x00
        shr edx, 1
        ; Exact mapped bytes 73 02: jae 0x587d6fa4
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x587d6fa9
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0E: jae 0x587d6fbb
        __asm _emit 0x73
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x587d6fd3
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        ; Exact mapped bytes E2 EA: loop 0x587d6fbd
        __asm _emit 0xe2
        __asm _emit 0xea
        add esi, dword ptr [ebp - 30h]
        add edi, ebx
        dec edx
        ; Exact mapped bytes 75 BC: jne 0x587d6f97
        __asm _emit 0x75
        __asm _emit 0xbc
        ; Exact mapped bytes E9 16 11 00 00: jmp 0x587d80f6
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 2ch], ebx
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 8F 27 01 00 00: jg 0x587d711a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 100h
        add edx, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 0F 6E EA: movd mm5, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xea
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 6F 35 54 5F 96 58: movq mm6, qword ptr [0x58965f54]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 5C 5F 96 58: movq mm7, qword ptr [0x58965f5c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 28h]
        shr ecx, 1
        ; Exact mapped bytes 73 14: jae 0x587d7030
        __asm _emit 0x73
        __asm _emit 0x14
        ; Exact mapped bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul eax, edx
        shr eax, 8
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        shr ecx, 1
        ; Exact mapped bytes 73 2C: jae 0x587d7060
        __asm _emit 0x73
        __asm _emit 0x2c
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 2A: jae 0x587d708e
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x587d70ba
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 74 4A: je 0x587d7106
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        ; Exact mapped bytes E2 B6: loop 0x587d70bc
        __asm _emit 0xe2
        __asm _emit 0xb6
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 2ch]
        dec dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 85 FD FE FF FF: jne 0x587d7012
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DC 0F 00 00: jmp 0x587d80f6
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 0F 6E EA: movd mm5, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xea
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 6F 35 54 5F 96 58: movq mm6, qword ptr [0x58965f54]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 5C 5F 96 58: movq mm7, qword ptr [0x58965f5c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 28h]
        shr ecx, 1
        ; Exact mapped bytes 73 1A: jae 0x587d7158
        __asm _emit 0x73
        __asm _emit 0x1a
        ; Exact mapped bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        mov ebx, eax
        not eax
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul eax, edx
        shr eax, 8
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, ebx
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        shr ecx, 1
        ; Exact mapped bytes 73 32: jae 0x587d718e
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes 66 03 46 FE: add ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0xfe
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 2F: jae 0x587d71c1
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x587d71f6
        __asm _emit 0x73
        __asm _emit 0x31
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 74 5D: je 0x587d7255
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 6F D8: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd8
        ; Exact mapped bytes 0F DF DF: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 6F D1: movq mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 6F D9: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF DF: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes 0F FC CA: paddb mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 75 A3: jne 0x587d71f8
        __asm _emit 0x75
        __asm _emit 0xa3
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 2ch]
        dec dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 85 D0 FE FF FF: jne 0x587d7134
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8D 0E 00 00: jmp 0x587d80f6
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 2ch], ebx
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp + 28h]
        mov eax, 100h
        sub eax, ecx
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 0F 6E F0: movd mm6, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 61 F6: punpcklwd mm6, mm6
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 61 F6: punpcklwd mm6, mm6
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 7F 75 F4: movq qword ptr [ebp - 0xc], mm6
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 2ch]
        cmp eax, 0
        ; Exact mapped bytes 0F 8F 1E 02 00 00: jg 0x587d74b6
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 100h
        imul ecx, eax
        shr ecx, 8
        mov dword ptr [ebp + 28h], ecx
        ; Exact mapped bytes 0F 6E E9: movd mm5, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe9
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 6F 35 54 5F 96 58: movq mm6, qword ptr [0x58965f54]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 5C 5F 96 58: movq mm7, qword ptr [0x58965f5c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 28h]
        shr ecx, 1
        ; Exact mapped bytes 73 2C: jae 0x587d72f3
        __asm _emit 0x73
        __asm _emit 0x2c
        ; Exact mapped bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul eax, dword ptr [ebp + 28h]
        shr eax, 8
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp - 20h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, ebx
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        shr ecx, 1
        ; Exact mapped bytes 73 5C: jae 0x587d7353
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 20h]
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 5A: jae 0x587d73b1
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 20h]
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x587d7402
        __asm _emit 0x73
        __asm _emit 0x4d
        ; Exact mapped bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F C1: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact mapped bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x587d74a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F C1: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact mapped bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 5D F4: pmullw mm3, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 F4: pmullw mm4, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D4 08: psrlw mm4, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F FC D3: paddb mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xd3
        ; Exact mapped bytes 0F FC D4: paddb mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 57 08: movq qword ptr [edi + 8], mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x57
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x587d7408
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 2ch]
        dec dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 85 0C FE FF FF: jne 0x587d72bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 40 0C 00 00: jmp 0x587d80f6
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 28h], ecx
        ; Exact mapped bytes 0F 6E C1: movd mm0, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 7F 45 E4: movq qword ptr [ebp - 0x1c], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 6E C0: movd mm0, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 7F 45 EC: movq qword ptr [ebp - 0x14], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F 6F 35 54 5F 96 58: movq mm6, qword ptr [0x58965f54]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 5C 5F 96 58: movq mm7, qword ptr [0x58965f5c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 28h]
        shr ecx, 1
        ; Exact mapped bytes 73 45: jae 0x587d7530
        __asm _emit 0x73
        __asm _emit 0x45
        ; Exact mapped bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        mov edx, eax
        not eax
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul eax, dword ptr [ebp + 2ch]
        shr eax, 8
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul eax, dword ptr [ebp + 28h]
        shr eax, 8
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp - 20h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, ebx
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        shr ecx, 1
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x587d75c2
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 20h]
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x587d7652
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 54 5F 96 58: and edx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 20h]
        shr edx, 8
        ; Exact mapped bytes 23 15 54 5F 96 58: and edx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x587d76d3
        __asm _emit 0x73
        __asm _emit 0x7d
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 1F: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F FD C1: paddw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D F4: pmullw mm3, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F FD C3: paddw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x587d77d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 1F: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F FD C1: paddw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D F4: pmullw mm3, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F FD C3: paddw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F FD CB: paddw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F FD D3: paddw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 E4: pmullw mm2, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 6F D4: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd4
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 F4: pmullw mm4, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D4 08: psrlw mm4, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F FD CC: paddw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x587d76d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 2ch]
        dec dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 85 FF FC FF FF: jne 0x587d74e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0F 09 00 00: jmp 0x587d80f6
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 05 98 5F 90 58: imul eax, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        sub ebx, eax
        cmp dword ptr [ebp + 28h], 100h
        ; Exact mapped bytes 0F 8C 8A 03 00 00: jl 0x587d7b87
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 75 6E: jne 0x587d7871
        __asm _emit 0x75
        __asm _emit 0x6e
        mov ecx, eax
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x587d780a
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
        shr ecx, 1
        ; Exact mapped bytes 73 02: jae 0x587d7810
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x587d7815
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0C: jae 0x587d7825
        __asm _emit 0x73
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        shr ecx, 1
        ; Exact mapped bytes 73 16: jae 0x587d783f
        __asm _emit 0x73
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x587d7867
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 56 10: movq mm2, qword ptr [esi + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x10
        ; Exact mapped bytes 0F 6F 5E 18: movq mm3, qword ptr [esi + 0x18]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x18
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F 57 10: movq qword ptr [edi + 0x10], mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 0F 7F 5F 18: movq qword ptr [edi + 0x18], mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        ; Exact mapped bytes E2 DA: loop 0x587d7841
        __asm _emit 0xe2
        __asm _emit 0xda
        add edi, ebx
        dec edx
        ; Exact mapped bytes 75 97: jne 0x587d7803
        __asm _emit 0x75
        __asm _emit 0x97
        ; Exact mapped bytes E9 85 08 00 00: jmp 0x587d80f6
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 2ch], ebx
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 8F BA 01 00 00: jg 0x587d7a3e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 100h
        add edx, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 0F 6E EA: movd mm5, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xea
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 6F 35 54 5F 96 58: movq mm6, qword ptr [0x58965f54]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 5C 5F 96 58: movq mm7, qword ptr [0x58965f5c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 28h]
        shr ecx, 1
        ; Exact mapped bytes 73 14: jae 0x587d78be
        __asm _emit 0x73
        __asm _emit 0x14
        ; Exact mapped bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul eax, edx
        shr eax, 8
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        shr ecx, 1
        ; Exact mapped bytes 73 2C: jae 0x587d78ee
        __asm _emit 0x73
        __asm _emit 0x2c
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 2A: jae 0x587d791c
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x587d7946
        __asm _emit 0x73
        __asm _emit 0x26
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        shr ecx, 1
        ; Exact mapped bytes 73 4A: jae 0x587d7994
        __asm _emit 0x73
        __asm _emit 0x4a
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x587d7a2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 5E 10: movq mm3, qword ptr [esi + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x10
        ; Exact mapped bytes 0F 6F 66 18: movq mm4, qword ptr [esi + 0x18]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x18
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 E5: pmullw mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xe5
        ; Exact mapped bytes 0F 71 D4 08: psrlw mm4, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB DC: por mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F 57 10: movq qword ptr [edi + 0x10], mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 0F 7F 5F 18: movq qword ptr [edi + 0x18], mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x587d799a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, dword ptr [ebp - 2ch]
        dec dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 85 6A FE FF FF: jne 0x587d78a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B8 06 00 00: jmp 0x587d80f6
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 0F 6E EA: movd mm5, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xea
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 6F 35 54 5F 96 58: movq mm6, qword ptr [0x58965f54]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 5C 5F 96 58: movq mm7, qword ptr [0x58965f5c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 28h]
        shr ecx, 1
        ; Exact mapped bytes 73 1A: jae 0x587d7a79
        __asm _emit 0x73
        __asm _emit 0x1a
        ; Exact mapped bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        mov ebx, eax
        not eax
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul eax, edx
        shr eax, 8
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, ebx
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        shr ecx, 1
        ; Exact mapped bytes 73 32: jae 0x587d7aaf
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes 66 03 46 FE: add ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0xfe
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 2F: jae 0x587d7ae2
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x587d7b17
        __asm _emit 0x73
        __asm _emit 0x31
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 74 5D: je 0x587d7b76
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 6F D8: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd8
        ; Exact mapped bytes 0F DF DF: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 6F D1: movq mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 6F D9: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF DF: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes 0F FC CA: paddb mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 75 A3: jne 0x587d7b19
        __asm _emit 0x75
        __asm _emit 0xa3
        add edi, dword ptr [ebp - 2ch]
        dec dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 85 D6 FE FF FF: jne 0x587d7a58
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6F 05 00 00: jmp 0x587d80f6
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 2ch], ebx
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp + 28h]
        mov eax, 100h
        sub eax, ecx
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 0F 6E E0: movd mm4, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe0
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 7F 65 F4: movq qword ptr [ebp - 0xc], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 2ch]
        cmp eax, 0
        ; Exact mapped bytes 0F 8F 18 02 00 00: jg 0x587d7dce
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 100h
        imul ecx, eax
        shr ecx, 8
        mov dword ptr [ebp + 28h], ecx
        ; Exact mapped bytes 0F 6E E9: movd mm5, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe9
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 6F 35 54 5F 96 58: movq mm6, qword ptr [0x58965f54]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 5C 5F 96 58: movq mm7, qword ptr [0x58965f5c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 28h]
        shr ecx, 1
        ; Exact mapped bytes 73 2C: jae 0x587d7c0e
        __asm _emit 0x73
        __asm _emit 0x2c
        ; Exact mapped bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul eax, dword ptr [ebp + 28h]
        shr eax, 8
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp - 20h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, ebx
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        shr ecx, 1
        ; Exact mapped bytes 73 5C: jae 0x587d7c6e
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 20h]
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 5A: jae 0x587d7ccc
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 20h]
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x587d7d1d
        __asm _emit 0x73
        __asm _emit 0x4d
        ; Exact mapped bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F C1: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact mapped bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x587d7dbd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F C1: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact mapped bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 5D F4: pmullw mm3, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 F4: pmullw mm4, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D4 08: psrlw mm4, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F FC D3: paddb mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xd3
        ; Exact mapped bytes 0F FC D4: paddb mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 57 08: movq qword ptr [edi + 8], mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x57
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x587d7d23
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, dword ptr [ebp - 2ch]
        dec dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 85 12 FE FF FF: jne 0x587d7bdb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 28 03 00 00: jmp 0x587d80f6
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 2ch], eax
        ; Exact mapped bytes 0F 6E C1: movd mm0, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 7F 45 E4: movq qword ptr [ebp - 0x1c], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 6E C0: movd mm0, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 7F 45 EC: movq qword ptr [ebp - 0x14], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F 6F 35 54 5F 96 58: movq mm6, qword ptr [0x58965f54]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 5C 5F 96 58: movq mm7, qword ptr [0x58965f5c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 28h]
        shr ecx, 1
        ; Exact mapped bytes 73 45: jae 0x587d7e45
        __asm _emit 0x73
        __asm _emit 0x45
        ; Exact mapped bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        mov edx, eax
        not eax
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul eax, dword ptr [ebp + 2ch]
        shr eax, 8
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul eax, dword ptr [ebp + 28h]
        shr eax, 8
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp - 20h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, ebx
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        shr ecx, 1
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x587d7ed7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 20h]
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x587d7f67
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 54 5F 96 58: and edx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 20h]
        shr edx, 8
        ; Exact mapped bytes 23 15 54 5F 96 58: and edx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x587d7fe8
        __asm _emit 0x73
        __asm _emit 0x7d
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 1F: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F FD C1: paddw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D F4: pmullw mm3, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F FD C3: paddw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x587d80e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 1F: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F FD C1: paddw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D F4: pmullw mm3, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F FD C3: paddw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F FD CB: paddw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F FD D3: paddw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 E4: pmullw mm2, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 6F D4: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd4
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 F4: pmullw mm4, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 71 D4 08: psrlw mm4, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F FD CC: paddw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x587d7fee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, dword ptr [ebp - 2ch]
        dec dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 85 05 FD FF FF: jne 0x587d7df9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 00: jmp 0x587d80f6
        __asm _emit 0xeb
        __asm _emit 0x00
        ; Exact mapped bytes 0F 77: emms
        __asm _emit 0x0f
        __asm _emit 0x77
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 4B 8F 05 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret 28h
    }
}
