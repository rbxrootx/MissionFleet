// Reconstructed from FUN_10137e90 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_10137e90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 50h], ecx
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact instruction bytes: jne short L_10137EAA
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact instruction bytes: jmp near ptr L_1013B825
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
L_10137EAA:
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact instruction bytes: jge near ptr L_1013B825
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact instruction bytes: jle near ptr L_1013B825
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4b
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp + 20h]
        ; Exact instruction bytes: jge near ptr L_1013B825
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3f
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact instruction bytes: jle near ptr L_1013B825
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x33
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov esi, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 20h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact instruction bytes: jge short L_10137F24
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ebp - 4], ecx
L_10137F24:
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
        ; Exact instruction bytes: psrlw mm5, 0ah
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 24h]
        mov ecx, eax
        ; Exact instruction bytes: and ecx, dword ptr [101c9310h]
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ecx, 0ah
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
        mov ebx, dword ptr [ebp + 10h]
        cmp ebx, dword ptr [ebp + 18h]
        ; Exact instruction bytes: jge short L_10137FA6
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 18h]
        sub ecx, ebx
        ; Exact instruction bytes: movzx eax, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x06
        add esi, 2
        cmp ax, 0ffffh
        ; Exact instruction bytes: je short L_10137FA1
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact instruction bytes: jl near ptr L_1013B823
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact instruction bytes: movzx eax, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x06
        add esi, 2
        add esi, eax
L_10137FA1:
        ; Exact instruction bytes: loop 10137f86h
        __asm _emit 0xe2
        __asm _emit 0xe3
        mov ebx, dword ptr [ebp + 18h]
L_10137FA6:
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 20h]
        ; Exact instruction bytes: jl short L_10137FB1
        __asm _emit 0x7c
        __asm _emit 0x03
        mov edx, dword ptr [ebp + 20h]
L_10137FB1:
        sub edx, ebx
        mov dword ptr [ebp - 48h], edx
        imul ebx, dword ptr [ebp - 24h]
        add ebx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 14h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact instruction bytes: jg near ptr L_10138D1D
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact instruction bytes: jl near ptr L_10138D1D
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact instruction bytes: imul ecx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add ebx, ecx
        cmp dword ptr [ebp + 28h], 100h
        ; Exact instruction bytes: jl near ptr L_1013866A
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact instruction bytes: jne near ptr L_101382C1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], ebx
        mov edi, ebx
L_10137FFD:
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        add edi, ecx
        cmp cx, -1
        ; Exact instruction bytes: je near ptr L_101382B2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jl near ptr L_1013B823
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0e
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        shr ecx, 2
        ; Exact instruction bytes: jae short L_1013804B
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_1013804B:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10138077
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10138077:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101380CB
        __asm _emit 0x73
        __asm _emit 0x50
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
        add esi, 8
        add edi, 8
L_101380CB:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10138171
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9e
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
L_10138171:
        ; Exact instruction bytes: je near ptr L_101382B2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10138177:
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
        ; Exact instruction bytes: pand mm1, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact instruction bytes: pand mm2, qword ptr [101c9308h]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x08
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
        ; Exact instruction bytes: jne near ptr L_10138177
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_101382B2:
        add ebx, dword ptr [ebp - 24h]
        dec edx
        ; Exact instruction bytes: jne near ptr L_10137FFD
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013B823
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
L_101382C1:
        mov dword ptr [ebp - 3ch], ebx
        mov edi, ebx
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact instruction bytes: jg near ptr L_101384CB
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
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
L_1013833B:
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        add edi, ecx
        cmp cx, -1
        ; Exact instruction bytes: je near ptr L_101384B4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jl near ptr L_1013B823
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd0
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10138389
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10138389:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101383B5
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_101383B5:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1013840B
        __asm _emit 0x73
        __asm _emit 0x52
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
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1013840B:
        ; Exact instruction bytes: je near ptr L_101384B4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10138411:
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
        ; Exact instruction bytes: jne near ptr L_10138411
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_101384B4:
        mov edi, dword ptr [ebp - 3ch]
        add edi, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 3ch], edi
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1013833B
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013B823
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
L_101384CB:
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
L_101384EC:
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        add edi, ecx
        cmp cx, -1
        ; Exact instruction bytes: je near ptr L_10138653
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jl near ptr L_1013B823
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1f
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10138542
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
L_10138542:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10138575
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
L_10138575:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101385C0
        __asm _emit 0x73
        __asm _emit 0x47
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
        test ecx, ecx
