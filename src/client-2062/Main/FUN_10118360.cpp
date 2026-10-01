// Reconstructed from Ghidra pseudocode and the mapped 2062 Main.dll instruction stream.
// Mapped function-pointer-table slot 0x10176B30 contains 0x10118360.
// Ghidra shows clipped five-byte run records and packed RGB16 blend paths; see docs/client-rgb16-span-compositor.md.
extern "C" __declspec(naked) void FUN_10118360() {
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
        ; Exact branch bytes 75 05: jne L_1011837A
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact branch bytes E9 79 1A 00 00: jmp L_10119DF3
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
L_1011837A:
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
        ; Exact branch bytes 0F 8D 55 1A 00 00: jge L_10119DF3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact branch bytes 0F 8E 49 1A 00 00: jle L_10119DF3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x49
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact branch bytes 0F 8D 3D 1A 00 00: jge L_10119DF3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3d
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact branch bytes 0F 8E 31 1A 00 00: jle L_10119DF3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x31
        __asm _emit 0x1a
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
        ; Exact branch bytes 7D 03: jge L_101183F4
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 4], ecx
L_101183F4:
        mov ebx, dword ptr [ebp - 20h]
        mov edi, dword ptr [ebp + 10h]
        cmp edi, dword ptr [ebp + 18h]
        ; Exact branch bytes 7D 13: jge L_10118412
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
L_10118412:
        mov edx, dword ptr [ebp - 4]
        sub edx, edi
        imul edi, ebx
        add edi, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        ; Exact branch bytes 7E 35: jle L_10118460
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
        ; Exact branch bytes 7E 3B: jle L_1011848D
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
        ; Exact branch bytes EB 2D: jmp L_1011848D
        __asm _emit 0xeb
        __asm _emit 0x2d
L_10118460:
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
        ; Exact branch bytes 0F 8E 7D 0C 00 00: jle L_101190F5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7d
        __asm _emit 0x0c
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
        ; Exact branch bytes EB 00: jmp L_1011848D
        __asm _emit 0xeb
        __asm _emit 0x00
L_1011848D:
        ; Exact packed/absolute instruction bytes 0F AF 05 B4 CD 1A 10: imul eax, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        sub ebx, eax
        cmp dword ptr [ebp + 24h], 100h
        ; Exact branch bytes 0F 8C F5 02 00 00: jl L_10118798
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0
        ; Exact branch bytes 75 4C: jne L_101184F5
        __asm _emit 0x75
        __asm _emit 0x4c
L_101184A9:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, eax
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_101184B3
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
L_101184B3:
        shr ecx, 1
        ; Exact branch bytes 73 02: jae L_101184B9
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact prefixed instruction bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
L_101184B9:
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_101184BE
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
L_101184BE:
        shr ecx, 1
        ; Exact branch bytes 73 0E: jae L_101184D0
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
L_101184D0:
        ; Exact branch bytes 74 16: je L_101184E8
        __asm _emit 0x74
        __asm _emit 0x16
L_101184D2:
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
        ; Exact branch bytes E2 EA: loop L_101184D2
        __asm _emit 0xe2
        __asm _emit 0xea
L_101184E8:
        add esi, dword ptr [ebp - 30h]
        add edi, ebx
        dec edx
        ; Exact branch bytes 75 B9: jne L_101184A9
        __asm _emit 0x75
        __asm _emit 0xb9
        ; Exact branch bytes E9 FC 18 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
L_101184F5:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp + 28h], 0
        ; Exact branch bytes 0F 8F 34 01 00 00: jg L_1011863C
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0ffffff00h
        ; Exact branch bytes 0F 8C 01 08 00 00: jl L_10118D16
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 100h
        add edx, dword ptr [ebp + 28h]
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
L_10118534:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 14: jae L_10118552
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
L_10118552:
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_10118582
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
L_10118582:
        shr ecx, 1
        ; Exact branch bytes 73 2A: jae L_101185B0
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
L_101185B0:
        shr ecx, 1
        ; Exact branch bytes 73 28: jae L_101185DC
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
L_101185DC:
        ; Exact branch bytes 74 4A: je L_10118628
        __asm _emit 0x74
        __asm _emit 0x4a
L_101185DE:
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
        ; Exact branch bytes E2 B6: loop L_101185DE
        __asm _emit 0xe2
        __asm _emit 0xb6
