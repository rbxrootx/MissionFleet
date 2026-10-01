// Reconstructed from FUN_1014c060 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_1014c060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 54h], ecx
        mov eax, dword ptr [ebp - 54h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact instruction bytes: jne short L_1014C07A
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact instruction bytes: jmp near ptr L_1014DEB4
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
L_1014C07A:
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact instruction bytes: jge near ptr L_1014DEB4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact instruction bytes: jle near ptr L_1014DEB4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact instruction bytes: jge near ptr L_1014DEB4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact instruction bytes: jle near ptr L_1014DEB4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov esi, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact instruction bytes: jge short L_1014C0F4
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 4], ecx
L_1014C0F4:
        mov ebx, dword ptr [ebp - 24h]
        mov edi, dword ptr [ebp + 10h]
        cmp edi, dword ptr [ebp + 18h]
        ; Exact instruction bytes: jge short L_1014C10D
        __asm _emit 0x7d
        __asm _emit 0x0e
        sub edi, dword ptr [ebp + 18h]
        imul edi, dword ptr [ebp - 4ch]
        shl edi, 1
        sub esi, edi
        mov edi, dword ptr [ebp + 18h]
L_1014C10D:
        mov edx, dword ptr [ebp - 4]
        sub edx, edi
        imul edi, ebx
        add edi, dword ptr [ebp - 3ch]
        ; Exact instruction bytes: movd mm5, dword ptr [ebp + 24h]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x6d
        __asm _emit 0x24
        ; Exact instruction bytes: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact instruction bytes: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact instruction bytes: movq mm6, mm5
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xee
        ; Exact instruction bytes: movq mm7, mm5
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xef
        ; Exact instruction bytes: pand mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm6, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm5, 0bh
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 24h]
        mov ecx, eax
        ; Exact instruction bytes: and ecx, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ecx, 0bh
        mov dword ptr [ebp + 24h], ecx
        mov ecx, eax
        shr ecx, 5
        ; Exact instruction bytes: and ecx, dword ptr [101c9308h]
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ebp - 28h], ecx
        ; Exact instruction bytes: and eax, dword ptr [101c9300h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        ; Exact instruction bytes: jle short L_1014C19D
        __asm _emit 0x7e
        __asm _emit 0x22
        sub eax, ecx
        shl ecx, 1
        mov dword ptr [ebp - 34h], ecx
        add edi, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp + 1ch]
        ; Exact instruction bytes: mov dword ptr [ebp - 38h], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jle short L_1014C1BE
        __asm _emit 0x7e
        __asm _emit 0x2a
        sub eax, ecx
        shl ecx, 1
        mov dword ptr [ebp - 38h], ecx
        ; Exact instruction bytes: jmp short L_1014C1BE
        __asm _emit 0xeb
        __asm _emit 0x21
L_1014C19D:
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 1
        add edi, ecx
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp + 1ch]
        ; Exact instruction bytes: jle near ptr L_1014CFA5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf5
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: mov dword ptr [ebp - 34h], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        shl ecx, 1
        mov dword ptr [ebp - 38h], ecx