L_101385C0:
        ; Exact instruction bytes: je near ptr L_10138653
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101385C6:
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
        dec ecx
        ; Exact instruction bytes: jne near ptr L_101385C6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10138653:
        mov edi, dword ptr [ebp - 3ch]
        add edi, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 3ch], edi
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_101384EC
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013B823
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
L_1013866A:
        mov dword ptr [ebp - 3ch], ebx
        mov edi, ebx
        mov ecx, dword ptr [ebp + 28h]
        shr ecx, 3
        ; Exact instruction bytes: mov eax, 20h
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact instruction bytes: jg near ptr L_1013894F
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
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
L_101386CC:
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        add edi, ecx
        cmp cx, -1
        ; Exact instruction bytes: je near ptr L_10138938
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jl near ptr L_1013B823
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3f
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        shr ecx, 2
        ; Exact instruction bytes: jae short L_1013874C
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
L_1013874C:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101387AA
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
L_101387AA:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10138832
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
L_10138832:
        ; Exact instruction bytes: je near ptr L_10138938
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10138838:
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
        ; Exact instruction bytes: jne near ptr L_10138838
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10138938:
        mov edi, dword ptr [ebp - 3ch]
        add edi, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 3ch], edi
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_101386CC
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013B823
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
L_1013894F:
        mov dword ptr [ebp + 28h], ecx
        shr edx, 3
        mov dword ptr [ebp + 2ch], edx
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
        ; Exact instruction bytes: movd mm0, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc2
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
L_10138994:
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        add edi, ecx
        cmp cx, -1
        ; Exact instruction bytes: je near ptr L_10138D06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jl near ptr L_1013B823
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x77
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        shr ecx, 2
        ; Exact instruction bytes: jae near ptr L_10138A46
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
L_10138A46:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10138AD6
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
L_10138AD6:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_10138B94
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
L_10138B94:
        ; Exact instruction bytes: je near ptr L_10138D06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10138B9A:
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
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
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
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
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
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
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
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
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
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
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
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
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
        ; Exact instruction bytes: jne near ptr L_10138B9A
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_10138D06:
        mov edi, dword ptr [ebp - 3ch]
        add edi, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 3ch], edi
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_10138994
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013B823
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
L_10138D1D:
        mov dword ptr [ebp - 4ch], ebx
        mov dword ptr [ebp - 34h], ebx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact instruction bytes: imul ecx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add dword ptr [ebp - 4ch], ecx
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact instruction bytes: imul ecx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add dword ptr [ebp - 34h], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact instruction bytes: imul ecx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add ebx, ecx
        mov dword ptr [ebp - 3ch], ebx
        mov edi, ebx
        cmp dword ptr [ebp + 28h], 100h
        ; Exact instruction bytes: jl near ptr L_10139FC5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6a
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0
        ; Exact instruction bytes: jne near ptr L_10139368
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
L_10138D65:
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        add edi, ecx
        cmp cx, -1
        ; Exact instruction bytes: je near ptr L_1013934B
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jl near ptr L_1013B823
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa6
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        mov cx, word ptr [esi]
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 4ch]
        ; Exact instruction bytes: jle near ptr L_10139349
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 34h]
        ; Exact instruction bytes: jge near ptr L_10139349
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 34h]
        ; Exact instruction bytes: jg near ptr L_10139072
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        sub eax, edi
        ; Exact instruction bytes: jle near ptr L_10138F13
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10138DE3
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10138DE3:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10138E0F
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10138E0F:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10138E65
        __asm _emit 0x73
        __asm _emit 0x52
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
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10138E65:
        ; Exact instruction bytes: je near ptr L_1013934B
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_10138E6B:
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
        ; Exact instruction bytes: jne near ptr L_10138E6B
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013934B
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_10138F13:
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10138F42
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10138F42:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10138F6E
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10138F6E:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10138FC4
        __asm _emit 0x73
        __asm _emit 0x52
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
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10138FC4:
        ; Exact instruction bytes: je near ptr L_1013906D
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10138FCA:
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
        ; Exact instruction bytes: jne near ptr L_10138FCA
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1013906D:
        ; Exact instruction bytes: jmp near ptr L_1013934B
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10139072:
        sub ecx, eax
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 4ch]
        sub eax, edi
        ; Exact instruction bytes: jle near ptr L_101391EA
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 2
        ; Exact instruction bytes: jae short L_101390B7
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_101390B7:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101390E3
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_101390E3:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139139
        __asm _emit 0x73
        __asm _emit 0x52
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
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10139139:
        ; Exact instruction bytes: je near ptr L_101391E2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1013913F:
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
        ; Exact instruction bytes: jne near ptr L_1013913F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_101391E2:
        add esi, dword ptr [ebp - 44h]
        ; Exact instruction bytes: jmp near ptr L_1013934B
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_101391EA:
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10139219
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10139219:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139245
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10139245:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1013929B
        __asm _emit 0x73
        __asm _emit 0x52
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
        add esi, 8
        add edi, 8
        test ecx, ecx