L_10118628:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 FD FE FF FF: jne L_10118534
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 B5 17 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
L_1011863C:
        cmp dword ptr [ebp + 28h], 100h
        ; Exact branch bytes 0F 8F CF 08 00 00: jg L_10118F18
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 28h]
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
L_10118663:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 1A: jae L_10118687
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
L_10118687:
        shr ecx, 1
        ; Exact branch bytes 73 32: jae L_101186BD
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
L_101186BD:
        shr ecx, 1
        ; Exact branch bytes 73 2F: jae L_101186F0
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
L_101186F0:
        shr ecx, 1
        ; Exact branch bytes 73 31: jae L_10118725
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
L_10118725:
        ; Exact branch bytes 74 5D: je L_10118784
        __asm _emit 0x74
        __asm _emit 0x5d
L_10118727:
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
        ; Exact branch bytes 75 A3: jne L_10118727
        __asm _emit 0x75
        __asm _emit 0xa3
L_10118784:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 D0 FE FF FF: jne L_10118663
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 59 16 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
L_10118798:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        mov ecx, dword ptr [ebp + 24h]
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
        mov eax, dword ptr [ebp + 28h]
        cmp eax, 0
        ; Exact branch bytes 0F 8F 1E 02 00 00: jg L_101189E5
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 100h
        imul ecx, eax
        shr ecx, 8
        mov dword ptr [ebp + 24h], ecx
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
L_101187EC:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_10118822
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp - 40h]
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
L_10118822:
        shr ecx, 1
        ; Exact branch bytes 73 5C: jae L_10118882
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        imul eax, dword ptr [ebp - 40h]
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
        imul edx, dword ptr [ebp - 40h]
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
L_10118882:
        shr ecx, 1
        ; Exact branch bytes 73 5A: jae L_101188E0
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        imul eax, dword ptr [ebp - 40h]
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
        imul edx, dword ptr [ebp - 40h]
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
L_101188E0:
        shr ecx, 1
        ; Exact branch bytes 73 4D: jae L_10118931
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
L_10118931:
        ; Exact branch bytes 0F 84 9A 00 00 00: je L_101189D1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10118937:
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
        ; Exact branch bytes 0F 85 66 FF FF FF: jne L_10118937
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_101189D1:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 0C FE FF FF: jne L_101187EC
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 0C 14 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
L_101189E5:
        mov dword ptr [ebp + 24h], ecx
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
L_10118A10:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 45: jae L_10118A5F
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp - 40h]
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
L_10118A5F:
        shr ecx, 1
        ; Exact branch bytes 0F 83 8A 00 00 00: jae L_10118AF1
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
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
        imul eax, dword ptr [ebp - 40h]
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
        imul edx, dword ptr [ebp - 40h]
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
L_10118AF1:
        shr ecx, 1
        ; Exact branch bytes 0F 83 88 00 00 00: jae L_10118B81
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
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
        imul eax, dword ptr [ebp - 40h]
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
        imul edx, dword ptr [ebp - 40h]
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
L_10118B81:
        shr ecx, 1
        ; Exact branch bytes 73 7D: jae L_10118C02
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
L_10118C02:
        ; Exact branch bytes 0F 84 FA 00 00 00: je L_10118D02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10118C08:
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
        ; Exact branch bytes 0F 85 06 FF FF FF: jne L_10118C08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10118D02:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 FF FC FF FF: jne L_10118A10
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 DB 10 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
L_10118D16:
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
L_10118D24:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 64: jae L_10118D92
        __asm _emit 0x73
        __asm _emit 0x64
        mov bl, byte ptr [edi]
        xor eax, eax
        ; Exact prefixed instruction bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 23 1D F8 92 1C 10: and ebx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
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
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 23 1D 00 93 1C 10: and ebx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 00 93 1C 10: and edx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 00 93 1C 10: and edx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        mov byte ptr [edi], al
        add esi, 1
        add edi, 1
L_10118D92:
        shr ecx, 1
        ; Exact branch bytes 73 66: jae L_10118DFC
        __asm _emit 0x73
        __asm _emit 0x66
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact prefixed instruction bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 23 1D F8 92 1C 10: and ebx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
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
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 23 1D 00 93 1C 10: and ebx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 00 93 1C 10: and edx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 00 93 1C 10: and edx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        ; Exact prefixed instruction bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        add esi, 2
        add edi, 2
