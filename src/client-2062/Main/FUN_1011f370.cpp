// Reconstructed from Ghidra pseudocode and the mapped 2062 Main.dll instruction stream.
// Mapped function-pointer-table slot 0x10176B40 contains 0x1011F370.
// Ghidra shows clipped five-byte run records and packed RGB16 blend paths; see docs/client-rgb16-span-compositor.md.
extern "C" __declspec(naked) void FUN_1011f370() {
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
        ; Exact branch bytes 75 05: jne L_1011F38A
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact branch bytes E9 14 2E 00 00: jmp L_1012219E
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
L_1011F38A:
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
        ; Exact branch bytes 0F 8D F0 2D 00 00: jge L_1012219E
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact branch bytes 0F 8E E4 2D 00 00: jle L_1012219E
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact branch bytes 0F 8D D8 2D 00 00: jge L_1012219E
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact branch bytes 0F 8E CC 2D 00 00: jle L_1012219E
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov esi, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact branch bytes 7D 03: jge L_1011F404
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 4], ecx
L_1011F404:
        mov ebx, dword ptr [ebp + 10h]
        cmp ebx, dword ptr [ebp + 18h]
        ; Exact branch bytes 7D 25: jge L_1011F431
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 18h]
        sub ecx, ebx
L_1011F411:
        movzx eax, word ptr [esi]
        add esi, 2
        ; Exact prefixed instruction bytes 66 3D FF FF: cmp ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes 74 0F: je L_1011F42C
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact branch bytes 0F 8C 79 2D 00 00: jl L_1012219C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x79
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx eax, word ptr [esi]
        add esi, 2
        add esi, eax
L_1011F42C:
        ; Exact branch bytes E2 E3: loop L_1011F411
        __asm _emit 0xe2
        __asm _emit 0xe3
        mov ebx, dword ptr [ebp + 18h]
L_1011F431:
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 20h]
        ; Exact branch bytes 7C 03: jl L_1011F43C
        __asm _emit 0x7c
        __asm _emit 0x03
        mov edx, dword ptr [ebp + 20h]
L_1011F43C:
        sub edx, ebx
        mov dword ptr [ebp - 44h], edx
        imul ebx, dword ptr [ebp - 20h]
        add ebx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp + 14h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact branch bytes 0F 8F C6 09 00 00: jg L_1011FE1A
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact branch bytes 0F 8C BA 09 00 00: jl L_1011FE1A
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact packed/absolute instruction bytes 0F AF 0D B4 CD 1A 10: imul ecx, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add ebx, ecx
        cmp dword ptr [ebp + 28h], 100h
        ; Exact branch bytes 0F 8C EB 03 00 00: jl L_1011F864
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact branch bytes 0F 85 8E 00 00 00: jne L_1011F511
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1011F483:
        mov edi, ebx
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact prefixed instruction bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact branch bytes 74 6F: je L_1011F502
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact branch bytes 0F 8C 03 2D 00 00: jl L_1012219C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_1011F4A5
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
L_1011F4A5:
        shr ecx, 1
        ; Exact branch bytes 73 02: jae L_1011F4AB
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact prefixed instruction bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
L_1011F4AB:
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_1011F4B0
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
L_1011F4B0:
        shr ecx, 1
        ; Exact branch bytes 73 0C: jae L_1011F4C0
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
L_1011F4C0:
        shr ecx, 1
        ; Exact branch bytes 73 16: jae L_1011F4DA
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
L_1011F4DA:
        ; Exact branch bytes 74 26: je L_1011F502
        __asm _emit 0x74
        __asm _emit 0x26
L_1011F4DC:
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
        ; Exact branch bytes E2 DA: loop L_1011F4DC
        __asm _emit 0xe2
        __asm _emit 0xda