L_1013929B:
        ; Exact instruction bytes: je near ptr L_10139344
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101392A1:
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
        ; Exact instruction bytes: jne near ptr L_101392A1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10139344:
        add esi, dword ptr [ebp - 44h]
        ; Exact instruction bytes: jmp short L_1013934B
        __asm _emit 0xeb
        __asm _emit 0x02
L_10139349:
        add esi, ecx
L_1013934B:
        mov eax, dword ptr [ebp - 24h]
        add dword ptr [ebp - 4ch], eax
        add dword ptr [ebp - 34h], eax
        mov edi, dword ptr [ebp - 3ch]
        add edi, eax
        mov dword ptr [ebp - 3ch], edi
        dec edx
        ; Exact instruction bytes: jne near ptr L_10138D65
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013B823
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
L_10139368:
        mov dword ptr [ebp - 3ch], ebx
        mov edi, ebx
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact instruction bytes: jg near ptr L_101399E7
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
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
L_101393E2:
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        add edi, ecx
        cmp cx, -1
        ; Exact instruction bytes: je near ptr L_101399C8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jl near ptr L_1013B823
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x29
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        mov cx, word ptr [esi]
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 4ch]
        ; Exact instruction bytes: jle near ptr L_101399C6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 34h]
        ; Exact instruction bytes: jge near ptr L_101399C6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 34h]
        ; Exact instruction bytes: jg near ptr L_101396EF
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        sub eax, edi
        ; Exact instruction bytes: jle near ptr L_10139590
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10139460
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10139460:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1013948C
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_1013948C:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101394E2
        __asm _emit 0x73
        __asm _emit 0x52
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
        add esi, 8
        add edi, 8
        test ecx, ecx
L_101394E2:
        ; Exact instruction bytes: je near ptr L_101399C8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_101394E8:
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
        ; Exact instruction bytes: jne near ptr L_101394E8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_101399C8
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_10139590:
        shr ecx, 2
        ; Exact instruction bytes: jae short L_101395BF
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_101395BF:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101395EB
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_101395EB:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139641
        __asm _emit 0x73
        __asm _emit 0x52
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
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10139641:
        ; Exact instruction bytes: je near ptr L_101399C8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_10139647:
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
        ; Exact instruction bytes: jne near ptr L_10139647
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_101399C8
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_101396EF:
        sub ecx, eax
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 4ch]
        sub eax, edi
        ; Exact instruction bytes: jle near ptr L_10139867
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10139734
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10139734:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139760
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10139760:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101397B6
        __asm _emit 0x73
        __asm _emit 0x52
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
        add esi, 8
        add edi, 8
        test ecx, ecx
