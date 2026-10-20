// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10023A70 .. +0x4FB bytes.
extern "C" __declspec(naked) void FUN_10023a70_10023A70() {
    __asm {
        mov eax, 1250h
        ; Exact mapped bytes E8 46 8D 14 00: call 0x1016c7c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x00
        push ebx
        push ebp
        mov dword ptr [esp + 2ch], ecx
        xor ebp, ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ebp
        lea eax, [esp + 6ch]
        mov ecx, 20h
        mov dword ptr [eax - 4], 0
        mov dword ptr [eax], 0
        add eax, 90h
        dec ecx
        ; Exact mapped bytes 75 EB: jne 0x10023a91
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [eax + 0ch]
        test edi, edi
        mov dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x10023b7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esp + 64h]
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes EB 08: jmp 0x10023acc
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edi, dword ptr [esp + 1ch]
        mov ebp, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 1264h]
        push edi
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        ; Exact mapped bytes E8 92 04 00 00: call 0x10023f70
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x10023b6c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        test ebp, ebp
        ; Exact mapped bytes 7E 44: jle 0x10023b31
        __asm _emit 0x7e
        __asm _emit 0x44
        mov ebp, dword ptr [edi + 4]
        lea ecx, [esp + 64h]
        mov eax, dword ptr [ecx - 4]
        sub eax, ebp
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 0c8h
        ; Exact mapped bytes 7D 1D: jge 0x10023b22
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [edi + 8]
        sub eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 0c8h
        ; Exact mapped bytes 7D 0A: jge 0x10023b22
        __asm _emit 0x7d
        __asm _emit 0x0a
        cmp dword ptr [ecx + 4], 20h
        ; Exact mapped bytes 0F 8C 87 00 00 00: jl 0x10023ba9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        inc esi
        add ecx, 90h
        cmp esi, eax
        ; Exact mapped bytes 7C C3: jl 0x10023af4
        __asm _emit 0x7c
        __asm _emit 0xc3
        cmp dword ptr [esp + 10h], 20h
        ; Exact mapped bytes 7D 34: jge 0x10023b6c
        __asm _emit 0x7d
        __asm _emit 0x34
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [ebx - 4], ecx
        mov edx, dword ptr [edi + 8]
        mov dword ptr [ebx], edx
        mov dword ptr [ebx + 4], 1
        mov dword ptr [ebx + 0ch], edi
        mov eax, dword ptr [edi + 0e74h]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebx + 8], ecx
        mov ecx, dword ptr [esp + 10h]
        inc ecx
        add ebx, 90h
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 20h], ebx
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        mov dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 0F 85 49 FF FF FF: jne 0x10023ac4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 10h]
        test ebp, ebp
        ; Exact mapped bytes 0F 8E D8 02 00 00: jle 0x10023e5f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 64h]
        mov edx, ebp
        mov esi, 31ffh
        mov ecx, dword ptr [eax - 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 8D 8F 02 00 00: jge 0x10023e2c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax - 4], 0
        ; Exact mapped bytes E9 8E 02 00 00: jmp 0x10023e37
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + esi*8]
        shl eax, 4
        mov edx, dword ptr [esp + eax + 68h]
        lea ecx, [esp + eax + 60h]
        mov dword ptr [ecx + edx*4 + 10h], edi
        mov edx, dword ptr [edi + 0e74h]
        mov ebp, dword ptr [ecx + 0ch]
        mov esi, dword ptr [ecx + 8]
        mov edx, dword ptr [edx + 4ch]
        add ebp, edx
        inc esi
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, esi
        cmp ebp, 4
        mov dword ptr [ecx + 8], esi
        ; Exact mapped bytes 7D 4A: jge 0x10023c24
        __asm _emit 0x7d
        __asm _emit 0x4a
        xor edx, edx
        lea esi, [esp + eax + 68h]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], edx
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 7E 25: jle 0x10023c0f
        __asm _emit 0x7e
        __asm _emit 0x25
        mov eax, 10h
        mov ebx, dword ptr [eax + ecx]
        add eax, 4
        mov ebx, dword ptr [ebx + 4]
        add dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + ecx - 4]
        mov ebx, dword ptr [ebx + 8]
        add dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [esi]
        inc edx
        cmp edx, ebx
        ; Exact mapped bytes 7C E4: jl 0x10023bef
        __asm _emit 0x7c
        __asm _emit 0xe4
        mov ebx, dword ptr [esp + 20h]
        mov eax, dword ptr [ecx]
        cdq
        idiv ebp
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ecx + 4]
        cdq
        idiv ebp
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes E9 48 FF FF FF: jmp 0x10023b6c
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 10h]
        lea esi, [ecx + 10h]
        test ebp, ebp
        mov edi, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [esp + 50h], edi
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 40h], ebx
        mov dword ptr [esp + 28h], ebx
        ; Exact mapped bytes 7E 42: jle 0x10023c86
        __asm _emit 0x7e
        __asm _emit 0x42
        mov dword ptr [esp + 14h], ebp
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        cmp eax, edi
        ; Exact mapped bytes 7D 06: jge 0x10023c57
        __asm _emit 0x7d
        __asm _emit 0x06
        mov dword ptr [esp + 50h], eax
        mov edi, eax
        cmp eax, dword ptr [esp + 2ch]
        ; Exact mapped bytes 7E 04: jle 0x10023c61
        __asm _emit 0x7e
        __asm _emit 0x04
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [edx + 8]
        cmp eax, ebx
        ; Exact mapped bytes 7D 06: jge 0x10023c6e
        __asm _emit 0x7d
        __asm _emit 0x06
        mov dword ptr [esp + 40h], eax
        mov ebx, eax
        cmp eax, dword ptr [esp + 28h]
        ; Exact mapped bytes 7E 04: jle 0x10023c78
        __asm _emit 0x7e
        __asm _emit 0x04
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [esp + 14h]
        add esi, 4
        dec eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 75 C2: jne 0x10023c48
        __asm _emit 0x75
        __asm _emit 0xc2
        xor eax, eax
        xor edi, edi
        xor ebx, ebx
        cmp ebp, eax
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 0F 8E B6 02 00 00: jle 0x10023f5e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ecx + 10h]
        mov dword ptr [esp + 18h], ebp
        mov dword ptr [esp + 4ch], edx
        mov edx, dword ptr [esp + 4ch]
        mov ebp, dword ptr [esp + 50h]
        mov edx, dword ptr [edx]
        mov esi, dword ptr [edx + 4]
        cmp esi, ebp
        ; Exact mapped bytes 75 06: jne 0x10023cca
        __asm _emit 0x75
        __asm _emit 0x06
        mov ebp, dword ptr [edx + 8]
        add eax, ebp
        inc edi
        cmp esi, dword ptr [esp + 2ch]
        ; Exact mapped bytes 75 08: jne 0x10023cd8
        __asm _emit 0x75
        __asm _emit 0x08
        mov ebp, dword ptr [edx + 8]
        add dword ptr [esp + 30h], ebp
        inc ebx
        mov edx, dword ptr [edx + 8]
        mov ebp, dword ptr [esp + 40h]
        cmp edx, ebp
        ; Exact mapped bytes 75 13: jne 0x10023cf6
        __asm _emit 0x75
        __asm _emit 0x13
        mov ebp, dword ptr [esp + 3ch]
        add ebp, esi
        mov dword ptr [esp + 3ch], ebp
        mov ebp, dword ptr [esp + 38h]
        inc ebp
        mov dword ptr [esp + 38h], ebp
        cmp edx, dword ptr [esp + 28h]
        ; Exact mapped bytes 75 13: jne 0x10023d0f
        __asm _emit 0x75
        __asm _emit 0x13
        mov ebp, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 14h]
        add ebp, esi
        inc edx
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esp + 14h], edx
        mov esi, dword ptr [esp + 4ch]
        mov edx, dword ptr [esp + 18h]
        add esi, 4
        dec edx
        mov dword ptr [esp + 4ch], esi
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes 75 8E: jne 0x10023cb3
        __asm _emit 0x75
        __asm _emit 0x8e
        test edi, edi
        ; Exact mapped bytes 0F 84 31 02 00 00: je 0x10023f5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 29 02 00 00: je 0x10023f5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 38h]
        test edx, edx
        ; Exact mapped bytes 0F 84 1D 02 00 00: je 0x10023f5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        test edx, edx
        ; Exact mapped bytes 0F 84 11 02 00 00: je 0x10023f5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cdq
        idiv edi
        mov edi, eax
        mov eax, dword ptr [esp + 30h]
        cdq
        idiv ebx
        mov esi, eax
        mov eax, dword ptr [esp + 3ch]
        cdq
        idiv dword ptr [esp + 38h]
        mov ebp, eax
        mov eax, dword ptr [esp + 24h]
        cdq
        idiv ebx
        mov edx, dword ptr [esp + 2ch]
        mov ebx, eax
        mov eax, dword ptr [esp + 50h]
        cmp eax, edx
        ; Exact mapped bytes 75 21: jne 0x10023d9c
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [esp + 40h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 28h]
        mov ebx, dword ptr [esp + 20h]
        add eax, edx
        mov edi, dword ptr [esp + 1ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes E9 D0 FD FF FF: jmp 0x10023b6c
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ebp, ebx
        ; Exact mapped bytes 75 2E: jne 0x10023dce
        __asm _emit 0x75
        __asm _emit 0x2e
        mov dword ptr [ecx], ebx
        mov eax, ebx
        mov ebx, esi
        sub eax, edx
        sub ebx, edi
        mov edi, dword ptr [esp + 50h]
        imul eax, ebx
        sub edx, edi
        mov ebx, dword ptr [esp + 20h]
        mov dword ptr [esp + 18h], edx
        mov edi, dword ptr [esp + 1ch]
        cdq
        idiv dword ptr [esp + 18h]
        add eax, esi
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes E9 9E FD FF FF: jmp 0x10023b6c
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        sub eax, edi
        mov edi, edx
        sub edi, dword ptr [esp + 50h]
        cdq
        idiv edi
        mov edx, dword ptr [esp + 40h]
        mov edi, eax
        imul eax, dword ptr [esp + 2ch]
        sub esi, eax
        mov eax, dword ptr [esp + 28h]
        sub eax, edx
        mov edx, ebx
        sub edx, ebp
        mov ebp, edx
        cdq
        idiv ebp
        mov edx, eax
        cmp edi, edx
        ; Exact mapped bytes 0F 84 5D 01 00 00: je 0x10023f5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, edx
        mov eax, dword ptr [esp + 28h]
        imul ebp, ebx
        sub eax, ebp
        mov ebx, edi
        sub eax, esi
        sub ebx, edx
        cdq
        idiv ebx
        mov ebx, dword ptr [esp + 20h]
        mov dword ptr [ecx], eax
        imul eax, edi
        mov edi, dword ptr [esp + 1ch]
        add eax, esi
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes E9 40 FD FF FF: jmp 0x10023b6c
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, 3200h
        ; Exact mapped bytes 7C 03: jl 0x10023e37
        __asm _emit 0x7c
        __asm _emit 0x03
        mov dword ptr [eax - 4], esi
        mov ecx, dword ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 7D 08: jge 0x10023e45
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 0E: jmp 0x10023e53
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp ecx, 1900h
        ; Exact mapped bytes 7C 06: jl 0x10023e53
        __asm _emit 0x7c
        __asm _emit 0x06
        mov dword ptr [eax], 18ffh
        add eax, 90h
        dec edx
        ; Exact mapped bytes 0F 85 33 FD FF FF: jne 0x10023b92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        or eax, 0ffffffffh
        mov dword ptr [esp + 50h], edx
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 54h], edx
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 58h], edx
        mov dword ptr [esp + 44h], eax
        xor esi, esi
        mov dword ptr [esp + 5ch], edx
        test ebp, ebp
        mov dword ptr [esp + 48h], eax
        ; Exact mapped bytes 7E 55: jle 0x10023edf
        __asm _emit 0x7e
        __asm _emit 0x55
        lea edi, [esp + 6ch]
        mov edx, dword ptr [edi]
        xor ecx, ecx
        lea eax, [esp + 50h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 77 0B: ja 0x10023ea5
        __asm _emit 0x77
        __asm _emit 0x0b
        inc ecx
        add eax, 4
        cmp ecx, 4
        ; Exact mapped bytes 7C F3: jl 0x10023e96
        __asm _emit 0x7c
        __asm _emit 0xf3
        ; Exact mapped bytes EB 2F: jmp 0x10023ed4
        __asm _emit 0xeb
        __asm _emit 0x2f
        lea eax, [ecx + 1]
        cmp eax, 4
        ; Exact mapped bytes 7D 1F: jge 0x10023ecc
        __asm _emit 0x7d
        __asm _emit 0x1f
        lea eax, [eax*4 - 4]
        mov ebx, dword ptr [esp + eax + 50h]
        mov dword ptr [esp + eax + 54h], ebx
        mov ebx, dword ptr [esp + eax + 3ch]
        mov dword ptr [esp + eax + 40h], ebx
        add eax, 4
        cmp eax, 0ch
        ; Exact mapped bytes 7C E8: jl 0x10023eb4
        __asm _emit 0x7c
        __asm _emit 0xe8
        mov dword ptr [esp + ecx*4 + 50h], edx
        mov dword ptr [esp + ecx*4 + 3ch], esi
        inc esi
        add edi, 90h
        cmp esi, ebp
        ; Exact mapped bytes 7C AF: jl 0x10023e8e
        __asm _emit 0x7c
        __asm _emit 0xaf
        mov ecx, dword ptr [esp + 34h]
        xor esi, esi
        mov edx, ecx
        xor edi, edi
        mov ebp, dword ptr [ecx + 5ch]
        mov ebx, 1
        cmp ebp, dword ptr [edx + 60h]
        ; Exact mapped bytes 74 68: je 0x10023f5e
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [esp + 1264h]
        cmp dword ptr [ecx + 4], eax
        ; Exact mapped bytes 75 4D: jne 0x10023f52
        __asm _emit 0x75
        __asm _emit 0x4d
        mov edx, dword ptr [esp + 10h]
        lea eax, [esp + 60h]
        push edx
        push eax
        mov eax, dword ptr [esp + esi*4 + 44h]
        lea edx, [eax + eax*8]
        shl edx, 4
        lea eax, [esp + edx + 68h]
        push eax
        ; Exact mapped bytes E8 3D D6 FD FF: call 0x10001560
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        add edi, eax
        mov eax, dword ptr [esp + esi*4 + 50h]
        lea ecx, [eax + eax*2]
        lea ecx, [eax + ecx*4]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edi, edx
        ; Exact mapped bytes 7C 0E: jl 0x10023f52
        __asm _emit 0x7c
        __asm _emit 0x0e
        test ebx, ebx
        ; Exact mapped bytes 74 01: je 0x10023f49
        __asm _emit 0x74
        __asm _emit 0x01
        inc esi
        cmp esi, 4
        ; Exact mapped bytes 75 04: jne 0x10023f52
        __asm _emit 0x75
        __asm _emit 0x04
        xor esi, esi
        xor ebx, ebx
        mov ecx, dword ptr [esp + 34h]
        add ebp, 4
        cmp ebp, dword ptr [ecx + 60h]
        ; Exact mapped bytes 75 98: jne 0x10023ef6
        __asm _emit 0x75
        __asm _emit 0x98
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1250h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