L_1011F502:
        add ebx, dword ptr [ebp - 20h]
        dec edx
        ; Exact branch bytes 0F 85 77 FF FF FF: jne L_1011F483
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 8B 2C 00 00: jmp L_1012219C
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
L_1011F511:
        mov dword ptr [ebp - 38h], ebx
        mov edi, ebx
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact branch bytes 0F 8F DA 01 00 00: jg L_1011F6FC
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
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
L_1011F53F:
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact prefixed instruction bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact branch bytes 0F 84 94 01 00 00: je L_1011F6E5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact branch bytes 0F 8C 45 2C 00 00: jl L_1012219C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 1
        ; Exact branch bytes 73 14: jae L_1011F576
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
L_1011F576:
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_1011F5A6
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
L_1011F5A6:
        shr ecx, 1
        ; Exact branch bytes 73 2A: jae L_1011F5D4
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
L_1011F5D4:
        shr ecx, 1
        ; Exact branch bytes 73 26: jae L_1011F5FE
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
L_1011F5FE:
        shr ecx, 1
        ; Exact branch bytes 73 4A: jae L_1011F64C
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
L_1011F64C:
        ; Exact branch bytes 0F 84 93 00 00 00: je L_1011F6E5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1011F652:
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
        ; Exact branch bytes 0F 85 6D FF FF FF: jne L_1011F652
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1011F6E5:
        mov edi, dword ptr [ebp - 38h]
        add edi, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 38h], edi
        dec dword ptr [ebp - 44h]
        ; Exact branch bytes 0F 85 48 FE FF FF: jne L_1011F53F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 A0 2A 00 00: jmp L_1012219C
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
L_1011F6FC:
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
L_1011F713:
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact prefixed instruction bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact branch bytes 0F 84 28 01 00 00: je L_1011F84D
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact branch bytes 0F 8C 71 2A 00 00: jl L_1012219C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x71
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 1
        ; Exact branch bytes 73 1A: jae L_1011F750
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
L_1011F750:
        shr ecx, 1
        ; Exact branch bytes 73 32: jae L_1011F786
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
L_1011F786:
        shr ecx, 1
        ; Exact branch bytes 73 2F: jae L_1011F7B9
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
L_1011F7B9:
        shr ecx, 1
        ; Exact branch bytes 73 31: jae L_1011F7EE
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
L_1011F7EE:
        ; Exact branch bytes 74 5D: je L_1011F84D
        __asm _emit 0x74
        __asm _emit 0x5d
L_1011F7F0:
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
        ; Exact branch bytes 75 A3: jne L_1011F7F0
        __asm _emit 0x75
        __asm _emit 0xa3