L_101397B6:
        ; Exact instruction bytes: je near ptr L_1013985F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101397BC:
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
        ; Exact instruction bytes: jne near ptr L_101397BC
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1013985F:
        add esi, dword ptr [ebp - 44h]
        ; Exact instruction bytes: jmp near ptr L_101399C8
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10139867:
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10139896
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact instruction bytes: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_10139896:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_101398C2
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact instruction bytes: lodsd eax, dword ptr [esi]
        __asm _emit 0xad
        mov eax, dword ptr [esi]
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
L_101398C2:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139918
        __asm _emit 0x73
        __asm _emit 0x52
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
        add esi, 8
        add edi, 8
        test ecx, ecx
L_10139918:
        ; Exact instruction bytes: je near ptr L_101399C1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1013991E:
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
        ; Exact instruction bytes: jne near ptr L_1013991E
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_101399C1:
        add esi, dword ptr [ebp - 44h]
        ; Exact instruction bytes: jmp short L_101399C8
        __asm _emit 0xeb
        __asm _emit 0x02
L_101399C6:
        add esi, ecx
L_101399C8:
        mov edi, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 24h]
        add dword ptr [ebp - 4ch], eax
        add dword ptr [ebp - 34h], eax
        add edi, eax
        mov dword ptr [ebp - 3ch], edi
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_101393E2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013B823
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
L_101399E7:
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
L_10139A08:
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        add edi, ecx
        cmp cx, -1
        ; Exact instruction bytes: je near ptr L_10139FA6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jl near ptr L_1013B823
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        mov cx, word ptr [esi]
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 4ch]
        ; Exact instruction bytes: jle near ptr L_10139FA4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 34h]
        ; Exact instruction bytes: jge near ptr L_10139FA4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 34h]
        ; Exact instruction bytes: jg near ptr L_10139CF1
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        sub eax, edi
        ; Exact instruction bytes: jle near ptr L_10139BA4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10139A8E
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
L_10139A8E:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139AC1
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
L_10139AC1:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139B0C
        __asm _emit 0x73
        __asm _emit 0x47
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
        test ecx, ecx
L_10139B0C:
        ; Exact instruction bytes: je near ptr L_10139FA6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_10139B12:
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
        dec ecx
        ; Exact instruction bytes: jne near ptr L_10139B12
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_10139FA6
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_10139BA4:
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10139BDB
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
L_10139BDB:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139C0E
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
L_10139C0E:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139C59
        __asm _emit 0x73
        __asm _emit 0x47
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
        test ecx, ecx
L_10139C59:
        ; Exact instruction bytes: je near ptr L_10139FA6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_10139C5F:
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
        dec ecx
        ; Exact instruction bytes: jne near ptr L_10139C5F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_10139FA6
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10139CF1:
        sub ecx, eax
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 4ch]
        sub eax, edi
        ; Exact instruction bytes: jle near ptr L_10139E57
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10139D3E
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
L_10139D3E:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139D71
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
L_10139D71:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139DBC
        __asm _emit 0x73
        __asm _emit 0x47
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
        test ecx, ecx
L_10139DBC:
        ; Exact instruction bytes: je near ptr L_10139E4F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10139DC2:
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
        dec ecx
        ; Exact instruction bytes: jne near ptr L_10139DC2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10139E4F:
        add esi, dword ptr [ebp - 44h]
        ; Exact instruction bytes: jmp near ptr L_10139FA6
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10139E57:
        shr ecx, 2
        ; Exact instruction bytes: jae short L_10139E8E
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
L_10139E8E:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139EC1
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
L_10139EC1:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_10139F0C
        __asm _emit 0x73
        __asm _emit 0x47
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
        test ecx, ecx
L_10139F0C:
        ; Exact instruction bytes: je near ptr L_10139F9F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10139F12:
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
        dec ecx
        ; Exact instruction bytes: jne near ptr L_10139F12
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10139F9F:
        add esi, dword ptr [ebp - 44h]
        ; Exact instruction bytes: jmp short L_10139FA6
        __asm _emit 0xeb
        __asm _emit 0x02
L_10139FA4:
        add esi, ecx
