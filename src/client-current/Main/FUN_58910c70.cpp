// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58910C70 .. +0x30C2 bytes.
extern "C" __declspec(naked) void FUN_58910c70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 0ch], eax
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4ch], ecx
        mov eax, dword ptr [ebp - 4ch]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x58910c94
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8B 30 00 00: jmp 0x58913d1f
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F 8D 67 30 00 00: jge 0x58913d1f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x67
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F 8E 5B 30 00 00: jle 0x58913d1f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5b
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 0F 8D 4F 30 00 00: jge 0x58913d1f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 8E 43 30 00 00: jle 0x58913d1f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x43
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DC B4 FF FF: call 0x5890c1c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 92 E7 FF: call 0x58789fb0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x92
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 44h], eax
        mov esi, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 03: jge 0x58910d12
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 8], ecx
        mov ebx, dword ptr [ebp + 10h]
        cmp ebx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7D 25: jge 0x58910d3f
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 18h]
        sub ecx, ebx
        movzx eax, word ptr [esi]
        add esi, 2
        ; Exact mapped bytes 66 83 F8 FF: cmp ax, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 0F: je 0x58910d3a
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 8C EC 2F 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xec
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx eax, word ptr [esi]
        add esi, 2
        add esi, eax
        ; Exact mapped bytes E2 E3: loop 0x58910d1f
        __asm _emit 0xe2
        __asm _emit 0xe3
        mov ebx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 7C 03: jl 0x58910d4a
        __asm _emit 0x7c
        __asm _emit 0x03
        mov edx, dword ptr [ebp + 20h]
        sub edx, ebx
        mov dword ptr [ebp - 34h], edx
        imul ebx, dword ptr [ebp - 38h]
        add ebx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp + 14h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8F 7B 0A 00 00: jg 0x589117dd
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 8C 6F 0A 00 00: jl 0x589117dd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F AF 0D FC DF 9C 58: imul ecx, dword ptr [0x589cdffc]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        add ebx, ecx
        cmp dword ptr [ebp + 24h], 100h
        ; Exact mapped bytes 0F 8C 5B 03 00 00: jl 0x589110e2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x58910e11
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ebx
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 74 65: je 0x58910e06
        __asm _emit 0x74
        __asm _emit 0x65
        ; Exact mapped bytes 0F 8C 76 2F 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x76
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 73 01: jae 0x58910db4
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0C: jae 0x58910dc4
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
        ; Exact mapped bytes 73 16: jae 0x58910dde
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
        ; Exact mapped bytes 74 26: je 0x58910e06
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
        ; Exact mapped bytes E2 DA: loop 0x58910de0
        __asm _emit 0xe2
        __asm _emit 0xda
        add ebx, dword ptr [ebp - 38h]
        dec edx
        ; Exact mapped bytes 75 85: jne 0x58910d91
        __asm _emit 0x75
        __asm _emit 0x85
        ; Exact mapped bytes E9 0C 2F 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], ebx
        mov edi, ebx
        mov edx, dword ptr [ebp + 28h]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F 9F 01 00 00: jg 0x58910fc1
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 0ffffff00h
        ; Exact mapped bytes 0F 8C 01 07 00 00: jl 0x5891152f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
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
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x58910faa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C BA 2E 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xba
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 73 2A: jae 0x58910e99
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x58910ec3
        __asm _emit 0x73
        __asm _emit 0x26
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        shr ecx, 1
        ; Exact mapped bytes 73 4A: jae 0x58910f11
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
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
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
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x58910faa
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
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
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
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
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
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x58910f17
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 8F FE FF FF: jne 0x58910e4b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5C 2D 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 100h
        ; Exact mapped bytes 0F 8F AF 06 00 00: jg 0x5891167c
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x589110cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 21 2D 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 73 2F: jae 0x58911037
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x5891106c
        __asm _emit 0x73
        __asm _emit 0x31
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 74 5D: je 0x589110cb
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
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 7F C3: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
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
        ; Exact mapped bytes 0F 7F CA: movq mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 7F CB: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
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
        ; Exact mapped bytes 75 A3: jne 0x5891106e
        __asm _emit 0x75
        __asm _emit 0xa3
        mov edi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 07 FF FF FF: jne 0x58910fe4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3B 2C 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], ebx
        mov edi, ebx
        mov ecx, dword ptr [ebp + 24h]
        mov eax, 100h
        sub eax, ecx
        mov dword ptr [ebp - 28h], eax
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
        ; Exact mapped bytes 0F 7F 75 C0: movq qword ptr [ebp - 0x40], mm6
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x75
        __asm _emit 0xc0
        mov edx, dword ptr [ebp + 28h]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F AC 01 00 00: jg 0x589112b9
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        imul ecx, edx
        shr ecx, 8
        mov dword ptr [ebp + 24h], ecx
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
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 5D 01 00 00: je 0x589112a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C D2 2B 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd2
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 73 5A: jae 0x589111b1
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x58911202
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
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x589112a2
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
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
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
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 C0: pmullw mm4, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x58911208
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 7F FE FF FF: jne 0x58911133
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 64 2A 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 24h], ecx
        mov dword ptr [ebp + 28h], edx
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
        ; Exact mapped bytes 0F 7F 45 EC: movq qword ptr [ebp - 0x14], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F 6E C2: movd mm0, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 7F 45 DC: movq qword ptr [ebp - 0x24], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 1F 02 00 00: je 0x58911518
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 1E 2A 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1e
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58911397
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
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 E4 84 A2 58: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 E4 84 A2 58: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x58911418
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
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x58911518
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
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 DC: pmullw mm2, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 65 C0: pmullw mm4, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x5891141e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 BD FD FF FF: jne 0x589112e7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EE 27 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x58911665
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C C8 27 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc8
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 73 3F: jae 0x589115a0
        __asm _emit 0x73
        __asm _emit 0x3f
        ; Exact mapped bytes 0F 6E 16: movd mm2, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6E 27: movd mm4, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 41: jae 0x589115e5
        __asm _emit 0x73
        __asm _emit 0x41
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 74 7E: je 0x58911665
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 75 82: jne 0x589115e7
        __asm _emit 0x75
        __asm _emit 0x82
        mov edi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 C6 FE FF FF: jne 0x5891153d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A1 26 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x589117c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 7B 26 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7b
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 73 42: jae 0x589116f0
        __asm _emit 0x73
        __asm _emit 0x42
        ; Exact mapped bytes 0F 6E 17: movd mm2, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6E 26: movd mm4, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 44: jae 0x58911738
        __asm _emit 0x73
        __asm _emit 0x44
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x589117c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 57 08: movq mm2, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 66 08: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x5891173e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 B2 FE FF FF: jne 0x5891168a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 40 25 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], ebx
        mov dword ptr [ebp - 2ch], ebx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F AF 0D FC DF 9C 58: imul ecx, dword ptr [0x589cdffc]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        add dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F AF 0D FC DF 9C 58: imul ecx, dword ptr [0x589cdffc]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        add dword ptr [ebp - 2ch], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F AF 0D FC DF 9C 58: imul ecx, dword ptr [0x589cdffc]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        add ebx, ecx
        cmp dword ptr [ebp + 24h], 100h
        ; Exact mapped bytes 0F 8C C3 0B 00 00: jl 0x589123d9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0
        ; Exact mapped bytes 0F 85 F4 01 00 00: jne 0x58911a14
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ebx
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 C9 01 00 00: je 0x589119fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C E3 24 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe3
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8E AD 01 00 00: jle 0x589119fb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D A4 01 00 00: jge 0x589119fb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8F CF 00 00 00: jg 0x5891192f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 7E 67: jle 0x589118ce
        __asm _emit 0x7e
        __asm _emit 0x67
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 01: jae 0x58911873
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0C: jae 0x58911883
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
        ; Exact mapped bytes 73 16: jae 0x5891189d
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
        ; Exact mapped bytes 0F 84 5A 01 00 00: je 0x589119fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E2 DA: loop 0x589118a3
        __asm _emit 0xe2
        __asm _emit 0xda
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x589119fd
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 01: jae 0x589118d4
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0C: jae 0x589118e4
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
        ; Exact mapped bytes 73 16: jae 0x589118fe
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
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x589119fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E2 DA: loop 0x58911904
        __asm _emit 0xe2
        __asm _emit 0xda
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x589119fd
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 7E 63: jle 0x5891199e
        __asm _emit 0x7e
        __asm _emit 0x63
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 01: jae 0x58911947
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0C: jae 0x58911957
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
        ; Exact mapped bytes 73 16: jae 0x58911971
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
        ; Exact mapped bytes 74 26: je 0x58911999
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
        ; Exact mapped bytes E2 DA: loop 0x58911973
        __asm _emit 0xe2
        __asm _emit 0xda
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 5F: jmp 0x589119fd
        __asm _emit 0xeb
        __asm _emit 0x5f
        shr ecx, 3
        ; Exact mapped bytes 73 01: jae 0x589119a4
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0C: jae 0x589119b4
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
        ; Exact mapped bytes 73 16: jae 0x589119ce
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
        ; Exact mapped bytes 74 26: je 0x589119f6
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
        ; Exact mapped bytes E2 DA: loop 0x589119d0
        __asm _emit 0xe2
        __asm _emit 0xda
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 02: jmp 0x589119fd
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov eax, dword ptr [ebp - 38h]
        add dword ptr [ebp - 1ch], eax
        add dword ptr [ebp - 2ch], eax
        add ebx, eax
        dec edx
        ; Exact mapped bytes 0F 85 11 FE FF FF: jne 0x58911820
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 09 23 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], ebx
        mov edi, ebx
        mov edx, dword ptr [ebp + 28h]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F C9 05 00 00: jg 0x58911fee
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 0ffffff00h
        ; Exact mapped bytes 0F 8C FD 18 00 00: jl 0x5891332e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        shr edx, 3
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
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 6C 05 00 00: je 0x58911fcf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C B4 22 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8E 50 05 00 00: jle 0x58911fcd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D 47 05 00 00: jge 0x58911fcd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8F 9B 02 00 00: jg 0x58911d2a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 4B 01 00 00: jle 0x58911be5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 2A: jae 0x58911acf
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x58911af9
        __asm _emit 0x73
        __asm _emit 0x26
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        shr ecx, 1
        ; Exact mapped bytes 73 4A: jae 0x58911b47
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
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
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
        ; Exact mapped bytes 0F 84 82 04 00 00: je 0x58911fcf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x04
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
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
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
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
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
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x58911b4d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EA 03 00 00: jmp 0x58911fcf
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 2A: jae 0x58911c14
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x58911c3e
        __asm _emit 0x73
        __asm _emit 0x26
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        shr ecx, 1
        ; Exact mapped bytes 73 4A: jae 0x58911c8c
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
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
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
        ; Exact mapped bytes 0F 84 3D 03 00 00: je 0x58911fcf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x03
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
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
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
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
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
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x58911c92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A5 02 00 00: jmp 0x58911fcf
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 4E 01 00 00: jle 0x58911e88
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 2A: jae 0x58911d6f
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x58911d99
        __asm _emit 0x73
        __asm _emit 0x26
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        shr ecx, 1
        ; Exact mapped bytes 73 4A: jae 0x58911de7
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
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
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
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x58911e80
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
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
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
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
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
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x58911ded
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x58911fcf
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 2A: jae 0x58911eb7
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x58911ee1
        __asm _emit 0x73
        __asm _emit 0x26
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        shr ecx, 1
        ; Exact mapped bytes 73 4A: jae 0x58911f2f
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
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
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
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x58911fc8
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
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
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
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
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
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x58911f35
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 02: jmp 0x58911fcf
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov edi, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 38h]
        add dword ptr [ebp - 1ch], eax
        add dword ptr [ebp - 2ch], eax
        add edi, eax
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 68 FA FF FF: jne 0x58911a51
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2F 1D 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 100h
        ; Exact mapped bytes 0F 8F 07 18 00 00: jg 0x58913801
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        shr edx, 3
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
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 94 03 00 00: je 0x589123ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C F1 1C 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf1
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8E 78 03 00 00: jle 0x589123b8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D 6F 03 00 00: jge 0x589123b8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8F B3 01 00 00: jg 0x58912205
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E D7 00 00 00: jle 0x58912134
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 2F: jae 0x58912097
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x589120cc
        __asm _emit 0x73
        __asm _emit 0x31
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 E8 02 00 00: je 0x589123ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 7F C3: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
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
        ; Exact mapped bytes 0F 7F CA: movq mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 7F CB: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
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
        ; Exact mapped bytes 75 A3: jne 0x589120d2
        __asm _emit 0x75
        __asm _emit 0xa3
        ; Exact mapped bytes E9 86 02 00 00: jmp 0x589123ba
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 2F: jae 0x58912168
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x5891219d
        __asm _emit 0x73
        __asm _emit 0x31
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 17 02 00 00: je 0x589123ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 7F C3: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
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
        ; Exact mapped bytes 0F 7F CA: movq mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 7F CB: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
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
        ; Exact mapped bytes 75 A3: jne 0x589121a3
        __asm _emit 0x75
        __asm _emit 0xa3
        ; Exact mapped bytes E9 B5 01 00 00: jmp 0x589123ba
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E D6 00 00 00: jle 0x589122eb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 2F: jae 0x5891224f
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x58912284
        __asm _emit 0x73
        __asm _emit 0x31
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 74 5D: je 0x589122e3
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
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 7F C3: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
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
        ; Exact mapped bytes 0F 7F CA: movq mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 7F CB: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
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
        ; Exact mapped bytes 75 A3: jne 0x58912286
        __asm _emit 0x75
        __asm _emit 0xa3
        add esi, dword ptr [ebp - 44h]
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x589123ba
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 2F: jae 0x5891231f
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x58912354
        __asm _emit 0x73
        __asm _emit 0x31
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 74 5D: je 0x589123b3
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
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 7F C3: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
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
        ; Exact mapped bytes 0F 7F CA: movq mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 7F CB: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
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
        ; Exact mapped bytes 75 A3: jne 0x58912356
        __asm _emit 0x75
        __asm _emit 0xa3
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 02: jmp 0x589123ba
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov eax, dword ptr [ebp - 38h]
        mov edi, dword ptr [ebp - 30h]
        add dword ptr [ebp - 1ch], eax
        add dword ptr [ebp - 2ch], eax
        add edi, eax
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 40 FC FF FF: jne 0x58912014
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 44 19 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], ebx
        mov dword ptr [ebp - 34h], edx
        mov edi, ebx
        mov ecx, dword ptr [ebp + 24h]
        mov eax, 100h
        sub eax, ecx
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp + 28h]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F 14 06 00 00: jg 0x58912a0e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        imul ecx, edx
        shr ecx, 8
        mov dword ptr [ebp + 24h], ecx
        ; Exact mapped bytes 0F 6E E1: movd mm4, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe1
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 7F 65 EC: movq qword ptr [ebp - 0x14], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact mapped bytes 0F 6E E8: movd mm5, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe8
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 7F 6D C0: movq qword ptr [ebp - 0x40], mm5
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x6d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 AC 05 00 00: je 0x589129ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C D4 18 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8E 90 05 00 00: jle 0x589129ed
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D 87 05 00 00: jge 0x589129ed
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8F BB 02 00 00: jg 0x5891272a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 5B 01 00 00: jle 0x589125d5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 5A: jae 0x589124df
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x58912530
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
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 84 B9 04 00 00: je 0x589129ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x04
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
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
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
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 C0: pmullw mm4, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x58912536
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1A 04 00 00: jmp 0x589129ef
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 5A: jae 0x58912634
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x58912685
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
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 84 64 03 00 00: je 0x589129ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x03
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
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
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
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 C0: pmullw mm4, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x5891268b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 02 00 00: jmp 0x589129ef
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 5E 01 00 00: jle 0x58912898
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 5A: jae 0x5891279f
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x589127f0
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
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x58912890
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
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
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
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 C0: pmullw mm4, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x589127f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x589129ef
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 5A: jae 0x589128f7
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x58912948
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
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x589129e8
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
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
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
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
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
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 C0: pmullw mm4, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x5891294e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 02: jmp 0x589129ef
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov eax, dword ptr [ebp - 38h]
        mov edi, dword ptr [ebp - 30h]
        add dword ptr [ebp - 1ch], eax
        add dword ptr [ebp - 2ch], eax
        add edi, eax
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 28 FA FF FF: jne 0x58912431
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0F 13 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 24h], ecx
        mov dword ptr [ebp + 28h], edx
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
        ; Exact mapped bytes 0F 7F 45 EC: movq qword ptr [ebp - 0x14], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F 6E C2: movd mm0, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 7F 45 DC: movq qword ptr [ebp - 0x24], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 6E E8: movd mm5, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe8
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 7F 6D C0: movq qword ptr [ebp - 0x40], mm5
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x6d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 B4 08 00 00: je 0x5891330f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C BC 12 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8E 98 08 00 00: jle 0x5891330d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D 8F 08 00 00: jge 0x5891330d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8F 3F 04 00 00: jg 0x58912ec6
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 1D 02 00 00: jle 0x58912caf
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58912b29
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
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 E4 84 A2 58: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 E4 84 A2 58: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x58912baa
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
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 84 5F 07 00 00: je 0x5891330f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x07
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
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 DC: pmullw mm2, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 65 C0: pmullw mm4, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x58912bb0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 60 06 00 00: jmp 0x5891330f
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58912d40
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
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 E4 84 A2 58: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 E4 84 A2 58: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x58912dc1
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
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 84 48 05 00 00: je 0x5891330f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 DC: pmullw mm2, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 65 C0: pmullw mm4, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x58912dc7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 49 04 00 00: jmp 0x5891330f
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 20 02 00 00: jle 0x589130f6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58912f6d
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
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 E4 84 A2 58: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 E4 84 A2 58: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x58912fee
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
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x589130ee
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
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 DC: pmullw mm2, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 65 C0: pmullw mm4, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x58912ff4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 19 02 00 00: jmp 0x5891330f
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58913187
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
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 E4 84 A2 58: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 E4 84 A2 58: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x58913208
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
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x58913308
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
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D C0: pmullw mm1, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 5D C0: pmullw mm3, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 DC: pmullw mm2, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 55 C0: pmullw mm2, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F D5 65 C0: pmullw mm4, qword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xc0
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x5891320e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 02: jmp 0x5891330f
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov eax, dword ptr [ebp - 38h]
        mov edi, dword ptr [ebp - 30h]
        add dword ptr [ebp - 1ch], eax
        add dword ptr [ebp - 2ch], eax
        add edi, eax
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 20 F7 FF FF: jne 0x58912a49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EF 09 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 94 04 00 00: je 0x589137e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C C9 09 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8E 78 04 00 00: jle 0x589137e0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D 6F 04 00 00: jge 0x589137e0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8F 31 02 00 00: jg 0x589135ab
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 18 01 00 00: jle 0x5891349d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 3F: jae 0x589133cf
        __asm _emit 0x73
        __asm _emit 0x3f
        ; Exact mapped bytes 0F 6E 16: movd mm2, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6E 27: movd mm4, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 41: jae 0x58913414
        __asm _emit 0x73
        __asm _emit 0x41
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 C8 03 00 00: je 0x589137e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 75 82: jne 0x5891341a
        __asm _emit 0x75
        __asm _emit 0x82
        ; Exact mapped bytes E9 45 03 00 00: jmp 0x589137e2
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 3F: jae 0x589134e1
        __asm _emit 0x73
        __asm _emit 0x3f
        ; Exact mapped bytes 0F 6E 16: movd mm2, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6E 27: movd mm4, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 41: jae 0x58913526
        __asm _emit 0x73
        __asm _emit 0x41
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 74 7E: je 0x589135a6
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 75 82: jne 0x58913528
        __asm _emit 0x75
        __asm _emit 0x82
        ; Exact mapped bytes E9 37 02 00 00: jmp 0x589137e2
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 17 01 00 00: jle 0x589136d2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 3F: jae 0x58913605
        __asm _emit 0x73
        __asm _emit 0x3f
        ; Exact mapped bytes 0F 6E 16: movd mm2, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6E 27: movd mm4, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 41: jae 0x5891364a
        __asm _emit 0x73
        __asm _emit 0x41
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 74 7E: je 0x589136ca
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 75 82: jne 0x5891364c
        __asm _emit 0x75
        __asm _emit 0x82
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x589137e2
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 3F: jae 0x58913716
        __asm _emit 0x73
        __asm _emit 0x3f
        ; Exact mapped bytes 0F 6E 16: movd mm2, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6E 27: movd mm4, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 41: jae 0x5891375b
        __asm _emit 0x73
        __asm _emit 0x41
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 74 7E: je 0x589137db
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 75 82: jne 0x5891375d
        __asm _emit 0x75
        __asm _emit 0x82
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 02: jmp 0x589137e2
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov eax, dword ptr [ebp - 38h]
        mov edi, dword ptr [ebp - 30h]
        add dword ptr [ebp - 1ch], eax
        add dword ptr [ebp - 2ch], eax
        add edi, eax
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 40 FB FF FF: jne 0x5891333c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1C 05 00 00: jmp 0x58913d1d
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 E0 04 00 00: je 0x58913d01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C F6 04 00 00: jl 0x58913d1d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8E C4 04 00 00: jle 0x58913cff
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D BB 04 00 00: jge 0x58913cff
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8F 55 02 00 00: jg 0x58913aa2
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 28 01 00 00: jle 0x58913980
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 42: jae 0x589138a5
        __asm _emit 0x73
        __asm _emit 0x42
        ; Exact mapped bytes 0F 6E 17: movd mm2, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6E 26: movd mm4, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 44: jae 0x589138ed
        __asm _emit 0x73
        __asm _emit 0x44
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 0E 04 00 00: je 0x58913d01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 57 08: movq mm2, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 66 08: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x589138f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 81 03 00 00: jmp 0x58913d01
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 42: jae 0x589139c7
        __asm _emit 0x73
        __asm _emit 0x42
        ; Exact mapped bytes 0F 6E 17: movd mm2, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6E 26: movd mm4, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 44: jae 0x58913a0f
        __asm _emit 0x73
        __asm _emit 0x44
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x58913a9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 57 08: movq mm2, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 66 08: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x58913a15
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5F 02 00 00: jmp 0x58913d01
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 1ch]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 2B 01 00 00: jle 0x58913bdd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 42: jae 0x58913aff
        __asm _emit 0x73
        __asm _emit 0x42
        ; Exact mapped bytes 0F 6E 17: movd mm2, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6E 26: movd mm4, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 44: jae 0x58913b47
        __asm _emit 0x73
        __asm _emit 0x44
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x58913bd5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 57 08: movq mm2, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 66 08: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x58913b4d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x58913d01
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 42: jae 0x58913c24
        __asm _emit 0x73
        __asm _emit 0x42
        ; Exact mapped bytes 0F 6E 17: movd mm2, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6E 26: movd mm4, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 44: jae 0x58913c6c
        __asm _emit 0x73
        __asm _emit 0x44
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x58913cfa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 57 08: movq mm2, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 66 08: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x58913c72
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 02: jmp 0x58913d01
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov eax, dword ptr [ebp - 38h]
        mov edi, dword ptr [ebp - 30h]
        add dword ptr [ebp - 1ch], eax
        add dword ptr [ebp - 2ch], eax
        add edi, eax
        mov dword ptr [ebp - 30h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 F4 FA FF FF: jne 0x5891380f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 00: jmp 0x58913d1d
        __asm _emit 0xeb
        __asm _emit 0x00
        ; Exact mapped bytes 0F 77: emms
        __asm _emit 0x0f
        __asm _emit 0x77
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 0ch]
        xor ecx, ebp
        ; Exact mapped bytes E8 AE 8E 06 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret 24h
    }
}