L_10118DFC:
        shr ecx, 1
        ; Exact branch bytes 73 3F: jae L_10118E3F
        __asm _emit 0x73
        __asm _emit 0x3f
        ; Exact packed/absolute instruction bytes 0F 6E 16: movd mm2, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 0F 6E 27: movd mm4, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x27
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_10118E3F:
        shr ecx, 1
        ; Exact branch bytes 73 41: jae L_10118E84
        __asm _emit 0x73
        __asm _emit 0x41
        ; Exact packed/absolute instruction bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10118E84:
        ; Exact branch bytes 74 7E: je L_10118F04
        __asm _emit 0x74
        __asm _emit 0x7e
L_10118E86:
        ; Exact packed/absolute instruction bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 75 82: jne L_10118E86
        __asm _emit 0x75
        __asm _emit 0x82
L_10118F04:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 11 FE FF FF: jne L_10118D24
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 D9 0E 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
L_10118F18:
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
L_10118F26:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 47: jae L_10118F77
        __asm _emit 0x73
        __asm _emit 0x47
        mov bl, byte ptr [edi]
        xor eax, eax
        mov al, byte ptr [esi]
        not ebx
        ; Exact packed/absolute instruction bytes 23 1D F8 92 1C 10: and ebx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
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
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add byte ptr [edi], al
        add esi, 1
        add edi, 1
L_10118F77:
        shr ecx, 1
        ; Exact branch bytes 73 4A: jae L_10118FC5
        __asm _emit 0x73
        __asm _emit 0x4a
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact prefixed instruction bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        not ebx
        ; Exact packed/absolute instruction bytes 23 1D F8 92 1C 10: and ebx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
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
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        ; Exact prefixed instruction bytes 66 01 07: add word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x07
        add esi, 2
        add edi, 2
L_10118FC5:
        shr ecx, 1
        ; Exact branch bytes 73 42: jae L_1011900B
        __asm _emit 0x73
        __asm _emit 0x42
        ; Exact packed/absolute instruction bytes 0F 6E 17: movd mm2, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x17
        ; Exact packed/absolute instruction bytes 0F 6E 26: movd mm4, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x26
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_1011900B:
        shr ecx, 1
        ; Exact branch bytes 73 44: jae L_10119053
        __asm _emit 0x73
        __asm _emit 0x44
        ; Exact packed/absolute instruction bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact packed/absolute instruction bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10119053:
        ; Exact branch bytes 0F 84 88 00 00 00: je L_101190E1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10119059:
        ; Exact packed/absolute instruction bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact packed/absolute instruction bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 6F 57 08: movq mm2, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 6F 66 08: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 0F 85 78 FF FF FF: jne L_10119059
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_101190E1:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 36 FE FF FF: jne L_10118F26
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 FC 0C 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
L_101190F5:
        ; Exact packed/absolute instruction bytes 0F AF 05 B4 CD 1A 10: imul eax, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        sub ebx, eax
        cmp dword ptr [ebp + 24h], 100h
        ; Exact branch bytes 0F 8C A4 03 00 00: jl L_101194AF
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0
        ; Exact branch bytes 75 6E: jne L_1011917F
        __asm _emit 0x75
        __asm _emit 0x6e
L_10119111:
        mov ecx, eax
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_10119118
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
L_10119118:
        shr ecx, 1
        ; Exact branch bytes 73 02: jae L_1011911E
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact prefixed instruction bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
L_1011911E:
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_10119123
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
L_10119123:
        shr ecx, 1
        ; Exact branch bytes 73 0C: jae L_10119133
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
L_10119133:
        shr ecx, 1
        ; Exact branch bytes 73 16: jae L_1011914D
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
L_1011914D:
        ; Exact branch bytes 74 26: je L_10119175
        __asm _emit 0x74
        __asm _emit 0x26
L_1011914F:
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
        ; Exact branch bytes E2 DA: loop L_1011914F
        __asm _emit 0xe2
        __asm _emit 0xda
L_10119175:
        add edi, ebx
        dec edx
        ; Exact branch bytes 75 97: jne L_10119111
        __asm _emit 0x75
        __asm _emit 0x97
        ; Exact branch bytes E9 72 0C 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