L_10139FA6:
        mov eax, dword ptr [ebp - 24h]
        mov edi, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 4ch], eax
        add dword ptr [ebp - 34h], eax
        add edi, eax
        mov dword ptr [ebp - 3ch], edi
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_10139A08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013B823
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
L_10139FC5:
        mov dword ptr [ebp - 3ch], ebx
        mov edi, ebx
        mov ecx, dword ptr [ebp + 28h]
        shr ecx, 3
        ; Exact instruction bytes: mov eax, 20h
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, 0
        ; Exact instruction bytes: jg near ptr L_1013A9F8
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 100h
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
L_1013A027:
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        add edi, ecx
        cmp cx, -1
        ; Exact instruction bytes: je near ptr L_1013A9D9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jl near ptr L_1013B823
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe4
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        mov cx, word ptr [esi]
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 4ch]
        ; Exact instruction bytes: jle near ptr L_1013A9D7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 34h]
        ; Exact instruction bytes: jge near ptr L_1013A9D7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 34h]
        ; Exact instruction bytes: jg near ptr L_1013A51A
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        sub eax, edi
        ; Exact instruction bytes: jle near ptr L_1013A2C8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 2
        ; Exact instruction bytes: jae short L_1013A0D7
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
L_1013A0D7:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1013A135
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
L_1013A135:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013A1BD
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
L_1013A1BD:
        ; Exact instruction bytes: je near ptr L_1013A9D9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
L_1013A1C3:
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
        ; Exact instruction bytes: jne near ptr L_1013A1C3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013A9D9
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
L_1013A2C8:
        shr ecx, 2
        ; Exact instruction bytes: jae short L_1013A329
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
L_1013A329:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1013A387
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
L_1013A387:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013A40F
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
L_1013A40F:
        ; Exact instruction bytes: je near ptr L_1013A9D9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
L_1013A415:
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
        ; Exact instruction bytes: jne near ptr L_1013A415
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013A9D9
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_1013A51A:
        sub ecx, eax
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 4ch]
        sub eax, edi
        ; Exact instruction bytes: jle near ptr L_1013A785
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 2
        ; Exact instruction bytes: jae short L_1013A591
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
L_1013A591:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1013A5EF
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
L_1013A5EF:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013A677
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
L_1013A677:
        ; Exact instruction bytes: je near ptr L_1013A77D
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1013A67D:
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
        ; Exact instruction bytes: jne near ptr L_1013A67D
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1013A77D:
        add esi, dword ptr [ebp - 44h]
        ; Exact instruction bytes: jmp near ptr L_1013A9D9
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_1013A785:
        shr ecx, 2
        ; Exact instruction bytes: jae short L_1013A7E6
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
L_1013A7E6:
        shr ecx, 1
        ; Exact instruction bytes: jae short L_1013A844
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
L_1013A844:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013A8CC
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
L_1013A8CC:
        ; Exact instruction bytes: je near ptr L_1013A9D2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1013A8D2:
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
        ; Exact instruction bytes: jne near ptr L_1013A8D2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1013A9D2:
        add esi, dword ptr [ebp - 44h]
        ; Exact instruction bytes: jmp short L_1013A9D9
        __asm _emit 0xeb
        __asm _emit 0x02
L_1013A9D7:
        add esi, ecx
