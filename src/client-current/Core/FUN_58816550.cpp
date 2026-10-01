// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58816550 .. +0x39C9 bytes.
extern "C" __declspec(naked) void FUN_58816550() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
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
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x58816574
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 92 39 00 00: jmp 0x58819f06
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F 8D 6E 39 00 00: jge 0x58819f06
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6e
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F 8E 62 39 00 00: jle 0x58819f06
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x62
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 0F 8D 56 39 00 00: jge 0x58819f06
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 8E 4A 39 00 00: jle 0x58819f06
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4a
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C 59 C7 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x59
        __asm _emit 0xc7
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 5A C7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x5a
        __asm _emit 0xc7
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 38h], ecx
        mov esi, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 7D 03: jge 0x588165e9
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 44h], ecx
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
        ; Exact mapped bytes 0F 6F F5: movq mm6, mm5
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xf5
        ; Exact mapped bytes 0F 6F FD: movq mm7, mm5
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xfd
        ; Exact mapped bytes 0F DB 35 44 5F 96 58: pand mm6, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 2D 3C 5F 96 58: pand mm5, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D6 05: psrlw mm6, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x05
        ; Exact mapped bytes 0F DB 3D 4C 5F 96 58: pand mm7, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D5 0B: psrlw mm5, 0xb
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 24h]
        mov ecx, eax
        ; Exact mapped bytes 23 0D 3C 5F 96 58: and ecx, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ecx, 0bh
        mov dword ptr [ebp + 24h], ecx
        mov ecx, eax
        shr ecx, 5
        ; Exact mapped bytes 23 0D 44 5F 96 58: and ecx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes 23 05 4C 5F 96 58: and eax, dword ptr [0x58965f4c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 50h], eax
        mov ebx, dword ptr [ebp + 10h]
        cmp ebx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7D 26: jge 0x5881666c
        __asm _emit 0x7d
        __asm _emit 0x26
        sub ebx, dword ptr [ebp + 18h]
        movzx ecx, word ptr [esi]
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881665d
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EC: jmp 0x58816649
        __asm _emit 0xeb
        __asm _emit 0xec
        ; Exact mapped bytes 0F 8C A1 38 00 00: jl 0x58819f04
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        inc ebx
        ; Exact mapped bytes 75 E0: jne 0x58816649
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ebx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 44h]
        sub edx, ebx
        imul ebx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 1
        add ebx, ecx
        add ebx, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        shl ecx, 1
        ; Exact mapped bytes 0F 8F 4A 0C 00 00: jg 0x588172d7
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x4a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        sub ecx, dword ptr [ebp - 48h]
        shl ecx, 1
        ; Exact mapped bytes 0F 8C 3C 0C 00 00: jl 0x588172d7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 100h
        ; Exact mapped bytes 0F 8C 6C 05 00 00: jl 0x58816c14
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 85 A0 01 00 00: jne 0x58816852
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], ebx
        mov edi, ebx
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 6E 01 00 00: jle 0x58816834
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6e
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
        ; Exact mapped bytes 73 28: jae 0x588166fa
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x58816724
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 56: jae 0x5881677e
        __asm _emit 0x73
        __asm _emit 0x56
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 84 33 FF FF FF: je 0x588166b7
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x58816784
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 83 FE FF FF: jmp 0x588166b7
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C CA 36 00 00: jl 0x58819f04
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xca
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 28h]
        add edi, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 28h], edi
        dec edx
        ; Exact mapped bytes 0F 85 6A FE FF FF: jne 0x588166b7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B2 36 00 00: jmp 0x58819f04
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], ebx
        mov dword ptr [ebp - 34h], edx
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F 09 02 00 00: jg 0x58816a6d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x09
        __asm _emit 0x02
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
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp + 24h], eax
        mov eax, dword ptr [ebp - 30h]
        imul eax, edx
        shr eax, 5
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 2D 3C 5F 96 58: pand mm5, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 35 44 5F 96 58: pand mm6, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 3D 4C 5F 96 58: pand mm7, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edi, dword ptr [ebp - 28h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 6E 01 00 00: jle 0x58816a4d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6e
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
        ; Exact mapped bytes 73 28: jae 0x58816913
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x5881693d
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 56: jae 0x58816997
        __asm _emit 0x73
        __asm _emit 0x56
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 84 33 FF FF FF: je 0x588168d0
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x5881699d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 83 FE FF FF: jmp 0x588168d0
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C B1 34 00 00: jl 0x58819f04
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb1
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 28h]
        add edi, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 28h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 68 FE FF FF: jne 0x588168d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 97 34 00 00: jmp 0x58819f04
        __asm _emit 0xe9
        __asm _emit 0x97
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
        ; Exact mapped bytes 0F 6F 2D 3C 5F 96 58: movq mm5, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 44 5F 96 58: movq mm6, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 4C 5F 96 58: movq mm7, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edi, dword ptr [ebp - 28h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 54 01 00 00: jle 0x58816bf4
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
        ; Exact mapped bytes 73 32: jae 0x58816ade
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 2F: jae 0x58816b11
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 47: jae 0x58816b5c
        __asm _emit 0x73
        __asm _emit 0x47
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 84 2F FF FF FF: je 0x58816a91
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
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
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x58816b62
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9D FE FF FF: jmp 0x58816a91
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C 0A 33 00 00: jl 0x58819f04
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 28h]
        add edi, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 28h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 82 FE FF FF: jne 0x58816a91
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F0 32 00 00: jmp 0x58819f04
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], ebx
        mov dword ptr [ebp - 34h], edx
        mov edi, ebx
        mov ecx, dword ptr [ebp + 28h]
        shr ecx, 3
        mov eax, 20h
        sub eax, ecx
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F CC 02 00 00: jg 0x58816f04
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
        ; Exact mapped bytes 0F 7F 65 F4: movq qword ptr [ebp - 0xc], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 7F 65 EC: movq qword ptr [ebp - 0x14], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact mapped bytes 0F 6F 2D 3C 5F 96 58: movq mm5, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 44 5F 96 58: movq mm6, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 4C 5F 96 58: movq mm7, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edi, dword ptr [ebp - 28h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 59 02 00 00: jle 0x58816ee4
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
        ; Exact mapped bytes 73 5C: jae 0x58816cf3
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
        shr eax, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 73 5A: jae 0x58816d51
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
        shr eax, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x58816dd9
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 9D FE FF FF: je 0x58816c7c
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 5D F4: pmullw mm3, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F D4: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd4
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
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
        ; Exact mapped bytes 0F D5 65 EC: pmullw mm4, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xec
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x58816ddf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 98 FD FF FF: jmp 0x58816c7c
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C 1A 30 00 00: jl 0x58819f04
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1a
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 28h]
        add edi, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 28h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 7D FD FF FF: jne 0x58816c7c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 00 30 00 00: jmp 0x58819f04
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x30
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
        ; Exact mapped bytes 0F 7F 45 F4: movq qword ptr [ebp - 0xc], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 7F 45 E4: movq qword ptr [ebp - 0x1c], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 7F 65 EC: movq qword ptr [ebp - 0x14], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact mapped bytes 0F 6F 2D 3C 5F 96 58: movq mm5, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 44 5F 96 58: movq mm6, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 4C 5F 96 58: movq mm7, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x4c
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
        ; Exact mapped bytes 0F 8E 5F 03 00 00: jle 0x588172b7
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
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x58816ff2
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
        shr eax, 5
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
        shr eax, 5
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
        shr ebx, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58817082
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
        shr eax, 5
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
        shr eax, 5
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
        shr ebx, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x58817140
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 03 FE FF FF: je 0x58816f49
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x58817146
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 92 FC FF FF: jmp 0x58816f49
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8C 47 2C 00 00: jl 0x58819f04
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov edi, dword ptr [ebp - 28h]
        add edi, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 28h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 77 FC FF FF: jne 0x58816f49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2D 2C 00 00: jmp 0x58819f04
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], edx
        mov edx, ebx
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 1
        sub edx, ecx
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp + 14h]
        shl ecx, 1
        add dword ptr [ebp - 2ch], ecx
        mov ecx, dword ptr [ebp + 1ch]
        shl ecx, 1
        add dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 28h], 100h
        ; Exact mapped bytes 0F 8C 40 13 00 00: jl 0x58818646
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x40
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 85 57 06 00 00: jne 0x58817967
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], ebx
        mov edi, ebx
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 1B 06 00 00: jle 0x5881793f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1b
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
        ; Exact mapped bytes 7F 06: jg 0x5881733a
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x58817315
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D FD 02 00 00: jge 0x58817640
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        sub edx, edi
        add esi, edx
        add edi, edx
        sub ecx, edx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C 6D 01 00 00: jl 0x588174c4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov edx, eax
        shr ecx, 2
        ; Exact mapped bytes 73 28: jae 0x58817388
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x588173b2
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 56: jae 0x5881740c
        __asm _emit 0x73
        __asm _emit 0x56
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x588174bd
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x58817412
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, edx
        ; Exact mapped bytes E9 65 04 00 00: jmp 0x58817929
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 28: jae 0x588174f1
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x5881751b
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 56: jae 0x58817575
        __asm _emit 0x73
        __asm _emit 0x56
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x58817626
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x5881757b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
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
        ; Exact mapped bytes 0F 8E 0A 03 00 00: jle 0x5881793f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x0a
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
        ; Exact mapped bytes 0F 8D 67 01 00 00: jge 0x588177b0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 28: jae 0x58817676
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x588176a0
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 56: jae 0x588176fa
        __asm _emit 0x73
        __asm _emit 0x56
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 84 26 FF FF FF: je 0x58817626
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x58817700
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 76 FE FF FF: jmp 0x58817626
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 07: jl 0x588177bc
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 6D 01 00 00: jmp 0x58817929
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 38h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 28: jae 0x588177f1
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x5881781b
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 56: jae 0x58817875
        __asm _emit 0x73
        __asm _emit 0x56
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x58817926
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x5881787b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 38h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881793f
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x58817929
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C BF 25 00 00: jl 0x58819f04
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbf
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 2ch], ecx
        add dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp - 28h]
        add edi, ecx
        mov dword ptr [ebp - 28h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 B3 F9 FF FF: jne 0x58817315
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9D 25 00 00: jmp 0x58819f04
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], ebx
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F C0 06 00 00: jg 0x58818036
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc0
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
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp + 24h], eax
        mov eax, dword ptr [ebp - 30h]
        imul eax, edx
        shr eax, 5
        ; Exact mapped bytes 23 05 5C 5F 96 58: and eax, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 2D 3C 5F 96 58: pand mm5, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 35 44 5F 96 58: pand mm6, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 3D 4C 5F 96 58: pand mm7, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edi, dword ptr [ebp - 28h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 1D 06 00 00: jle 0x5881800e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1d
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
        ; Exact mapped bytes 7F 06: jg 0x58817a07
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x588179e2
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D FF 02 00 00: jge 0x58817d0f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 2ch]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C 6F 01 00 00: jl 0x58817b93
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 38h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 28: jae 0x58817a56
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x58817a80
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 56: jae 0x58817ada
        __asm _emit 0x73
        __asm _emit 0x56
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x58817b8b
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x58817ae0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 38h]
        ; Exact mapped bytes E9 65 04 00 00: jmp 0x58817ff8
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 28: jae 0x58817bc0
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x58817bea
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 56: jae 0x58817c44
        __asm _emit 0x73
        __asm _emit 0x56
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x58817cf5
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x58817c4a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
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
        ; Exact mapped bytes 0F 8E 0A 03 00 00: jle 0x5881800e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x0a
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
        ; Exact mapped bytes 0F 8D 67 01 00 00: jge 0x58817e7f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 28: jae 0x58817d45
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x58817d6f
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 56: jae 0x58817dc9
        __asm _emit 0x73
        __asm _emit 0x56
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 84 26 FF FF FF: je 0x58817cf5
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x58817dcf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 76 FE FF FF: jmp 0x58817cf5
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 07: jl 0x58817e8b
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 6D 01 00 00: jmp 0x58817ff8
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 38h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 28: jae 0x58817ec0
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x58817eea
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul ebx, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr ebx, 5
        and eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 56: jae 0x58817f44
        __asm _emit 0x73
        __asm _emit 0x56
        ; Exact mapped bytes 0F 6F 06: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x58817ff5
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 6F C8: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 6F D0: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd0
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 05 3C 5F 96 58: pand mm0, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F DB 15 4C 5F 96 58: pand mm2, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
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
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x58817f4a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 38h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881800e
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x58817ff8
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C F0 1E 00 00: jl 0x58819f04
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 2ch], ecx
        add dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp - 28h]
        add edi, ecx
        mov dword ptr [ebp - 28h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 B1 F9 FF FF: jne 0x588179e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CE 1E 00 00: jmp 0x58819f04
        __asm _emit 0xe9
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 6F 2D 3C 5F 96 58: movq mm5, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 44 5F 96 58: movq mm6, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 4C 5F 96 58: movq mm7, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edi, dword ptr [ebp - 28h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E B5 05 00 00: jle 0x5881861e
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
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 7F 06: jg 0x5881807f
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x5881805a
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D CB 02 00 00: jge 0x58818353
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 2ch]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C 55 01 00 00: jl 0x588181f1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 38h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 32: jae 0x588180d8
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 2F: jae 0x5881810b
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 47: jae 0x58818156
        __asm _emit 0x73
        __asm _emit 0x47
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x588181e9
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
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
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x5881815c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 38h]
        ; Exact mapped bytes E9 17 04 00 00: jmp 0x58818608
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 32: jae 0x58818228
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 2F: jae 0x5881825b
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 47: jae 0x588182a6
        __asm _emit 0x73
        __asm _emit 0x47
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x58818339
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
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
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x588182ac
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
        ; Exact mapped bytes 0F 8E D6 02 00 00: jle 0x5881861e
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
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D 4D 01 00 00: jge 0x588184a9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 32: jae 0x58818393
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 2F: jae 0x588183c6
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 47: jae 0x58818411
        __asm _emit 0x73
        __asm _emit 0x47
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 84 22 FF FF FF: je 0x58818339
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
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
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x58818417
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 90 FE FF FF: jmp 0x58818339
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 07: jl 0x588184b5
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 53 01 00 00: jmp 0x58818608
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 38h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 32: jae 0x588184f4
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 2F: jae 0x58818527
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
        shr eax, 5
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
        shr ebx, 5
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
        ; Exact mapped bytes 73 47: jae 0x58818572
        __asm _emit 0x73
        __asm _emit 0x47
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x58818605
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcb
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
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
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x58818578
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 38h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x5881861e
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x58818608
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C E0 18 00 00: jl 0x58819f04
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 2ch], ecx
        add dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp - 28h]
        add edi, ecx
        mov dword ptr [ebp - 28h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 19 FA FF FF: jne 0x5881805a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BE 18 00 00: jmp 0x58819f04
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], ebx
        mov ecx, dword ptr [ebp + 28h]
        shr ecx, 3
        mov eax, 20h
        sub eax, ecx
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F 44 0A 00 00: jg 0x588190a9
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
        ; Exact mapped bytes 0F 7F 65 F4: movq qword ptr [ebp - 0xc], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 7F 65 EC: movq qword ptr [ebp - 0x14], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact mapped bytes 0F 6F 2D 3C 5F 96 58: movq mm5, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 44 5F 96 58: movq mm6, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 4C 5F 96 58: movq mm7, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edi, dword ptr [ebp - 28h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E C9 09 00 00: jle 0x58819081
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
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 7F 06: jg 0x588186ce
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x588186a9
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D D5 04 00 00: jge 0x58818bac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 2ch]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C 5A 02 00 00: jl 0x58818945
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 38h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 5C: jae 0x58818751
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
        shr eax, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 73 5A: jae 0x588187af
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
        shr eax, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x58818837
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x5881893d
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 5D F4: pmullw mm3, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F D4: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd4
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
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
        ; Exact mapped bytes 0F D5 65 EC: pmullw mm4, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xec
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x5881883d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 38h]
        ; Exact mapped bytes E9 26 07 00 00: jmp 0x5881906b
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 5C: jae 0x588189a6
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
        shr eax, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 73 5A: jae 0x58818a04
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
        shr eax, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x58818a8c
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x58818b92
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 5D F4: pmullw mm3, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F D4: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd4
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
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
        ; Exact mapped bytes 0F D5 65 EC: pmullw mm4, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xec
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x58818a92
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
        ; Exact mapped bytes 0F 8E E0 04 00 00: jle 0x58819081
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
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D 52 02 00 00: jge 0x58818e07
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 73 5C: jae 0x58818c16
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
        shr eax, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 73 5A: jae 0x58818c74
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
        shr eax, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x58818cfc
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 90 FE FF FF: je 0x58818b92
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 5D F4: pmullw mm3, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F D4: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd4
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
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
        ; Exact mapped bytes 0F D5 65 EC: pmullw mm4, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xec
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x58818d02
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8B FD FF FF: jmp 0x58818b92
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 07: jl 0x58818e13
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 58 02 00 00: jmp 0x5881906b
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 38h], eax
        shr ecx, 2
        ; Exact mapped bytes 73 5C: jae 0x58818e7c
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
        shr eax, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 73 5A: jae 0x58818eda
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
        shr eax, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x58818f62
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x58819068
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F DD C3: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 6F 5E 08: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB CD: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DB D6: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact mapped bytes 0F D5 55 F4: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F D5 5D F4: pmullw mm3, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F D4: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd4
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 05: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 55 EC: pmullw mm2, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 0F DB D5: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact mapped bytes 0F DD CA: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact mapped bytes 0F 6F DC: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xdc
        ; Exact mapped bytes 0F DB DE: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
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
        ; Exact mapped bytes 0F D5 65 EC: pmullw mm4, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xec
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
        ; Exact mapped bytes 0F 85 00 FF FF FF: jne 0x58818f68
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 38h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x58819081
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x5881906b
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 0F 8C 7D 0E 00 00: jl 0x58819f04
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        mov ecx, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 2ch], ecx
        add dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp - 28h]
        add edi, ecx
        mov dword ptr [ebp - 28h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 05 F6 FF FF: jne 0x588186a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5B 0E 00 00: jmp 0x58819f04
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
        ; Exact mapped bytes 0F 7F 45 F4: movq qword ptr [ebp - 0xc], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 7F 45 E4: movq qword ptr [ebp - 0x1c], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 7F 65 EC: movq qword ptr [ebp - 0x14], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact mapped bytes 0F 6F 2D 3C 5F 96 58: movq mm5, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 35 44 5F 96 58: movq mm6, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 4C 5F 96 58: movq mm7, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edi, dword ptr [ebp - 28h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E E3 0D 00 00: jle 0x58819ee3
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
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 7F 06: jg 0x58819116
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, ecx
        add edi, ecx
        ; Exact mapped bytes EB DB: jmp 0x588190f1
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp edi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D E3 06 00 00: jge 0x58819802
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 2ch]
        sub ebx, edi
        add esi, ebx
        add edi, ebx
        sub ecx, ebx
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C 62 03 00 00: jl 0x58819495
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 38h], eax
        shr ecx, 2
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x588191cb
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
        shr eax, 5
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
        shr eax, 5
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
        shr ebx, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x5881925d
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
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
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
        shr eax, 5
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
        shr ebx, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        test ecx, ecx
        shr ecx, 1
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x5881931b
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x5881948d
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x58819321
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 38h]
        ; Exact mapped bytes E9 4E 0A 00 00: jmp 0x58819ee3
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x58819528
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
        shr eax, 5
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
        shr eax, 5
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
        shr ebx, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x588195b8
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
        shr eax, 5
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
        shr eax, 5
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
        shr ebx, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x58819676
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x588197e8
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x5881967c
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
        ; Exact mapped bytes 0F 8E EC 06 00 00: jle 0x58819ee3
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
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D 58 03 00 00: jge 0x58819b63
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x5881989e
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
        shr eax, 5
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
        shr eax, 5
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
        shr ebx, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x5881992e
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
        shr eax, 5
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
        shr eax, 5
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
        shr ebx, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x588199ec
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 F6 FD FF FF: je 0x588197e8
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x588199f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 85 FC FF FF: jmp 0x588197e8
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C 07: jl 0x58819b6f
        __asm _emit 0x7c
        __asm _emit 0x07
        add esi, ecx
        ; Exact mapped bytes E9 5E 03 00 00: jmp 0x58819ecd
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 38h], eax
        shr ecx, 2
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x58819c0a
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
        shr eax, 5
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
        shr eax, 5
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
        shr ebx, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58819c9a
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
        shr eax, 5
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
        shr eax, 5
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
        shr ebx, 5
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
        shr ebx, 5
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
        shr eax, 5
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
        shr edx, 5
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
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x58819d58
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x58819eca
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 6F C2: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc2
        ; Exact mapped bytes 0F DF C5: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 05: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 45 F4: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F DB C5: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CE: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
        ; Exact mapped bytes 0F DF CF: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D F4: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 0F 6F CB: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C1: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
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
        ; Exact mapped bytes 0F DD C2: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
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
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x58819d5e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 38h]
        movzx ecx, word ptr [esi]
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 7E 0B: jle 0x58819ee3
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 03: mov cx, word ptr [esi + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x03
        add esi, 5
        add esi, ecx
        ; Exact mapped bytes EB EA: jmp 0x58819ecd
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 7C 1F: jl 0x58819f04
        __asm _emit 0x7c
        __asm _emit 0x1f
        add esi, 2
        mov ecx, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 2ch], ecx
        add dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp - 28h]
        add edi, ecx
        mov dword ptr [ebp - 28h], edi
        dec dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 85 EF F1 FF FF: jne 0x588190f1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 00: jmp 0x58819f04
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
        ; Exact mapped bytes E8 3D 71 01 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret 28h
    }
}