L_1011917F:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp + 28h], 0
        ; Exact branch bytes 0F 8F C7 01 00 00: jg L_10119359
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0ffffff00h
        ; Exact branch bytes 0F 8C 82 08 00 00: jl L_10119A21
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 100h
        add edx, dword ptr [ebp + 28h]
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
L_101191BE:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 14: jae L_101191D9
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
L_101191D9:
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_10119209
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
L_10119209:
        shr ecx, 1
        ; Exact branch bytes 73 2A: jae L_10119237
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
L_10119237:
        shr ecx, 1
        ; Exact branch bytes 73 26: jae L_10119261
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
L_10119261:
        shr ecx, 1
        ; Exact branch bytes 73 4A: jae L_101192AF
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
L_101192AF:
        ; Exact branch bytes 0F 84 93 00 00 00: je L_10119348
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101192B5:
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
        ; Exact branch bytes 0F 85 6D FF FF FF: jne L_101192B5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10119348:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 6A FE FF FF: jne L_101191BE
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 98 0A 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
L_10119359:
        cmp dword ptr [ebp + 28h], 100h
        ; Exact branch bytes 0F 8F B7 08 00 00: jg L_10119C1D
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 28h]
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
L_10119380:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 1A: jae L_101193A1
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
L_101193A1:
        shr ecx, 1
        ; Exact branch bytes 73 32: jae L_101193D7
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
L_101193D7:
        shr ecx, 1
        ; Exact branch bytes 73 2F: jae L_1011940A
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
L_1011940A:
        shr ecx, 1
        ; Exact branch bytes 73 31: jae L_1011943F
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
L_1011943F:
        ; Exact branch bytes 74 5D: je L_1011949E
        __asm _emit 0x74
        __asm _emit 0x5d
L_10119441:
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
        ; Exact branch bytes 75 A3: jne L_10119441
        __asm _emit 0x75
        __asm _emit 0xa3
L_1011949E:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 D6 FE FF FF: jne L_10119380
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 42 09 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
L_101194AF:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        mov ecx, dword ptr [ebp + 24h]
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
        mov eax, dword ptr [ebp + 28h]
        cmp eax, 0
        ; Exact branch bytes 0F 8F 18 02 00 00: jg L_101196F6
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 100h
        imul ecx, eax
        shr ecx, 8
        mov dword ptr [ebp + 24h], ecx
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
L_10119503:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_10119536
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp - 40h]
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
L_10119536:
        shr ecx, 1
        ; Exact branch bytes 73 5C: jae L_10119596
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        imul eax, dword ptr [ebp - 40h]
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
        imul edx, dword ptr [ebp - 40h]
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
L_10119596:
        shr ecx, 1
        ; Exact branch bytes 73 5A: jae L_101195F4
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        imul eax, dword ptr [ebp - 40h]
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
        imul edx, dword ptr [ebp - 40h]
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
L_101195F4:
        shr ecx, 1
        ; Exact branch bytes 73 4D: jae L_10119645
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
L_10119645:
        ; Exact branch bytes 0F 84 9A 00 00 00: je L_101196E5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1011964B:
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
        ; Exact branch bytes 0F 85 66 FF FF FF: jne L_1011964B
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_101196E5:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 12 FE FF FF: jne L_10119503
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 FB 06 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
L_101196F6:
        mov dword ptr [ebp + 28h], eax
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
L_10119721:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 45: jae L_1011976D
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp - 40h]
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
L_1011976D:
        shr ecx, 1
        ; Exact branch bytes 0F 83 8A 00 00 00: jae L_101197FF
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
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
        imul eax, dword ptr [ebp - 40h]
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
        imul edx, dword ptr [ebp - 40h]
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
L_101197FF:
        shr ecx, 1
        ; Exact branch bytes 0F 83 88 00 00 00: jae L_1011988F
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
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
        imul eax, dword ptr [ebp - 40h]
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
        imul edx, dword ptr [ebp - 40h]
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
L_1011988F:
        shr ecx, 1
        ; Exact branch bytes 73 7D: jae L_10119910
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
L_10119910:
        ; Exact branch bytes 0F 84 FA 00 00 00: je L_10119A10
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10119916:
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
        ; Exact branch bytes 0F 85 06 FF FF FF: jne L_10119916
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10119A10:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 05 FD FF FF: jne L_10119721
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 D0 03 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_10119A21:
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
L_10119A2F:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 64: jae L_10119A9A
        __asm _emit 0x73
        __asm _emit 0x64
        mov bl, byte ptr [edi]
        xor eax, eax
        ; Exact prefixed instruction bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 23 1D F8 92 1C 10: and ebx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
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
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 23 1D 00 93 1C 10: and ebx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 00 93 1C 10: and edx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 00 93 1C 10: and edx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        mov byte ptr [edi], al
        add esi, 1
        add edi, 1