L_1013A9D9:
        mov eax, dword ptr [ebp - 24h]
        mov edi, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 4ch], eax
        add dword ptr [ebp - 34h], eax
        add edi, eax
        mov dword ptr [ebp - 3ch], edi
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1013A027
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013B823
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
L_1013A9F8:
        mov dword ptr [ebp + 28h], ecx
        shr edx, 3
        mov dword ptr [ebp + 2ch], edx
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
        ; Exact instruction bytes: movd mm0, edx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc2
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
L_1013AA3D:
        ; Exact instruction bytes: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        add esi, 2
        add edi, ecx
        cmp cx, -1
        ; Exact instruction bytes: je near ptr L_1013B807
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: jl near ptr L_1013B823
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xce
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        mov cx, word ptr [esi]
        add esi, 2
        mov eax, edi
        add eax, ecx
        cmp eax, dword ptr [ebp - 4ch]
        ; Exact instruction bytes: jle near ptr L_1013B805
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebp - 34h]
        ; Exact instruction bytes: jge near ptr L_1013B805
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 34h]
        ; Exact instruction bytes: jg near ptr L_1013B13C
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        sub eax, edi
        ; Exact instruction bytes: jle near ptr L_1013ADE4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 2
        ; Exact instruction bytes: jae near ptr L_1013AB1F
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
L_1013AB1F:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013ABAF
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
L_1013ABAF:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013AC6D
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
L_1013AC6D:
        ; Exact instruction bytes: je near ptr L_1013B807
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
L_1013AC73:
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
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
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
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
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
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
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
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
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
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
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
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
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
        ; Exact instruction bytes: jne near ptr L_1013AC73
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp near ptr L_1013B807
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
L_1013ADE4:
        shr ecx, 2
        ; Exact instruction bytes: jae near ptr L_1013AE77
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
L_1013AE77:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013AF07
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
L_1013AF07:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013AFC5
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
L_1013AFC5:
        ; Exact instruction bytes: je near ptr L_1013B137
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1013AFCB:
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
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
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
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
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
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
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
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
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
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
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
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
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
        ; Exact instruction bytes: jne near ptr L_1013AFCB
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1013B137:
        ; Exact instruction bytes: jmp near ptr L_1013B807
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
L_1013B13C:
        sub ecx, eax
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 4ch]
        sub eax, edi
        ; Exact instruction bytes: jle near ptr L_1013B4AD
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        add esi, eax
        add edi, eax
        shr ecx, 2
        ; Exact instruction bytes: jae near ptr L_1013B1E5
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
L_1013B1E5:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013B275
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
L_1013B275:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013B333
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
L_1013B333:
        ; Exact instruction bytes: je near ptr L_1013B4A5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1013B339:
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
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
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
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
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
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
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
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
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
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
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
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
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
        ; Exact instruction bytes: jne near ptr L_1013B339
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1013B4A5:
        add esi, dword ptr [ebp - 44h]
        ; Exact instruction bytes: jmp near ptr L_1013B807
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_1013B4AD:
        shr ecx, 2
        ; Exact instruction bytes: jae near ptr L_1013B540
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
L_1013B540:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013B5D0
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
L_1013B5D0:
        shr ecx, 1
        ; Exact instruction bytes: jae near ptr L_1013B68E
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
L_1013B68E:
        ; Exact instruction bytes: je near ptr L_1013B800
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1013B694:
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
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
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
        ; Exact instruction bytes: pandn mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xcd
        ; Exact instruction bytes: psrlw mm1, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact instruction bytes: pmullw mm1, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact instruction bytes: pand mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcd
        ; Exact instruction bytes: paddusw mm1, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xcb
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
        ; Exact instruction bytes: pandn mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd6
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd6
        ; Exact instruction bytes: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
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
        ; Exact instruction bytes: movq mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xda
        ; Exact instruction bytes: pandn mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xd7
        ; Exact instruction bytes: pmullw mm2, qword ptr [ebp - 30h]
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact instruction bytes: psrlw mm2, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact instruction bytes: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact instruction bytes: paddusw mm2, mm3
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xd3
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
        ; Exact instruction bytes: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
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
        ; Exact instruction bytes: movq mm2, mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xe2
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
        ; Exact instruction bytes: paddusw mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xca
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
        ; Exact instruction bytes: jne near ptr L_1013B694
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
L_1013B800:
        add esi, dword ptr [ebp - 44h]
        ; Exact instruction bytes: jmp short L_1013B807
        __asm _emit 0xeb
        __asm _emit 0x02
L_1013B805:
        add esi, ecx
L_1013B807:
        mov eax, dword ptr [ebp - 24h]
        mov edi, dword ptr [ebp - 3ch]
        add dword ptr [ebp - 4ch], eax
        add dword ptr [ebp - 34h], eax
        add edi, eax
        mov dword ptr [ebp - 3ch], edi
        dec dword ptr [ebp - 48h]
        ; Exact instruction bytes: jne near ptr L_1013AA3D
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact instruction bytes: jmp short L_1013B823
        __asm _emit 0xeb
        __asm _emit 0x00
L_1013B823:
        ; Exact instruction bytes: emms
        __asm _emit 0x0f
        __asm _emit 0x77
L_1013B825:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 28h
    }
}