L_1011F84D:
        mov edi, dword ptr [ebp - 38h]
        add edi, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 38h], edi
        dec dword ptr [ebp - 44h]
        ; Exact branch bytes 0F 85 B4 FE FF FF: jne L_1011F713
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 38 29 00 00: jmp L_1012219C
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
L_1011F864:
        mov dword ptr [ebp - 38h], ebx
        mov edi, ebx
        mov ecx, dword ptr [ebp + 28h]
        mov eax, 100h
        sub eax, ecx
        mov dword ptr [ebp - 3ch], eax
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
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact branch bytes 0F 8F 3B 02 00 00: jg L_1011FACA
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        imul ecx, edx
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
L_1011F8B5:
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact prefixed instruction bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact branch bytes 0F 84 EC 01 00 00: je L_1011FAB3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact branch bytes 0F 8C CF 28 00 00: jl L_1012219C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcf
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_1011F904
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
        imul ebx, dword ptr [ebp - 3ch]
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
L_1011F904:
        shr ecx, 1
        ; Exact branch bytes 73 5C: jae L_1011F964
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_1011F964:
        shr ecx, 1
        ; Exact branch bytes 73 5A: jae L_1011F9C2
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_1011F9C2:
        shr ecx, 1
        ; Exact branch bytes 73 4D: jae L_1011FA13
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
L_1011FA13:
        ; Exact branch bytes 0F 84 9A 00 00 00: je L_1011FAB3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1011FA19:
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
        ; Exact branch bytes 0F 85 66 FF FF FF: jne L_1011FA19
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1011FAB3:
        mov edi, dword ptr [ebp - 38h]
        add edi, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 38h], edi
        dec dword ptr [ebp - 44h]
        ; Exact branch bytes 0F 85 F0 FD FF FF: jne L_1011F8B5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 D2 26 00 00: jmp L_1012219C
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
L_1011FACA:
        mov dword ptr [ebp + 28h], ecx
        mov dword ptr [ebp + 2ch], edx
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
        ; Exact packed/absolute instruction bytes 0F 6E C2: movd mm0, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc2
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
L_1011FAF8:
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact prefixed instruction bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact branch bytes 0F 84 F9 02 00 00: je L_1011FE03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact branch bytes 0F 8C 8C 26 00 00: jl L_1012219C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8c
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 1
        ; Exact branch bytes 73 45: jae L_1011FB60
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
        imul ebx, dword ptr [ebp - 3ch]
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
L_1011FB60:
        shr ecx, 1
        ; Exact branch bytes 0F 83 8A 00 00 00: jae L_1011FBF2
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_1011FBF2:
        shr ecx, 1
        ; Exact branch bytes 0F 83 88 00 00 00: jae L_1011FC82
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_1011FC82:
        shr ecx, 1
        ; Exact branch bytes 73 7D: jae L_1011FD03
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
L_1011FD03:
        ; Exact branch bytes 0F 84 FA 00 00 00: je L_1011FE03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1011FD09:
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
        ; Exact branch bytes 0F 85 06 FF FF FF: jne L_1011FD09
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1011FE03:
        mov edi, dword ptr [ebp - 38h]
        add edi, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 38h], edi
        dec dword ptr [ebp - 44h]
        ; Exact branch bytes 0F 85 E3 FC FF FF: jne L_1011FAF8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 82 23 00 00: jmp L_1012219C
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
L_1011FE1A:
        mov dword ptr [ebp - 48h], ebx
        mov dword ptr [ebp - 30h], ebx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact packed/absolute instruction bytes 0F AF 0D B4 CD 1A 10: imul ecx, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add dword ptr [ebp - 48h], ecx
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact packed/absolute instruction bytes 0F AF 0D B4 CD 1A 10: imul ecx, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add dword ptr [ebp - 30h], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact packed/absolute instruction bytes 0F AF 0D B4 CD 1A 10: imul ecx, dword ptr [0x101acdb4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add ebx, ecx
        cmp dword ptr [ebp + 28h], 100h
        ; Exact branch bytes 0F 8C 53 0E 00 00: jl L_10120CA6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x53
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact branch bytes 0F 85 1C 02 00 00: jne L_10120079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_1011FE5D:
        mov edi, ebx
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact prefixed instruction bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact branch bytes 0F 84 F1 01 00 00: je L_10120062
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact branch bytes 0F 8C 25 23 00 00: jl L_1012219C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x25
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact prefixed instruction bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 8E D5 01 00 00: jle L_10120060
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 30h]
        ; Exact branch bytes 0F 8D CC 01 00 00: jge L_10120060
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 30h]
        ; Exact branch bytes 0F 8F E3 00 00 00: jg L_1011FF80
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        sub eax, edi
        ; Exact branch bytes 7E 71: jle L_1011FF15
        __asm _emit 0x7e
        __asm _emit 0x71
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_1011FEAF
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
L_1011FEAF:
        shr ecx, 1
        ; Exact branch bytes 73 02: jae L_1011FEB5
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact prefixed instruction bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
L_1011FEB5:
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_1011FEBA
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
L_1011FEBA:
        shr ecx, 1
        ; Exact branch bytes 73 0C: jae L_1011FECA
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
L_1011FECA:
        shr ecx, 1
        ; Exact branch bytes 73 16: jae L_1011FEE4
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
L_1011FEE4:
        ; Exact branch bytes 0F 84 78 01 00 00: je L_10120062
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1011FEEA:
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
        ; Exact branch bytes E2 DA: loop L_1011FEEA
        __asm _emit 0xe2
        __asm _emit 0xda
        ; Exact branch bytes E9 4D 01 00 00: jmp L_10120062
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1011FF15:
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_1011FF1A
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
L_1011FF1A:
        shr ecx, 1
        ; Exact branch bytes 73 02: jae L_1011FF20
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact prefixed instruction bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
L_1011FF20:
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_1011FF25
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
L_1011FF25:
        shr ecx, 1
        ; Exact branch bytes 73 0C: jae L_1011FF35
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
L_1011FF35:
        shr ecx, 1
        ; Exact branch bytes 73 16: jae L_1011FF4F
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
L_1011FF4F:
        ; Exact branch bytes 0F 84 0D 01 00 00: je L_10120062
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1011FF55:
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
        ; Exact branch bytes E2 DA: loop L_1011FF55
        __asm _emit 0xe2
        __asm _emit 0xda
        ; Exact branch bytes E9 E2 00 00 00: jmp L_10120062
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1011FF80:
        sub ecx, eax
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 48h]
        sub eax, edi
        ; Exact branch bytes 7E 6D: jle L_1011FFF9
        __asm _emit 0x7e
        __asm _emit 0x6d
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_1011FF97
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
L_1011FF97:
        shr ecx, 1
        ; Exact branch bytes 73 02: jae L_1011FF9D
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact prefixed instruction bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
L_1011FF9D:
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_1011FFA2
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
L_1011FFA2:
        shr ecx, 1
        ; Exact branch bytes 73 0C: jae L_1011FFB2
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
L_1011FFB2:
        shr ecx, 1
        ; Exact branch bytes 73 16: jae L_1011FFCC
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
L_1011FFCC:
        ; Exact branch bytes 74 26: je L_1011FFF4
        __asm _emit 0x74
        __asm _emit 0x26
