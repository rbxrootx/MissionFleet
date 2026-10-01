// Reconstructed from Ghidra pseudocode and the mapped 2062 Main.dll instruction stream.
// Mapped function-pointer-table slot 0x10176B34 contains 0x10119E00.
// Ghidra shows clipped five-byte run records and packed RGB16 blend paths; see docs/client-rgb16-span-compositor.md.
extern "C" __declspec(naked) void FUN_10119e00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 50h], ecx
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact branch bytes 75 05: jne L_10119E1A
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact branch bytes E9 B0 12 00 00: jmp L_1011B0CA
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
L_10119E1A:
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact branch bytes 0F 8D 8C 12 00 00: jge L_1011B0CA
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact branch bytes 0F 8E 80 12 00 00: jle L_1011B0CA
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact branch bytes 0F 8D 74 12 00 00: jge L_1011B0CA
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact branch bytes 0F 8E 68 12 00 00: jle L_1011B0CA
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov esi, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact branch bytes 7D 03: jge L_10119E94
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 4], ecx
L_10119E94:
        mov ebx, dword ptr [ebp - 20h]
        mov edi, dword ptr [ebp + 10h]
        cmp edi, dword ptr [ebp + 18h]
        ; Exact branch bytes 7D 13: jge L_10119EB2
        __asm _emit 0x7d
        __asm _emit 0x13
        sub edi, dword ptr [ebp + 18h]
        imul edi, dword ptr [ebp - 48h]
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
L_10119EB2:
        mov edx, dword ptr [ebp - 4]
        sub edx, edi
        imul edi, ebx
        add edi, dword ptr [ebp - 38h]
        ; Exact packed/absolute instruction bytes 0F 6E 75 24: movd mm6, dword ptr [ebp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact packed/absolute instruction bytes 0F 62 F6: punpckldq mm6, mm6
        __asm _emit 0x0f
        __asm _emit 0x62
        __asm _emit 0xf6
        ; Exact packed/absolute instruction bytes 0F 7F F7: movq mm7, mm6
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xf7
        ; Exact packed/absolute instruction bytes 0F DB 35 F8 92 1C 10: pand mm6, qword ptr [0x101c92f8]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F DB 3D F0 92 1C 10: pand mm7, qword ptr [0x101c92f0]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 7E 75 24: movd dword ptr [ebp + 0x24], mm6
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact packed/absolute instruction bytes 0F 7E 7D DC: movd dword ptr [ebp - 0x24], mm7
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x7d
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        ; Exact branch bytes 7E 35: jle L_10119F20
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
        mov dword ptr [ebp - 30h], ecx
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
        mov dword ptr [ebp - 34h], 0
        ; Exact branch bytes 7E 3B: jle L_10119F4D
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
        mov dword ptr [ebp - 34h], ecx
        ; Exact branch bytes EB 2D: jmp L_10119F4D
        __asm _emit 0xeb
        __asm _emit 0x2d
L_10119F20:
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
        ; Exact branch bytes 0F 8E 81 08 00 00: jle L_1011A7B9
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        sub eax, ecx
        ; Exact packed/absolute instruction bytes 0F AF 0D B4 CD 1A 10: imul ecx, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [ebp - 34h], ecx
        ; Exact branch bytes EB 00: jmp L_10119F4D
        __asm _emit 0xeb
        __asm _emit 0x00
L_10119F4D:
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
        ; Exact branch bytes 0F 8C D8 02 00 00: jl L_1011A23B
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact branch bytes 75 49: jne L_10119FB2
        __asm _emit 0x75
        __asm _emit 0x49
L_10119F69:
        add esi, dword ptr [ebp - 30h]
        mov ecx, eax
        ; Exact branch bytes 73 00: jae L_10119F70
        __asm _emit 0x73
        __asm _emit 0x00
L_10119F70:
        shr edx, 1
        ; Exact branch bytes 73 02: jae L_10119F76
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact prefixed instruction bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
L_10119F76:
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_10119F7B
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
L_10119F7B:
        shr ecx, 1
        ; Exact branch bytes 73 0E: jae L_10119F8D
        __asm _emit 0x73
        __asm _emit 0x0e
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10119F8D:
        ; Exact branch bytes 74 16: je L_10119FA5
        __asm _emit 0x74
        __asm _emit 0x16
L_10119F8F:
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
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
        ; Exact branch bytes E2 EA: loop L_10119F8F
        __asm _emit 0xe2
        __asm _emit 0xea
L_10119FA5:
        add esi, dword ptr [ebp - 34h]
        add edi, ebx
        dec edx
        ; Exact branch bytes 75 BC: jne L_10119F69
        __asm _emit 0x75
        __asm _emit 0xbc
        ; Exact branch bytes E9 16 11 00 00: jmp L_1011B0C8
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
L_10119FB2:
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 40h], ebx
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp + 2ch], 0
        ; Exact branch bytes 0F 8F 27 01 00 00: jg L_1011A0EC
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x27
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
L_10119FE4:
        add esi, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 3ch]
        shr ecx, 1
        ; Exact branch bytes 73 14: jae L_1011A002
        __asm _emit 0x73
        __asm _emit 0x14
        ; Exact prefixed instruction bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, edx
        shr eax, 8
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact prefixed instruction bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
L_1011A002:
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_1011A032
        __asm _emit 0x73
        __asm _emit 0x2c
        ; Exact prefixed instruction bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact prefixed instruction bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1011A032:
        shr ecx, 1
        ; Exact branch bytes 73 2A: jae L_1011A060
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1011A060:
        shr ecx, 1
        ; Exact branch bytes 73 28: jae L_1011A08C
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
L_1011A08C:
        ; Exact branch bytes 74 4A: je L_1011A0D8
        __asm _emit 0x74
        __asm _emit 0x4a
