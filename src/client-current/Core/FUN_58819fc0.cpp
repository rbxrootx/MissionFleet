// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58819FC0 .. +0x435E bytes.
extern "C" __declspec(naked) void FUN_58819fc0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
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
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x58819fe4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 27 43 00 00: jmp 0x5881e30b
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F 8D 03 43 00 00: jge 0x5881e30b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F 8E F7 42 00 00: jle 0x5881e30b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 0F 8D EB 42 00 00: jge 0x5881e30b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xeb
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 8E DF 42 00 00: jle 0x5881e30b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xdf
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 1E C7 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x1e
        __asm _emit 0xc7
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 20 C7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x20
        __asm _emit 0xc7
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 30h], ecx
        mov esi, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 7D 03: jge 0x5881a059
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 40h], ecx
        mov ebx, dword ptr [ebp + 10h]
        cmp ebx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7D 26: jge 0x5881a087
        __asm _emit 0x7d
        __asm _emit 0x26
        sub ebx, dword ptr [ebp + 18h]
        movzx ecx, word ptr [esi]
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881a078
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EC: jmp 0x5881a064
        __asm _emit 0xeb
        __asm _emit 0xec
        ; Exact mapped bytes 0F 8C 8B 42 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        inc ebx
        ; Exact mapped bytes 75 E0: jne 0x5881a064
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ebx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 40h]
        sub edx, ebx
        imul ebx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        add ebx, ecx
        add ebx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 0F 8F 0F 0E 00 00: jg 0x5881aec1
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x0f
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        sub ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 0F 8C FC 0D 00 00: jl 0x5881aec1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 24h], 100h
        ; Exact mapped bytes 0F 8C 0A 04 00 00: jl 0x5881a4dc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x5881a16e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov edi, ebx
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 6B: jle 0x5881a157
        __asm _emit 0x7e
        __asm _emit 0x6b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x5881a0f8
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
        shr ecx, 1
        ; Exact mapped bytes 73 02: jae 0x5881a0fe
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x5881a103
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0C: jae 0x5881a113
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
        ; Exact mapped bytes 73 16: jae 0x5881a12d
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
        ; Exact mapped bytes 74 B2: je 0x5881a0e1
        __asm _emit 0x74
        __asm _emit 0xb2
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
        ; Exact mapped bytes E2 DA: loop 0x5881a12f
        __asm _emit 0xe2
        __asm _emit 0xda
        ; Exact mapped bytes EB 8A: jmp 0x5881a0e1
        __asm _emit 0xeb
        __asm _emit 0x8a
        ; Exact mapped bytes 0F 8C AC 41 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        add ebx, eax
        dec edx
        ; Exact mapped bytes 0F 85 76 FF FF FF: jne 0x5881a0df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B 41 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], ebx
        mov dword ptr [ebp - 2ch], edx
        mov edi, ebx
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
        mov edx, dword ptr [ebp + 28h]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F DD 01 00 00: jg 0x5881a36d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 0ffffff00h
        ; Exact mapped bytes 0F 8C 00 09 00 00: jl 0x5881aa9c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x09
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 93 01 00 00: jle 0x5881a34d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 1
        ; Exact mapped bytes 73 14: jae 0x5881a1d9
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
        ; Exact mapped bytes 73 2C: jae 0x5881a209
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
        ; Exact mapped bytes 73 2A: jae 0x5881a237
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
        ; Exact mapped bytes 73 26: jae 0x5881a261
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
        ; Exact mapped bytes 73 4A: jae 0x5881a2af
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
        ; Exact mapped bytes 0F 84 F6 FE FF FF: je 0x5881a1ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x5881a2b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5E FE FF FF: jmp 0x5881a1ab
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C B6 3F 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb6
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 43 FE FF FF: jne 0x5881a1ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9C 3F 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 100h
        ; Exact mapped bytes 0F 8F 4A 09 00 00: jg 0x5881acc3
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x4a
        __asm _emit 0x09
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 2B 01 00 00: jle 0x5881a4bc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 1
        ; Exact mapped bytes 73 1A: jae 0x5881a3b6
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
        ; Exact mapped bytes 73 32: jae 0x5881a3ec
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
        ; Exact mapped bytes 73 2F: jae 0x5881a41f
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
        ; Exact mapped bytes 73 31: jae 0x5881a454
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
        ; Exact mapped bytes 0F 84 28 FF FF FF: je 0x5881a382
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 75 A3: jne 0x5881a45a
        __asm _emit 0x75
        __asm _emit 0xa3
        ; Exact mapped bytes E9 C6 FE FF FF: jmp 0x5881a382
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C 47 3E 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 AB FE FF FF: jne 0x5881a382
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2D 3E 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], ebx
        mov edi, ebx
        mov dword ptr [ebp - 2ch], edx
        mov ecx, dword ptr [ebp + 24h]
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
        mov edx, dword ptr [ebp + 28h]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F 40 02 00 00: jg 0x5881a74a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x40
        __asm _emit 0x02
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E EB 01 00 00: jle 0x5881a72a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 1
        ; Exact mapped bytes 73 2C: jae 0x5881a576
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
        imul eax, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 5C: jae 0x5881a5d6
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 5A: jae 0x5881a634
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 4D: jae 0x5881a685
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
        ; Exact mapped bytes 0F 84 A5 FE FF FF: je 0x5881a530
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x5881a68b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 06 FE FF FF: jmp 0x5881a530
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C D9 3B 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 EB FD FF FF: jne 0x5881a530
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 3B 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 24h], ecx
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E F8 02 00 00: jle 0x5881aa7c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 1
        ; Exact mapped bytes 73 45: jae 0x5881a7d4
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x5881a866
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x5881a8f6
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 7D: jae 0x5881a977
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
        ; Exact mapped bytes 0F 84 F8 FD FF FF: je 0x5881a775
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x5881a97d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F9 FC FF FF: jmp 0x5881a775
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C 87 38 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 DE FC FF FF: jne 0x5881a775
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6D 38 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E EA 01 00 00: jle 0x5881aca3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 1
        ; Exact mapped bytes 73 64: jae 0x5881ab28
        __asm _emit 0x73
        __asm _emit 0x64
        mov bl, byte ptr [edi]
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 4C 5F 96 58: and ebx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        mov byte ptr [edi], al
        add esi, 1
        add edi, 1
        shr ecx, 1
        ; Exact mapped bytes 73 66: jae 0x5881ab92
        __asm _emit 0x73
        __asm _emit 0x66
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 4C 5F 96 58: and ebx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        add esi, 2
        add edi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 3F: jae 0x5881abd5
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 73 41: jae 0x5881ac1a
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 84 8A FE FF FF: je 0x5881aaaa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 75 82: jne 0x5881ac20
        __asm _emit 0x75
        __asm _emit 0x82
        ; Exact mapped bytes E9 07 FE FF FF: jmp 0x5881aaaa
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C 60 36 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x60
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 EC FD FF FF: jne 0x5881aaaa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 46 36 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E C1 01 00 00: jle 0x5881aea1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 1
        ; Exact mapped bytes 73 47: jae 0x5881ad32
        __asm _emit 0x73
        __asm _emit 0x47
        mov bl, byte ptr [edi]
        xor eax, eax
        mov al, byte ptr [esi]
        not ebx
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add byte ptr [edi], al
        add esi, 1
        add edi, 1
        shr ecx, 1
        ; Exact mapped bytes 73 4A: jae 0x5881ad80
        __asm _emit 0x73
        __asm _emit 0x4a
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        not ebx
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 01 07: add word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x07
        add esi, 2
        add edi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 42: jae 0x5881adc6
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 73 44: jae 0x5881ae0e
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 84 BD FE FF FF: je 0x5881acd1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x5881ae14
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 30 FE FF FF: jmp 0x5881acd1
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C 62 34 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x62
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 15 FE FF FF: jne 0x5881acd1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 48 34 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], edx
        mov edx, ebx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        sub edx, ecx
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        add dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        add dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 24h], 100h
        ; Exact mapped bytes 0F 8C CE 0E 00 00: jl 0x5881bdcd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xce
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0
        ; Exact mapped bytes 0F 85 43 02 00 00: jne 0x5881b14c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ebx
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 10 02 00 00: jle 0x5881b12a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7F 06: jg 0x5881af30
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x5881af0b
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 8D F9 00 00 00: jge 0x5881b032
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        sub edx, edi
        add esi, edx
        add edi, edx
        sub ecx, edx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 6D: jl 0x5881afb6
        __asm _emit 0x7c
        __asm _emit 0x6d
        sub ecx, eax
        mov edx, eax
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x5881af52
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
        shr ecx, 1
        ; Exact mapped bytes 73 02: jae 0x5881af58
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x5881af5d
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0C: jae 0x5881af6d
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
        ; Exact mapped bytes 73 16: jae 0x5881af87
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
        ; Exact mapped bytes 74 26: je 0x5881afaf
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
        ; Exact mapped bytes E2 DA: loop 0x5881af89
        __asm _emit 0xe2
        __asm _emit 0xda
        add esi, edx
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x5881b114
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x5881afbb
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
        shr ecx, 1
        ; Exact mapped bytes 73 02: jae 0x5881afc1
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x5881afc6
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0C: jae 0x5881afd6
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
        ; Exact mapped bytes 73 16: jae 0x5881aff0
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
        ; Exact mapped bytes 74 26: je 0x5881b018
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
        ; Exact mapped bytes E2 DA: loop 0x5881aff2
        __asm _emit 0xe2
        __asm _emit 0xda
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 03 01 00 00: jle 0x5881b12a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7D 67: jge 0x5881b09e
        __asm _emit 0x7d
        __asm _emit 0x67
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x5881b03c
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
        shr ecx, 1
        ; Exact mapped bytes 73 02: jae 0x5881b042
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x5881b047
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0C: jae 0x5881b057
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
        ; Exact mapped bytes 73 16: jae 0x5881b071
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
        ; Exact mapped bytes 74 A5: je 0x5881b018
        __asm _emit 0x74
        __asm _emit 0xa5
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
        ; Exact mapped bytes E2 DA: loop 0x5881b073
        __asm _emit 0xe2
        __asm _emit 0xda
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x5881b018
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 04: jl 0x5881b0a7
        __asm _emit 0x7c
        __asm _emit 0x04
        add esi, ecx
        ; Exact mapped bytes EB 6D: jmp 0x5881b114
        __asm _emit 0xeb
        __asm _emit 0x6d
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x5881b0b4
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
        shr ecx, 1
        ; Exact mapped bytes 73 02: jae 0x5881b0ba
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 01: jae 0x5881b0bf
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shr ecx, 1
        ; Exact mapped bytes 73 0C: jae 0x5881b0cf
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
        ; Exact mapped bytes 73 16: jae 0x5881b0e9
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
        ; Exact mapped bytes 74 26: je 0x5881b111
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
        ; Exact mapped bytes E2 DA: loop 0x5881b0eb
        __asm _emit 0xe2
        __asm _emit 0xda
        add esi, dword ptr [ebp - 30h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881b12a
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x5881b114
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C D9 31 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 38h]
        add dword ptr [ebp - 28h], ecx
        add dword ptr [ebp - 24h], ecx
        add ebx, ecx
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 C2 FD FF FF: jne 0x5881af09
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BD 31 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], ebx
        mov edi, ebx
        mov edx, dword ptr [ebp + 28h]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F 11 07 00 00: jg 0x5881b86e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 0ffffff00h
        ; Exact mapped bytes 0F 8C B1 21 00 00: jl 0x5881d31a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb1
        __asm _emit 0x21
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E B1 06 00 00: jle 0x5881b846
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7F 06: jg 0x5881b1ab
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x5881b186
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 8D 49 03 00 00: jge 0x5881b4fd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 28h]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C 94 01 00 00: jl 0x5881b35c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 14: jae 0x5881b1e5
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
        ; Exact mapped bytes 73 2C: jae 0x5881b215
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
        ; Exact mapped bytes 73 2A: jae 0x5881b243
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
        ; Exact mapped bytes 73 26: jae 0x5881b26d
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
        ; Exact mapped bytes 73 4A: jae 0x5881b2bb
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
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x5881b354
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x5881b2c1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 30h]
        ; Exact mapped bytes E9 D4 04 00 00: jmp 0x5881b830
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 14: jae 0x5881b374
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
        ; Exact mapped bytes 73 2C: jae 0x5881b3a4
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
        ; Exact mapped bytes 73 2A: jae 0x5881b3d2
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
        ; Exact mapped bytes 73 26: jae 0x5881b3fc
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
        ; Exact mapped bytes 73 4A: jae 0x5881b44a
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
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x5881b4e3
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x5881b450
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 54 03 00 00: jle 0x5881b846
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D 8C 01 00 00: jge 0x5881b692
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 14: jae 0x5881b51e
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
        ; Exact mapped bytes 73 2C: jae 0x5881b54e
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
        ; Exact mapped bytes 73 2A: jae 0x5881b57c
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
        ; Exact mapped bytes 73 26: jae 0x5881b5a6
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
        ; Exact mapped bytes 73 4A: jae 0x5881b5f4
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
        ; Exact mapped bytes 0F 84 E9 FE FF FF: je 0x5881b4e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x5881b5fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 51 FE FF FF: jmp 0x5881b4e3
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 07: jl 0x5881b69e
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 92 01 00 00: jmp 0x5881b830
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 14: jae 0x5881b6be
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
        ; Exact mapped bytes 73 2C: jae 0x5881b6ee
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
        ; Exact mapped bytes 73 2A: jae 0x5881b71c
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
        ; Exact mapped bytes 73 26: jae 0x5881b746
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
        ; Exact mapped bytes 73 4A: jae 0x5881b794
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
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x5881b82d
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x5881b79a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 30h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881b846
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x5881b830
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C BD 2A 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbd
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 38h]
        add dword ptr [ebp - 28h], ecx
        add dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp - 34h]
        add edi, ecx
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 1D F9 FF FF: jne 0x5881b186
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B 2A 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 100h
        ; Exact mapped bytes 0F 8F E8 22 00 00: jg 0x5881db62
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe8
        __asm _emit 0x22
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 05 05 00 00: jle 0x5881bda5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7F 06: jg 0x5881b8b6
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x5881b891
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 8D 71 02 00 00: jge 0x5881bb30
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 28h]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C 28 01 00 00: jl 0x5881b9fb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 1A: jae 0x5881b8f6
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
        ; Exact mapped bytes 73 32: jae 0x5881b92c
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
        ; Exact mapped bytes 73 2F: jae 0x5881b95f
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
        ; Exact mapped bytes 73 31: jae 0x5881b994
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
        ; Exact mapped bytes 74 5D: je 0x5881b9f3
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
        ; Exact mapped bytes 75 A3: jne 0x5881b996
        __asm _emit 0x75
        __asm _emit 0xa3
        add esi, dword ptr [ebp - 30h]
        ; Exact mapped bytes E9 94 03 00 00: jmp 0x5881bd8f
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 1A: jae 0x5881ba19
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
        ; Exact mapped bytes 73 32: jae 0x5881ba4f
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
        ; Exact mapped bytes 73 2F: jae 0x5881ba82
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
        ; Exact mapped bytes 73 31: jae 0x5881bab7
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
        ; Exact mapped bytes 74 5D: je 0x5881bb16
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
        ; Exact mapped bytes 75 A3: jne 0x5881bab9
        __asm _emit 0x75
        __asm _emit 0xa3
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 80 02 00 00: jle 0x5881bda5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D 24 01 00 00: jge 0x5881bc5d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 1A: jae 0x5881bb57
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
        ; Exact mapped bytes 73 32: jae 0x5881bb8d
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
        ; Exact mapped bytes 73 2F: jae 0x5881bbc0
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
        ; Exact mapped bytes 73 31: jae 0x5881bbf5
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
        ; Exact mapped bytes 0F 84 1B FF FF FF: je 0x5881bb16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 75 A3: jne 0x5881bbfb
        __asm _emit 0x75
        __asm _emit 0xa3
        ; Exact mapped bytes E9 B9 FE FF FF: jmp 0x5881bb16
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 07: jl 0x5881bc69
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 26 01 00 00: jmp 0x5881bd8f
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 1A: jae 0x5881bc8f
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
        ; Exact mapped bytes 73 32: jae 0x5881bcc5
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
        ; Exact mapped bytes 73 2F: jae 0x5881bcf8
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
        ; Exact mapped bytes 73 31: jae 0x5881bd2d
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
        ; Exact mapped bytes 74 5D: je 0x5881bd8c
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
        ; Exact mapped bytes 75 A3: jne 0x5881bd2f
        __asm _emit 0x75
        __asm _emit 0xa3
        add esi, dword ptr [ebp - 30h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881bda5
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x5881bd8f
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C 5E 25 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5e
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 38h]
        add dword ptr [ebp - 28h], ecx
        add dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp - 34h]
        add edi, ecx
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 C9 FA FF FF: jne 0x5881b891
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3C 25 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], ebx
        mov edi, ebx
        mov ecx, dword ptr [ebp + 24h]
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
        mov edx, dword ptr [ebp + 28h]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F 6E 08 00 00: jg 0x5881c666
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x6e
        __asm _emit 0x08
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 11 08 00 00: jle 0x5881c63e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7F 06: jg 0x5881be43
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x5881be1e
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 8D F9 03 00 00: jge 0x5881c245
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 28h]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C EC 01 00 00: jl 0x5881c04c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 2C: jae 0x5881be95
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
        imul eax, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 5C: jae 0x5881bef5
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 5A: jae 0x5881bf53
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 4D: jae 0x5881bfa4
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
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x5881c044
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x5881bfaa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 30h]
        ; Exact mapped bytes E9 DC 05 00 00: jmp 0x5881c628
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 2C: jae 0x5881c07c
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
        imul eax, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 5C: jae 0x5881c0dc
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 5A: jae 0x5881c13a
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 4D: jae 0x5881c18b
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
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x5881c22b
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x5881c191
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 04 04 00 00: jle 0x5881c63e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D E4 01 00 00: jge 0x5881c432
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 2C: jae 0x5881c27e
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
        imul eax, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 5C: jae 0x5881c2de
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 5A: jae 0x5881c33c
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 4D: jae 0x5881c38d
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
        ; Exact mapped bytes 0F 84 98 FE FF FF: je 0x5881c22b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x5881c393
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F9 FD FF FF: jmp 0x5881c22b
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 07: jl 0x5881c43e
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 EA 01 00 00: jmp 0x5881c628
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 2C: jae 0x5881c476
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
        imul eax, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 5C: jae 0x5881c4d6
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 5A: jae 0x5881c534
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
        imul eax, dword ptr [ebp + 24h]
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
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 4D: jae 0x5881c585
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
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x5881c625
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x5881c58b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 30h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881c63e
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x5881c628
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C C5 1C 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc5
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 38h]
        add dword ptr [ebp - 28h], ecx
        add dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp - 34h]
        add edi, ecx
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 BD F7 FF FF: jne 0x5881be1e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A3 1C 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 24h], ecx
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
        ; Exact mapped bytes 0F 7F 45 EC: movq qword ptr [ebp - 0x14], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
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
        ; Exact mapped bytes 0F 7F 6D F4: movq qword ptr [ebp - 0xc], mm5
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x6d
        __asm _emit 0xf4
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 45 0C 00 00: jle 0x5881d2f2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x45
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7F 06: jg 0x5881c6c3
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x5881c69e
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 8D 13 06 00 00: jge 0x5881ccdf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x13
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 28h]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C F9 02 00 00: jl 0x5881c9d9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 45: jae 0x5881c72e
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x5881c7c0
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x5881c850
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 7D: jae 0x5881c8d1
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
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x5881c9d1
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x5881c8d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 30h]
        ; Exact mapped bytes E9 03 09 00 00: jmp 0x5881d2dc
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 45: jae 0x5881ca22
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x5881cab4
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x5881cb44
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 7D: jae 0x5881cbc5
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
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x5881ccc5
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x5881cbcb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 1E 06 00 00: jle 0x5881d2f2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D F1 02 00 00: jge 0x5881cfd9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 45: jae 0x5881cd31
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x5881cdc3
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x5881ce53
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 7D: jae 0x5881ced4
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
        ; Exact mapped bytes 0F 84 EB FD FF FF: je 0x5881ccc5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x5881ceda
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EC FC FF FF: jmp 0x5881ccc5
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 07: jl 0x5881cfe5
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 F7 02 00 00: jmp 0x5881d2dc
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 45: jae 0x5881d036
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x5881d0c8
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x5881d158
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp + 24h]
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
        add ebx, edx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 24h]
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
        ; Exact mapped bytes 73 7D: jae 0x5881d1d9
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
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x5881d2d9
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x5881d1df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 30h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881d2f2
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x5881d2dc
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C 11 10 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 38h]
        add dword ptr [ebp - 28h], ecx
        add dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp - 34h]
        add edi, ecx
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 89 F3 FF FF: jne 0x5881c69e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EF 0F 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 03 08 00 00: jle 0x5881db3a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7F 06: jg 0x5881d34d
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x5881d328
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 8D F1 03 00 00: jge 0x5881d747
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 28h]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C E9 01 00 00: jl 0x5881d553
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 64: jae 0x5881d3d7
        __asm _emit 0x73
        __asm _emit 0x64
        mov bl, byte ptr [edi]
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 4C 5F 96 58: and ebx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        mov byte ptr [edi], al
        add esi, 1
        add edi, 1
        shr ecx, 1
        ; Exact mapped bytes 73 66: jae 0x5881d441
        __asm _emit 0x73
        __asm _emit 0x66
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 4C 5F 96 58: and ebx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        add esi, 2
        add edi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 41: jae 0x5881d486
        __asm _emit 0x73
        __asm _emit 0x41
        ; Exact mapped bytes 0F 6E 16: movd mm2, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6E 27: movd mm4, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x27
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        test ecx, ecx
        shr ecx, 1
        ; Exact mapped bytes 73 41: jae 0x5881d4cb
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 74 7E: je 0x5881d54b
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 75 82: jne 0x5881d4cd
        __asm _emit 0x75
        __asm _emit 0x82
        add esi, dword ptr [ebp - 30h]
        ; Exact mapped bytes E9 E7 05 00 00: jmp 0x5881db3a
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 64: jae 0x5881d5bb
        __asm _emit 0x73
        __asm _emit 0x64
        mov bl, byte ptr [edi]
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 4C 5F 96 58: and ebx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        mov byte ptr [edi], al
        add esi, 1
        add edi, 1
        shr ecx, 1
        ; Exact mapped bytes 73 66: jae 0x5881d625
        __asm _emit 0x73
        __asm _emit 0x66
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 4C 5F 96 58: and ebx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        add esi, 2
        add edi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 3F: jae 0x5881d668
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 73 41: jae 0x5881d6ad
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 74 7E: je 0x5881d72d
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 75 82: jne 0x5881d6af
        __asm _emit 0x75
        __asm _emit 0x82
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E FE 03 00 00: jle 0x5881db3a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D E3 01 00 00: jge 0x5881d933
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 64: jae 0x5881d7b8
        __asm _emit 0x73
        __asm _emit 0x64
        mov bl, byte ptr [edi]
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 4C 5F 96 58: and ebx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        mov byte ptr [edi], al
        add esi, 1
        add edi, 1
        shr ecx, 1
        ; Exact mapped bytes 73 66: jae 0x5881d822
        __asm _emit 0x73
        __asm _emit 0x66
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 4C 5F 96 58: and ebx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        add esi, 2
        add edi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 3F: jae 0x5881d865
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 73 41: jae 0x5881d8aa
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 84 7D FE FF FF: je 0x5881d72d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 27: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 75 82: jne 0x5881d8b0
        __asm _emit 0x75
        __asm _emit 0x82
        ; Exact mapped bytes E9 FA FD FF FF: jmp 0x5881d72d
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 07: jl 0x5881d93f
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 E5 01 00 00: jmp 0x5881db24
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 64: jae 0x5881d9af
        __asm _emit 0x73
        __asm _emit 0x64
        mov bl, byte ptr [edi]
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 4C 5F 96 58: and ebx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        mov byte ptr [edi], al
        add esi, 1
        add edi, 1
        shr ecx, 1
        ; Exact mapped bytes 73 66: jae 0x5881da19
        __asm _emit 0x73
        __asm _emit 0x66
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 23 1D 4C 5F 96 58: and ebx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 4C 5F 96 58: and edx, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        add esi, 2
        add edi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 3F: jae 0x5881da5c
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 73 41: jae 0x5881daa1
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 74 7E: je 0x5881db21
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 75 82: jne 0x5881daa3
        __asm _emit 0x75
        __asm _emit 0x82
        add esi, dword ptr [ebp - 30h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881db3a
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x5881db24
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C C9 07 00 00: jl 0x5881e309
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 38h]
        add dword ptr [ebp - 28h], ecx
        add dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp - 34h]
        add edi, ecx
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 CB F7 FF FF: jne 0x5881d328
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A7 07 00 00: jmp 0x5881e309
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
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
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 6B 07 00 00: jle 0x5881e2ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7F 06: jg 0x5881db95
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x5881db70
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 8D A7 03 00 00: jge 0x5881df45
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 28h]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C C4 01 00 00: jl 0x5881dd76
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 47: jae 0x5881dc02
        __asm _emit 0x73
        __asm _emit 0x47
        mov bl, byte ptr [edi]
        xor eax, eax
        mov al, byte ptr [esi]
        not ebx
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add byte ptr [edi], al
        add esi, 1
        add edi, 1
        shr ecx, 1
        ; Exact mapped bytes 73 4A: jae 0x5881dc50
        __asm _emit 0x73
        __asm _emit 0x4a
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        not ebx
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 01 07: add word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x07
        add esi, 2
        add edi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 44: jae 0x5881dc98
        __asm _emit 0x73
        __asm _emit 0x44
        ; Exact mapped bytes 0F 6E 17: movd mm2, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6E 26: movd mm4, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x26
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        test ecx, ecx
        shr ecx, 1
        ; Exact mapped bytes 73 44: jae 0x5881dce0
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5881dd6e
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x5881dce6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 30h]
        ; Exact mapped bytes E9 74 05 00 00: jmp 0x5881e2ea
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 47: jae 0x5881ddc1
        __asm _emit 0x73
        __asm _emit 0x47
        mov bl, byte ptr [edi]
        xor eax, eax
        mov al, byte ptr [esi]
        not ebx
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add byte ptr [edi], al
        add esi, 1
        add edi, 1
        shr ecx, 1
        ; Exact mapped bytes 73 4A: jae 0x5881de0f
        __asm _emit 0x73
        __asm _emit 0x4a
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        not ebx
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 01 07: add word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x07
        add esi, 2
        add edi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 42: jae 0x5881de55
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 73 44: jae 0x5881de9d
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5881df2b
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x5881dea3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E B0 03 00 00: jle 0x5881e2ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D BA 01 00 00: jge 0x5881e108
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 1
        ; Exact mapped bytes 73 47: jae 0x5881df99
        __asm _emit 0x73
        __asm _emit 0x47
        mov bl, byte ptr [edi]
        xor eax, eax
        mov al, byte ptr [esi]
        not ebx
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add byte ptr [edi], al
        add esi, 1
        add edi, 1
        shr ecx, 1
        ; Exact mapped bytes 73 4A: jae 0x5881dfe7
        __asm _emit 0x73
        __asm _emit 0x4a
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        not ebx
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 01 07: add word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x07
        add esi, 2
        add edi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 42: jae 0x5881e02d
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 73 44: jae 0x5881e075
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 84 B0 FE FF FF: je 0x5881df2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 6F 17: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact mapped bytes 0F 6F 26: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x5881e07b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 23 FE FF FF: jmp 0x5881df2b
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 07: jl 0x5881e114
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 C0 01 00 00: jmp 0x5881e2d4
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shr ecx, 1
        ; Exact mapped bytes 73 47: jae 0x5881e167
        __asm _emit 0x73
        __asm _emit 0x47
        mov bl, byte ptr [edi]
        xor eax, eax
        mov al, byte ptr [esi]
        not ebx
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add byte ptr [edi], al
        add esi, 1
        add edi, 1
        shr ecx, 1
        ; Exact mapped bytes 73 4A: jae 0x5881e1b5
        __asm _emit 0x73
        __asm _emit 0x4a
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        not ebx
        ; Exact mapped bytes 23 1D 54 5F 96 58: and ebx, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        shr ebx, 8
        imul eax, ebx
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 1F: mov bx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        not ebx
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
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
        imul edx, ebx
        shr edx, 8
        ; Exact mapped bytes 23 15 5C 5F 96 58: and edx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        ; Exact mapped bytes 66 01 07: add word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x07
        add esi, 2
        add edi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 42: jae 0x5881e1fb
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 73 44: jae 0x5881e243
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5881e2d1
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
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
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x5881e249
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 30h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881e2ea
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x5881e2d4
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 7C 1D: jl 0x5881e309
        __asm _emit 0x7c
        __asm _emit 0x1d
        add esi, 2
        mov ecx, dword ptr [ebp - 38h]
        add dword ptr [ebp - 28h], ecx
        add dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp - 34h]
        add edi, ecx
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 67 F8 FF FF: jne 0x5881db70
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 77: emms
        __asm _emit 0x0f
        __asm _emit 0x77
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 38 2D 01 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret 24h
    }
}