L_1011FFCE:
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
        ; Exact branch bytes E2 DA: loop L_1011FFCE
        __asm _emit 0xe2
        __asm _emit 0xda
L_1011FFF4:
        add esi, dword ptr [ebp - 40h]
        ; Exact branch bytes EB 69: jmp L_10120062
        __asm _emit 0xeb
        __asm _emit 0x69
L_1011FFF9:
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_1011FFFE
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
L_1011FFFE:
        shr ecx, 1
        ; Exact branch bytes 73 02: jae L_10120004
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact prefixed instruction bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
L_10120004:
        shr ecx, 1
        ; Exact branch bytes 73 01: jae L_10120009
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact prefixed instruction bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
L_10120009:
        shr ecx, 1
        ; Exact branch bytes 73 0C: jae L_10120019
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
L_10120019:
        shr ecx, 1
        ; Exact branch bytes 73 16: jae L_10120033
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
L_10120033:
        ; Exact branch bytes 74 26: je L_1012005B
        __asm _emit 0x74
        __asm _emit 0x26
L_10120035:
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
        ; Exact branch bytes E2 DA: loop L_10120035
        __asm _emit 0xe2
        __asm _emit 0xda
L_1012005B:
        add esi, dword ptr [ebp - 40h]
        ; Exact branch bytes EB 02: jmp L_10120062
        __asm _emit 0xeb
        __asm _emit 0x02
L_10120060:
        add esi, ecx
L_10120062:
        mov eax, dword ptr [ebp - 20h]
        add dword ptr [ebp - 48h], eax
        add dword ptr [ebp - 30h], eax
        add ebx, eax
        dec edx
        ; Exact branch bytes 0F 85 E9 FD FF FF: jne L_1011FE5D
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 23 21 00 00: jmp L_1012219C
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
L_10120079:
        mov dword ptr [ebp - 38h], ebx
        mov edi, ebx
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact branch bytes 0F 8F D9 06 00 00: jg L_10120763
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xd9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        shr edx, 3
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
L_101200AA:
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact prefixed instruction bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact branch bytes 0F 84 88 06 00 00: je L_10120744
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact branch bytes 0F 8C DA 20 00 00: jl L_1012219C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xda
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact prefixed instruction bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 8E 6C 06 00 00: jle L_10120742
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 30h]
        ; Exact branch bytes 0F 8D 63 06 00 00: jge L_10120742
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 30h]
        ; Exact branch bytes 0F 8F 29 03 00 00: jg L_10120411
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        sub eax, edi
        ; Exact branch bytes 0F 8E 92 01 00 00: jle L_10120285
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 1
        ; Exact branch bytes 73 14: jae L_10120111
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
L_10120111:
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_10120141
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
L_10120141:
        shr ecx, 1
        ; Exact branch bytes 73 2A: jae L_1012016F
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
L_1012016F:
        shr ecx, 1
        ; Exact branch bytes 73 26: jae L_10120199
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
L_10120199:
        shr ecx, 1
        ; Exact branch bytes 73 4A: jae L_101201E7
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
L_101201E7:
        ; Exact branch bytes 0F 84 57 05 00 00: je L_10120744
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
L_101201ED:
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
        ; Exact branch bytes 0F 85 6D FF FF FF: jne L_101201ED
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 BF 04 00 00: jmp L_10120744
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_10120285:
        shr ecx, 1
        ; Exact branch bytes 73 14: jae L_1012029D
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
L_1012029D:
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_101202CD
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
L_101202CD:
        shr ecx, 1
        ; Exact branch bytes 73 2A: jae L_101202FB
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
L_101202FB:
        shr ecx, 1
        ; Exact branch bytes 73 26: jae L_10120325
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
L_10120325:
        shr ecx, 1
        ; Exact branch bytes 73 4A: jae L_10120373
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
L_10120373:
        ; Exact branch bytes 0F 84 CB 03 00 00: je L_10120744
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_10120379:
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
        ; Exact branch bytes 0F 85 6D FF FF FF: jne L_10120379
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 33 03 00 00: jmp L_10120744
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_10120411:
        sub ecx, eax
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 48h]
        sub eax, edi
        ; Exact branch bytes 0F 8E 95 01 00 00: jle L_101205B6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 1
        ; Exact branch bytes 73 14: jae L_1012043F
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
L_1012043F:
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_1012046F
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
L_1012046F:
        shr ecx, 1
        ; Exact branch bytes 73 2A: jae L_1012049D
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
L_1012049D:
        shr ecx, 1
        ; Exact branch bytes 73 26: jae L_101204C7
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
L_101204C7:
        shr ecx, 1
        ; Exact branch bytes 73 4A: jae L_10120515
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
L_10120515:
        ; Exact branch bytes 0F 84 93 00 00 00: je L_101205AE
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1012051B:
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
        ; Exact branch bytes 0F 85 6D FF FF FF: jne L_1012051B
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_101205AE:
        add esi, dword ptr [ebp - 40h]
        ; Exact branch bytes E9 8E 01 00 00: jmp L_10120744
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_101205B6:
        shr ecx, 1
        ; Exact branch bytes 73 14: jae L_101205CE
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
L_101205CE:
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_101205FE
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
L_101205FE:
        shr ecx, 1
        ; Exact branch bytes 73 2A: jae L_1012062C
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
L_1012062C:
        shr ecx, 1
        ; Exact branch bytes 73 26: jae L_10120656
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
L_10120656:
        shr ecx, 1
        ; Exact branch bytes 73 4A: jae L_101206A4
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
L_101206A4:
        ; Exact branch bytes 0F 84 93 00 00 00: je L_1012073D
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101206AA:
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
        ; Exact branch bytes 0F 85 6D FF FF FF: jne L_101206AA
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1012073D:
        add esi, dword ptr [ebp - 40h]
        ; Exact branch bytes EB 02: jmp L_10120744
        __asm _emit 0xeb
        __asm _emit 0x02