L_1011A08E:
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
        ; Exact branch bytes E2 B6: loop L_1011A08E
        __asm _emit 0xe2
        __asm _emit 0xb6
L_1011A0D8:
        add esi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 40h]
        dec dword ptr [ebp - 4ch]
        ; Exact branch bytes 0F 85 FD FE FF FF: jne L_10119FE4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 DC 0F 00 00: jmp L_1011B0C8
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
L_1011A0EC:
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
L_1011A106:
        add esi, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 3ch]
        shr ecx, 1
        ; Exact branch bytes 73 1A: jae L_1011A12A
        __asm _emit 0x73
        __asm _emit 0x1a
        ; Exact prefixed instruction bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        mov ebx, eax
        not eax
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, edx
        shr eax, 8
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, ebx
        ; Exact prefixed instruction bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
L_1011A12A:
        shr ecx, 1
        ; Exact branch bytes 73 32: jae L_1011A160
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact prefixed instruction bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact prefixed instruction bytes 66 03 46 FE: add ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0xfe
        ; Exact prefixed instruction bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1011A160:
        shr ecx, 1
        ; Exact branch bytes 73 2F: jae L_1011A193
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1011A193:
        shr ecx, 1
        ; Exact branch bytes 73 31: jae L_1011A1C8
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
L_1011A1C8:
        ; Exact branch bytes 74 5D: je L_1011A227
        __asm _emit 0x74
        __asm _emit 0x5d
L_1011A1CA:
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
        ; Exact branch bytes 75 A3: jne L_1011A1CA
        __asm _emit 0x75
        __asm _emit 0xa3
L_1011A227:
        add esi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 40h]
        dec dword ptr [ebp - 4ch]
        ; Exact branch bytes 0F 85 D0 FE FF FF: jne L_1011A106
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 8D 0E 00 00: jmp L_1011B0C8
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
L_1011A23B:
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 40h], ebx
        mov dword ptr [ebp - 4ch], edx
        mov ecx, dword ptr [ebp + 28h]
        mov eax, 100h
        sub eax, ecx
        mov dword ptr [ebp - 44h], eax
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
        ; Exact branch bytes 0F 8F 1E 02 00 00: jg L_1011A488
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
L_1011A28F:
        add esi, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 3ch]
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_1011A2C5
        __asm _emit 0x73
        __asm _emit 0x2c
        ; Exact prefixed instruction bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, dword ptr [ebp + 28h]
        shr eax, 8
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [edi]
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp - 44h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, ebx
        ; Exact prefixed instruction bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
