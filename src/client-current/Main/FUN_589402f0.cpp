// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589402F0 .. +0x3977 bytes.
extern "C" __declspec(naked) void FUN_589402f0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
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
        mov dword ptr [ebp - 50h], ecx
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x58940314
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 40 39 00 00: jmp 0x58943c54
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F 8D 1C 39 00 00: jge 0x58943c54
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F 8E 10 39 00 00: jle 0x58943c54
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 0F 8D 04 39 00 00: jge 0x58943c54
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 8E F8 38 00 00: jle 0x58943c54
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5C BE FC FF: call 0x5890c1c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 9C E4 FF: call 0x58789fb0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x9c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 48h], ecx
        mov esi, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 03: jge 0x58940389
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 0F 6E 6D 24: movd mm5, dword ptr [ebp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x6d
        __asm _emit 0x24
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 7F EE: movq mm6, mm5
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xee
        ; Exact mapped bytes 0F 7F EF: movq mm7, mm5
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xef
        ; Exact mapped bytes 0F DB 35 F4 84 A2 58: pand mm6, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 2D FC 84 A2 58: pand mm5, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D6 05: psrlw mm6, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB 3D EC 84 A2 58: pand mm7, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D5 0A: psrlw mm5, 0xa
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 24h]
        mov ecx, eax
        ; Exact mapped bytes 23 0D FC 84 A2 58: and ecx, dword ptr [0x58a284fc]
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ecx, 0ah
        mov dword ptr [ebp + 24h], ecx
        mov ecx, eax
        shr ecx, 5
        ; Exact mapped bytes 23 0D F4 84 A2 58: and ecx, dword ptr [0x58a284f4]
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes 23 05 EC 84 A2 58: and eax, dword ptr [0x58a284ec]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        mov ebx, dword ptr [ebp + 10h]
        cmp ebx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7D 26: jge 0x5894040c
        __asm _emit 0x7d
        __asm _emit 0x26
        sub ebx, dword ptr [ebp + 18h]
        movzx ecx, word ptr [esi]
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x589403fd
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EC: jmp 0x589403e9
        __asm _emit 0xeb
        __asm _emit 0xec
        ; Exact mapped bytes 0F 8C 4F 38 00 00: jl 0x58943c52
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4f
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        inc ebx
        ; Exact mapped bytes 75 E0: jne 0x589403e9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ebx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 8]
        sub edx, ebx
        imul ebx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 1
        add ebx, ecx
        add ebx, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        shl ecx, 1
        ; Exact mapped bytes 0F 8F 39 0C 00 00: jg 0x58941066
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        sub ecx, dword ptr [ebp - 4]
        shl ecx, 1
        ; Exact mapped bytes 0F 8C 2B 0C 00 00: jl 0x58941066
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2b
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 100h
        ; Exact mapped bytes 0F 8C 5B 05 00 00: jl 0x589409a3
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 85 9A 01 00 00: jne 0x589405ec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], ebx
        mov edi, ebx
        mov edi, ebx
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 66 01 00 00: jle 0x589405ce
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 2
        ; Exact mapped bytes 73 2A: jae 0x5894049e
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x589404ca
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 52: jae 0x58940520
        __asm _emit 0x73
        __asm _emit 0x52
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 33 FF FF FF: je 0x58940459
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x58940526
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8B FE FF FF: jmp 0x58940459
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C 7E 36 00 00: jl 0x58943c52
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7e
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 34h], edi
        dec edx
        ; Exact mapped bytes 0F 85 70 FE FF FF: jne 0x58940457
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 66 36 00 00: jmp 0x58943c52
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], ebx
        mov dword ptr [ebp - 38h], edx
        mov edi, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F FE 01 00 00: jg 0x589407ff
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        shr edx, 3
        ; Exact mapped bytes 0F 6E E2: movd mm4, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe2
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 6E E2: movd mm4, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe2
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        mov eax, dword ptr [ebp + 24h]
        shr eax, 5
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ebp + 24h], eax
        mov eax, dword ptr [ebp - 30h]
        imul eax, edx
        shr eax, 5
        ; Exact mapped bytes 23 05 DC 84 A2 58: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 0F 71 D5 05: psrlw mm5, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 EC: pmullw mm5, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB 2D FC 84 A2 58: pand mm5, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D6 05: psrlw mm6, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 F4: pmullw mm6, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB 35 F4 84 A2 58: pand mm6, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D7 05: psrlw mm7, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd7
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 FC: pmullw mm7, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xfc
        ; Exact mapped bytes 0F DB 3D EC 84 A2 58: pand mm7, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 66 01 00 00: jle 0x589407df
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 2
        ; Exact mapped bytes 73 2A: jae 0x589406af
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x589406db
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 52: jae 0x58940731
        __asm _emit 0x73
        __asm _emit 0x52
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 33 FF FF FF: je 0x5894066a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x58940737
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8B FE FF FF: jmp 0x5894066a
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C 6D 34 00 00: jl 0x58943c52
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6d
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 70 FE FF FF: jne 0x5894066a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 53 34 00 00: jmp 0x58943c52
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        shr edx, 3
        ; Exact mapped bytes 0F 6E E2: movd mm4, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe2
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 6F 2D FC 84 A2 58: movq mm5, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 F4 84 A2 58: movq mm6, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D EC 84 A2 58: movq mm7, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 54 01 00 00: jle 0x58940983
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 2
        ; Exact mapped bytes 73 32: jae 0x5894086d
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
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
        shr eax, 5
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
        shr ebx, 5
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
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
        ; Exact mapped bytes 73 2F: jae 0x589408a0
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 47: jae 0x589408eb
        __asm _emit 0x73
        __asm _emit 0x47
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C4: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 2F FF FF FF: je 0x58940820
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C4: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 D4: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 D4: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x589408f1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9D FE FF FF: jmp 0x58940820
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C C9 32 00 00: jl 0x58943c52
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 82 FE FF FF: jne 0x58940820
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AF 32 00 00: jmp 0x58943c52
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], ebx
        mov dword ptr [ebp - 38h], edx
        mov edi, ebx
        mov ecx, dword ptr [ebp + 28h]
        shr ecx, 3
        mov eax, 20h
        sub eax, ecx
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F CC 02 00 00: jg 0x58940c93
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        shr edx, 3
        imul ecx, edx
        shr ecx, 5
        mov dword ptr [ebp + 28h], ecx
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
        ; Exact mapped bytes 0F 7F 65 BC: movq qword ptr [ebp - 0x44], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 6F 2D FC 84 A2 58: movq mm5, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 F4 84 A2 58: movq mm6, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D EC 84 A2 58: movq mm7, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ebp - 34h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 59 02 00 00: jle 0x58940c73
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 2
        ; Exact mapped bytes 73 5C: jae 0x58940a82
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 5A: jae 0x58940ae0
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x58940b68
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
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
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9D FE FF FF: je 0x58940a0b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0xfe
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
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D EC: pmullw mm3, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F EB CB: por mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 BC: pmullw mm4, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F DD CC: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x58940b6e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 98 FD FF FF: jmp 0x58940a0b
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C D9 2F 00 00: jl 0x58943c52
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 7D FD FF FF: jne 0x58940a0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 2F 00 00: jmp 0x58943c52
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 28h], ecx
        shr edx, 3
        mov dword ptr [ebp + 2ch], edx
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
        ; Exact mapped bytes 0F 7F 65 BC: movq qword ptr [ebp - 0x44], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 6F 2D FC 84 A2 58: movq mm5, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 F4 84 A2 58: movq mm6, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D EC 84 A2 58: movq mm7, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 5F 03 00 00: jle 0x58941046
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        shr ecx, 2
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x58940d81
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
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp + 2ch]
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 5
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
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58940e11
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
        shr eax, 5
        imul eax, dword ptr [ebp + 2ch]
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 5
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
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x58940ecf
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb6
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
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 03 FE FF FF: je 0x58940cd8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0xfe
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
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 DC: pmullw mm2, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD D3: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F DD D3: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 BC: pmullw mm4, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F DD CC: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x58940ed5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 92 FC FF FF: jmp 0x58940cd8
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C 06 2C 00 00: jl 0x58943c52
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 34h]
        add edi, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 77 FC FF FF: jne 0x58940cd8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EC 2B 00 00: jmp 0x58943c52
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], edx
        mov edx, ebx
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 1
        sub edx, ecx
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 2ch], edx
        mov ecx, dword ptr [ebp + 14h]
        shl ecx, 1
        add dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp + 1ch]
        shl ecx, 1
        add dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp + 28h], 100h
        ; Exact mapped bytes 0F 8C FF 12 00 00: jl 0x58942394
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 85 39 06 00 00: jne 0x589416d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], ebx
        mov edi, ebx
        mov edi, ebx
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E FB 05 00 00: jle 0x589416b0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfb
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
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7F 06: jg 0x589410cb
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x589410a6
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D ED 02 00 00: jge 0x589413c1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        sub edx, edi
        add esi, edx
        add edi, edx
        sub ecx, edx
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8C 65 01 00 00: jl 0x5894124d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov edx, eax
        shr ecx, 2
        ; Exact mapped bytes 73 2A: jae 0x5894111b
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x58941147
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 52: jae 0x5894119d
        __asm _emit 0x73
        __asm _emit 0x52
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x58941246
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x589411a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, edx
        ; Exact mapped bytes E9 4D 04 00 00: jmp 0x5894169a
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 2A: jae 0x5894127c
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x589412a8
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 52: jae 0x589412fe
        __asm _emit 0x73
        __asm _emit 0x52
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x589413a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x58941304
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
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
        ; Exact mapped bytes 0F 8E FA 02 00 00: jle 0x589416b0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfa
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
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D 5F 01 00 00: jge 0x58941529
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 2A: jae 0x589413f9
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x58941425
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 52: jae 0x5894147b
        __asm _emit 0x73
        __asm _emit 0x52
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 26 FF FF FF: je 0x589413a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x58941481
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7E FE FF FF: jmp 0x589413a7
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 7C 07: jl 0x58941535
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 65 01 00 00: jmp 0x5894169a
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        sub ecx, eax
        mov dword ptr [ebp - 48h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 2A: jae 0x5894156c
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x58941598
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 52: jae 0x589415ee
        __asm _emit 0x73
        __asm _emit 0x52
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x58941697
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x589415f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 48h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x589416b0
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x5894169a
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C 9C 25 00 00: jl 0x58943c52
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9c
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 1ch], ecx
        add dword ptr [ebp - 2ch], ecx
        mov edi, dword ptr [ebp - 34h]
        add edi, ecx
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 D1 F9 FF FF: jne 0x589410a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7A 25 00 00: jmp 0x58943c52
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], ebx
        mov edi, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F 9D 06 00 00: jg 0x58941d87
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        shr edx, 3
        ; Exact mapped bytes 0F 6E E2: movd mm4, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe2
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 6E E2: movd mm4, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe2
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        mov eax, dword ptr [ebp + 24h]
        shr eax, 5
        imul eax, edx
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ebp + 24h], eax
        mov eax, dword ptr [ebp - 30h]
        imul eax, edx
        shr eax, 5
        ; Exact mapped bytes 23 05 DC 84 A2 58: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 0F 71 D5 05: psrlw mm5, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 EC: pmullw mm5, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB 2D FC 84 A2 58: pand mm5, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D6 05: psrlw mm6, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 F4: pmullw mm6, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB 35 F4 84 A2 58: pand mm6, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D7 05: psrlw mm7, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd7
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 FC: pmullw mm7, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xfc
        ; Exact mapped bytes 0F DB 3D EC 84 A2 58: pand mm7, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E FD 05 00 00: jle 0x58941d5f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfd
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
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7F 06: jg 0x58941778
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x58941753
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D EF 02 00 00: jge 0x58941a70
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 1ch]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8C 67 01 00 00: jl 0x589418fc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 48h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 2A: jae 0x589417c9
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x589417f5
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 52: jae 0x5894184b
        __asm _emit 0x73
        __asm _emit 0x52
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x589418f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x58941851
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 48h]
        ; Exact mapped bytes E9 4D 04 00 00: jmp 0x58941d49
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 2A: jae 0x5894192b
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x58941957
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 52: jae 0x589419ad
        __asm _emit 0x73
        __asm _emit 0x52
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x58941a56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x589419b3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
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
        ; Exact mapped bytes 0F 8E FA 02 00 00: jle 0x58941d5f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfa
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
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D 5F 01 00 00: jge 0x58941bd8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 2A: jae 0x58941aa8
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x58941ad4
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 52: jae 0x58941b2a
        __asm _emit 0x73
        __asm _emit 0x52
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 26 FF FF FF: je 0x58941a56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x58941b30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7E FE FF FF: jmp 0x58941a56
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 7C 07: jl 0x58941be4
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 65 01 00 00: jmp 0x58941d49
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        sub ecx, eax
        mov dword ptr [ebp - 48h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 2A: jae 0x58941c1b
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x58941c47
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
        mov ebx, eax
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
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 52: jae 0x58941c9d
        __asm _emit 0x73
        __asm _emit 0x52
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x58941d46
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 0F 6F 46 08: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F C1: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F C2: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB 05 FC 84 A2 58: pand mm0, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB 0D F4 84 A2 58: pand mm1, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 EC 84 A2 58: pand mm2, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F D5 D7: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x58941ca3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 48h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x58941d5f
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x58941d49
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C ED 1E 00 00: jl 0x58943c52
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xed
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 1ch], ecx
        add dword ptr [ebp - 2ch], ecx
        mov edi, dword ptr [ebp - 34h]
        add edi, ecx
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 D1 F9 FF FF: jne 0x58941753
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CB 1E 00 00: jmp 0x58943c52
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        shr edx, 3
        ; Exact mapped bytes 0F 6E E2: movd mm4, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe2
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 61 E4: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 6F 2D FC 84 A2 58: movq mm5, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 F4 84 A2 58: movq mm6, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D EC 84 A2 58: movq mm7, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E B5 05 00 00: jle 0x5894236c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb5
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
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7F 06: jg 0x58941dcd
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x58941da8
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D CB 02 00 00: jge 0x589420a1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 1ch]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8C 55 01 00 00: jl 0x58941f3f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 48h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 32: jae 0x58941e26
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
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
        shr eax, 5
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
        shr ebx, 5
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
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
        ; Exact mapped bytes 73 2F: jae 0x58941e59
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 47: jae 0x58941ea4
        __asm _emit 0x73
        __asm _emit 0x47
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C4: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x58941f37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C4: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 D4: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 D4: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x58941eaa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 48h]
        ; Exact mapped bytes E9 17 04 00 00: jmp 0x58942356
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 32: jae 0x58941f76
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
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
        shr eax, 5
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
        shr ebx, 5
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
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
        ; Exact mapped bytes 73 2F: jae 0x58941fa9
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 47: jae 0x58941ff4
        __asm _emit 0x73
        __asm _emit 0x47
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C4: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x58942087
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C4: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 D4: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 D4: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x58941ffa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
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
        ; Exact mapped bytes 0F 8E D6 02 00 00: jle 0x5894236c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd6
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
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D 4D 01 00 00: jge 0x589421f7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 32: jae 0x589420e1
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
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
        shr eax, 5
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
        shr ebx, 5
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
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
        ; Exact mapped bytes 73 2F: jae 0x58942114
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 47: jae 0x5894215f
        __asm _emit 0x73
        __asm _emit 0x47
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C4: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 22 FF FF FF: je 0x58942087
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C4: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 D4: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 D4: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x58942165
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 90 FE FF FF: jmp 0x58942087
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 7C 07: jl 0x58942203
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 53 01 00 00: jmp 0x58942356
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        sub ecx, eax
        mov dword ptr [ebp - 48h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 32: jae 0x58942242
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
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
        shr eax, 5
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
        shr ebx, 5
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
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
        ; Exact mapped bytes 73 2F: jae 0x58942275
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 47: jae 0x589422c0
        __asm _emit 0x73
        __asm _emit 0x47
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C4: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x58942353
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 C4: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 CC: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 D4: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 D4: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x589422c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 48h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5894236c
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x58942356
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C E0 18 00 00: jl 0x58943c52
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 1ch], ecx
        add dword ptr [ebp - 2ch], ecx
        mov edi, dword ptr [ebp - 34h]
        add edi, ecx
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 19 FA FF FF: jne 0x58941da8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BE 18 00 00: jmp 0x58943c52
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], ebx
        mov ecx, dword ptr [ebp + 28h]
        shr ecx, 3
        mov eax, 20h
        sub eax, ecx
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F 44 0A 00 00: jg 0x58942df7
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        shr edx, 3
        imul ecx, edx
        shr ecx, 5
        mov dword ptr [ebp + 28h], ecx
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
        ; Exact mapped bytes 0F 7F 65 BC: movq qword ptr [ebp - 0x44], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 6F 2D FC 84 A2 58: movq mm5, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 F4 84 A2 58: movq mm6, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D EC 84 A2 58: movq mm7, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ebp - 34h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E C9 09 00 00: jle 0x58942dcf
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc9
        __asm _emit 0x09
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
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7F 06: jg 0x5894241c
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x589423f7
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D D5 04 00 00: jge 0x589428fa
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 1ch]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8C 5A 02 00 00: jl 0x58942693
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 48h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 5C: jae 0x5894249f
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 5A: jae 0x589424fd
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x58942585
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
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
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x5894268b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D EC: pmullw mm3, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F EB CB: por mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 BC: pmullw mm4, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F DD CC: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x5894258b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 48h]
        ; Exact mapped bytes E9 26 07 00 00: jmp 0x58942db9
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 5C: jae 0x589426f4
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 5A: jae 0x58942752
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x589427da
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
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
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x589428e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D EC: pmullw mm3, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F EB CB: por mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 BC: pmullw mm4, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F DD CC: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x589427e0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F 8E E0 04 00 00: jle 0x58942dcf
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe0
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
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D 52 02 00 00: jge 0x58942b55
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 5C: jae 0x58942964
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 5A: jae 0x589429c2
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x58942a4a
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
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
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 90 FE FF FF: je 0x589428e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0xfe
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
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D EC: pmullw mm3, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F EB CB: por mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 BC: pmullw mm4, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F DD CC: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x58942a50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8B FD FF FF: jmp 0x589428e0
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 7C 07: jl 0x58942b61
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 58 02 00 00: jmp 0x58942db9
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        sub ecx, eax
        mov dword ptr [ebp - 48h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 5C: jae 0x58942bca
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact mapped bytes 66 AD: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 5A: jae 0x58942c28
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x58942cb0
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
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
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x58942db6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D EC: pmullw mm3, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F EB CB: por mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E3: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 BC: pmullw mm4, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F DD CC: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x58942cb6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 48h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x58942dcf
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x58942db9
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C 7D 0E 00 00: jl 0x58943c52
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 1ch], ecx
        add dword ptr [ebp - 2ch], ecx
        mov edi, dword ptr [ebp - 34h]
        add edi, ecx
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 05 F6 FF FF: jne 0x589423f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5B 0E 00 00: jmp 0x58943c52
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 28h], ecx
        shr edx, 3
        mov dword ptr [ebp + 2ch], edx
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
        ; Exact mapped bytes 0F 7F 65 BC: movq qword ptr [ebp - 0x44], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 6F 2D FC 84 A2 58: movq mm5, qword ptr [0x58a284fc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 F4 84 A2 58: movq mm6, qword ptr [0x58a284f4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D EC 84 A2 58: movq mm7, qword ptr [0x58a284ec]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ebp - 34h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E E3 0D 00 00: jle 0x58943c31
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x0d
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
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7F 06: jg 0x58942e64
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x58942e3f
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D E3 06 00 00: jge 0x58943550
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 1ch]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8C 62 03 00 00: jl 0x589431e3
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 48h], eax
        shr ecx, 2
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x58942f19
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
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp + 2ch]
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 5
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
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x58942fab
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8a
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
        shr eax, 5
        imul eax, dword ptr [ebp + 2ch]
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 5
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
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        test ecx, ecx
        shr ecx, 1
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x58943069
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb6
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
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x589431db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 DC: pmullw mm2, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD D3: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F DD D3: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 BC: pmullw mm4, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F DD CC: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x5894306f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 48h]
        ; Exact mapped bytes E9 4E 0A 00 00: jmp 0x58943c31
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x58943276
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
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp + 2ch]
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 5
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
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58943306
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
        shr eax, 5
        imul eax, dword ptr [ebp + 2ch]
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 5
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
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x589433c4
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb6
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
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x58943536
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 DC: pmullw mm2, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD D3: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F DD D3: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 BC: pmullw mm4, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F DD CC: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x589433ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E EC 06 00 00: jle 0x58943c31
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xec
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
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D 58 03 00 00: jge 0x589438b1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x589435ec
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
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp + 2ch]
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 5
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
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x5894367c
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
        shr eax, 5
        imul eax, dword ptr [ebp + 2ch]
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 5
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
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x5894373a
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb6
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
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 F6 FD FF FF: je 0x58943536
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
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
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 DC: pmullw mm2, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD D3: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F DD D3: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 BC: pmullw mm4, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F DD CC: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x58943740
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 85 FC FF FF: jmp 0x58943536
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 7C 07: jl 0x589438bd
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 5E 03 00 00: jmp 0x58943c1b
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 2ch]
        sub ecx, eax
        mov dword ptr [ebp - 48h], eax
        shr ecx, 2
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x58943958
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
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp + 2ch]
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 5
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
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
        ; Exact mapped bytes 23 15 DC 84 A2 58: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x589439e8
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
        shr eax, 5
        imul eax, dword ptr [ebp + 2ch]
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
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 5
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
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x58943aa6
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb6
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
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x58943c18
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 6F 67 08: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D0: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 DC: pmullw mm0, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 EC: pmullw mm0, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D BC: pmullw mm1, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F D5 5D BC: pmullw mm3, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D3 05: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB DF: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D9: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact mapped bytes 0F DF CD: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D DC: pmullw mm1, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DD CB: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 05: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 4D EC: pmullw mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F DA: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact mapped bytes 0F DF D6: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 DC: pmullw mm2, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD D3: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F DD D3: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 7F E2: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 BC: pmullw mm2, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F D5 65 BC: pmullw mm4, qword ptr [ebp - 0x44]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB E7: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact mapped bytes 0F DD CC: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x58943aac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 48h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x58943c31
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x58943c1b
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 7C 1F: jl 0x58943c52
        __asm _emit 0x7c
        __asm _emit 0x1f
        add esi, 2
        mov ecx, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 1ch], ecx
        add dword ptr [ebp - 2ch], ecx
        mov edi, dword ptr [ebp - 34h]
        add edi, ecx
        mov dword ptr [ebp - 34h], edi
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 EF F1 FF FF: jne 0x58942e3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 00: jmp 0x58943c52
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
        ; Exact mapped bytes E8 79 8F 03 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret 28h
    }
}