L_10120742:
        add esi, ecx
L_10120744:
        mov edi, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 20h]
        add dword ptr [ebp - 48h], eax
        add dword ptr [ebp - 30h], eax
        add edi, eax
        mov dword ptr [ebp - 38h], edi
        dec dword ptr [ebp - 44h]
        ; Exact branch bytes 0F 85 4C F9 FF FF: jne L_101200AA
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 39 1A 00 00: jmp L_1012219C
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
L_10120763:
        shr edx, 3
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
L_1012077D:
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact prefixed instruction bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact branch bytes 0F 84 F8 04 00 00: je L_10120C87
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact branch bytes 0F 8C 07 1A 00 00: jl L_1012219C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact prefixed instruction bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 8E DC 04 00 00: jle L_10120C85
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 30h]
        ; Exact branch bytes 0F 8D D3 04 00 00: jge L_10120C85
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 30h]
        ; Exact branch bytes 0F 8F 59 02 00 00: jg L_10120A14
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        sub eax, edi
        ; Exact branch bytes 0F 8E 2A 01 00 00: jle L_101208F0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 1
        ; Exact branch bytes 73 1A: jae L_101207EA
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
L_101207EA:
        shr ecx, 1
        ; Exact branch bytes 73 32: jae L_10120820
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
L_10120820:
        shr ecx, 1
        ; Exact branch bytes 73 2F: jae L_10120853
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
L_10120853:
        shr ecx, 1
        ; Exact branch bytes 73 31: jae L_10120888
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
L_10120888:
        ; Exact branch bytes 0F 84 F9 03 00 00: je L_10120C87
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_1012088E:
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
        ; Exact branch bytes 75 A3: jne L_1012088E
        __asm _emit 0x75
        __asm _emit 0xa3
        ; Exact branch bytes E9 97 03 00 00: jmp L_10120C87
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_101208F0:
        shr ecx, 1
        ; Exact branch bytes 73 1A: jae L_1012090E
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
L_1012090E:
        shr ecx, 1
        ; Exact branch bytes 73 32: jae L_10120944
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
L_10120944:
        shr ecx, 1
        ; Exact branch bytes 73 2F: jae L_10120977
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
L_10120977:
        shr ecx, 1
        ; Exact branch bytes 73 31: jae L_101209AC
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
L_101209AC:
        ; Exact branch bytes 0F 84 D5 02 00 00: je L_10120C87
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_101209B2:
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
        ; Exact branch bytes 75 A3: jne L_101209B2
        __asm _emit 0x75
        __asm _emit 0xa3
        ; Exact branch bytes E9 73 02 00 00: jmp L_10120C87
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10120A14:
        sub ecx, eax
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 48h]
        sub eax, edi
        ; Exact branch bytes 0F 8E 29 01 00 00: jle L_10120B4D
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 1
        ; Exact branch bytes 73 1A: jae L_10120A48
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
L_10120A48:
        shr ecx, 1
        ; Exact branch bytes 73 32: jae L_10120A7E
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
L_10120A7E:
        shr ecx, 1
        ; Exact branch bytes 73 2F: jae L_10120AB1
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
L_10120AB1:
        shr ecx, 1
        ; Exact branch bytes 73 31: jae L_10120AE6
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
L_10120AE6:
        ; Exact branch bytes 74 5D: je L_10120B45
        __asm _emit 0x74
        __asm _emit 0x5d