L_1011A2C5:
        shr ecx, 1
        ; Exact branch bytes 73 5C: jae L_1011A325
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact prefixed instruction bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 44h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 44h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1011A325:
        shr ecx, 1
        ; Exact branch bytes 73 5A: jae L_1011A383
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 44h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 44h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1011A383:
        shr ecx, 1
        ; Exact branch bytes 73 4D: jae L_1011A3D4
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
L_1011A3D4:
        ; Exact branch bytes 0F 84 9A 00 00 00: je L_1011A474
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1011A3DA:
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
        ; Exact branch bytes 0F 85 66 FF FF FF: jne L_1011A3DA
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1011A474:
        add esi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 40h]
        dec dword ptr [ebp - 4ch]
        ; Exact branch bytes 0F 85 0C FE FF FF: jne L_1011A28F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 40 0C 00 00: jmp L_1011B0C8
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
L_1011A488:
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
        ; Exact packed/absolute instruction bytes 0F 7F 45 D4: movq qword ptr [ebp - 0x2c], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xd4
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
L_1011A4B3:
        add esi, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 3ch]
        shr ecx, 1
        ; Exact branch bytes 73 45: jae L_1011A502
        __asm _emit 0x73
        __asm _emit 0x45
        ; Exact prefixed instruction bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        mov edx, eax
        not eax
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, dword ptr [ebp + 2ch]
        shr eax, 8
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, dword ptr [ebp + 28h]
        shr eax, 8
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [edi]
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp - 44h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, ebx
        ; Exact prefixed instruction bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
L_1011A502:
        shr ecx, 1
        ; Exact branch bytes 0F 83 8A 00 00 00: jae L_1011A594
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact prefixed instruction bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, edx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 44h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 44h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1011A594:
        shr ecx, 1
        ; Exact branch bytes 0F 83 88 00 00 00: jae L_1011A624
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
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, edx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 44h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 F8 92 1C 10: and edx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 44h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F8 92 1C 10: and edx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1011A624:
        shr ecx, 1
        ; Exact branch bytes 73 7D: jae L_1011A6A5
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
        ; Exact packed/absolute instruction bytes 0F D5 45 D4: pmullw mm0, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd4
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
        ; Exact packed/absolute instruction bytes 0F D5 4D D4: pmullw mm1, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd4
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
L_1011A6A5:
        ; Exact branch bytes 0F 84 FA 00 00 00: je L_1011A7A5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1011A6AB:
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
        ; Exact packed/absolute instruction bytes 0F D5 45 D4: pmullw mm0, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd4
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
        ; Exact packed/absolute instruction bytes 0F D5 4D D4: pmullw mm1, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd4
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
        ; Exact packed/absolute instruction bytes 0F D5 4D D4: pmullw mm1, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd4
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
        ; Exact packed/absolute instruction bytes 0F D5 55 D4: pmullw mm2, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd4
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
        ; Exact branch bytes 0F 85 06 FF FF FF: jne L_1011A6AB
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1011A7A5:
        add esi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 40h]
        dec dword ptr [ebp - 4ch]
        ; Exact branch bytes 0F 85 FF FC FF FF: jne L_1011A4B3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 0F 09 00 00: jmp L_1011B0C8
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
L_1011A7B9:
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
        ; Exact branch bytes 0F 8C 8A 03 00 00: jl L_1011AB59
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact branch bytes 75 6E: jne L_1011A843
        __asm _emit 0x75
        __asm _emit 0x6e
L_1011A7D5:
        mov ecx, eax
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_1011A7DC
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
L_1011A7DC:
        shr ecx, 1
        ; Exact branch bytes 73 02: jae L_1011A7E2
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact prefixed instruction bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
L_1011A7E2:
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_1011A7E7
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
L_1011A7E7:
        shr ecx, 1
        ; Exact branch bytes 73 0C: jae L_1011A7F7
        __asm _emit 0x73
        __asm _emit 0x0c
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
L_1011A7F7:
        shr ecx, 1
        ; Exact branch bytes 73 16: jae L_1011A811
        __asm _emit 0x73
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
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
L_1011A811:
        ; Exact branch bytes 74 26: je L_1011A839
        __asm _emit 0x74
        __asm _emit 0x26
