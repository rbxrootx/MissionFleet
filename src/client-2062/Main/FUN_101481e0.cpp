// Reconstructed from FUN_101481e0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_101481e0() {
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
        ; Exact instruction bytes: jne short L_101481FA
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact instruction bytes: jmp near ptr L_1014C04B
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
L_101481FA:
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
        ; Exact instruction bytes: jge near ptr L_1014C04B
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2d
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact instruction bytes: jle near ptr L_1014C04B
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x21
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact instruction bytes: jge near ptr L_1014C04B
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x15
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact instruction bytes: jle near ptr L_1014C04B
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x3e
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
        ; Exact instruction bytes: jge short L_10148274
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 4], ecx
L_10148274:
        mov ebx, dword ptr [ebp - 20h]
        mov edi, dword ptr [ebp + 10h]
        cmp edi, dword ptr [ebp + 18h]
        ; Exact instruction bytes: jge short L_1014828D
        __asm _emit 0x7d
        __asm _emit 0x0e
        sub edi, dword ptr [ebp + 18h]
        imul edi, dword ptr [ebp - 44h]
        shl edi, 1
        sub esi, edi
        mov edi, dword ptr [ebp + 18h]
L_1014828D:
        mov edx, dword ptr [ebp - 4]
        sub edx, edi
        imul edi, ebx
        add edi, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        ; Exact instruction bytes: jle short L_101482C8
        __asm _emit 0x7e
        __asm _emit 0x22
        sub eax, ecx
        shl ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        add edi, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp + 1ch]
        ; Exact instruction bytes: mov dword ptr [ebp - 30h], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jle short L_101482E9
        __asm _emit 0x7e
        __asm _emit 0x2a
        sub eax, ecx
        shl ecx, 1
        mov dword ptr [ebp - 30h], ecx
        ; Exact instruction bytes: jmp short L_101482E9
        __asm _emit 0xeb
        __asm _emit 0x21
L_101482C8:
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 1
        add edi, ecx
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp + 1ch]
        ; Exact instruction bytes: jle near ptr L_1014A1A4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc9
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: mov dword ptr [ebp - 2ch], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        shl ecx, 1
        mov dword ptr [ebp - 30h], ecx
L_101482E9:
        mov ecx, eax
        shl ecx, 1
        sub ebx, ecx
        cmp dword ptr [ebp + 24h], 100h
        ; Exact instruction bytes: jl near ptr L_1014886C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0
        ; Exact instruction bytes: jne short L_10148349
        __asm _emit 0x75
        __asm _emit 0x47
L_10148302:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, eax
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014830D
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact instruction bytes: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
L_1014830D:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10148312
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact instruction bytes: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
L_10148312:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10148324
        __asm _emit 0x73
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10148324:
        ; Exact instruction bytes: je short L_1014833C
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        ; Exact instruction bytes: loop 10148326h
        __asm _emit 0xe2
        __asm _emit 0xea