L_10120AE8:
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
        ; Exact branch bytes 75 A3: jne L_10120AE8
        __asm _emit 0x75
        __asm _emit 0xa3
L_10120B45:
        add esi, dword ptr [ebp - 0ch]
        ; Exact branch bytes E9 3A 01 00 00: jmp L_10120C87
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10120B4D:
        shr ecx, 1
        ; Exact branch bytes 73 32: jae L_10120B83
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
L_10120B83:
        shr ecx, 1
        ; Exact branch bytes 73 32: jae L_10120BB9
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
L_10120BB9:
        shr ecx, 1
        ; Exact branch bytes 73 2F: jae L_10120BEC
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
L_10120BEC:
        shr ecx, 1
        ; Exact branch bytes 73 31: jae L_10120C21
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
L_10120C21:
        ; Exact branch bytes 74 5D: je L_10120C80
        __asm _emit 0x74
        __asm _emit 0x5d
L_10120C23:
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
        ; Exact branch bytes 75 A3: jne L_10120C23
        __asm _emit 0x75
        __asm _emit 0xa3
L_10120C80:
        add esi, dword ptr [ebp - 40h]
        ; Exact branch bytes EB 02: jmp L_10120C87
        __asm _emit 0xeb
        __asm _emit 0x02
L_10120C85:
        add esi, ecx
L_10120C87:
        mov eax, dword ptr [ebp - 20h]
        mov edi, dword ptr [ebp - 38h]
        add dword ptr [ebp - 48h], eax
        add dword ptr [ebp - 30h], eax
        add edi, eax
        mov dword ptr [ebp - 38h], edi
        dec dword ptr [ebp - 44h]
        ; Exact branch bytes 0F 85 DC FA FF FF: jne L_1012077D
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 F6 14 00 00: jmp L_1012219C
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
L_10120CA6:
        mov dword ptr [ebp - 38h], ebx
        mov dword ptr [ebp - 44h], edx
        mov edi, ebx
        mov ecx, dword ptr [ebp + 28h]
        mov eax, 100h
        sub eax, ecx
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact branch bytes 0F 8F 50 08 00 00: jg L_10121517
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        imul ecx, edx
        shr ecx, 8
        mov dword ptr [ebp + 28h], ecx
        ; Exact packed/absolute instruction bytes 0F 6E E1: movd mm4, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe1
        ; Exact packed/absolute instruction bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 7F 65 E4: movq qword ptr [ebp - 0x1c], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact packed/absolute instruction bytes 0F 6E E8: movd mm5, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe8
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 7F 6D EC: movq qword ptr [ebp - 0x14], mm5
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x6d
        __asm _emit 0xec
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
L_10120CFE:
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact prefixed instruction bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact branch bytes 0F 84 E8 07 00 00: je L_101214F8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact branch bytes 0F 8C 86 14 00 00: jl L_1012219C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact prefixed instruction bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 8E CC 07 00 00: jle L_101214F6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 30h]
        ; Exact branch bytes 0F 8D C3 07 00 00: jge L_101214F6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 30h]
        ; Exact branch bytes 0F 8F D9 03 00 00: jg L_10121115
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        sub eax, edi
        ; Exact branch bytes 0F 8E EA 01 00 00: jle L_10120F31
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_10120D7D
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
        imul ebx, dword ptr [ebp - 3ch]
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
L_10120D7D:
        shr ecx, 1
        ; Exact branch bytes 73 5C: jae L_10120DDD
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_10120DDD:
        shr ecx, 1
        ; Exact branch bytes 73 5A: jae L_10120E3B
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_10120E3B:
        shr ecx, 1
        ; Exact branch bytes 73 4D: jae L_10120E8C
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
L_10120E8C:
        ; Exact branch bytes 0F 84 66 06 00 00: je L_101214F8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