L_1011A813:
        ; Exact packed/absolute instruction bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 0F 6F 4E 08: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 6F 56 10: movq mm2, qword ptr [esi + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 0F 6F 5E 18: movq mm3, qword ptr [esi + 0x18]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x18
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
        ; Exact branch bytes E2 DA: loop L_1011A813
        __asm _emit 0xe2
        __asm _emit 0xda
L_1011A839:
        add edi, ebx
        dec edx
        ; Exact branch bytes 75 97: jne L_1011A7D5
        __asm _emit 0x75
        __asm _emit 0x97
        ; Exact branch bytes E9 85 08 00 00: jmp L_1011B0C8
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
L_1011A843:
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 40h], ebx
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp + 2ch], 0
        ; Exact branch bytes 0F 8F BA 01 00 00: jg L_1011AA10
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xba
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
L_1011A875:
        mov ecx, dword ptr [ebp - 3ch]
        shr ecx, 1
        ; Exact branch bytes 73 14: jae L_1011A890
        __asm _emit 0x73
        __asm _emit 0x14
        ; Exact prefixed instruction bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, edx
        shr eax, 8
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact prefixed instruction bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
L_1011A890:
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_1011A8C0
        __asm _emit 0x73
        __asm _emit 0x2c
        ; Exact prefixed instruction bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact prefixed instruction bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1011A8C0:
        shr ecx, 1
        ; Exact branch bytes 73 2A: jae L_1011A8EE
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1011A8EE:
        shr ecx, 1
        ; Exact branch bytes 73 26: jae L_1011A918
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
L_1011A918:
        shr ecx, 1
        ; Exact branch bytes 73 4A: jae L_1011A966
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
L_1011A966:
        ; Exact branch bytes 0F 84 93 00 00 00: je L_1011A9FF
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1011A96C:
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
        ; Exact branch bytes 0F 85 6D FF FF FF: jne L_1011A96C
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1011A9FF:
        add edi, dword ptr [ebp - 40h]
        dec dword ptr [ebp - 4ch]
        ; Exact branch bytes 0F 85 6A FE FF FF: jne L_1011A875
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 B8 06 00 00: jmp L_1011B0C8
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
L_1011AA10:
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
L_1011AA2A:
        mov ecx, dword ptr [ebp - 3ch]
        shr ecx, 1
        ; Exact branch bytes 73 1A: jae L_1011AA4B
        __asm _emit 0x73
        __asm _emit 0x1a
        ; Exact prefixed instruction bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        mov ebx, eax
        not eax
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, edx
        shr eax, 8
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, ebx
        ; Exact prefixed instruction bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
L_1011AA4B:
        shr ecx, 1
        ; Exact branch bytes 73 32: jae L_1011AA81
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact prefixed instruction bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact prefixed instruction bytes 66 03 46 FE: add ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0xfe
        ; Exact prefixed instruction bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1011AA81:
        shr ecx, 1
        ; Exact branch bytes 73 2F: jae L_1011AAB4
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1011AAB4:
        shr ecx, 1
        ; Exact branch bytes 73 31: jae L_1011AAE9
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
L_1011AAE9:
        ; Exact branch bytes 74 5D: je L_1011AB48
        __asm _emit 0x74
        __asm _emit 0x5d
L_1011AAEB:
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
        ; Exact branch bytes 75 A3: jne L_1011AAEB
        __asm _emit 0x75
        __asm _emit 0xa3
L_1011AB48:
        add edi, dword ptr [ebp - 40h]
        dec dword ptr [ebp - 4ch]
        ; Exact branch bytes 0F 85 D6 FE FF FF: jne L_1011AA2A
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 6F 05 00 00: jmp L_1011B0C8
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
L_1011AB59:
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 40h], ebx
        mov dword ptr [ebp - 4ch], edx
        mov ecx, dword ptr [ebp + 28h]
        mov eax, 100h
        sub eax, ecx
        mov dword ptr [ebp - 44h], eax
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
        ; Exact branch bytes 0F 8F 18 02 00 00: jg L_1011ADA0
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
L_1011ABAD:
        mov ecx, dword ptr [ebp - 3ch]
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_1011ABE0
        __asm _emit 0x73
        __asm _emit 0x2c
        ; Exact prefixed instruction bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, dword ptr [ebp + 28h]
        shr eax, 8
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [edi]
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp - 44h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, ebx
        ; Exact prefixed instruction bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
