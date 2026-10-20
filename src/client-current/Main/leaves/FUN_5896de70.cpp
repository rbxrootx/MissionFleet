// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896DE70 .. +0x2D2 bytes.
extern "C" __declspec(naked) void FUN_5896de70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        mov edx, dword ptr [ebp + 10h]
        push ebx
        push edi
        mov edi, dword ptr [ebp + 8]
        cmp edi, edx
        mov ebx, ecx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 7E 0E: jle 0x5896de95
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, edi
        mov edi, edx
        mov edx, eax
        mov dword ptr [ebp + 8], edi
        mov dword ptr [ebp + 10h], edx
        ; Exact mapped bytes EB 06: jmp 0x5896de9b
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 9F 02 00 00: je 0x5896e13a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 14h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8E 91 02 00 00: jle 0x5896e13a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], ecx
        mov dword ptr [ebp + 14h], eax
        test edx, edx
        ; Exact mapped bytes 0F 8E 83 02 00 00: jle 0x5896e13a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ebx + 1ch]
        cmp edi, esi
        ; Exact mapped bytes 0F 8F 76 02 00 00: jg 0x5896e139
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 6E 02 00 00: jle 0x5896e139
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebx + 20h]
        cmp ecx, ebx
        ; Exact mapped bytes 0F 8F 63 02 00 00: jg 0x5896e139
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x5896dedf
        __asm _emit 0x7d
        __asm _emit 0x05
        xor edi, edi
        mov dword ptr [ebp + 8], edi
        test ecx, ecx
        ; Exact mapped bytes 7D 07: jge 0x5896deea
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        cmp edx, esi
        ; Exact mapped bytes 7E 05: jle 0x5896def3
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edx, esi
        mov dword ptr [ebp + 10h], edx
        cmp eax, ebx
        ; Exact mapped bytes 7E 03: jle 0x5896defa
        __asm _emit 0x7e
        __asm _emit 0x03
        mov dword ptr [ebp + 14h], ebx
        mov esi, dword ptr [ebp + 1ch]
        cmp esi, 100h
        ; Exact mapped bytes 75 45: jne 0x5896df4a
        __asm _emit 0x75
        __asm _emit 0x45
        push 64h
        lea eax, [ebp - 74h]
        push 0
        push eax
        ; Exact mapped bytes E8 36 ED 00 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 18h]
        add esp, 0ch
        lea edx, [ebp - 74h]
        push edx
        push 1000400h
        push 0
        push 0
        lea edx, [ebp + 8]
        mov dword ptr [ebp - 74h], 64h
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [eax]
        push edx
        push eax
        mov eax, dword ptr [ecx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        pop edi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        mov ecx, eax
        shr ecx, 8
        and eax, 1fh
        imul eax, esi
        mov ebx, ecx
        and ebx, 3
        imul ebx, esi
        and ecx, 7ch
        imul ecx, esi
        mov esi, dword ptr [ebp - 4]
        shr eax, 8
        and eax, 1fh
        and ebx, 3e0h
        or eax, ebx
        and ecx, 7c00h
        or eax, ecx
        ; Exact mapped bytes 8B 0D FC DF 9C 58: mov ecx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        mov dword ptr [ebp + 18h], eax
        mov eax, dword ptr [esi + 0ch]
        sub edx, edi
        imul edx, ecx
        imul ecx, edi
        mov ebx, eax
        imul eax, dword ptr [ebp + 0ch]
        sub ebx, edx
        add eax, ecx
        add eax, dword ptr [esi + 8]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], ebx
        mov dword ptr [ebp - 10h], eax
        mov esi, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 14h]
        sub edx, dword ptr [ebp + 0ch]
        mov ebx, 100h
        sub ebx, dword ptr [ebp + 1ch]
        shr ebx, 3
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 0F 6E 5D 18: movd mm3, dword ptr [ebp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x5d
        __asm _emit 0x18
        ; Exact mapped bytes 0F 61 DB: punpcklwd mm3, mm3
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 61 DB: punpcklwd mm3, mm3
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 7E 5D 18: movd dword ptr [ebp + 0x18], mm3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x5d
        __asm _emit 0x18
        ; Exact mapped bytes 0F 6E E3: movd mm4, ebx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe3
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
        mov ecx, dword ptr [ebp - 0ch]
        shr ecx, 2
        ; Exact mapped bytes 73 36: jae 0x5896e02a
        __asm _emit 0x73
        __asm _emit 0x36
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp - 4]
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
        imul ebx, dword ptr [ebp - 4]
        shr ebx, 5
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        add esi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 34: jae 0x5896e062
        __asm _emit 0x73
        __asm _emit 0x34
        mov eax, dword ptr [esi]
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp - 4]
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
        imul ebx, dword ptr [ebp - 4]
        shr ebx, 5
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [ebp + 18h]
        mov dword ptr [esi], eax
        add esi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 41: jae 0x5896e0a7
        __asm _emit 0x73
        __asm _emit 0x41
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
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
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
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
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
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
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 06: movq qword ptr [esi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, 8
        test ecx, ecx
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5896e12d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
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
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
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
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
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
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 06: movq qword ptr [esi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
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
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
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
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
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
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 7F 46 08: movq qword ptr [esi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x46
        __asm _emit 0x08
        add esi, 10h
        dec ecx
        ; Exact mapped bytes 75 80: jne 0x5896e0ad
        __asm _emit 0x75
        __asm _emit 0x80
        add esi, dword ptr [ebp - 8]
        dec edx
        ; Exact mapped bytes 0F 85 B5 FE FF FF: jne 0x5896dfec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 77: emms
        __asm _emit 0x0f
        __asm _emit 0x77
        pop esi
        pop edi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