L_10120E92:
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
        ; Exact branch bytes 0F 85 66 FF FF FF: jne L_10120E92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 C7 05 00 00: jmp L_101214F8
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
L_10120F31:
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_10120F61
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
        imul ebx, dword ptr [ebp - 3ch]
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
L_10120F61:
        shr ecx, 1
        ; Exact branch bytes 73 5C: jae L_10120FC1
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_10120FC1:
        shr ecx, 1
        ; Exact branch bytes 73 5A: jae L_1012101F
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_1012101F:
        shr ecx, 1
        ; Exact branch bytes 73 4D: jae L_10121070
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
L_10121070:
        ; Exact branch bytes 0F 84 82 04 00 00: je L_101214F8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_10121076:
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
        ; Exact branch bytes 0F 85 66 FF FF FF: jne L_10121076
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 E3 03 00 00: jmp L_101214F8
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_10121115:
        sub ecx, eax
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 48h]
        sub eax, edi
        ; Exact branch bytes 0F 8E ED 01 00 00: jle L_10121312
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_1012115B
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
        imul ebx, dword ptr [ebp - 3ch]
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
L_1012115B:
        shr ecx, 1
        ; Exact branch bytes 73 5C: jae L_101211BB
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_101211BB:
        shr ecx, 1
        ; Exact branch bytes 73 5A: jae L_10121219
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_10121219:
        shr ecx, 1
        ; Exact branch bytes 73 4D: jae L_1012126A
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
L_1012126A:
        ; Exact branch bytes 0F 84 9A 00 00 00: je L_1012130A
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10121270:
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
        ; Exact branch bytes 0F 85 66 FF FF FF: jne L_10121270
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1012130A:
        add esi, dword ptr [ebp - 40h]
        ; Exact branch bytes E9 E6 01 00 00: jmp L_101214F8
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10121312:
        shr ecx, 1
        ; Exact branch bytes 73 2C: jae L_10121342
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
        imul ebx, dword ptr [ebp - 3ch]
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
L_10121342:
        shr ecx, 1
        ; Exact branch bytes 73 5C: jae L_101213A2
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_101213A2:
        shr ecx, 1
        ; Exact branch bytes 73 5A: jae L_10121400
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_10121400:
        shr ecx, 1
        ; Exact branch bytes 73 4D: jae L_10121451
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
L_10121451:
        ; Exact branch bytes 0F 84 9A 00 00 00: je L_101214F1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10121457:
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
        ; Exact branch bytes 0F 85 66 FF FF FF: jne L_10121457
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_101214F1:
        add esi, dword ptr [ebp - 40h]
        ; Exact branch bytes EB 02: jmp L_101214F8
        __asm _emit 0xeb
        __asm _emit 0x02
L_101214F6:
        add esi, ecx
