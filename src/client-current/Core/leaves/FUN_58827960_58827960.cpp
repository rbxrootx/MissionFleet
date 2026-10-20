// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58827960 .. +0x33D bytes.
extern "C" __declspec(naked) void FUN_58827960_58827960() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        push ebx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7E 14: jle 0x5882798a
        __asm _emit 0x7e
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes EB 0D: jmp 0x58827997
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 05: jne 0x58827997
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 FE 02 00 00: jmp 0x58827c95
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7E 14: jle 0x588279b3
        __asm _emit 0x7e
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp + 14h], edx
        ; Exact mapped bytes EB 05: jmp 0x588279b8
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 DD 02 00 00: jmp 0x58827c95
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 8E D3 02 00 00: jle 0x58827c95
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 0F 8F C4 02 00 00: jg 0x58827c95
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 8E BA 02 00 00: jle 0x58827c95
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edx + 20h]
        ; Exact mapped bytes 0F 8F AB 02 00 00: jg 0x58827c95
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 07: jge 0x588279f7
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 07: jge 0x58827a04
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 7E 09: jle 0x58827a18
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        cmp eax, dword ptr [edx + 20h]
        ; Exact mapped bytes 7E 09: jle 0x58827a2c
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp + 14h], edx
        cmp dword ptr [ebp + 1ch], 100h
        ; Exact mapped bytes 75 48: jne 0x58827a7d
        __asm _emit 0x75
        __asm _emit 0x48
        push 64h
        push 0
        lea eax, [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 CE 53 02 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 80h], 64h
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 80h]
        push edx
        push 1000400h
        push 0
        push 0
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 18 02 00 00: jmp 0x58827c95
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 0f800h
        shr ecx, 8
        imul ecx, dword ptr [ebp + 1ch]
        and ecx, 0f800h
        mov edx, dword ptr [ebp + 18h]
        and edx, 7e0h
        shr edx, 8
        imul edx, dword ptr [ebp + 1ch]
        and edx, 7e0h
        or ecx, edx
        mov eax, dword ptr [ebp + 18h]
        and eax, 1fh
        imul eax, dword ptr [ebp + 1ch]
        shr eax, 8
        and eax, 1fh
        or ecx, eax
        mov dword ptr [ebp + 18h], ecx
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 44 C6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x44
        __asm _emit 0xc6
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA 45 C6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x45
        __asm _emit 0xc6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 43 C6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x43
        __asm _emit 0xc6
        __asm _emit 0xff
        imul eax, dword ptr [ebp + 0ch]
        add esi, eax
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F AF 15 98 5F 90 58: imul edx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        add esi, edx
        mov dword ptr [ebp - 18h], esi
        mov esi, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 14h]
        sub edx, dword ptr [ebp + 0ch]
        mov ebx, 100h
        sub ebx, dword ptr [ebp + 1ch]
        shr ebx, 3
        mov dword ptr [ebp - 8], ebx
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
        mov ecx, dword ptr [ebp - 0ch]
        shr ecx, 2
        ; Exact mapped bytes 73 36: jae 0x58827b86
        __asm _emit 0x73
        __asm _emit 0x36
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp - 8]
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
        imul ebx, dword ptr [ebp - 8]
        shr ebx, 5
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        add esi, 2
        shr ecx, 1
        ; Exact mapped bytes 73 34: jae 0x58827bbe
        __asm _emit 0x73
        __asm _emit 0x34
        mov eax, dword ptr [esi]
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 5
        imul eax, dword ptr [ebp - 8]
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
        imul ebx, dword ptr [ebp - 8]
        shr ebx, 5
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [ebp + 18h]
        mov dword ptr [esi], eax
        add esi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 41: jae 0x58827c03
        __asm _emit 0x73
        __asm _emit 0x41
        ; Exact mapped bytes 0F 6F 16: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
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
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58827c89
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
        ; Exact mapped bytes 75 80: jne 0x58827c09
        __asm _emit 0x75
        __asm _emit 0x80
        add esi, dword ptr [ebp - 1ch]
        dec edx
        ; Exact mapped bytes 0F 85 B5 FE FF FF: jne 0x58827b48
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
