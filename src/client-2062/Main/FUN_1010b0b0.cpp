// Reconstructed from Ghidra pseudocode and the mapped 2062 Main.dll instruction stream.
// Mapped function-pointer-table slot 0x10176B10 contains 0x1010B0B0.
// Ghidra shows clipped five-byte run records and packed RGB16 blend paths; see docs/client-rgb16-span-compositor.md.
extern "C" __declspec(naked) void FUN_1010b0b0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4ch], ecx
        mov eax, dword ptr [ebp - 4ch]
        cmp dword ptr [eax + 0ch], 0
        ; Exact branch bytes 75 05: jne L_1010B0CA
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact branch bytes E9 B8 11 00 00: jmp L_1010C282
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
L_1010B0CA:
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact branch bytes 0F 8D 94 11 00 00: jge L_1010C282
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact branch bytes 0F 8E 88 11 00 00: jle L_1010C282
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact branch bytes 0F 8D 7C 11 00 00: jge L_1010C282
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact branch bytes 0F 8E 70 11 00 00: jle L_1010C282
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov esi, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact branch bytes 7D 03: jge L_1010B144
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 4], ecx
L_1010B144:
        mov ebx, dword ptr [ebp - 20h]
        mov edi, dword ptr [ebp + 10h]
        cmp edi, dword ptr [ebp + 18h]
        ; Exact branch bytes 7D 13: jge L_1010B162
        __asm _emit 0x7d
        __asm _emit 0x13
        sub edi, dword ptr [ebp + 18h]
        imul edi, dword ptr [ebp - 44h]
        ; Exact packed/absolute instruction bytes 0F AF 3D B4 CD 1A 10: imul edi, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        sub esi, edi
        mov edi, dword ptr [ebp + 18h]
L_1010B162:
        mov edx, dword ptr [ebp - 4]
        sub edx, edi
        imul edi, ebx
        add edi, dword ptr [ebp - 34h]
        ; Exact packed/absolute instruction bytes 0F 6E 6D 24: movd mm5, dword ptr [ebp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x6d
        __asm _emit 0x24
        ; Exact packed/absolute instruction bytes 0F 62 ED: punpckldq mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x62
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 7F EE: movq mm6, mm5
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xee
        ; Exact packed/absolute instruction bytes 0F 7F EF: movq mm7, mm5
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xef
        ; Exact packed/absolute instruction bytes 0F DB 35 08 93 1C 10: pand mm6, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 2D 10 93 1C 10: pand mm5, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 3D 00 93 1C 10: pand mm7, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D6 08: psrlw mm6, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        ; Exact branch bytes 7E 35: jle L_1010B1D6
        __asm _emit 0x7e
        __asm _emit 0x35
        sub eax, ecx
        ; Exact packed/absolute instruction bytes 0F AF 0D B4 CD 1A 10: imul ecx, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [ebp - 2ch], ecx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact packed/absolute instruction bytes 0F AF 0D B4 CD 1A 10: imul ecx, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add edi, ecx
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 30h], 0
        ; Exact branch bytes 7E 3B: jle L_1010B203
        __asm _emit 0x7e
        __asm _emit 0x3b
        sub eax, ecx
        ; Exact packed/absolute instruction bytes 0F AF 0D B4 CD 1A 10: imul ecx, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [ebp - 30h], ecx
        ; Exact branch bytes EB 2D: jmp L_1010B203
        __asm _emit 0xeb
        __asm _emit 0x2d
L_1010B1D6:
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact packed/absolute instruction bytes 0F AF 0D B4 CD 1A 10: imul ecx, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add edi, ecx
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp + 1ch]
        ; Exact branch bytes 0F 8E 88 07 00 00: jle L_1010B976
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        sub eax, ecx
        ; Exact packed/absolute instruction bytes 0F AF 0D B4 CD 1A 10: imul ecx, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [ebp - 30h], ecx
        ; Exact branch bytes EB 00: jmp L_1010B203
        __asm _emit 0xeb
        __asm _emit 0x00