L_101214F8:
        mov eax, dword ptr [ebp - 20h]
        mov edi, dword ptr [ebp - 38h]
        add dword ptr [ebp - 48h], eax
        add dword ptr [ebp - 30h], eax
        add edi, eax
        mov dword ptr [ebp - 38h], edi
        dec dword ptr [ebp - 44h]
        ; Exact branch bytes 0F 85 EC F7 FF FF: jne L_10120CFE
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 85 0C 00 00: jmp L_1012219C
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
L_10121517:
        mov dword ptr [ebp + 28h], ecx
        mov dword ptr [ebp + 2ch], edx
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
        ; Exact packed/absolute instruction bytes 0F 6E C2: movd mm0, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc2
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
        ; Exact packed/absolute instruction bytes 0F 6E E8: movd mm5, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe8
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact packed/absolute instruction bytes 0F 7F 6D EC: movq qword ptr [ebp - 0x14], mm5
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x6d
        __asm _emit 0xec
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
L_10121552:
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact prefixed instruction bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact branch bytes 0F 84 1C 0C 00 00: je L_10122180
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact branch bytes 0F 8C 32 0C 00 00: jl L_1012219C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact prefixed instruction bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 48h]
        ; Exact branch bytes 0F 8E 00 0C 00 00: jle L_1012217E
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 30h]
        ; Exact branch bytes 0F 8D F7 0B 00 00: jge L_1012217E
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 30h]
        ; Exact branch bytes 0F 8F F3 05 00 00: jg L_10121B83
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        sub eax, edi
        ; Exact branch bytes 0F 8E F7 02 00 00: jle L_10121892
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 1
        ; Exact branch bytes 73 45: jae L_101215EA
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
        imul ebx, dword ptr [ebp - 3ch]
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
L_101215EA:
        shr ecx, 1
        ; Exact branch bytes 0F 83 8A 00 00 00: jae L_1012167C
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_1012167C:
        shr ecx, 1
        ; Exact branch bytes 0F 83 88 00 00 00: jae L_1012170C
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_1012170C:
        shr ecx, 1
        ; Exact branch bytes 73 7D: jae L_1012178D
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
L_1012178D:
        ; Exact branch bytes 0F 84 ED 09 00 00: je L_10122180
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
L_10121793:
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
        ; Exact branch bytes 0F 85 06 FF FF FF: jne L_10121793
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 EE 08 00 00: jmp L_10122180
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
L_10121892:
        shr ecx, 1
        ; Exact branch bytes 73 45: jae L_101218DB
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
        imul ebx, dword ptr [ebp - 3ch]
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
L_101218DB:
        shr ecx, 1
        ; Exact branch bytes 0F 83 8A 00 00 00: jae L_1012196D
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_1012196D:
        shr ecx, 1
        ; Exact branch bytes 0F 83 88 00 00 00: jae L_101219FD
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_101219FD:
        shr ecx, 1
        ; Exact branch bytes 73 7D: jae L_10121A7E
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
L_10121A7E:
        ; Exact branch bytes 0F 84 FC 06 00 00: je L_10122180
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
L_10121A84:
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
        ; Exact branch bytes 0F 85 06 FF FF FF: jne L_10121A84
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes E9 FD 05 00 00: jmp L_10122180
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
L_10121B83:
        sub ecx, eax
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 48h]
        sub eax, edi
        ; Exact branch bytes 0F 8E FA 02 00 00: jle L_10121E8D
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 1
        ; Exact branch bytes 73 45: jae L_10121BE2
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
        imul ebx, dword ptr [ebp - 3ch]
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
L_10121BE2:
        shr ecx, 1
        ; Exact branch bytes 0F 83 8A 00 00 00: jae L_10121C74
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_10121C74:
        shr ecx, 1
        ; Exact branch bytes 0F 83 88 00 00 00: jae L_10121D04
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_10121D04:
        shr ecx, 1
        ; Exact branch bytes 73 7D: jae L_10121D85
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
L_10121D85:
        ; Exact branch bytes 0F 84 FA 00 00 00: je L_10121E85
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10121D8B:
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
        ; Exact branch bytes 0F 85 06 FF FF FF: jne L_10121D8B
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10121E85:
        add esi, dword ptr [ebp - 40h]
        ; Exact branch bytes E9 F3 02 00 00: jmp L_10122180
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10121E8D:
        shr ecx, 1
        ; Exact branch bytes 73 45: jae L_10121ED6
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
        imul ebx, dword ptr [ebp - 3ch]
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
L_10121ED6:
        shr ecx, 1
        ; Exact branch bytes 0F 83 8A 00 00 00: jae L_10121F68
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_10121F68:
        shr ecx, 1
        ; Exact branch bytes 0F 83 88 00 00 00: jae L_10121FF8
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
        imul eax, dword ptr [ebp - 3ch]
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
        imul edx, dword ptr [ebp - 3ch]
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
L_10121FF8:
        shr ecx, 1
        ; Exact branch bytes 73 7D: jae L_10122079
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
L_10122079:
        ; Exact branch bytes 0F 84 FA 00 00 00: je L_10122179
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1012207F:
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
        ; Exact branch bytes 0F 85 06 FF FF FF: jne L_1012207F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10122179:
        add esi, dword ptr [ebp - 40h]
        ; Exact branch bytes EB 02: jmp L_10122180
        __asm _emit 0xeb
        __asm _emit 0x02
L_1012217E:
        add esi, ecx
L_10122180:
        mov eax, dword ptr [ebp - 20h]
        mov edi, dword ptr [ebp - 38h]
        add dword ptr [ebp - 48h], eax
        add dword ptr [ebp - 30h], eax
        add edi, eax
        mov dword ptr [ebp - 38h], edi
        dec dword ptr [ebp - 44h]
        ; Exact branch bytes 0F 85 B8 F3 FF FF: jne L_10121552
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact branch bytes EB 00: jmp L_1012219C
        __asm _emit 0xeb
        __asm _emit 0x00
L_1012219C:
        ; Exact packed/absolute instruction bytes 0F 77: emms 
        __asm _emit 0x0f
        __asm _emit 0x77
L_1012219E:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 28h
    }
}