L_1014833C:
        add esi, dword ptr [ebp - 30h]
        add edi, ebx
        dec edx
        ; Exact instruction bytes: jne short L_10148302
        __asm _emit 0x75
        __asm _emit 0xbe
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
L_10148349:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp + 28h], 0
        ; Exact instruction bytes: jg near ptr L_101485CA
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0ffffff00h
        ; Exact instruction bytes: jl near ptr L_10149977
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0e
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: mov edx, 100h
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, dword ptr [ebp + 28h]
        shr edx, 3
        ; Exact instruction bytes: movd mm4, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe2
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_10148392:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101483C8
        __asm _emit 0x73
        __asm _emit 0x2c
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_101483C8:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101483F6
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_101483F6:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10148439
        __asm _emit 0x73
        __asm _emit 0x3f
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
L_10148439:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101484B9
        __asm _emit 0x73
        __asm _emit 0x7c
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact instruction bytes: por mm3, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xda
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
L_101484B9:
        ; Exact instruction bytes: je near ptr L_101485B6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101484BF:
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact instruction bytes: por mm3, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xda
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 10h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 18h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x18
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact instruction bytes: por mm3, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xda
        ; Exact instruction bytes: movq qword ptr [edi + 10h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact instruction bytes: movq qword ptr [edi + 18h], mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_101484BF
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_101485B6:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_10148392
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
L_101485CA:
        cmp dword ptr [ebp + 28h], 100h
        ; Exact instruction bytes: jg near ptr L_10149B8C
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb5
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 28h]
        shr edx, 3
        ; Exact instruction bytes: movd mm4, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe2
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_101485FB:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10148637
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        add ax, word ptr [esi - 2]
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_10148637:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014866A
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1014866A:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101486B3
        __asm _emit 0x73
        __asm _emit 0x45
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
L_101486B3:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10148743
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
L_10148743:
        ; Exact instruction bytes: je near ptr L_10148858
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10148749:
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm2, qword ptr [esi + 10h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 18h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x18
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq qword ptr [edi + 10h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact instruction bytes: movq qword ptr [edi + 18h], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_10148749
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_10148858:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_101485FB
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
L_1014886C:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        mov ecx, dword ptr [ebp + 24h]
        shr ecx, 3
        ; Exact instruction bytes: mov eax, 20h
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        mov dword ptr [ebp - 40h], eax
        ; Exact instruction bytes: movd mm4, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe0
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq qword ptr [ebp - 14h], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xec
        mov eax, dword ptr [ebp + 28h]
        cmp eax, 0
        ; Exact instruction bytes: jg near ptr L_10148B44
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0ffffff00h
        ; Exact instruction bytes: jl near ptr L_10148EF3
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: mov edx, 100h
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, eax
        shr edx, 3
        imul ecx, edx
        shr ecx, 5
        mov dword ptr [ebp + 24h], ecx
        ; Exact instruction bytes: movd mm4, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe1
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq qword ptr [ebp - 1ch], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_101488DE:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10148944
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp - 40h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_10148944:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101489A2
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp - 40h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_101489A2:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10148A2A
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10148A2A:
        ; Exact instruction bytes: je near ptr L_10148B30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10148A30:
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: por mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xcb
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcc
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_10148A30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10148B30:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_101488DE
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
L_10148B44:
        cmp eax, 100h
        ; Exact instruction bytes: jg near ptr L_1014923F
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 24h], ecx
        ; Exact instruction bytes: movd mm0, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact instruction bytes: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact instruction bytes: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact instruction bytes: movq qword ptr [ebp - 1ch], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xe4
        shr eax, 3
        mov dword ptr [ebp + 28h], eax
        ; Exact instruction bytes: movd mm0, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact instruction bytes: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact instruction bytes: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact instruction bytes: movq qword ptr [ebp - 28h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_10148B87:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10148C1F
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, edx
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp - 40h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_10148C1F:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10148CAF
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, edx
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp - 40h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_10148CAF:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10148D6D
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10148D6D:
        ; Exact instruction bytes: je near ptr L_10148EDF
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10148D73:
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_10148D73
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_10148EDF:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_10148B87
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
L_10148EF3:
        ; Exact instruction bytes: mov eax, 20h
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        mov dword ptr [ebp + 24h], eax
        ; Exact instruction bytes: movd mm4, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe0
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_10148F1B:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10148FD7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movzx eax, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x06
        mov ebx, eax
        not ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        imul ebx, dword ptr [ebp + 24h]
        add eax, ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        ; Exact instruction bytes: movzx ebx, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1f
        shr ebx, 0bh
        imul eax, ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movzx edx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x16
        mov ebx, edx
        not ebx
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        imul ebx, dword ptr [ebp + 24h]
        add edx, ebx
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr edx, 5
        ; Exact instruction bytes: movzx ebx, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1f
        ; Exact instruction bytes: and ebx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        imul edx, ebx
        shr edx, 1
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        ; Exact instruction bytes: movzx edx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x16
        mov ebx, edx
        not ebx
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        add edx, ebx
        ; Exact instruction bytes: movzx ebx, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1f
        ; Exact instruction bytes: and ebx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        mov word ptr [edi], ax
        add esi, 2
        add edi, 2
L_10148FD7:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014906C
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movd mm0, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pandn mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movd mm3, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1f
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movd mm1, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pandn mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movd mm3, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movd mm1, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movd mm3, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_1014906C:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10149103
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pandn mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pandn mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10149103:
        ; Exact instruction bytes: je near ptr L_1014922B
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10149109:
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pandn mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pandn mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pandn mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pandn mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq mm3, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_10149109
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014922B:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_10148F1B
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
L_1014923F:
        mov dword ptr [ebp + 24h], ecx
        ; Exact instruction bytes: movd mm4, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe1
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, 101h
        ; Exact instruction bytes: jg near ptr L_1014949F
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_1014926B:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101492CA
        __asm _emit 0x73
        __asm _emit 0x55
        mov bx, word ptr [edi]
        xor eax, eax
        mov ax, word ptr [esi]
        not ebx
        ; Exact instruction bytes: and ebx, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 0bh
        shr ebx, 0ah
        imul ebx, dword ptr [ebp + 24h]
        imul eax, ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov bx, word ptr [edi]
        mov dx, word ptr [esi]
        not ebx
        ; Exact instruction bytes: and ebx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        imul edx, ebx
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add word ptr [edi], ax
        add esi, 2
        add edi, 2
L_101492CA:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10149338
        __asm _emit 0x73
        __asm _emit 0x6a
        ; Exact instruction bytes: movd mm0, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x07
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x0a
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: movd mm3, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1e
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movd mm1, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movd mm3, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movd mm1, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: movd mm3, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x0a
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0x07
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_10149338:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101493A8
        __asm _emit 0x73
        __asm _emit 0x6c
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x0a
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x0a
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_101493A8:
        ; Exact instruction bytes: je near ptr L_1014948B
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101493AE:
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x0a
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x0a
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x0a
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x0a
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_101493AE
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1014948B:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014926B
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
L_1014949F:
        ; Exact instruction bytes: movq qword ptr [ebp - 1ch], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xe4
L_101494A3:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_101495AF
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ax, word ptr [edi]
        mov word ptr [ebp - 14h], ax
        ; Exact instruction bytes: movd mm0, dword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ax, word ptr [esi]
        mov word ptr [ebp - 14h], ax
        ; Exact instruction bytes: movd mm4, dword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact instruction bytes: movq mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe1
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm4, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: por mm4, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movd dword ptr [ebp - 14h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x45
        __asm _emit 0xec
        mov ax, word ptr [ebp - 14h]
        mov word ptr [edi], ax
        add esi, 2
        add edi, 2
L_101495AF:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014969D
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movd mm0, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe1
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm4, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: por mm4, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_1014969D:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014978D
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe1
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm4, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: por mm4, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1014978D:
        ; Exact instruction bytes: je near ptr L_10149963
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10149793:
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe1
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm4, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: por mm4, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe1
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm4, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: por mm4, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_10149793
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_10149963:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_101494A3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
L_10149977:
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1014998C:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101499FC
        __asm _emit 0x73
        __asm _emit 0x66
        mov bx, word ptr [edi]
        xor eax, eax
        mov ax, word ptr [esi]
        ; Exact instruction bytes: and ebx, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 0bh
        shr ebx, 5
        imul eax, ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov bx, word ptr [edi]
        mov dx, word ptr [esi]
        ; Exact instruction bytes: and ebx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 0bh
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        mov bx, word ptr [edi]
        mov dx, word ptr [esi]
        ; Exact instruction bytes: and ebx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        mov word ptr [edi], ax
        add esi, 2
        add edi, 2
L_101499FC:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10149A5A
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact instruction bytes: movd mm2, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x16
        ; Exact instruction bytes: movd mm4, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x27
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_10149A5A:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10149ABA
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10149ABA:
        ; Exact instruction bytes: je near ptr L_10149B78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10149AC0:
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_10149AC0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10149B78:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014998C
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
L_10149B8C:
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ebp + 28h], 101h
        ; Exact instruction bytes: jg near ptr L_10149DCC
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10149BAE:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10149C24
        __asm _emit 0x73
        __asm _emit 0x6c
        mov bx, word ptr [edi]
        xor eax, eax
        mov ax, word ptr [esi]
        not ebx
        ; Exact instruction bytes: and ebx, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 0bh
        shr ebx, 5
        imul eax, ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov bx, word ptr [edi]
        mov dx, word ptr [esi]
        not ebx
        ; Exact instruction bytes: and ebx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 0bh
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        mov bx, word ptr [edi]
        mov dx, word ptr [esi]
        not ebx
        ; Exact instruction bytes: and ebx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add word ptr [edi], ax
        add esi, 2
        add edi, 2
L_10149C24:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10149C88
        __asm _emit 0x73
        __asm _emit 0x60
        ; Exact instruction bytes: movd mm2, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x17
        ; Exact instruction bytes: movd mm4, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_10149C88:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10149CEE
        __asm _emit 0x73
        __asm _emit 0x62
        ; Exact instruction bytes: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10149CEE:
        ; Exact instruction bytes: je near ptr L_10149DB8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10149CF4:
        ; Exact instruction bytes: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm2, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_10149CF4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10149DB8:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_10149BAE
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
L_10149DCC:
        add esi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10149EA5
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ax, word ptr [edi]
        mov word ptr [ebp - 14h], ax
        ; Exact instruction bytes: movd mm0, dword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ax, word ptr [esi]
        mov word ptr [ebp - 14h], ax
        ; Exact instruction bytes: movd mm4, dword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movd dword ptr [ebp - 14h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x45
        __asm _emit 0xec
        mov ax, word ptr [ebp - 14h]
        mov word ptr [edi], ax
        add esi, 2
        add edi, 2
L_10149EA5:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10149F60
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movd mm0, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_10149F60:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014A020
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1014A020:
        ; Exact instruction bytes: je near ptr L_1014A190
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014A026:
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014A026
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014A190:
        add esi, dword ptr [ebp - 30h]
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_10149DCC
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
L_1014A1A4:
        shl eax, 1
        sub ebx, eax
        shr eax, 1
        cmp dword ptr [ebp + 24h], 100h
        ; Exact instruction bytes: jl near ptr L_1014A73D
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0
        ; Exact instruction bytes: jne short L_1014A226
        __asm _emit 0x75
        __asm _emit 0x69
L_1014A1BD:
        mov ecx, eax
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A1C5
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact instruction bytes: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
L_1014A1C5:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A1CA
        __asm _emit 0x73
        __asm _emit 0x01
        ; Exact instruction bytes: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
L_1014A1CA:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A1DA
        __asm _emit 0x73
        __asm _emit 0x0c
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
L_1014A1DA:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A1F4
        __asm _emit 0x73
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
L_1014A1F4:
        ; Exact instruction bytes: je short L_1014A21C
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm2, qword ptr [esi + 10h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 18h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x18
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact instruction bytes: movq qword ptr [edi + 10h], mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact instruction bytes: movq qword ptr [edi + 18h], mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        ; Exact instruction bytes: loop 1014a1f6h
        __asm _emit 0xe2
        __asm _emit 0xda
L_1014A21C:
        add edi, ebx
        dec edx
        ; Exact instruction bytes: jne short L_1014A1BD
        __asm _emit 0x75
        __asm _emit 0x9c
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
L_1014A226:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp + 28h], 0
        ; Exact instruction bytes: jg near ptr L_1014A4A1
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 28h], 0ffffff00h
        ; Exact instruction bytes: jl near ptr L_1014B825
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xdf
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: mov edx, 100h
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, dword ptr [ebp + 28h]
        shr edx, 3
        ; Exact instruction bytes: movd mm4, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe2
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1014A26F:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A2A2
        __asm _emit 0x73
        __asm _emit 0x2c
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1014A2A2:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A2D0
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1014A2D0:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A313
        __asm _emit 0x73
        __asm _emit 0x3f
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
L_1014A313:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A393
        __asm _emit 0x73
        __asm _emit 0x7c
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact instruction bytes: por mm3, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xda
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
L_1014A393:
        ; Exact instruction bytes: je near ptr L_1014A490
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1014A399:
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact instruction bytes: por mm3, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xda
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 10h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 18h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x18
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact instruction bytes: por mm3, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xda
        ; Exact instruction bytes: movq qword ptr [edi + 10h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact instruction bytes: movq qword ptr [edi + 18h], mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014A399
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1014A490:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014A26F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
L_1014A4A1:
        cmp dword ptr [ebp + 28h], 100h
        ; Exact instruction bytes: jg near ptr L_1014BA40
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x92
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 28h]
        shr edx, 3
        ; Exact instruction bytes: movd mm4, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe2
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1014A4D2:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A50B
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        add ax, word ptr [esi - 2]
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1014A50B:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A53E
        __asm _emit 0x73
        __asm _emit 0x2f
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        not eax
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, edx
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        add eax, dword ptr [esi - 4]
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1014A53E:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A587
        __asm _emit 0x73
        __asm _emit 0x45
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
L_1014A587:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014A617
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        test ecx, ecx
L_1014A617:
        ; Exact instruction bytes: je near ptr L_1014A72C
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014A61D:
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm2, qword ptr [esi + 10h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 18h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x18
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq qword ptr [edi + 10h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact instruction bytes: movq qword ptr [edi + 18h], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014A61D
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014A72C:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014A4D2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
L_1014A73D:
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 48h], edx
        mov ecx, dword ptr [ebp + 24h]
        shr ecx, 3
        ; Exact instruction bytes: mov eax, 20h
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        mov dword ptr [ebp - 40h], eax
        ; Exact instruction bytes: movd mm4, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe0
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq qword ptr [ebp - 14h], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xec
        mov eax, dword ptr [ebp + 28h]
        cmp eax, 0
        ; Exact instruction bytes: jg near ptr L_1014AD53
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0ffffff00h
        ; Exact instruction bytes: jl near ptr L_1014AA0D
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 100h
        shr eax, 3
        imul ecx, eax
        shr ecx, 5
        mov dword ptr [ebp + 24h], ecx
        ; Exact instruction bytes: movd mm4, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe1
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq qword ptr [ebp - 1ch], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1014A7AD:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A810
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp - 40h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1014A810:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014A86E
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp - 40h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1014A86E:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014A8F6
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1014A8F6:
        ; Exact instruction bytes: je near ptr L_1014A9FC
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014A8FC:
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: por mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xcb
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: paddusw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcc
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014A8FC
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1014A9FC:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014A7AD
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
L_1014AA0D:
        ; Exact instruction bytes: mov eax, 20h
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        mov dword ptr [ebp + 24h], eax
        ; Exact instruction bytes: movd mm4, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe0
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1014AA35:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014AAEE
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movzx eax, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x06
        mov ebx, eax
        not ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        imul ebx, dword ptr [ebp + 24h]
        add eax, ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        ; Exact instruction bytes: movzx ebx, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1f
        shr ebx, 0bh
        imul eax, ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movzx edx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x16
        mov ebx, edx
        not ebx
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        imul ebx, dword ptr [ebp + 24h]
        add edx, ebx
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr edx, 5
        ; Exact instruction bytes: movzx ebx, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1f
        ; Exact instruction bytes: and ebx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        imul edx, ebx
        shr edx, 1
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        ; Exact instruction bytes: movzx edx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x16
        mov ebx, edx
        not ebx
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        add edx, ebx
        ; Exact instruction bytes: movzx ebx, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1f
        ; Exact instruction bytes: and ebx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        mov word ptr [edi], ax
        add esi, 2
        add edi, 2
L_1014AAEE:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014AB83
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movd mm0, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pandn mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movd mm3, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1f
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movd mm1, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pandn mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movd mm3, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movd mm1, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movd mm3, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_1014AB83:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014AC1A
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pandn mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pandn mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1014AC1A:
        ; Exact instruction bytes: je near ptr L_1014AD42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014AC20:
        ; Exact instruction bytes: movq mm0, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pandn mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pandn mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: pandn mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdd
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdd
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pandn mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pandn mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xdc
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
        ; Exact instruction bytes: movq mm3, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014AC20
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014AD42:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014AA35
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
L_1014AD53:
        cmp eax, 100h
        ; Exact instruction bytes: jg near ptr L_1014B0F9
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 3
        mov dword ptr [ebp + 28h], eax
        ; Exact instruction bytes: movd mm0, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact instruction bytes: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact instruction bytes: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact instruction bytes: movq qword ptr [ebp - 1ch], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact instruction bytes: movd mm0, eax
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact instruction bytes: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact instruction bytes: punpcklwd mm0, mm0
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact instruction bytes: movq qword ptr [ebp - 28h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1014AD93:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014AE28
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, edx
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp - 40h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1014AE28:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014AEB8
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov edx, eax
        not eax
        mov ebx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 28h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 28h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, edx
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or ebx, eax
        mov eax, dword ptr [edi]
        mov edx, eax
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul eax, dword ptr [ebp - 40h]
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, dword ptr [ebp - 40h]
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add eax, ebx
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1014AEB8:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014AF76
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1014AF76:
        ; Exact instruction bytes: je near ptr L_1014B0E8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014AF7C:
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm3, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1f
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 28h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm3, qword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: paddusw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc3
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014AF7C
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014B0E8:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014AD93
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
L_1014B0F9:
        mov dword ptr [ebp + 24h], ecx
        ; Exact instruction bytes: movd mm4, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe1
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, 101h
        ; Exact instruction bytes: jg near ptr L_1014B353
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_1014B125:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014B181
        __asm _emit 0x73
        __asm _emit 0x55
        mov bx, word ptr [edi]
        xor eax, eax
        mov ax, word ptr [esi]
        not ebx
        ; Exact instruction bytes: and ebx, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 0bh
        shr ebx, 0ah
        imul ebx, dword ptr [ebp + 24h]
        imul eax, ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov bx, word ptr [edi]
        mov dx, word ptr [esi]
        not ebx
        ; Exact instruction bytes: and ebx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp + 24h]
        shr ebx, 5
        imul edx, ebx
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add word ptr [edi], ax
        add esi, 2
        add edi, 2
L_1014B181:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014B1EF
        __asm _emit 0x73
        __asm _emit 0x6a
        ; Exact instruction bytes: movd mm0, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x07
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x0a
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: movd mm3, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1e
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movd mm1, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movd mm3, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movd mm1, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: movd mm3, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x0a
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0x07
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_1014B1EF:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014B25F
        __asm _emit 0x73
        __asm _emit 0x6c
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x0a
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x0a
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1014B25F:
        ; Exact instruction bytes: je near ptr L_1014B342
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1014B265:
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x0a
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0f
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: movq mm3, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x1e
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x0a
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0x07
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x0a
        ; Exact instruction bytes: pmullw mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc4
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact instruction bytes: pand mm3, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xdf
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x0a
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014B265
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1014B342:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014B125
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
L_1014B353:
        ; Exact instruction bytes: movq qword ptr [ebp - 1ch], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xe4
L_1014B357:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014B460
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ax, word ptr [edi]
        mov word ptr [ebp - 14h], ax
        ; Exact instruction bytes: movd mm0, dword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ax, word ptr [esi]
        mov word ptr [ebp - 14h], ax
        ; Exact instruction bytes: movd mm4, dword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact instruction bytes: movq mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe1
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm4, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: por mm4, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movd dword ptr [ebp - 14h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x45
        __asm _emit 0xec
        mov ax, word ptr [ebp - 14h]
        mov word ptr [edi], ax
        add esi, 2
        add edi, 2
L_1014B460:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014B54E
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movd mm0, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe1
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm4, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: por mm4, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_1014B54E:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014B63E
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe1
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm4, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: por mm4, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1014B63E:
        ; Exact instruction bytes: je near ptr L_1014B814
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014B644:
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe1
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm4, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: por mm4, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe1
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm4, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x65
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe5
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm4, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 1ch]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: por mm4, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014B644
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014B814:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014B357
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
L_1014B825:
        mov dword ptr [ebp + 24h], ecx
        ; Exact instruction bytes: movd mm4, ecx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xe1
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: punpcklwd mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xe4
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1014B846:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014B8B3
        __asm _emit 0x73
        __asm _emit 0x66
        mov bx, word ptr [edi]
        xor eax, eax
        mov ax, word ptr [esi]
        ; Exact instruction bytes: and ebx, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 0bh
        shr ebx, 5
        imul eax, ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov bx, word ptr [edi]
        mov dx, word ptr [esi]
        ; Exact instruction bytes: and ebx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 0bh
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        mov bx, word ptr [edi]
        mov dx, word ptr [esi]
        ; Exact instruction bytes: and ebx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        mov word ptr [edi], ax
        add esi, 2
        add edi, 2
L_1014B8B3:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014B911
        __asm _emit 0x73
        __asm _emit 0x5a
        ; Exact instruction bytes: movd mm2, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x16
        ; Exact instruction bytes: movd mm4, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x27
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_1014B911:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014B971
        __asm _emit 0x73
        __asm _emit 0x5c
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1014B971:
        ; Exact instruction bytes: je near ptr L_1014BA2F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1014B977:
        ; Exact instruction bytes: movq mm2, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x16
        ; Exact instruction bytes: movq mm4, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x27
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd4
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: por mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014B977
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1014BA2F:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014B846
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
L_1014BA40:
        ; Exact instruction bytes: movq mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ebp + 28h], 101h
        ; Exact instruction bytes: jg near ptr L_1014BC7A
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_1014BA62:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014BAD5
        __asm _emit 0x73
        __asm _emit 0x6c
        mov bx, word ptr [edi]
        xor eax, eax
        mov ax, word ptr [esi]
        not ebx
        ; Exact instruction bytes: and ebx, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 0bh
        shr ebx, 5
        imul eax, ebx
        ; Exact instruction bytes: and eax, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov bx, word ptr [edi]
        mov dx, word ptr [esi]
        not ebx
        ; Exact instruction bytes: and ebx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 0bh
        ; Exact instruction bytes: and edx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        mov bx, word ptr [edi]
        mov dx, word ptr [esi]
        not ebx
        ; Exact instruction bytes: and ebx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul edx, ebx
        shr edx, 5
        ; Exact instruction bytes: and edx, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, edx
        add word ptr [edi], ax
        add esi, 2
        add edi, 2
L_1014BAD5:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014BB39
        __asm _emit 0x73
        __asm _emit 0x60
        ; Exact instruction bytes: movd mm2, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x17
        ; Exact instruction bytes: movd mm4, dword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_1014BB39:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014BB9F
        __asm _emit 0x73
        __asm _emit 0x62
        ; Exact instruction bytes: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1014BB9F:
        ; Exact instruction bytes: je near ptr L_1014BC69
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1014BBA5:
        ; Exact instruction bytes: movq mm2, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x17
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm2, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd0
        ; Exact instruction bytes: pandn mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xc5
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: psrlw mm3, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc3
        ; Exact instruction bytes: pand mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc5
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm3, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe3
        ; Exact instruction bytes: pand mm3, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xde
        ; Exact instruction bytes: psrlw mm3, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcb
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact instruction bytes: pandn mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcf
        ; Exact instruction bytes: pand mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe7
        ; Exact instruction bytes: pmullw mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcc
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014BBA5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1014BC69:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014BA62
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014C049
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_1014BC7A:
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014BD50
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ax, word ptr [edi]
        mov word ptr [ebp - 14h], ax
        ; Exact instruction bytes: movd mm0, dword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ax, word ptr [esi]
        mov word ptr [ebp - 14h], ax
        ; Exact instruction bytes: movd mm4, dword ptr [ebp - 14h]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movd dword ptr [ebp - 14h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x45
        __asm _emit 0xec
        mov ax, word ptr [ebp - 14h]
        mov word ptr [edi], ax
        add esi, 2
        add edi, 2
L_1014BD50:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014BE0B
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movd mm0, dword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movd dword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x07
        add esi, 4
        add edi, 4
L_1014BE0B:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014BECB
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1014BECB:
        ; Exact instruction bytes: je near ptr L_1014C03B
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014BED1:
        ; Exact instruction bytes: movq mm0, qword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm3, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc3
        ; Exact instruction bytes: pandn mm3, qword ptr [101acdc0h]
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm4, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 6
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x06
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: psrlw mm2, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x04
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: psllw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0x04
        ; Exact instruction bytes: pand mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd5
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: psrlw mm2, 4
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd1
        ; Exact instruction bytes: psrlw mm2, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact instruction bytes: movq mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd9
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: pcmpgtw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0xca
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: pand mm2, mm1
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: pandn mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcb
        ; Exact instruction bytes: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: movq qword ptr [edi + 8], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x08
        add esi, 10h
        add edi, 10h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014BED1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014C03B:
        add edi, dword ptr [ebp - 3ch]
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1014BC7A
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp short L_1014C049
        __asm _emit 0xeb
        __asm _emit 0x00
L_1014C049:
        ; Exact instruction bytes: emms
        __asm _emit 0x0f
        __asm _emit 0x77
L_1014C04B:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 24h
    }
}