L_1010B203:
        ; Exact packed/absolute instruction bytes 0F AF 05 B4 CD 1A 10: imul eax, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        sub ebx, eax
        cmp dword ptr [ebp + 28h], 100h
        ; Exact branch bytes 0F 8C 48 03 00 00: jl L_1010B561
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact branch bytes 0F 85 4E 01 00 00: jne L_1010B371
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1010B223:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, eax
        shr ecx, 3
        ; Exact branch bytes 73 49: jae L_1010B276
        __asm _emit 0x73
        __asm _emit 0x49
        ; Exact packed/absolute instruction bytes 0F 6E 06: movd mm0, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_1010B276:
        shr ecx, 1
        ; Exact branch bytes 73 4B: jae L_1010B2C5
        __asm _emit 0x73
        __asm _emit 0x4b
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1010B2C5:
        ; Exact branch bytes 0F 84 95 00 00 00: je L_1010B360
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010B2CB:
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 0F 85 6B FF FF FF: jne L_1010B2CB
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1010B360:
        add esi, dword ptr [ebp - 30h]
        add edi, ebx
        dec edx
        ; Exact branch bytes 0F 85 B7 FE FF FF: jne L_1010B223
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 0F 0F 00 00: jmp L_1010C280
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
L_1010B371:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp + 2ch], 0
        ; Exact branch bytes 0F 8F E1 00 00 00: jg L_1010B465
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 100h
        add edx, dword ptr [ebp + 2ch]
        ; Exact packed/absolute instruction bytes 0F 6E EA: movd mm5, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xea
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 6F 35 F8 92 1C 10: movq mm6, qword ptr [0x101c92f8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 6F 3D F0 92 1C 10: movq mm7, qword ptr [0x101c92f0]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
L_1010B3A3:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 3
        ; Exact branch bytes 73 2A: jae L_1010B3D8
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1010B3D8:
        shr ecx, 1
        ; Exact branch bytes 73 28: jae L_1010B404
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1010B404:
        ; Exact branch bytes 74 4B: je L_1010B451
        __asm _emit 0x74
        __asm _emit 0x4b
L_1010B406:
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 75 B5: jne L_1010B406
        __asm _emit 0x75
        __asm _emit 0xb5
L_1010B451:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 43 FF FF FF: jne L_1010B3A3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 1B 0E 00 00: jmp L_1010C280
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
L_1010B465:
        mov edx, dword ptr [ebp + 2ch]
        ; Exact packed/absolute instruction bytes 0F 6E EA: movd mm5, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xea
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 6F 35 F8 92 1C 10: movq mm6, qword ptr [0x101c92f8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 6F 3D F0 92 1C 10: movq mm7, qword ptr [0x101c92f0]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
L_1010B47F:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 3
        ; Exact branch bytes 73 2F: jae L_1010B4B9
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1010B4B9:
        shr ecx, 1
        ; Exact branch bytes 73 31: jae L_1010B4EE
        __asm _emit 0x73
        __asm _emit 0x31
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1010B4EE:
        ; Exact branch bytes 74 5D: je L_1010B54D
        __asm _emit 0x74
        __asm _emit 0x5d
L_1010B4F0:
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F 7F C3: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F DF DF: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact packed/absolute instruction bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F CA: movq mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F 7F CB: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact packed/absolute instruction bytes 0F DF DF: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact packed/absolute instruction bytes 0F FC CA: paddb mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 75 A3: jne L_1010B4F0
        __asm _emit 0x75
        __asm _emit 0xa3
L_1010B54D:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 23 FF FF FF: jne L_1010B47F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 1F 0D 00 00: jmp L_1010C280
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
L_1010B561:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        mov ecx, dword ptr [ebp + 28h]
        mov eax, 100h
        sub eax, ecx
        mov dword ptr [ebp - 40h], eax
        ; Exact packed/absolute instruction bytes 0F 6E F0: movd mm6, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xf0
        ; Exact packed/absolute instruction bytes 0F 61 F6: punpcklwd mm6, mm6
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xf6
        ; Exact packed/absolute instruction bytes 0F 61 F6: punpcklwd mm6, mm6
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xf6
        ; Exact packed/absolute instruction bytes 0F 7F 75 EC: movq qword ptr [ebp - 0x14], mm6
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [ebp + 2ch]
        cmp eax, 0
        ; Exact branch bytes 0F 8F 8F 01 00 00: jg L_1010B71F
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 100h
        imul ecx, eax
        shr ecx, 8
        mov dword ptr [ebp + 28h], ecx
        ; Exact packed/absolute instruction bytes 0F 6E E9: movd mm5, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe9
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 6F 35 10 93 1C 10: movq mm6, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 6F 3D 08 93 1C 10: movq mm7, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1010B5B5:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 3
        ; Exact branch bytes 73 5A: jae L_1010B61A
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 40h]
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 08 93 1C 10: and edx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 08 93 1C 10: and edx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1010B61A:
        shr ecx, 1
        ; Exact branch bytes 73 4D: jae L_1010B66B
        __asm _emit 0x73
        __asm _emit 0x4d
        ; Exact packed/absolute instruction bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact packed/absolute instruction bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact packed/absolute instruction bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc8
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1010B66B:
        ; Exact branch bytes 0F 84 9A 00 00 00: je L_1010B70B
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010B671:
        ; Exact packed/absolute instruction bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact packed/absolute instruction bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact packed/absolute instruction bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc8
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 5D EC: pmullw mm3, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact packed/absolute instruction bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact packed/absolute instruction bytes 0F D5 65 EC: pmullw mm4, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D4 08: psrlw mm4, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact packed/absolute instruction bytes 0F FC D3: paddb mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xd3
        ; Exact packed/absolute instruction bytes 0F FC D4: paddb mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xd4
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 7F 57 08: movq qword ptr [edi + 8], mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x57
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 0F 85 66 FF FF FF: jne L_1010B671
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1010B70B:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 9B FE FF FF: jne L_1010B5B5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 61 0B 00 00: jmp L_1010C280
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
L_1010B71F:
        mov dword ptr [ebp + 28h], ecx
        ; Exact packed/absolute instruction bytes 0F 6E C1: movd mm0, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact packed/absolute instruction bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact packed/absolute instruction bytes 0F 7F 45 E4: movq qword ptr [ebp - 0x1c], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 6E C0: movd mm0, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact packed/absolute instruction bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact packed/absolute instruction bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact packed/absolute instruction bytes 0F 7F 45 D8: movq qword ptr [ebp - 0x28], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F 6F 35 F8 92 1C 10: movq mm6, qword ptr [0x101c92f8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 6F 3D F0 92 1C 10: movq mm7, qword ptr [0x101c92f0]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
L_1010B74A:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 3
        ; Exact branch bytes 0F 83 88 00 00 00: jae L_1010B7E1
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, edx
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 40h]
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 10 93 1C 10: and edx, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 10 93 1C 10: and edx, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1010B7E1:
        shr ecx, 1
        ; Exact branch bytes 73 7D: jae L_1010B862
        __asm _emit 0x73
        __asm _emit 0x7d
        ; Exact packed/absolute instruction bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 0F 6F 1F: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 45 D8: pmullw mm0, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F FD C1: paddw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 5D EC: pmullw mm3, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F FD C3: paddw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1010B862:
        ; Exact branch bytes 0F 84 FA 00 00 00: je L_1010B962
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010B868:
        ; Exact packed/absolute instruction bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 0F 6F 1F: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 45 D8: pmullw mm0, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F FD C1: paddw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 5D EC: pmullw mm3, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F FD C3: paddw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact packed/absolute instruction bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F FD CB: paddw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xcb
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact packed/absolute instruction bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 55 D8: pmullw mm2, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F FD D3: paddw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xd3
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 55 E4: pmullw mm2, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact packed/absolute instruction bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact packed/absolute instruction bytes 0F D5 65 EC: pmullw mm4, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D4 08: psrlw mm4, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact packed/absolute instruction bytes 0F FD CC: paddw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xcc
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 0F 85 06 FF FF FF: jne L_1010B868
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1010B962:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 D9 FD FF FF: jne L_1010B74A
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 0A 09 00 00: jmp L_1010C280
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
L_1010B976:
        ; Exact packed/absolute instruction bytes 0F AF 05 B4 CD 1A 10: imul eax, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        sub ebx, eax
        cmp dword ptr [ebp + 28h], 100h
        ; Exact branch bytes 0F 8C EE 04 00 00: jl L_1010BE7A
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact branch bytes 0F 85 68 02 00 00: jne L_1010BBFE
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_1010B996:
        mov ecx, eax
        shr ecx, 3
        ; Exact branch bytes 73 49: jae L_1010B9E6
        __asm _emit 0x73
        __asm _emit 0x49
        ; Exact packed/absolute instruction bytes 0F 6E 06: movd mm0, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_1010B9E6:
        shr ecx, 1
        ; Exact branch bytes 73 49: jae L_1010BA33
        __asm _emit 0x73
        __asm _emit 0x49
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
L_1010BA33:
        shr ecx, 1
        ; Exact branch bytes 0F 83 90 00 00 00: jae L_1010BACB
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
L_1010BACB:
        ; Exact branch bytes 0F 84 1F 01 00 00: je L_1010BBF0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1010BAD1:
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 6F 46 10: movq mm0, qword ptr [esi + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 47 10: movq qword ptr [edi + 0x10], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 6F 46 18: movq mm0, qword ptr [esi + 0x18]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x18
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB 05 10 93 1C 10: pand mm0, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB 0D 08 93 1C 10: pand mm1, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 15 00 93 1C 10: pand mm2, qword ptr [0x101c9300]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 47 18: movq qword ptr [edi + 0x18], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact branch bytes 0F 85 E1 FE FF FF: jne L_1010BAD1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1010BBF0:
        add edi, ebx
        dec edx
        ; Exact branch bytes 0F 85 9D FD FF FF: jne L_1010B996
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 82 06 00 00: jmp L_1010C280
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
L_1010BBFE:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp + 2ch], 0
        ; Exact branch bytes 0F 8F 73 01 00 00: jg L_1010BD84
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 100h
        add edx, dword ptr [ebp + 2ch]
        ; Exact packed/absolute instruction bytes 0F 6E EA: movd mm5, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xea
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 6F 35 10 93 1C 10: movq mm6, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 6F 3D 08 93 1C 10: movq mm7, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1010BC30:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 3
        ; Exact branch bytes 73 2A: jae L_1010BC62
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1010BC62:
        shr ecx, 1
        ; Exact branch bytes 73 26: jae L_1010BC8C
        __asm _emit 0x73
        __asm _emit 0x26
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
L_1010BC8C:
        shr ecx, 1
        ; Exact branch bytes 73 4A: jae L_1010BCDA
        __asm _emit 0x73
        __asm _emit 0x4a
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
L_1010BCDA:
        ; Exact branch bytes 0F 84 93 00 00 00: je L_1010BD73
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010BCE0:
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 6F 5E 10: movq mm3, qword ptr [esi + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 6F 66 18: movq mm4, qword ptr [esi + 0x18]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x18
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact packed/absolute instruction bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact packed/absolute instruction bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact packed/absolute instruction bytes 0F D5 E5: pmullw mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xe5
        ; Exact packed/absolute instruction bytes 0F 71 D4 08: psrlw mm4, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB DC: por mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xdc
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F 57 10: movq qword ptr [edi + 0x10], mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 7F 5F 18: movq qword ptr [edi + 0x18], mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact branch bytes 0F 85 6D FF FF FF: jne L_1010BCE0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1010BD73:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 B1 FE FF FF: jne L_1010BC30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 FC 04 00 00: jmp L_1010C280
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_1010BD84:
        mov edx, dword ptr [ebp + 2ch]
        ; Exact packed/absolute instruction bytes 0F 6E EA: movd mm5, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xea
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 6F 35 10 93 1C 10: movq mm6, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 6F 3D 08 93 1C 10: movq mm7, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1010BD9E:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 3
        ; Exact branch bytes 73 2F: jae L_1010BDD5
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1010BDD5:
        shr ecx, 1
        ; Exact branch bytes 73 31: jae L_1010BE0A
        __asm _emit 0x73
        __asm _emit 0x31
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1010BE0A:
        ; Exact branch bytes 74 5D: je L_1010BE69
        __asm _emit 0x74
        __asm _emit 0x5d
L_1010BE0C:
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F 7F C3: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F DF DF: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact packed/absolute instruction bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F CA: movq mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F 7F CB: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact packed/absolute instruction bytes 0F DF DF: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact packed/absolute instruction bytes 0F FC CA: paddb mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 75 A3: jne L_1010BE0C
        __asm _emit 0x75
        __asm _emit 0xa3
L_1010BE69:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 29 FF FF FF: jne L_1010BD9E
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 06 04 00 00: jmp L_1010C280
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_1010BE7A:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        mov ecx, dword ptr [ebp + 28h]
        mov eax, 100h
        sub eax, ecx
        mov dword ptr [ebp - 40h], eax
        ; Exact packed/absolute instruction bytes 0F 6E E0: movd mm4, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe0
        ; Exact packed/absolute instruction bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 7F 65 EC: movq qword ptr [ebp - 0x14], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xec
        mov eax, dword ptr [ebp + 2ch]
        cmp eax, 0
        ; Exact branch bytes 0F 8F 89 01 00 00: jg L_1010C032
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 100h
        imul ecx, eax
        shr ecx, 8
        mov dword ptr [ebp + 28h], ecx
        ; Exact packed/absolute instruction bytes 0F 6E E9: movd mm5, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe9
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 6F 35 10 93 1C 10: movq mm6, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 6F 3D 08 93 1C 10: movq mm7, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1010BECE:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 3
        ; Exact branch bytes 73 5A: jae L_1010BF30
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 40h]
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 08 93 1C 10: and edx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 08 93 1C 10: and edx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1010BF30:
        shr ecx, 1
        ; Exact branch bytes 73 4D: jae L_1010BF81
        __asm _emit 0x73
        __asm _emit 0x4d
        ; Exact packed/absolute instruction bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact packed/absolute instruction bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact packed/absolute instruction bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc8
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1010BF81:
        ; Exact branch bytes 0F 84 9A 00 00 00: je L_1010C021
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010BF87:
        ; Exact packed/absolute instruction bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact packed/absolute instruction bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact packed/absolute instruction bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc8
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F FC C1: paddb mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F FC C2: paddb mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact packed/absolute instruction bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 DD: pmullw mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdd
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F EB D3: por mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 5D EC: pmullw mm3, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact packed/absolute instruction bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact packed/absolute instruction bytes 0F D5 65 EC: pmullw mm4, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D4 08: psrlw mm4, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact packed/absolute instruction bytes 0F FC D3: paddb mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xd3
        ; Exact packed/absolute instruction bytes 0F FC D4: paddb mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xd4
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 7F 57 08: movq qword ptr [edi + 8], mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x57
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 0F 85 66 FF FF FF: jne L_1010BF87
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1010C021:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 A1 FE FF FF: jne L_1010BECE
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 4E 02 00 00: jmp L_1010C280
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_1010C032:
        mov dword ptr [ebp + 2ch], eax
        ; Exact packed/absolute instruction bytes 0F 6E C1: movd mm0, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact packed/absolute instruction bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact packed/absolute instruction bytes 0F 7F 45 E4: movq qword ptr [ebp - 0x1c], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 6E C0: movd mm0, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact packed/absolute instruction bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact packed/absolute instruction bytes 0F 61 C0: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact packed/absolute instruction bytes 0F 7F 45 D8: movq qword ptr [ebp - 0x28], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F 6F 35 10 93 1C 10: movq mm6, qword ptr [0x101c9310]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 6F 3D 08 93 1C 10: movq mm7, qword ptr [0x101c9308]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1010C05D:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 3
        ; Exact branch bytes 0F 83 88 00 00 00: jae L_1010C0F1
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, edx
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D 08 93 1C 10: and ebx, dword ptr [0x101c9308]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 40h]
        ; Exact packed/absolute instruction bytes 23 05 10 93 1C 10: and eax, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 10 93 1C 10: and edx, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 10 93 1C 10: and edx, dword ptr [0x101c9310]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1010C0F1:
        shr ecx, 1
        ; Exact branch bytes 73 7D: jae L_1010C172
        __asm _emit 0x73
        __asm _emit 0x7d
        ; Exact packed/absolute instruction bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 0F 6F 1F: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 45 D8: pmullw mm0, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F FD C1: paddw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 5D EC: pmullw mm3, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F FD C3: paddw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1010C172:
        ; Exact branch bytes 0F 84 FA 00 00 00: je L_1010C272
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010C178:
        ; Exact packed/absolute instruction bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 0F 6F 1F: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DF C6: pandn mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 45 D8: pmullw mm0, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F FD C1: paddw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc1
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 5D EC: pmullw mm3, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F FD C3: paddw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact packed/absolute instruction bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F FD CB: paddw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xcb
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact packed/absolute instruction bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact packed/absolute instruction bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 55 D8: pmullw mm2, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F FD D3: paddw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xd3
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F D5 55 E4: pmullw mm2, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact packed/absolute instruction bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact packed/absolute instruction bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact packed/absolute instruction bytes 0F FD CA: paddw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xca
        ; Exact packed/absolute instruction bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact packed/absolute instruction bytes 0F D5 65 EC: pmullw mm4, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact packed/absolute instruction bytes 0F 71 D4 08: psrlw mm4, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact packed/absolute instruction bytes 0F FD CC: paddw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xcc
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 7F 4F 08: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 0F 85 06 FF FF FF: jne L_1010C178
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1010C272:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 DF FD FF FF: jne L_1010C05D
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes EB 00: jmp L_1010C280
        __asm _emit 0xeb
        __asm _emit 0x00
L_1010C280:
        ; Exact packed/absolute instruction bytes 0F 77: emms 
        __asm _emit 0x0f
        __asm _emit 0x77
L_1010C282:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 28h
    }
}
