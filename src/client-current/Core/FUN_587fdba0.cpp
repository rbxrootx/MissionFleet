// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FDBA0 .. +0x2E1F bytes.
extern "C" __declspec(naked) void FUN_587fdba0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
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
        ; Exact mapped bytes 75 05: jne 0x587fdbc4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E8 2D 00 00: jmp 0x588009ac
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F 8D C4 2D 00 00: jge 0x588009ac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F 8E B8 2D 00 00: jle 0x588009ac
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 0F 8D AC 2D 00 00: jge 0x588009ac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 8E A0 2D 00 00: jle 0x588009ac
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC E2 C8 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe2
        __asm _emit 0xc8
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 34h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 E4 C8 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0xc8
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 44h], eax
        mov esi, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 7D 03: jge 0x587fdc42
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 40h], ecx
        mov ebx, dword ptr [ebp + 10h]
        cmp ebx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7D 25: jge 0x587fdc6f
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
        ; Exact mapped bytes 74 0F: je 0x587fdc6a
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 8C 49 2D 00 00: jl 0x588009aa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x49
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx eax, word ptr [esi]
        add esi, 2
        add esi, eax
        ; Exact mapped bytes E2 E3: loop 0x587fdc4f
        __asm _emit 0xe2
        __asm _emit 0xe3
        mov ebx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 7C 03: jl 0x587fdc7a
        __asm _emit 0x7c
        __asm _emit 0x03
        mov edx, dword ptr [ebp + 20h]
        sub edx, ebx
        mov dword ptr [ebp - 30h], edx
        imul ebx, dword ptr [ebp - 38h]
        add ebx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F 6E 6D 24: movd mm5, dword ptr [ebp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x6d
        __asm _emit 0x24
        ; Exact mapped bytes 0F 62 ED: punpckldq mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x62
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
        ; Exact mapped bytes 0F DB 3D 4C 5F 96 58: pand mm7, qword ptr [0x58965f4c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D6 08: psrlw mm6, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 14h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8F B9 09 00 00: jg 0x587fe671
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        cmp ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F 8C AD 09 00 00: jl 0x587fe671
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 2
        add ebx, ecx
        cmp dword ptr [ebp + 28h], 100h
        ; Exact mapped bytes 0F 8C 4B 05 00 00: jl 0x587fe224
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 85 88 02 00 00: jne 0x587fdf6b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x02
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
        ; Exact mapped bytes 0F 84 65 02 00 00: je 0x587fdf5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C AD 2C 00 00: jl 0x588009aa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xad
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 73 49: jae 0x587fdd52
        __asm _emit 0x73
        __asm _emit 0x49
        ; Exact mapped bytes 0F 6E 06: movd mm0, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 49: jae 0x587fdd9f
        __asm _emit 0x73
        __asm _emit 0x49
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F 83 90 00 00 00: jae 0x587fde37
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x90
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 1F 01 00 00: je 0x587fdf5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 18: movq qword ptr [edi + 0x18], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact mapped bytes 0F 85 E1 FE FF FF: jne 0x587fde3d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ebx, dword ptr [ebp - 38h]
        dec edx
        ; Exact mapped bytes 0F 85 7D FD FF FF: jne 0x587fdce3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3F 2A 00 00: jmp 0x588009aa
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], ebx
        mov edi, ebx
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F 93 01 00 00: jg 0x587fe10f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x93
        __asm _emit 0x01
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
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x587fe0f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C F9 29 00 00: jl 0x588009aa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 73 2A: jae 0x587fdfe7
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x587fe011
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
        ; Exact mapped bytes 73 4A: jae 0x587fe05f
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
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x587fe0f8
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x587fe065
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 2ch]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 2ch], edi
        dec dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 85 8F FE FF FF: jne 0x587fdf99
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B 28 00 00: jmp 0x588009aa
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x28
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
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x587fe20d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 6C 28 00 00: jl 0x588009aa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6c
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 73 2F: jae 0x587fe179
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x587fe1ae
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
        ; Exact mapped bytes 74 5D: je 0x587fe20d
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
        ; Exact mapped bytes 75 A3: jne 0x587fe1b0
        __asm _emit 0x75
        __asm _emit 0xa3
        mov edi, dword ptr [ebp - 2ch]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 2ch], edi
        dec dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 85 07 FF FF FF: jne 0x587fe126
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 86 27 00 00: jmp 0x588009aa
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], ebx
        mov edi, ebx
        mov ecx, dword ptr [ebp + 28h]
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
        ; Exact mapped bytes 0F 7F 75 F4: movq qword ptr [ebp - 0xc], mm6
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x75
        __asm _emit 0xf4
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F AC 01 00 00: jg 0x587fe3fb
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        imul ecx, edx
        shr ecx, 8
        mov dword ptr [ebp + 28h], ecx
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
        ; Exact mapped bytes 0F 6F 35 3C 5F 96 58: movq mm6, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 44 5F 96 58: movq mm7, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 5D 01 00 00: je 0x587fe3e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 1D 27 00 00: jl 0x588009aa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1d
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 73 5A: jae 0x587fe2f3
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 44 5F 96 58: and edx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 44 5F 96 58: and edx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x587fe344
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
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x587fe3e4
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x587fe34a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 2ch]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 2ch], edi
        dec dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 85 7F FE FF FF: jne 0x587fe275
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AF 25 00 00: jmp 0x588009aa
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 28h], ecx
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
        ; Exact mapped bytes 0F 7F 45 E4: movq qword ptr [ebp - 0x1c], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 6F 35 3C 5F 96 58: movq mm6, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 44 5F 96 58: movq mm7, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 1F 02 00 00: je 0x587fe65a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 69 25 00 00: jl 0x588009aa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x69
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        movzx ecx, word ptr [esi]
        add esi, 2
        shr ecx, 3
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x587fe4d9
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
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 3C 5F 96 58: and edx, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 3C 5F 96 58: and edx, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x587fe55a
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
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x587fe65a
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
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x587fe560
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 2ch]
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 2ch], edi
        dec dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 85 BD FD FF FF: jne 0x587fe429
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 39 23 00 00: jmp 0x588009aa
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], ebx
        mov dword ptr [ebp - 24h], ebx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        add dword ptr [ebp - 20h], ecx
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
        cmp dword ptr [ebp + 28h], 100h
        ; Exact mapped bytes 0F 8C AE 13 00 00: jl 0x587ffa58
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xae
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 0F 85 F7 09 00 00: jne 0x587ff0ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x09
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
        ; Exact mapped bytes 0F 84 CC 09 00 00: je 0x587ff094
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C DC 22 00 00: jl 0x588009aa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xdc
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
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 8E B0 09 00 00: jle 0x587ff092
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D A7 09 00 00: jge 0x587ff092
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8F CB 04 00 00: jg 0x587febbf
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 63 02 00 00: jle 0x587fe962
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 49: jae 0x587fe753
        __asm _emit 0x73
        __asm _emit 0x49
        ; Exact mapped bytes 0F 6E 06: movd mm0, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 49: jae 0x587fe7a0
        __asm _emit 0x73
        __asm _emit 0x49
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F 83 90 00 00 00: jae 0x587fe838
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x90
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 56 08 00 00: je 0x587ff094
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 18: movq qword ptr [edi + 0x18], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact mapped bytes 0F 85 E1 FE FF FF: jne 0x587fe83e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 32 07 00 00: jmp 0x587ff094
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 49: jae 0x587fe9b0
        __asm _emit 0x73
        __asm _emit 0x49
        ; Exact mapped bytes 0F 6E 06: movd mm0, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 49: jae 0x587fe9fd
        __asm _emit 0x73
        __asm _emit 0x49
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F 83 90 00 00 00: jae 0x587fea95
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x90
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 F9 05 00 00: je 0x587ff094
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 18: movq qword ptr [edi + 0x18], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact mapped bytes 0F 85 E1 FE FF FF: jne 0x587fea9b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D5 04 00 00: jmp 0x587ff094
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 20h]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 66 02 00 00: jle 0x587fee35
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 3
        ; Exact mapped bytes 73 49: jae 0x587fec23
        __asm _emit 0x73
        __asm _emit 0x49
        ; Exact mapped bytes 0F 6E 06: movd mm0, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 49: jae 0x587fec70
        __asm _emit 0x73
        __asm _emit 0x49
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F 83 90 00 00 00: jae 0x587fed08
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x90
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 1F 01 00 00: je 0x587fee2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 18: movq qword ptr [edi + 0x18], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact mapped bytes 0F 85 E1 FE FF FF: jne 0x587fed0e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 34h]
        ; Exact mapped bytes E9 5F 02 00 00: jmp 0x587ff094
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 49: jae 0x587fee83
        __asm _emit 0x73
        __asm _emit 0x49
        ; Exact mapped bytes 0F 6E 06: movd mm0, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7E 07: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 49: jae 0x587feed0
        __asm _emit 0x73
        __asm _emit 0x49
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F 83 90 00 00 00: jae 0x587fef68
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x90
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 08: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 1F 01 00 00: je 0x587ff08d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
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
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F DB 0D 44 5F 96 58: pand mm1, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CE: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
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
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F EB C2: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 7F 47 18: movq qword ptr [edi + 0x18], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact mapped bytes 0F 85 E1 FE FF FF: jne 0x587fef6e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 34h]
        ; Exact mapped bytes EB 02: jmp 0x587ff094
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov eax, dword ptr [ebp - 38h]
        add dword ptr [ebp - 20h], eax
        add dword ptr [ebp - 24h], eax
        add ebx, eax
        dec edx
        ; Exact mapped bytes 0F 85 0E F6 FF FF: jne 0x587fe6b4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FF 18 00 00: jmp 0x588009aa
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], ebx
        mov edi, ebx
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F BD 05 00 00: jg 0x587ff679
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xbd
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F 6F 35 3C 5F 96 58: movq mm6, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 44 5F 96 58: movq mm7, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 6C 05 00 00: je 0x587ff65a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C B6 18 00 00: jl 0x588009aa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb6
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
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 8E 50 05 00 00: jle 0x587ff658
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D 47 05 00 00: jge 0x587ff658
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8F 9B 02 00 00: jg 0x587ff3b5
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 4B 01 00 00: jle 0x587ff270
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
        ; Exact mapped bytes 73 2A: jae 0x587ff15a
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x587ff184
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
        ; Exact mapped bytes 73 4A: jae 0x587ff1d2
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
        ; Exact mapped bytes 0F 84 82 04 00 00: je 0x587ff65a
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x587ff1d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EA 03 00 00: jmp 0x587ff65a
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 2A: jae 0x587ff29f
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x587ff2c9
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
        ; Exact mapped bytes 73 4A: jae 0x587ff317
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
        ; Exact mapped bytes 0F 84 3D 03 00 00: je 0x587ff65a
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x587ff31d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A5 02 00 00: jmp 0x587ff65a
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 20h]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 4E 01 00 00: jle 0x587ff513
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
        ; Exact mapped bytes 73 2A: jae 0x587ff3fa
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x587ff424
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
        ; Exact mapped bytes 73 4A: jae 0x587ff472
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
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x587ff50b
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x587ff478
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 34h]
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x587ff65a
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 2A: jae 0x587ff542
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 26: jae 0x587ff56c
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
        ; Exact mapped bytes 73 4A: jae 0x587ff5ba
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
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x587ff653
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
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x587ff5c0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 34h]
        ; Exact mapped bytes EB 02: jmp 0x587ff65a
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov edi, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 38h]
        add dword ptr [ebp - 20h], eax
        add dword ptr [ebp - 24h], eax
        add edi, eax
        mov dword ptr [ebp - 2ch], edi
        dec dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 85 68 FA FF FF: jne 0x587ff0dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 31 13 00 00: jmp 0x588009aa
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x13
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
        ; Exact mapped bytes 0F 6F 35 3C 5F 96 58: movq mm6, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 44 5F 96 58: movq mm7, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 94 03 00 00: je 0x587ffa39
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C FF 12 00 00: jl 0x588009aa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xff
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
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 8E 78 03 00 00: jle 0x587ffa37
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D 6F 03 00 00: jge 0x587ffa37
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8F B3 01 00 00: jg 0x587ff884
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        sub eax, edi
        ; Exact mapped bytes 0F 8E D7 00 00 00: jle 0x587ff7b3
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
        ; Exact mapped bytes 73 2F: jae 0x587ff716
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x587ff74b
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
        ; Exact mapped bytes 0F 84 E8 02 00 00: je 0x587ffa39
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
        ; Exact mapped bytes 75 A3: jne 0x587ff751
        __asm _emit 0x75
        __asm _emit 0xa3
        ; Exact mapped bytes E9 86 02 00 00: jmp 0x587ffa39
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 2F: jae 0x587ff7e7
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x587ff81c
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
        ; Exact mapped bytes 0F 84 17 02 00 00: je 0x587ffa39
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
        ; Exact mapped bytes 75 A3: jne 0x587ff822
        __asm _emit 0x75
        __asm _emit 0xa3
        ; Exact mapped bytes E9 B5 01 00 00: jmp 0x587ffa39
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 20h]
        sub eax, edi
        ; Exact mapped bytes 0F 8E D6 00 00 00: jle 0x587ff96a
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
        ; Exact mapped bytes 73 2F: jae 0x587ff8ce
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x587ff903
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
        ; Exact mapped bytes 74 5D: je 0x587ff962
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
        ; Exact mapped bytes 75 A3: jne 0x587ff905
        __asm _emit 0x75
        __asm _emit 0xa3
        add esi, dword ptr [ebp - 44h]
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x587ffa39
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 2F: jae 0x587ff99e
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, edx
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 31: jae 0x587ff9d3
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
        ; Exact mapped bytes 74 5D: je 0x587ffa32
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
        ; Exact mapped bytes 75 A3: jne 0x587ff9d5
        __asm _emit 0x75
        __asm _emit 0xa3
        add esi, dword ptr [ebp - 34h]
        ; Exact mapped bytes EB 02: jmp 0x587ffa39
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov eax, dword ptr [ebp - 38h]
        mov edi, dword ptr [ebp - 2ch]
        add dword ptr [ebp - 20h], eax
        add dword ptr [ebp - 24h], eax
        add edi, eax
        mov dword ptr [ebp - 2ch], edi
        dec dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 85 40 FC FF FF: jne 0x587ff693
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 52 0F 00 00: jmp 0x588009aa
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], ebx
        mov dword ptr [ebp - 30h], edx
        mov edi, ebx
        mov ecx, dword ptr [ebp + 28h]
        mov eax, 100h
        sub eax, ecx
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact mapped bytes 0F 8F 14 06 00 00: jg 0x5880008d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
        imul ecx, edx
        shr ecx, 8
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
        ; Exact mapped bytes 0F 6F 35 3C 5F 96 58: movq mm6, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 44 5F 96 58: movq mm7, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 AC 05 00 00: je 0x5880006e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C E2 0E 00 00: jl 0x588009aa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe2
        __asm _emit 0x0e
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
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 8E 90 05 00 00: jle 0x5880006c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D 87 05 00 00: jge 0x5880006c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8F BB 02 00 00: jg 0x587ffda9
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 5B 01 00 00: jle 0x587ffc54
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
        ; Exact mapped bytes 73 5A: jae 0x587ffb5e
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 44 5F 96 58: and edx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 44 5F 96 58: and edx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x587ffbaf
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
        ; Exact mapped bytes 0F 84 B9 04 00 00: je 0x5880006e
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x587ffbb5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1A 04 00 00: jmp 0x5880006e
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 5A: jae 0x587ffcb3
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 44 5F 96 58: and edx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 44 5F 96 58: and edx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x587ffd04
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
        ; Exact mapped bytes 0F 84 64 03 00 00: je 0x5880006e
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x587ffd0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 02 00 00: jmp 0x5880006e
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 20h]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 5E 01 00 00: jle 0x587fff17
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
        ; Exact mapped bytes 73 5A: jae 0x587ffe1e
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 44 5F 96 58: and edx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 44 5F 96 58: and edx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x587ffe6f
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
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x587fff0f
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x587ffe75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 34h]
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x5880006e
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 73 5A: jae 0x587fff76
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact mapped bytes AD: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 44 5F 96 58: and edx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 44 5F 96 58: and edx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 4D: jae 0x587fffc7
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
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x58800067
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
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x587fffcd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 34h]
        ; Exact mapped bytes EB 02: jmp 0x5880006e
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov eax, dword ptr [ebp - 38h]
        mov edi, dword ptr [ebp - 2ch]
        add dword ptr [ebp - 20h], eax
        add dword ptr [ebp - 24h], eax
        add edi, eax
        mov dword ptr [ebp - 2ch], edi
        dec dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 85 28 FA FF FF: jne 0x587ffab0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1D 09 00 00: jmp 0x588009aa
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 28h], ecx
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
        ; Exact mapped bytes 0F 7F 45 E4: movq qword ptr [ebp - 0x1c], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 6F 35 3C 5F 96 58: movq mm6, qword ptr [0x58965f3c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 44 5F 96 58: movq mm7, qword ptr [0x58965f44]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        movzx ecx, word ptr [esi]
        add esi, 2
        add edi, ecx
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 B4 08 00 00: je 0x5880098e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C CA 08 00 00: jl 0x588009aa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xca
        __asm _emit 0x08
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
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 8E 98 08 00 00: jle 0x5880098c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D 8F 08 00 00: jge 0x5880098c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8F 3F 04 00 00: jg 0x58800545
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 1D 02 00 00: jle 0x5880032e
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x588001a8
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
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 3C 5F 96 58: and edx, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 3C 5F 96 58: and edx, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x58800229
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
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 84 5F 07 00 00: je 0x5880098e
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
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x5880022f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 60 06 00 00: jmp 0x5880098e
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x588003bf
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
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 3C 5F 96 58: and edx, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 3C 5F 96 58: and edx, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x58800440
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
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 84 48 05 00 00: je 0x5880098e
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
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x58800446
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 49 04 00 00: jmp 0x5880098e
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 20h]
        sub eax, edi
        ; Exact mapped bytes 0F 8E 20 02 00 00: jle 0x58800775
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
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x588005ec
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
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 3C 5F 96 58: and edx, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 3C 5F 96 58: and edx, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x5880066d
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
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x5880076d
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
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x58800673
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 34h]
        ; Exact mapped bytes E9 19 02 00 00: jmp 0x5880098e
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 3
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x58800806
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
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 2ch]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, edx
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 2ch]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add ebx, edx
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 44 5F 96 58: and ebx, dword ptr [0x58965f44]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 23 05 3C 5F 96 58: and eax, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 15 3C 5F 96 58: and edx, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, dword ptr [ebp - 28h]
        shr edx, 8
        ; Exact mapped bytes 23 15 3C 5F 96 58: and edx, dword ptr [0x58965f3c]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, edx
        add eax, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        shr ecx, 1
        ; Exact mapped bytes 73 7D: jae 0x58800887
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
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x58800987
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
        ; Exact mapped bytes 0F D5 45 E4: pmullw mm0, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F D5 4D E4: pmullw mm1, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
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
        ; Exact mapped bytes 0F 6F D3: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 0F DF D7: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x5880088d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, dword ptr [ebp - 34h]
        ; Exact mapped bytes EB 02: jmp 0x5880098e
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, ecx
        mov eax, dword ptr [ebp - 38h]
        mov edi, dword ptr [ebp - 2ch]
        add dword ptr [ebp - 20h], eax
        add dword ptr [ebp - 24h], eax
        add edi, eax
        mov dword ptr [ebp - 2ch], edi
        dec dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 85 20 F7 FF FF: jne 0x588000c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 00: jmp 0x588009aa
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
        ; Exact mapped bytes E8 97 06 03 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret 28h
    }
}
