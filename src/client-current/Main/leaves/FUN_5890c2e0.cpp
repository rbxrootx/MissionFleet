// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890C2E0 .. +0x2E9 bytes.
extern "C" __declspec(naked) void FUN_5890c2e0() {
    __asm {
        sub esp, 5ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 58h], eax
        mov eax, dword ptr [esp + 64h]
        mov edx, dword ptr [esp + 68h]
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 114h], 3e8h
        mov ecx, dword ptr [esp + 64h]
        ; Exact mapped bytes 0F 84 AD 02 00 00: je 0x5890c5ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 12ch], 0
        ; Exact mapped bytes 75 1C: jne 0x5890c332
        __asm _emit 0x75
        __asm _emit 0x1c
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 E0 0B 00 00: call 0x5890cf00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        mov ecx, dword ptr [esp + 58h]
        xor ecx, esp
        ; Exact mapped bytes E8 AE 08 07 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 5ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 110h]
        mov eax, dword ptr [eax + 50h]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esp + 8], eax
        mov eax, dword ptr [ecx + 50h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 10h], ecx
        xor ecx, ecx
        mov dword ptr [esp + 14h], edx
        mov edx, dword ptr [eax + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 89 44 24 44: mov word ptr [esp + 0x44], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        mov dword ptr [esp + 46h], eax
        ; Exact mapped bytes 66 89 44 24 4A: mov word ptr [esp + 0x4a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4a
        ; Exact mapped bytes 66 89 4C 24 4C: mov word ptr [esp + 0x4c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x4c
        mov dword ptr [esp + 4eh], eax
        ; Exact mapped bytes 66 89 44 24 52: mov word ptr [esp + 0x52], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x52
        mov dword ptr [esp + 56h], eax
        ; Exact mapped bytes 66 89 44 24 5A: mov word ptr [esp + 0x5a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5a
        ; Exact mapped bytes 66 89 44 24 3C: mov word ptr [esp + 0x3c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        mov dword ptr [esp + 3eh], eax
        ; Exact mapped bytes 66 89 44 24 42: mov word ptr [esp + 0x42], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x42
        mov dword ptr [esp + 4], ecx
        mov ecx, dword ptr [esi + 20h]
        sub ecx, dword ptr [esi + 18h]
        mov eax, 0f800f800h
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], eax
        mov eax, 7e007e0h
        mov dword ptr [esp + 18h], edx
        xor edx, edx
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 28h], eax
        mov eax, 1f001fh
        dec ecx
        ; Exact mapped bytes 66 89 54 24 54: mov word ptr [esp + 0x54], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 20h], eax
        test ecx, ecx
        ; Exact mapped bytes 0F 8E E8 01 00 00: jle 0x5890c5ba
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        sub eax, dword ptr [esi + 14h]
        push ebx
        push ebp
        push edi
        ; Exact mapped bytes EB 03: jmp 0x5890c3e0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        xor ebp, ebp
        mov dword ptr [esp + 18h], ebp
        test eax, eax
        ; Exact mapped bytes 0F 8E B1 01 00 00: jle 0x5890c59f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, edi
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi + edx*4 + 1130h]
        imul eax, dword ptr [esp + 14h]
        add eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esi + ebp*4 + 130h]
        mov edx, dword ptr [esi + ebp*4 + 134h]
        mov edi, dword ptr [esi + ebp*4 + 138h]
        mov ebx, dword ptr [esi + ebp*4 + 13ch]
        add ecx, eax
        add edx, eax
        add edi, eax
        add ebx, eax
        movzx eax, word ptr [ecx]
        ; Exact mapped bytes 66 89 44 24 50: mov word ptr [esp + 0x50], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        movzx eax, word ptr [edx]
        ; Exact mapped bytes 66 89 44 24 52: mov word ptr [esp + 0x52], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x52
        movzx eax, word ptr [edi]
        ; Exact mapped bytes 66 89 44 24 54: mov word ptr [esp + 0x54], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        movzx eax, word ptr [ebx]
        ; Exact mapped bytes 66 89 44 24 56: mov word ptr [esp + 0x56], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x56
        movzx eax, word ptr [ecx + 2]
        ; Exact mapped bytes 66 89 44 24 58: mov word ptr [esp + 0x58], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        movzx eax, word ptr [edx + 2]
        ; Exact mapped bytes 66 89 44 24 5A: mov word ptr [esp + 0x5a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5a
        movzx eax, word ptr [edi + 2]
        ; Exact mapped bytes 66 89 44 24 5C: mov word ptr [esp + 0x5c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        movzx eax, word ptr [ebx + 2]
        ; Exact mapped bytes 66 89 44 24 5E: mov word ptr [esp + 0x5e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5e
        mov eax, dword ptr [esp + 14h]
        add ecx, eax
        add edx, eax
        add ebx, eax
        add edi, eax
        movzx eax, word ptr [ecx]
        movzx ecx, word ptr [ecx + 2]
        ; Exact mapped bytes 66 89 44 24 60: mov word ptr [esp + 0x60], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        movzx eax, word ptr [edx]
        ; Exact mapped bytes 66 8B 52 02: mov dx, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 44 24 62: mov word ptr [esp + 0x62], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x62
        movzx eax, word ptr [edi]
        ; Exact mapped bytes 66 89 44 24 64: mov word ptr [esp + 0x64], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        movzx eax, word ptr [ebx]
        ; Exact mapped bytes 66 89 44 24 66: mov word ptr [esp + 0x66], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x66
        movzx eax, word ptr [edi + 2]
        ; Exact mapped bytes 66 89 4C 24 48: mov word ptr [esp + 0x48], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        movzx ecx, word ptr [ebx + 2]
        ; Exact mapped bytes 66 89 54 24 4A: mov word ptr [esp + 0x4a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4a
        ; Exact mapped bytes 66 89 44 24 4C: mov word ptr [esp + 0x4c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 66 89 4C 24 4E: mov word ptr [esp + 0x4e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x4e
        ; Exact mapped bytes 0F 6F 44 24 50: movq mm0, qword ptr [esp + 0x50]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 0F 6F 4C 24 58: movq mm1, qword ptr [esp + 0x58]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 54 24 60: movq mm2, qword ptr [esp + 0x60]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 0F 6F 5C 24 48: movq mm3, qword ptr [esp + 0x48]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 0F 7F C4: movq mm4, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc4
        ; Exact mapped bytes 0F 7F CD: movq mm5, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F D6: movq mm6, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 7F DF: movq mm7, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xdf
        ; Exact mapped bytes 0F 71 D4 0B: psrlw mm4, 0xb
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 71 D5 0B: psrlw mm5, 0xb
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 71 D6 0B: psrlw mm6, 0xb
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 71 D7 0B: psrlw mm7, 0xb
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd7
        __asm _emit 0x0b
        ; Exact mapped bytes 0F FD E5: paddw mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe5
        ; Exact mapped bytes 0F FD E6: paddw mm4, mm6
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe6
        ; Exact mapped bytes 0F FD E7: paddw mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe7
        ; Exact mapped bytes 0F 71 F4 09: psllw mm4, 9
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0x09
        ; Exact mapped bytes 0F DB 64 24 40: pand mm4, qword ptr [esp + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 0F 7F 64 24 38: movq qword ptr [esp + 0x38], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 0F 7F C4: movq mm4, mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc4
        ; Exact mapped bytes 0F 7F CD: movq mm5, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 7F D6: movq mm6, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd6
        ; Exact mapped bytes 0F 7F DF: movq mm7, mm3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xdf
        ; Exact mapped bytes 0F DB 64 24 30: pand mm4, qword ptr [esp + 0x30]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 0F DB 6C 24 30: pand mm5, qword ptr [esp + 0x30]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 0F DB 74 24 30: pand mm6, qword ptr [esp + 0x30]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 0F DB 7C 24 30: pand mm7, qword ptr [esp + 0x30]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F 71 D5 05: psrlw mm5, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x05
        ; Exact mapped bytes 0F 71 D6 05: psrlw mm6, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x05
        ; Exact mapped bytes 0F 71 D7 05: psrlw mm7, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd7
        __asm _emit 0x05
        ; Exact mapped bytes 0F FD E5: paddw mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe5
        ; Exact mapped bytes 0F FD E6: paddw mm4, mm6
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe6
        ; Exact mapped bytes 0F FD E7: paddw mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe7
        ; Exact mapped bytes 0F 71 F4 03: psllw mm4, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0x03
        ; Exact mapped bytes 0F DB 64 24 30: pand mm4, qword ptr [esp + 0x30]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 0F DB 44 24 28: pand mm0, qword ptr [esp + 0x28]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F DB 4C 24 28: pand mm1, qword ptr [esp + 0x28]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F DB 54 24 28: pand mm2, qword ptr [esp + 0x28]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F DB 5C 24 28: pand mm3, qword ptr [esp + 0x28]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F FD C1: paddw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F FD C3: paddw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 71 D0 02: psrlw mm0, 2
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x02
        ; Exact mapped bytes 0F EB C4: por mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc4
        ; Exact mapped bytes 0F 6F 64 24 38: movq mm4, qword ptr [esp + 0x38]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 0F EB C4: por mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov ecx, dword ptr [esp + 24h]
        imul ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 1ch]
        add edx, ecx
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F 7F 04 42: movq qword ptr [edx + eax*2], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x42
        ; Exact mapped bytes 0F 77: emms
        __asm _emit 0x0f
        __asm _emit 0x77
        mov eax, dword ptr [esi + 1ch]
        sub eax, dword ptr [esi + 14h]
        add ebp, 4
        cmp ebp, eax
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 0F 8C 51 FE FF FF: jl 0x5890c3f0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 20h]
        sub edx, dword ptr [esi + 18h]
        mov ecx, dword ptr [esp + 10h]
        inc ecx
        dec edx
        cmp ecx, edx
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 8C 29 FE FF FF: jl 0x5890c3e0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 5ch]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 14 06 07 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 5ch
    }
}
