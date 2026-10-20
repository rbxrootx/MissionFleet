// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A4160 .. +0x67E bytes.
extern "C" __declspec(naked) void FUN_587a4160_587A4160() {
    __asm {
        sub esp, 28h
        mov ecx, dword ptr [esp + 30h]
        push ebx
        push ebp
        push esi
        mov ebx, dword ptr [ecx + 4]
        mov ebp, 0fffffeffh
        movzx ecx, byte ptr [ecx + 0bh]
        push edi
        mov edi, dword ptr [esp + 3ch]
        add ecx, 7
        shr ecx, 3
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 18h], ecx
        movzx eax, byte ptr [edi + 152h]
        mov esi, dword ptr [edi + 128h]
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 28h], esi
        cmp ebx, 1ffffffh
        ; Exact mapped bytes 72 0B: jb 0x587a41b1
        __asm _emit 0x72
        __asm _emit 0x0b
        neg eax
        and dword ptr [esp + 10h], eax
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x587a42b3
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test al, 8
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x587a42b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x587a42b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        inc esi
        xor edx, edx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x587a42af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 8
        ; Exact mapped bytes 0F 82 B5 00 00 00: jb 0x587a428d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 1C 67 96 58 02: cmp dword ptr [0x5896671c], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 0F 8C A8 00 00 00: jl 0x587a428d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 28 35 80 90 8B 58: movaps xmm6, xmmword ptr [0x588b9080]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x8b
        __asm _emit 0x58
        mov eax, ebx
        ; Exact mapped bytes 0F 28 3D 90 90 8B 58: movaps xmm7, xmmword ptr [0x588b9090]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x8b
        __asm _emit 0x58
        and eax, 0fffffff8h
        ; Exact mapped bytes 0F 57 ED: xorps xmm5, xmm5
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xed
        ; Exact mapped bytes 0F 57 E4: xorps xmm4, xmm4
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xe4
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        ; Exact mapped bytes 66 0F 38 31 1E: pmovzxbd xmm3, dword ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x31
        __asm _emit 0x1e
        ; Exact mapped bytes 0F 28 D3: movaps xmm2, xmm3
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 28 C7: movaps xmm0, xmm7
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc7
        ; Exact mapped bytes 66 0F 38 3F D6: pmaxud xmm2, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x3f
        __asm _emit 0xd6
        ; Exact mapped bytes 66 0F 76 D3: pcmpeqd xmm2, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x76
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F FA C3: psubd xmm0, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 55 15 90 76 8B 58: andnps xmm2, xmmword ptr [0x588b7690]
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x76
        __asm _emit 0x8b
        __asm _emit 0x58
        add edx, 8
        ; Exact mapped bytes 0F 28 CA: movaps xmm1, xmm2
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        ; Exact mapped bytes 0F 54 DA: andps xmm3, xmm2
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xda
        ; Exact mapped bytes 0F 55 C8: andnps xmm1, xmm0
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 28 C7: movaps xmm0, xmm7
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 56 CB: orps xmm1, xmm3
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F 38 31 5E 04: pmovzxbd xmm3, dword ptr [esi + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x31
        __asm _emit 0x5e
        __asm _emit 0x04
        ; Exact mapped bytes 0F 28 D3: movaps xmm2, xmm3
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F FE E9: paddd xmm5, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xe9
        ; Exact mapped bytes 66 0F 38 3F D6: pmaxud xmm2, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x3f
        __asm _emit 0xd6
        ; Exact mapped bytes 66 0F 76 D3: pcmpeqd xmm2, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x76
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F FA C3: psubd xmm0, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 55 15 90 76 8B 58: andnps xmm2, xmmword ptr [0x588b7690]
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x76
        __asm _emit 0x8b
        __asm _emit 0x58
        add esi, 8
        ; Exact mapped bytes 0F 28 CA: movaps xmm1, xmm2
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        ; Exact mapped bytes 0F 54 DA: andps xmm3, xmm2
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xda
        ; Exact mapped bytes 0F 55 C8: andnps xmm1, xmm0
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 56 CB: orps xmm1, xmm3
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F FE E1: paddd xmm4, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xe1
        cmp edx, eax
        ; Exact mapped bytes 72 97: jb 0x587a4200
        __asm _emit 0x72
        __asm _emit 0x97
        ; Exact mapped bytes 66 0F FE E5: paddd xmm4, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xe5
        ; Exact mapped bytes 0F 28 C4: movaps xmm0, xmm4
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc4
        ; Exact mapped bytes 66 0F 73 D8 08: psrldq xmm0, 8
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd8
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F FE E0: paddd xmm4, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xe0
        ; Exact mapped bytes 0F 10 C4: movups xmm0, xmm4
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xc4
        ; Exact mapped bytes 66 0F 73 D8 04: psrldq xmm0, 4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd8
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F FE E0: paddd xmm4, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F 7E E5: movd ebp, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xe5
        cmp edx, ebx
        ; Exact mapped bytes 73 22: jae 0x587a42af
        __asm _emit 0x73
        __asm _emit 0x22
        sub esi, edx
        nop
        movzx ecx, byte ptr [esi + edx]
        mov eax, 100h
        sub eax, ecx
        cmp ecx, 80h
        cmovae ecx, eax
        inc edx
        add ebp, ecx
        cmp edx, ebx
        ; Exact mapped bytes 72 E5: jb 0x587a4290
        __asm _emit 0x72
        __asm _emit 0xe5
        mov ecx, dword ptr [esp + 18h]
        mov esi, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 10h]
        cmp eax, 10h
        ; Exact mapped bytes 0F 85 8E 01 00 00: jne 0x587a444e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 12ch]
        xor ecx, ecx
        mov dword ptr [esp + 14h], eax
        inc esi
        mov edx, esi
        mov dword ptr [esp + 1ch], ecx
        mov byte ptr [eax], 1
        inc eax
        cmp dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 76 1D: jbe 0x587a42fa
        __asm _emit 0x76
        __asm _emit 0x1d
        mov ecx, dword ptr [esp + 18h]
        mov edi, ecx
        mov dword ptr [esp + 1ch], ecx
        mov cl, byte ptr [edx]
        inc edx
        mov byte ptr [eax], cl
        inc eax
        sub edi, 1
        ; Exact mapped bytes 75 F5: jne 0x587a42e7
        __asm _emit 0x75
        __asm _emit 0xf5
        mov edi, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [esp + 28h], ebx
        sub dword ptr [esp + 28h], ecx
        cmp ecx, ebx
        ; Exact mapped bytes 0F 83 E2 00 00 00: jae 0x587a43ec
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 28h], 40h
        ; Exact mapped bytes 0F 82 B9 00 00 00: jb 0x587a43ce
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [eax + ecx]
        add ecx, esi
        mov dword ptr [esp + 2ch], ecx
        lea ecx, [ebx - 1]
        add ecx, esi
        mov dword ptr [esp + 30h], edi
        cmp edi, ecx
        mov edi, dword ptr [esp + 3ch]
        ; Exact mapped bytes 77 0F: ja 0x587a433e
        __asm _emit 0x77
        __asm _emit 0x0f
        lea ecx, [ebx - 1]
        add ecx, eax
        cmp ecx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 0F 83 8C 00 00 00: jae 0x587a43ca
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        add ecx, edx
        mov dword ptr [esp + 2ch], ecx
        lea ecx, [ebx - 1]
        add ecx, edx
        cmp dword ptr [esp + 30h], ecx
        ; Exact mapped bytes 77 0B: ja 0x587a435e
        __asm _emit 0x77
        __asm _emit 0x0b
        lea ecx, [ebx - 1]
        add ecx, eax
        cmp ecx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 73 6C: jae 0x587a43ca
        __asm _emit 0x73
        __asm _emit 0x6c
        mov ecx, dword ptr [esp + 28h]
        and ecx, 3fh
        mov dword ptr [esp + 2ch], ebx
        sub dword ptr [esp + 2ch], ecx
        mov ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 0F 10 06: movups xmm0, xmmword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        add ecx, 40h
        ; Exact mapped bytes 0F 10 0A: movups xmm1, xmmword ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0a
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 08: movups xmmword ptr [eax], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x08
        ; Exact mapped bytes 0F 10 46 10: movups xmm0, xmmword ptr [esi + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 0F 10 4A 10: movups xmm1, xmmword ptr [edx + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4a
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 48 10: movups xmmword ptr [eax + 0x10], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 0F 10 46 20: movups xmm0, xmmword ptr [esi + 0x20]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0x20
        ; Exact mapped bytes 0F 10 4A 20: movups xmm1, xmmword ptr [edx + 0x20]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4a
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 48 20: movups xmmword ptr [eax + 0x20], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x48
        __asm _emit 0x20
        ; Exact mapped bytes 0F 10 4A 30: movups xmm1, xmmword ptr [edx + 0x30]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4a
        __asm _emit 0x30
        add edx, 40h
        ; Exact mapped bytes 0F 10 46 30: movups xmm0, xmmword ptr [esi + 0x30]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0x30
        add esi, 40h
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 48 30: movups xmmword ptr [eax + 0x30], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x48
        __asm _emit 0x30
        add eax, 40h
        cmp ecx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 72 B1: jb 0x587a4371
        __asm _emit 0x72
        __asm _emit 0xb1
        mov dword ptr [esp + 30h], ecx
        cmp ecx, ebx
        ; Exact mapped bytes 73 24: jae 0x587a43ec
        __asm _emit 0x73
        __asm _emit 0x24
        ; Exact mapped bytes EB 04: jmp 0x587a43ce
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 1ch]
        mov edi, ebx
        sub esi, eax
        sub edx, eax
        sub edi, ecx
        mov cl, byte ptr [edx + eax]
        lea eax, [eax + 1]
        sub cl, byte ptr [eax + esi - 1]
        mov byte ptr [eax - 1], cl
        sub edi, 1
        ; Exact mapped bytes 75 EE: jne 0x587a43d6
        __asm _emit 0x75
        __asm _emit 0xee
        mov edi, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 10h]
        test al, al
        ; Exact mapped bytes 79 3B: jns 0x587a442f
        __asm _emit 0x79
        __asm _emit 0x3b
        mov eax, dword ptr [esp + 14h]
        push ebp
        push ebx
        push dword ptr [esp + 20h]
        mov dword ptr [esp + 20h], eax
        push edi
        ; Exact mapped bytes E8 18 E7 FF FF: call 0x587a2b20
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        cmp eax, ebp
        ; Exact mapped bytes 73 20: jae 0x587a442f
        __asm _emit 0x73
        __asm _emit 0x20
        mov ecx, dword ptr [edi + 130h]
        mov eax, dword ptr [edi + 12ch]
        mov dword ptr [esp + 14h], eax
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x587a442f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [edi + 12ch], ecx
        mov dword ptr [edi + 130h], eax
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 40h]
        mov eax, dword ptr [eax + 4]
        inc eax
        push eax
        push ecx
        push edi
        ; Exact mapped bytes E8 7D FB FF FF: call 0x587a3fc0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 28h
        ret
        test al, 10h
        ; Exact mapped bytes 74 32: je 0x587a4484
        __asm _emit 0x74
        __asm _emit 0x32
        push ebp
        push ebx
        push ecx
        push edi
        ; Exact mapped bytes E8 D5 EA FF FF: call 0x587a2f30
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        cmp eax, ebp
        ; Exact mapped bytes 73 22: jae 0x587a4484
        __asm _emit 0x73
        __asm _emit 0x22
        mov esi, dword ptr [edi + 12ch]
        mov ebp, eax
        mov eax, dword ptr [edi + 130h]
        mov dword ptr [esp + 28h], esi
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x587a4484
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [edi + 12ch], eax
        mov dword ptr [edi + 130h], esi
        cmp dword ptr [esp + 10h], 20h
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x587a4577
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 12ch]
        mov edx, dword ptr [edi + 128h]
        mov esi, dword ptr [edi + 124h]
        inc edx
        mov dword ptr [esp + 14h], eax
        inc esi
        mov byte ptr [eax], 2
        lea ecx, [eax + 1]
        xor eax, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 35 FF FF FF: je 0x587a43ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ebx, 40h
        ; Exact mapped bytes 0F 82 8F 00 00 00: jb 0x587a454f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx - 1]
        add eax, esi
        cmp ecx, eax
        ; Exact mapped bytes 77 09: ja 0x587a44d2
        __asm _emit 0x77
        __asm _emit 0x09
        lea eax, [ebx - 1]
        add eax, ecx
        cmp eax, esi
        ; Exact mapped bytes 73 7B: jae 0x587a454d
        __asm _emit 0x73
        __asm _emit 0x7b
        lea eax, [ebx - 1]
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 77 09: ja 0x587a44e4
        __asm _emit 0x77
        __asm _emit 0x09
        lea eax, [ebx - 1]
        add eax, ecx
        cmp eax, edx
        ; Exact mapped bytes 73 69: jae 0x587a454d
        __asm _emit 0x73
        __asm _emit 0x69
        mov eax, ebx
        and eax, 0ffffffc0h
        mov dword ptr [esp + 30h], eax
        xor eax, eax
        nop
        ; Exact mapped bytes 0F 10 06: movups xmm0, xmmword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        add eax, 40h
        ; Exact mapped bytes 0F 10 0A: movups xmm1, xmmword ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0a
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 09: movups xmmword ptr [ecx], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x09
        ; Exact mapped bytes 0F 10 46 10: movups xmm0, xmmword ptr [esi + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 0F 10 4A 10: movups xmm1, xmmword ptr [edx + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4a
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 49 10: movups xmmword ptr [ecx + 0x10], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x49
        __asm _emit 0x10
        ; Exact mapped bytes 0F 10 46 20: movups xmm0, xmmword ptr [esi + 0x20]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0x20
        ; Exact mapped bytes 0F 10 4A 20: movups xmm1, xmmword ptr [edx + 0x20]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4a
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 49 20: movups xmmword ptr [ecx + 0x20], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x49
        __asm _emit 0x20
        ; Exact mapped bytes 0F 10 4A 30: movups xmm1, xmmword ptr [edx + 0x30]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4a
        __asm _emit 0x30
        add edx, 40h
        ; Exact mapped bytes 0F 10 46 30: movups xmm0, xmmword ptr [esi + 0x30]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0x30
        add esi, 40h
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 49 30: movups xmmword ptr [ecx + 0x30], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x49
        __asm _emit 0x30
        add ecx, 40h
        cmp eax, dword ptr [esp + 30h]
        ; Exact mapped bytes 72 B1: jb 0x587a44f0
        __asm _emit 0x72
        __asm _emit 0xb1
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        ; Exact mapped bytes 0F 83 A1 FE FF FF: jae 0x587a43ec
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587a454f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, ebx
        sub esi, ecx
        sub edx, ecx
        sub edi, eax
        ; Exact mapped bytes 66 0F 1F 84 00 00 00 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edx + ecx]
        lea ecx, [ecx + 1]
        sub al, byte ptr [esi + ecx - 1]
        mov byte ptr [ecx - 1], al
        sub edi, 1
        ; Exact mapped bytes 75 EE: jne 0x587a4560
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes E9 71 FE FF FF: jmp 0x587a43e8
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        mov ecx, ebp
        mov dword ptr [esp + 1ch], ecx
        mov dword ptr [esp + 20h], esi
        test al, 20h
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x587a463f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 12ch]
        xor eax, eax
        mov esi, dword ptr [esp + 28h]
        xor edx, edx
        mov dword ptr [esp + 2ch], ecx
        mov dword ptr [esp + 20h], esi
        mov byte ptr [ecx], 2
        mov ecx, ebp
        mov dword ptr [esp + 1ch], ecx
        test ebx, ebx
        ; Exact mapped bytes 74 61: je 0x587a4611
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, esi
        mov dword ptr [esp + 1ch], ebp
        mov esi, dword ptr [edi + 128h]
        mov ebp, dword ptr [edi + 124h]
        inc esi
        inc ebp
        mov dword ptr [esp + 20h], eax
        xor edi, edi
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi]
        sub al, byte ptr [ebp]
        mov ecx, dword ptr [esp + 2ch]
        mov byte ptr [ecx + edx + 1], al
        movzx ecx, al
        mov eax, 100h
        sub eax, ecx
        cmp ecx, 80h
        cmovae ecx, eax
        add edi, ecx
        mov ecx, dword ptr [esp + 1ch]
        cmp edi, ecx
        ; Exact mapped bytes 77 07: ja 0x587a4601
        __asm _emit 0x77
        __asm _emit 0x07
        inc edx
        inc ebp
        inc esi
        cmp edx, ebx
        ; Exact mapped bytes 72 CF: jb 0x587a45d0
        __asm _emit 0x72
        __asm _emit 0xcf
        mov esi, dword ptr [esp + 20h]
        mov dword ptr [esp + 2ch], edi
        mov edi, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 2ch]
        cmp eax, ecx
        ; Exact mapped bytes 73 26: jae 0x587a463b
        __asm _emit 0x73
        __asm _emit 0x26
        mov esi, dword ptr [edi + 12ch]
        mov ecx, eax
        mov eax, dword ptr [edi + 130h]
        mov dword ptr [esp + 1ch], ecx
        mov dword ptr [esp + 20h], esi
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x587a463b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [edi + 12ch], eax
        mov dword ptr [edi + 130h], esi
        mov eax, dword ptr [esp + 10h]
        cmp eax, 40h
        ; Exact mapped bytes 75 19: jne 0x587a465d
        __asm _emit 0x75
        __asm _emit 0x19
        push ebx
        push dword ptr [esp + 1ch]
        push edi
        ; Exact mapped bytes E8 01 E3 FF FF: call 0x587a2950
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 12ch]
        add esp, 0ch
        ; Exact mapped bytes E9 D6 FD FF FF: jmp 0x587a4433
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        mov ebp, ecx
        mov dword ptr [esp + 14h], esi
        test al, 40h
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x587a47b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 12ch]
        xor esi, esi
        mov eax, dword ptr [edi + 128h]
        mov edx, dword ptr [edi + 124h]
        inc eax
        mov ebx, dword ptr [esp + 20h]
        inc edx
        mov ebp, dword ptr [esp + 1ch]
        mov byte ptr [ecx], 3
        inc ecx
        mov dword ptr [esp + 14h], ebx
        mov ebx, dword ptr [esp + 30h]
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 28h], ecx
        mov dword ptr [esp + 2ch], esi
        cmp dword ptr [esp + 18h], esi
        ; Exact mapped bytes 76 68: jbe 0x587a4713
        __asm _emit 0x76
        __asm _emit 0x68
        mov eax, dword ptr [esp + 18h]
        mov ebx, ecx
        mov edi, dword ptr [esp + 24h]
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [esp + 1ch], ebp
        mov ebp, dword ptr [esp + 18h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edx]
        inc edx
        mov cl, byte ptr [edi]
        inc edi
        shr al, 1
        sub cl, al
        mov eax, 100h
        mov byte ptr [ebx], cl
        inc ebx
        movzx ecx, cl
        sub eax, ecx
        cmp ecx, 80h
        cmovae ecx, eax
        add esi, ecx
        sub ebp, 1
        ; Exact mapped bytes 75 D9: jne 0x587a46d0
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ebp, dword ptr [esp + 1ch]
        mov dword ptr [esp + 28h], ebx
        mov ebx, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [esp + 24h], edi
        mov edi, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 24h]
        cmp dword ptr [esp + 2ch], ebx
        ; Exact mapped bytes 73 73: jae 0x587a478c
        __asm _emit 0x73
        __asm _emit 0x73
        mov edi, dword ptr [edi + 128h]
        sub eax, edx
        mov ebx, dword ptr [esp + 30h]
        sub edi, edx
        inc edi
        mov dword ptr [esp + 24h], eax
        sub ecx, edx
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esp + 28h], ecx
        mov edi, eax
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        lea edx, [edx + 1]
        movzx ecx, byte ptr [eax + edx - 1]
        movzx eax, byte ptr [edx - 1]
        add ecx, eax
        mov al, byte ptr [edi + edx - 1]
        shr ecx, 1
        sub al, cl
        mov ecx, dword ptr [esp + 28h]
        mov byte ptr [ecx + edx - 1], al
        movzx ecx, al
        mov eax, 100h
        sub eax, ecx
        cmp ecx, 80h
        cmovae ecx, eax
        add esi, ecx
        cmp esi, ebp
        ; Exact mapped bytes 77 0D: ja 0x587a4788
        __asm _emit 0x77
        __asm _emit 0x0d
        mov eax, dword ptr [esp + 2ch]
        inc eax
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        ; Exact mapped bytes 72 B8: jb 0x587a4740
        __asm _emit 0x72
        __asm _emit 0xb8
        mov edi, dword ptr [esp + 3ch]
        cmp esi, ebp
        ; Exact mapped bytes 73 22: jae 0x587a47b2
        __asm _emit 0x73
        __asm _emit 0x22
        mov ecx, dword ptr [edi + 130h]
        mov ebp, esi
        mov eax, dword ptr [edi + 12ch]
        mov dword ptr [esp + 14h], eax
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x587a47b2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [edi + 12ch], ecx
        mov dword ptr [edi + 130h], eax
        mov eax, dword ptr [esp + 10h]
        cmp eax, 80h
        ; Exact mapped bytes 0F 85 2F FC FF FF: jne 0x587a43f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        push dword ptr [esp + 1ch]
        push edi
        ; Exact mapped bytes E8 D4 E5 FF FF: call 0x587a2da0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 12ch]
        add esp, 0ch
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes E9 51 FC FF FF: jmp 0x587a442f
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