L_1014C1BE:
        mov ecx, eax
        shl ecx, 1
        sub ebx, ecx
        cmp dword ptr [ebp + 28h], 100h
        ; Exact instruction bytes: jl near ptr L_1014C934
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x63
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact instruction bytes: jne near ptr L_1014C35A
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 44h], ebx
L_1014C1E1:
        add esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014C213
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul ebx, dword ptr [ebp - 28h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        and eax, ebx
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1014C213:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014C23D
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul ebx, dword ptr [ebp - 28h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        and eax, ebx
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1014C23D:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014C297
        __asm _emit 0x73
        __asm _emit 0x56
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
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
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
        test ecx, ecx
L_1014C297:
        ; Exact instruction bytes: je near ptr L_1014C348
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1014C29D:
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
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact instruction bytes: jne near ptr L_1014C29D
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1014C348:
        add esi, dword ptr [ebp - 38h]
        add edi, dword ptr [ebp - 44h]
        dec edx
        ; Exact instruction bytes: jne near ptr L_1014C1E1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014DEB2
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
L_1014C35A:
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 44h], ebx
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp + 2ch], 0
        ; Exact instruction bytes: jg near ptr L_1014C69F
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: mov edx, 100h
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, dword ptr [ebp + 2ch]
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
        mov eax, dword ptr [ebp + 24h]
        shr eax, 5
        imul eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ebp + 24h], eax
        mov eax, dword ptr [ebp - 28h]
        imul eax, edx
        shr eax, 5
        ; Exact instruction bytes: and eax, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ebp - 28h], eax
        ; Exact instruction bytes: psrlw mm5, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm5, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm6, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm6, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xf4
        ; Exact instruction bytes: pand mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm7, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd7
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm7, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xfc
        ; Exact instruction bytes: pand mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1014C3D8:
        add esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014C40A
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul ebx, dword ptr [ebp - 28h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        and eax, ebx
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1014C40A:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014C434
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul ebx, dword ptr [ebp - 28h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        and eax, ebx
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1014C434:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014C48C
        __asm _emit 0x73
        __asm _emit 0x54
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
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
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
L_1014C48C:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014C53A
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        test ecx, ecx
L_1014C53A:
        ; Exact instruction bytes: je near ptr L_1014C68B
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014C540:
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
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 10h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi + 10h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 18h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x18
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi + 18h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014C540
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014C68B:
        add esi, dword ptr [ebp - 38h]
        add edi, dword ptr [ebp - 44h]
        dec dword ptr [ebp - 50h]
        ; Exact instruction bytes: jne near ptr L_1014C3D8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014DEB2
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
L_1014C69F:
        mov edx, dword ptr [ebp + 2ch]
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
L_1014C6C3:
        add esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014C6FF
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
L_1014C6FF:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014C732
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
L_1014C732:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014C77B
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
L_1014C77B:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014C80B
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
L_1014C80B:
        ; Exact instruction bytes: je near ptr L_1014C920
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014C811:
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
        ; Exact instruction bytes: jne near ptr L_1014C811
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014C920:
        add esi, dword ptr [ebp - 38h]
        add edi, dword ptr [ebp - 44h]
        dec dword ptr [ebp - 50h]
        ; Exact instruction bytes: jne near ptr L_1014C6C3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014DEB2
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
L_1014C934:
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 44h], ebx
        mov dword ptr [ebp - 50h], edx
        mov ecx, dword ptr [ebp + 28h]
        shr ecx, 3
        ; Exact instruction bytes: mov eax, 20h
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        mov dword ptr [ebp - 48h], eax
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
        mov eax, dword ptr [ebp + 2ch]
        cmp eax, 0
        ; Exact instruction bytes: jg near ptr L_1014CC01
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9b
        __asm _emit 0x02
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
        mov dword ptr [ebp + 28h], ecx
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
L_1014C99B:
        add esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014CA01
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp - 48h]
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
        imul edx, dword ptr [ebp - 48h]
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
L_1014CA01:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014CA5F
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp - 48h]
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
        imul edx, dword ptr [ebp - 48h]
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
L_1014CA5F:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014CAE7
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
L_1014CAE7:
        ; Exact instruction bytes: je near ptr L_1014CBED
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014CAED:
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
        ; Exact instruction bytes: jne near ptr L_1014CAED
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1014CBED:
        add esi, dword ptr [ebp - 38h]
        add edi, dword ptr [ebp - 44h]
        dec dword ptr [ebp - 50h]
        ; Exact instruction bytes: jne near ptr L_1014C99B
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014DEB2
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
L_1014CC01:
        mov dword ptr [ebp + 28h], ecx
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
        mov dword ptr [ebp + 2ch], eax
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
        ; Exact instruction bytes: movq qword ptr [ebp - 30h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xd0
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
L_1014CC39:
        add esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014CCD1
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
        imul eax, dword ptr [ebp + 2ch]
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
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
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
        imul ebx, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp - 48h]
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
        imul edx, dword ptr [ebp - 48h]
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
L_1014CCD1:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014CD61
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
        imul eax, dword ptr [ebp + 2ch]
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
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
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
        imul ebx, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp - 48h]
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
        imul edx, dword ptr [ebp - 48h]
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
L_1014CD61:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014CE1F
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
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
L_1014CE1F:
        ; Exact instruction bytes: je near ptr L_1014CF91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014CE25:
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
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
        ; Exact instruction bytes: jne near ptr L_1014CE25
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014CF91:
        add esi, dword ptr [ebp - 38h]
        add edi, dword ptr [ebp - 44h]
        dec dword ptr [ebp - 50h]
        ; Exact instruction bytes: jne near ptr L_1014CC39
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014DEB2
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
L_1014CFA5:
        shl eax, 1
        sub ebx, eax
        shr eax, 1
        cmp dword ptr [ebp + 28h], 100h
        ; Exact instruction bytes: jl near ptr L_1014D855
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact instruction bytes: jne near ptr L_1014D287
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 44h], ebx
L_1014CFC8:
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014CFF7
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul ebx, dword ptr [ebp - 28h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        and eax, ebx
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1014CFF7:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014D021
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul ebx, dword ptr [ebp - 28h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        and eax, ebx
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1014D021:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014D079
        __asm _emit 0x73
        __asm _emit 0x54
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
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
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
L_1014D079:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014D127
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        test ecx, ecx
L_1014D127:
        ; Exact instruction bytes: je near ptr L_1014D278
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014D12D:
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
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 10h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi + 10h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 18h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x18
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi + 18h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014D12D
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014D278:
        add edi, dword ptr [ebp - 44h]
        dec edx
        ; Exact instruction bytes: jne near ptr L_1014CFC8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014DEB2
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
L_1014D287:
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 44h], ebx
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp + 2ch], 0
        ; Exact instruction bytes: jg near ptr L_1014D5C6
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: mov edx, 100h
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, dword ptr [ebp + 2ch]
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
        mov eax, dword ptr [ebp + 24h]
        shr eax, 5
        imul eax, edx
        ; Exact instruction bytes: and eax, dword ptr [101c92f8h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ebp + 24h], eax
        mov eax, dword ptr [ebp - 28h]
        imul eax, edx
        shr eax, 5
        ; Exact instruction bytes: and eax, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ebp - 28h], eax
        ; Exact instruction bytes: psrlw mm5, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm5, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xec
        ; Exact instruction bytes: pand mm5, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm6, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm6, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xf4
        ; Exact instruction bytes: pand mm6, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm7, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd7
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm7, mm4
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xfc
        ; Exact instruction bytes: pand mm7, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_1014D305:
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014D334
        __asm _emit 0x73
        __asm _emit 0x28
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
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul ebx, dword ptr [ebp - 28h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        and eax, ebx
        ; Exact instruction bytes: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
L_1014D334:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014D35E
        __asm _emit 0x73
        __asm _emit 0x26
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
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 5
        imul ebx, dword ptr [ebp - 28h]
        imul eax, dword ptr [ebp + 24h]
        ; Exact instruction bytes: and ebx, dword ptr [101c92f0h]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ebx, 5
        and eax, ebx
        ; Exact instruction bytes: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
L_1014D35E:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014D3B6
        __asm _emit 0x73
        __asm _emit 0x54
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
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
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
L_1014D3B6:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014D464
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        test ecx, ecx
L_1014D464:
        ; Exact instruction bytes: je near ptr L_1014D5B5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014D46A:
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
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
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
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 10h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi + 10h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact instruction bytes: movq mm0, qword ptr [esi + 18h]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x18
        ; Exact instruction bytes: movq mm1, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc1
        ; Exact instruction bytes: movq mm2, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm0, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact instruction bytes: pand mm0, qword ptr [101c9310h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xce
        ; Exact instruction bytes: psrlw mm1, 1
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x01
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9300h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pmullw mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd7
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: paddusw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc1
        ; Exact instruction bytes: paddusw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xc2
        ; Exact instruction bytes: movq qword ptr [edi + 18h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x18
        add esi, 20h
        add edi, 20h
        dec ecx
        ; Exact instruction bytes: jne near ptr L_1014D46A
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014D5B5:
        add edi, dword ptr [ebp - 44h]
        dec dword ptr [ebp - 50h]
        ; Exact instruction bytes: jne near ptr L_1014D305
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014DEB2
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
L_1014D5C6:
        mov edx, dword ptr [ebp + 2ch]
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
L_1014D5EA:
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014D623
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
L_1014D623:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014D656
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
L_1014D656:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014D69F
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
L_1014D69F:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014D72F
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
L_1014D72F:
        ; Exact instruction bytes: je near ptr L_1014D844
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014D735:
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
        ; Exact instruction bytes: jne near ptr L_1014D735
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014D844:
        add edi, dword ptr [ebp - 44h]
        dec dword ptr [ebp - 50h]
        ; Exact instruction bytes: jne near ptr L_1014D5EA
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014DEB2
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
L_1014D855:
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 44h], ebx
        mov dword ptr [ebp - 50h], edx
        mov ecx, dword ptr [ebp + 28h]
        shr ecx, 3
        ; Exact instruction bytes: mov eax, 20h
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        mov dword ptr [ebp - 48h], eax
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
        mov eax, dword ptr [ebp + 2ch]
        cmp eax, 0
        ; Exact instruction bytes: jg near ptr L_1014DB1A
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
L_1014D8BA:
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014D91D
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp - 48h]
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
        imul edx, dword ptr [ebp - 48h]
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
L_1014D91D:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1014D97B
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
        imul eax, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp - 48h]
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
        imul edx, dword ptr [ebp - 48h]
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
L_1014D97B:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014DA03
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
L_1014DA03:
        ; Exact instruction bytes: je near ptr L_1014DB09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014DA09:
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
        ; Exact instruction bytes: jne near ptr L_1014DA09
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1014DB09:
        add edi, dword ptr [ebp - 44h]
        dec dword ptr [ebp - 50h]
        ; Exact instruction bytes: jne near ptr L_1014D8BA
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1014DEB2
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_1014DB1A:
        shr eax, 3
        mov dword ptr [ebp + 2ch], eax
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
        ; Exact instruction bytes: movq qword ptr [ebp - 30h], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xd0
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
L_1014DB4F:
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014DBE4
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
        imul eax, dword ptr [ebp + 2ch]
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
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
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
        imul ebx, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp - 48h]
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
        imul edx, dword ptr [ebp - 48h]
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
L_1014DBE4:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014DC74
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
        imul eax, dword ptr [ebp + 2ch]
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
        imul eax, dword ptr [ebp + 28h]
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
        imul ebx, dword ptr [ebp + 2ch]
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
        imul ebx, dword ptr [ebp + 28h]
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
        imul eax, dword ptr [ebp - 48h]
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
        imul edx, dword ptr [ebp - 48h]
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
L_1014DC74:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1014DD32
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
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
L_1014DD32:
        ; Exact instruction bytes: je near ptr L_1014DEA4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1014DD38:
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
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm0, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
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
        ; Exact instruction bytes: jne near ptr L_1014DD38
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1014DEA4:
        add edi, dword ptr [ebp - 44h]
        dec dword ptr [ebp - 50h]
        ; Exact instruction bytes: jne near ptr L_1014DB4F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp short L_1014DEB2
        __asm _emit 0xeb
        __asm _emit 0x00
L_1014DEB2:
        ; Exact instruction bytes: emms
        __asm _emit 0x0f
        __asm _emit 0x77
L_1014DEB4:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 28h
    }
}