L_1011ABE0:
        shr ecx, 1
        ; Exact branch bytes 73 5C: jae L_1011AC40
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact prefixed instruction bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 44h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 44h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1011AC40:
        shr ecx, 1
        ; Exact branch bytes 73 5A: jae L_1011AC9E
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact prefixed instruction bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 44h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 44h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1011AC9E:
        shr ecx, 1
        ; Exact branch bytes 73 4D: jae L_1011ACEF
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
L_1011ACEF:
        ; Exact branch bytes 0F 84 9A 00 00 00: je L_1011AD8F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1011ACF5:
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
        ; Exact branch bytes 0F 85 66 FF FF FF: jne L_1011ACF5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1011AD8F:
        add edi, dword ptr [ebp - 40h]
        dec dword ptr [ebp - 4ch]
        ; Exact branch bytes 0F 85 12 FE FF FF: jne L_1011ABAD
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 28 03 00 00: jmp L_1011B0C8
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_1011ADA0:
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
        ; Exact packed/absolute instruction bytes 0F 7F 45 D4: movq qword ptr [ebp - 0x2c], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xd4
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
L_1011ADCB:
        mov ecx, dword ptr [ebp - 3ch]
        shr ecx, 1
        ; Exact branch bytes 73 45: jae L_1011AE17
        __asm _emit 0x73
        __asm _emit 0x45
        ; Exact prefixed instruction bytes AC: lodsb al, byte ptr [esi]
        __asm _emit 0xac
        mov edx, eax
        not eax
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, dword ptr [ebp + 2ch]
        shr eax, 8
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, dword ptr [ebp + 28h]
        shr eax, 8
        ; Exact packed/absolute instruction bytes 23 05 F0 92 1C 10: and eax, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [edi]
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp - 44h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, ebx
        ; Exact prefixed instruction bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
L_1011AE17:
        shr ecx, 1
        ; Exact branch bytes 0F 83 8A 00 00 00: jae L_1011AEA9
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact prefixed instruction bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, edx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 44h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 44h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1011AEA9:
        shr ecx, 1
        ; Exact branch bytes 0F 83 88 00 00 00: jae L_1011AF39
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
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, edx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 44h]
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 F8 92 1C 10: and edx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 44h]
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F8 92 1C 10: and edx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact prefixed instruction bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1011AF39:
        shr ecx, 1
        ; Exact branch bytes 73 7D: jae L_1011AFBA
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
        ; Exact packed/absolute instruction bytes 0F D5 45 D4: pmullw mm0, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd4
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
        ; Exact packed/absolute instruction bytes 0F D5 4D D4: pmullw mm1, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd4
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
L_1011AFBA:
        ; Exact branch bytes 0F 84 FA 00 00 00: je L_1011B0BA
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1011AFC0:
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
        ; Exact packed/absolute instruction bytes 0F D5 45 D4: pmullw mm0, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd4
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
        ; Exact packed/absolute instruction bytes 0F D5 4D D4: pmullw mm1, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd4
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
        ; Exact packed/absolute instruction bytes 0F D5 4D D4: pmullw mm1, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd4
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
        ; Exact packed/absolute instruction bytes 0F D5 55 D4: pmullw mm2, qword ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd4
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
        ; Exact branch bytes 0F 85 06 FF FF FF: jne L_1011AFC0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1011B0BA:
        add edi, dword ptr [ebp - 40h]
        dec dword ptr [ebp - 4ch]
        ; Exact branch bytes 0F 85 05 FD FF FF: jne L_1011ADCB
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes EB 00: jmp L_1011B0C8
        __asm _emit 0xeb
        __asm _emit 0x00
L_1011B0C8:
        ; Exact packed/absolute instruction bytes 0F 77: emms 
        __asm _emit 0x0f
        __asm _emit 0x77
L_1011B0CA:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 28h
    }
}