L_10119A9A:
        shr ecx, 1
        ; Exact branch bytes 73 66: jae L_10119B04
        __asm _emit 0x73
        __asm _emit 0x66
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact prefixed instruction bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact packed/absolute instruction bytes 23 1D F8 92 1C 10: and ebx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
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
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 23 1D 00 93 1C 10: and ebx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact packed/absolute instruction bytes 23 15 00 93 1C 10: and edx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 00 93 1C 10: and edx, dword ptr [0x101c9300]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        ; Exact prefixed instruction bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        add esi, 2
        add edi, 2
L_10119B04:
        shr ecx, 1
        ; Exact branch bytes 73 3F: jae L_10119B47
        __asm _emit 0x73
        __asm _emit 0x3f
        ; Exact packed/absolute instruction bytes 0F 6E 16: movd mm2, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 0F 6E 27: movd mm4, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x27
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_10119B47:
        shr ecx, 1
        ; Exact branch bytes 73 41: jae L_10119B8C
        __asm _emit 0x73
        __asm _emit 0x41
        ; Exact packed/absolute instruction bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10119B8C:
        ; Exact branch bytes 74 7E: je L_10119C0C
        __asm _emit 0x74
        __asm _emit 0x7e
L_10119B8E:
        ; Exact packed/absolute instruction bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact packed/absolute instruction bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact packed/absolute instruction bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact packed/absolute instruction bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact packed/absolute instruction bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 75 82: jne L_10119B8E
        __asm _emit 0x75
        __asm _emit 0x82
L_10119C0C:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 17 FE FF FF: jne L_10119A2F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 D4 01 00 00: jmp L_10119DF1
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10119C1D:
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
L_10119C2B:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact branch bytes 73 47: jae L_10119C79
        __asm _emit 0x73
        __asm _emit 0x47
        mov bl, byte ptr [edi]
        xor eax, eax
        mov al, byte ptr [esi]
        not ebx
        ; Exact packed/absolute instruction bytes 23 1D F8 92 1C 10: and ebx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
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
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add byte ptr [edi], al
        add esi, 1
        add edi, 1
L_10119C79:
        shr ecx, 1
        ; Exact branch bytes 73 4A: jae L_10119CC7
        __asm _emit 0x73
        __asm _emit 0x4a
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact prefixed instruction bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        not ebx
        ; Exact packed/absolute instruction bytes 23 1D F8 92 1C 10: and ebx, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact packed/absolute instruction bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact prefixed instruction bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact prefixed instruction bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact packed/absolute instruction bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
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
        imul edx, ebx
        shr edx, 8
        ; Exact packed/absolute instruction bytes 23 15 F0 92 1C 10: and edx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        ; Exact prefixed instruction bytes 66 01 07: add word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x07
        add esi, 2
        add edi, 2
L_10119CC7:
        shr ecx, 1
        ; Exact branch bytes 73 42: jae L_10119D0D
        __asm _emit 0x73
        __asm _emit 0x42
        ; Exact packed/absolute instruction bytes 0F 6E 17: movd mm2, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x17
        ; Exact packed/absolute instruction bytes 0F 6E 26: movd mm4, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x26
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_10119D0D:
        shr ecx, 1
        ; Exact branch bytes 73 44: jae L_10119D55
        __asm _emit 0x73
        __asm _emit 0x44
        ; Exact packed/absolute instruction bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact packed/absolute instruction bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10119D55:
        ; Exact branch bytes 0F 84 88 00 00 00: je L_10119DE3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10119D5B:
        ; Exact packed/absolute instruction bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact packed/absolute instruction bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact packed/absolute instruction bytes 0F 6F 57 08: movq mm2, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F 6F 66 08: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F 71 D3 08: psrlw mm3, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x08
        ; Exact packed/absolute instruction bytes 0F D5 C3: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
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
        ; Exact packed/absolute instruction bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact packed/absolute instruction bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact packed/absolute instruction bytes 0F D5 CB: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
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
        ; Exact packed/absolute instruction bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact packed/absolute instruction bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact branch bytes 0F 85 78 FF FF FF: jne L_10119D5B
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10119DE3:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 85 3C FE FF FF: jne L_10119C2B
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes EB 00: jmp L_10119DF1
        __asm _emit 0xeb
        __asm _emit 0x00
L_10119DF1:
        ; Exact packed/absolute instruction bytes 0F 77: emms 
        __asm _emit 0x0f
        __asm _emit 0x77
L_10119DF3:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 24h
    }
}
