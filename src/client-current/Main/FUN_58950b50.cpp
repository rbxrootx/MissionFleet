// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58950B50 .. +0x1E75 bytes.
extern "C" __declspec(naked) void FUN_58950b50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
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
        mov dword ptr [ebp - 58h], ecx
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x58950b74
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 3E 1E 00 00: jmp 0x589529b2
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F 8D 1A 1E 00 00: jge 0x589529b2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1a
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F 8E 0E 1E 00 00: jle 0x589529b2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 0F 8D 02 1E 00 00: jge 0x589529b2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 8E F6 1D 00 00: jle 0x589529b2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf6
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC B5 FB FF: call 0x5890c1c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 93 E3 FF: call 0x58789fb0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x93
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 50h], eax
        mov esi, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 03: jge 0x58950bf2
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 8], ecx
        mov ebx, dword ptr [ebp - 40h]
        mov edi, dword ptr [ebp + 10h]
        cmp edi, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7D 0E: jge 0x58950c0b
        __asm _emit 0x7d
        __asm _emit 0x0e
        sub edi, dword ptr [ebp + 18h]
        imul edi, dword ptr [ebp - 20h]
        shl edi, 1
        sub esi, edi
        mov edi, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 8]
        sub edx, edi
        imul edi, ebx
        add edi, dword ptr [ebp - 54h]
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
        ; Exact mapped bytes 0F 71 D5 0B: psrlw mm5, 0xb
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 24h]
        mov ecx, eax
        ; Exact mapped bytes 23 0D FC 84 A2 58: and ecx, dword ptr [0x58a284fc]
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr ecx, 0bh
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
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 22: jle 0x58950c9b
        __asm _emit 0x7e
        __asm _emit 0x22
        sub eax, ecx
        shl ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        add edi, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7E 2A: jle 0x58950cbc
        __asm _emit 0x7e
        __asm _emit 0x2a
        sub eax, ecx
        shl ecx, 1
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 21: jmp 0x58950cbc
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 1
        add edi, ecx
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F 8E F5 0D 00 00: jle 0x58951aa3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf5
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        sub eax, ecx
        shl ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov ecx, eax
        shl ecx, 1
        sub ebx, ecx
        cmp dword ptr [ebp + 28h], 100h
        ; Exact mapped bytes 0F 8C 63 07 00 00: jl 0x58951432
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x63
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 85 7F 01 00 00: jne 0x58950e58
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 34h], ebx
        add esi, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 44h]
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x58950d11
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 73 26: jae 0x58950d3b
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 73 56: jae 0x58950d95
        __asm _emit 0x73
        __asm _emit 0x56
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x58950e46
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x58950d9b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        add edi, dword ptr [ebp - 34h]
        dec edx
        ; Exact mapped bytes 0F 85 8C FE FF FF: jne 0x58950cdf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 58 1B 00 00: jmp 0x589529b0
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 34h], ebx
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 8F 32 03 00 00: jg 0x5895119d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 100h
        add edx, dword ptr [ebp + 2ch]
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
        add esi, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 44h]
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x58950f08
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 73 26: jae 0x58950f32
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 73 54: jae 0x58950f8a
        __asm _emit 0x73
        __asm _emit 0x54
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        shr ecx, 1
        ; Exact mapped bytes 0F 83 A6 00 00 00: jae 0x58951038
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa6
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        test ecx, ecx
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x58951189
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 6F 46 10: movq mm0, qword ptr [esi + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x10
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 7F 47 10: movq qword ptr [edi + 0x10], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 0F 6F 46 18: movq mm0, qword ptr [esi + 0x18]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x18
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 7F 47 18: movq qword ptr [edi + 0x18], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact mapped bytes 0F 85 B5 FE FF FF: jne 0x5895103e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        add edi, dword ptr [ebp - 34h]
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 3E FD FF FF: jne 0x58950ed6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 13 18 00 00: jmp 0x589529b0
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 2ch]
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
        add esi, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 44h]
        shr ecx, 1
        ; Exact mapped bytes 73 32: jae 0x589511fd
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
        ; Exact mapped bytes 73 2F: jae 0x58951230
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
        ; Exact mapped bytes 73 45: jae 0x58951279
        __asm _emit 0x73
        __asm _emit 0x45
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
        shr ecx, 1
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58951309
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x88
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
        test ecx, ecx
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x5895141e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 7F 47 10: movq qword ptr [edi + 0x10], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 0F 7F 4F 18: movq qword ptr [edi + 0x18], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact mapped bytes 0F 85 F1 FE FF FF: jne 0x5895130f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        add edi, dword ptr [ebp - 34h]
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 94 FD FF FF: jne 0x589511c1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7E 15 00 00: jmp 0x589529b0
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 34h], ebx
        mov dword ptr [ebp - 38h], edx
        mov ecx, dword ptr [ebp + 28h]
        shr ecx, 3
        mov eax, 20h
        sub eax, ecx
        mov dword ptr [ebp - 2ch], eax
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
        ; Exact mapped bytes 0F 7F 65 B4: movq qword ptr [ebp - 0x4c], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xb4
        mov eax, dword ptr [ebp + 2ch]
        cmp eax, 0
        ; Exact mapped bytes 0F 8F 9B 02 00 00: jg 0x589516ff
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 100h
        add edx, eax
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
        add esi, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 44h]
        shr ecx, 1
        ; Exact mapped bytes 73 5C: jae 0x589514ff
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
        imul eax, dword ptr [ebp - 2ch]
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
        imul edx, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 73 5A: jae 0x5895155d
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
        imul eax, dword ptr [ebp - 2ch]
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
        imul edx, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x589515e5
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
        ; Exact mapped bytes 0F D5 4D B4: pmullw mm1, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x589516eb
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
        ; Exact mapped bytes 0F D5 4D B4: pmullw mm1, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 65 B4: pmullw mm4, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x589515eb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        add edi, dword ptr [ebp - 34h]
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 9F FD FF FF: jne 0x58951499
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B1 12 00 00: jmp 0x589529b0
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x12
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
        ; Exact mapped bytes 0F 7F 45 EC: movq qword ptr [ebp - 0x14], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xec
        shr eax, 3
        mov dword ptr [ebp + 2ch], eax
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
        ; Exact mapped bytes 0F 7F 45 D8: movq qword ptr [ebp - 0x28], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xd8
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
        add esi, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 44h]
        shr ecx, 1
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x589517cf
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
        imul eax, dword ptr [ebp - 2ch]
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
        imul edx, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x5895185f
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
        imul eax, dword ptr [ebp - 2ch]
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
        imul edx, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x5895191d
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
        ; Exact mapped bytes 0F D5 45 D8: pmullw mm0, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D B4: pmullw mm1, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x58951a8f
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
        ; Exact mapped bytes 0F D5 45 D8: pmullw mm0, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D B4: pmullw mm1, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 5F 08: movq mm3, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5f
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
        ; Exact mapped bytes 0F D5 45 D8: pmullw mm0, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D B4: pmullw mm1, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x58951923
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 18h]
        add edi, dword ptr [ebp - 34h]
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 99 FC FF FF: jne 0x58951737
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0D 0F 00 00: jmp 0x589529b0
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        shl eax, 1
        sub ebx, eax
        shr eax, 1
        cmp dword ptr [ebp + 28h], 100h
        ; Exact mapped bytes 0F 8C 9D 08 00 00: jl 0x58952353
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 85 C5 02 00 00: jne 0x58951d85
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 34h], ebx
        mov ecx, dword ptr [ebp - 44h]
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x58951af5
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 73 26: jae 0x58951b1f
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 73 54: jae 0x58951b77
        __asm _emit 0x73
        __asm _emit 0x54
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        shr ecx, 1
        ; Exact mapped bytes 0F 83 A6 00 00 00: jae 0x58951c25
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa6
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        test ecx, ecx
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x58951d76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 6F 46 10: movq mm0, qword ptr [esi + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x10
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 7F 47 10: movq qword ptr [edi + 0x10], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 0F 6F 46 18: movq mm0, qword ptr [esi + 0x18]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x18
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 7F 47 18: movq qword ptr [edi + 0x18], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact mapped bytes 0F 85 B5 FE FF FF: jne 0x58951c2b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, dword ptr [ebp - 34h]
        dec edx
        ; Exact mapped bytes 0F 85 46 FD FF FF: jne 0x58951ac6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2B 0C 00 00: jmp 0x589529b0
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 34h], ebx
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 8F 2C 03 00 00: jg 0x589520c4
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 100h
        add edx, dword ptr [ebp + 2ch]
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
        mov ecx, dword ptr [ebp - 44h]
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x58951e32
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 73 26: jae 0x58951e5c
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 73 54: jae 0x58951eb4
        __asm _emit 0x73
        __asm _emit 0x54
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 07: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        shr ecx, 1
        ; Exact mapped bytes 0F 83 A6 00 00 00: jae 0x58951f62
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa6
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        test ecx, ecx
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x589520b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 6F 46 10: movq mm0, qword ptr [esi + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x10
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 7F 47 10: movq qword ptr [edi + 0x10], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 0F 6F 46 18: movq mm0, qword ptr [esi + 0x18]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x18
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
        ; Exact mapped bytes 0F 71 D1 01: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 7F 47 18: movq qword ptr [edi + 0x18], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact mapped bytes 0F 85 B5 FE FF FF: jne 0x58951f68
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, dword ptr [ebp - 34h]
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 44 FD FF FF: jne 0x58951e03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EC 08 00 00: jmp 0x589529b0
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 2ch]
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
        mov ecx, dword ptr [ebp - 44h]
        shr ecx, 1
        ; Exact mapped bytes 73 32: jae 0x58952121
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
        ; Exact mapped bytes 73 2F: jae 0x58952154
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
        ; Exact mapped bytes 73 45: jae 0x5895219d
        __asm _emit 0x73
        __asm _emit 0x45
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
        shr ecx, 1
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x5895222d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x88
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
        test ecx, ecx
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x58952342
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 7F 47 10: movq qword ptr [edi + 0x10], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 0F 7F 4F 18: movq qword ptr [edi + 0x18], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact mapped bytes 0F 85 F1 FE FF FF: jne 0x58952233
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, dword ptr [ebp - 34h]
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 9A FD FF FF: jne 0x589520e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5D 06 00 00: jmp 0x589529b0
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 34h], ebx
        mov dword ptr [ebp - 38h], edx
        mov ecx, dword ptr [ebp + 28h]
        shr ecx, 3
        mov eax, 20h
        sub eax, ecx
        mov dword ptr [ebp - 2ch], eax
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
        ; Exact mapped bytes 0F 7F 65 B4: movq qword ptr [ebp - 0x4c], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xb4
        mov eax, dword ptr [ebp + 2ch]
        cmp eax, 0
        ; Exact mapped bytes 0F 8F 93 02 00 00: jg 0x58952618
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 100h
        shr eax, 3
        imul ecx, eax
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
        mov ecx, dword ptr [ebp - 44h]
        shr ecx, 1
        ; Exact mapped bytes 73 5C: jae 0x5895241b
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
        imul eax, dword ptr [ebp - 2ch]
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
        imul edx, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 73 5A: jae 0x58952479
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
        imul eax, dword ptr [ebp - 2ch]
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
        imul edx, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x58952501
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
        ; Exact mapped bytes 0F D5 4D B4: pmullw mm1, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x58952607
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
        ; Exact mapped bytes 0F D5 4D B4: pmullw mm1, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 65 B4: pmullw mm4, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x58952507
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, dword ptr [ebp - 34h]
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 A5 FD FF FF: jne 0x589523b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 98 03 00 00: jmp 0x589529b0
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 3
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
        ; Exact mapped bytes 0F 7F 45 EC: movq qword ptr [ebp - 0x14], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xec
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
        ; Exact mapped bytes 0F 7F 45 D8: movq qword ptr [ebp - 0x28], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xd8
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
        mov ecx, dword ptr [ebp - 44h]
        shr ecx, 1
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x589526e2
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
        imul eax, dword ptr [ebp - 2ch]
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
        imul edx, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58952772
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
        imul eax, dword ptr [ebp - 2ch]
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
        imul edx, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x58952830
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
        ; Exact mapped bytes 0F D5 45 D8: pmullw mm0, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D B4: pmullw mm1, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x589529a2
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
        ; Exact mapped bytes 0F D5 45 D8: pmullw mm0, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D B4: pmullw mm1, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F 5F 08: movq mm3, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5f
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
        ; Exact mapped bytes 0F D5 45 D8: pmullw mm0, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D D8: pmullw mm1, qword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
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
        ; Exact mapped bytes 0F D5 4D B4: pmullw mm1, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 55 B4: pmullw mm2, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F D5 5D B4: pmullw mm3, qword ptr [ebp - 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xb4
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
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x58952836
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, dword ptr [ebp - 34h]
        dec dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 85 9F FC FF FF: jne 0x5895264d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 00: jmp 0x589529b0
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
        ; Exact mapped bytes E8 1B A2 02 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret 28h
    }
}
