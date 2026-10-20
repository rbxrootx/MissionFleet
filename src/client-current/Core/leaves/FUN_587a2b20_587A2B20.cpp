// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A2B20 .. +0x271 bytes.
extern "C" __declspec(naked) void FUN_587a2b20_587A2B20() {
    __asm {
        sub esp, 1ch
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 2ch]
        xor ebp, ebp
        push edi
        xor edi, edi
        mov dword ptr [esp + 30h], edi
        mov edx, dword ptr [esi + 12ch]
        mov ecx, dword ptr [esi + 128h]
        mov esi, dword ptr [esi + 124h]
        inc ecx
        inc esi
        mov dword ptr [esp + 10h], ecx
        mov byte ptr [edx], 4
        lea ebx, [edx + 1]
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [esp + 14h], esi
        test edx, edx
        ; Exact mapped bytes 0F 84 57 01 00 00: je 0x587a2cb8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 8
        ; Exact mapped bytes 0F 82 19 01 00 00: jb 0x587a2c83
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x19
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 8C 0C 01 00 00: jl 0x587a2c83
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx - 1]
        add eax, esi
        cmp ebx, eax
        ; Exact mapped bytes 77 0D: ja 0x587a2b8d
        __asm _emit 0x77
        __asm _emit 0x0d
        lea eax, [edx - 1]
        add eax, ebx
        cmp eax, esi
        ; Exact mapped bytes 0F 83 F6 00 00 00: jae 0x587a2c83
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx - 1]
        add eax, ecx
        cmp ebx, eax
        ; Exact mapped bytes 77 0D: ja 0x587a2ba3
        __asm _emit 0x77
        __asm _emit 0x0d
        lea eax, [edx - 1]
        add eax, ebx
        cmp eax, ecx
        ; Exact mapped bytes 0F 83 E0 00 00 00: jae 0x587a2c83
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe0
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
        mov eax, edx
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
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 6E 06: movd xmm0, dword ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x06
        add edi, 8
        ; Exact mapped bytes 66 0F 6E 09: movd xmm1, dword ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x09
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 28 C7: movaps xmm0, xmm7
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc7
        ; Exact mapped bytes 66 0F 38 31 D9: pmovzxbd xmm3, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x31
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 7E 0B: movd dword ptr [ebx], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 28 D3: movaps xmm2, xmm3
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd3
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
        ; Exact mapped bytes 0F 28 CA: movaps xmm1, xmm2
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        ; Exact mapped bytes 0F 54 D3: andps xmm2, xmm3
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 55 C8: andnps xmm1, xmm0
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 6E 46 04: movd xmm0, dword ptr [esi + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 0F 56 CA: orps xmm1, xmm2
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xca
        add esi, 8
        ; Exact mapped bytes 66 0F FE E9: paddd xmm5, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xe9
        ; Exact mapped bytes 66 0F 6E 49 04: movd xmm1, dword ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        add ecx, 8
        ; Exact mapped bytes 66 0F 38 31 D9: pmovzxbd xmm3, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x31
        __asm _emit 0xd9
        ; Exact mapped bytes 0F 28 D3: movaps xmm2, xmm3
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F 7E 4B 04: movd dword ptr [ebx + 4], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x4b
        __asm _emit 0x04
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
        ; Exact mapped bytes 0F 28 C7: movaps xmm0, xmm7
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 55 15 90 76 8B 58: andnps xmm2, xmmword ptr [0x588b7690]
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x76
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F FA C3: psubd xmm0, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 28 CA: movaps xmm1, xmm2
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        add ebx, 8
        ; Exact mapped bytes 0F 55 C8: andnps xmm1, xmm0
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 54 D3: andps xmm2, xmm3
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 56 CA: orps xmm1, xmm2
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F FE E1: paddd xmm4, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xe1
        cmp edi, eax
        ; Exact mapped bytes 0F 82 6B FF FF FF: jb 0x587a2bc0
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F FE E5: paddd xmm4, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xe5
        mov dword ptr [esp + 30h], edi
        ; Exact mapped bytes 0F 28 C4: movaps xmm0, xmm4
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc4
        mov dword ptr [esp + 30h], edi
        ; Exact mapped bytes 66 0F 73 D8 08: psrldq xmm0, 8
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd8
        __asm _emit 0x08
        mov eax, edi
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
        cmp eax, edx
        ; Exact mapped bytes 73 35: jae 0x587a2cb8
        __asm _emit 0x73
        __asm _emit 0x35
        mov eax, edx
        mov dword ptr [esp + 30h], edx
        sub eax, edi
        mov dword ptr [esp + 34h], eax
        mov edi, eax
        mov al, byte ptr [ecx]
        inc ecx
        sub al, byte ptr [esi]
        inc esi
        movzx edx, al
        mov byte ptr [ebx], al
        mov eax, 100h
        sub eax, edx
        inc ebx
        cmp edx, 80h
        cmovae edx, eax
        add ebp, edx
        sub edi, 1
        ; Exact mapped bytes 75 DD: jne 0x587a2c91
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edi, dword ptr [esp + 30h]
        cmp edi, dword ptr [esp + 38h]
        ; Exact mapped bytes 0F 83 C5 00 00 00: jae 0x587a2d87
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov edi, dword ptr [esp + 10h]
        sub esi, edi
        sub edx, edi
        mov dword ptr [esp + 28h], esi
        mov dword ptr [esp + 14h], edx
        sub ebx, ecx
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [edi + edx]
        movzx esi, byte ptr [edi + esi]
        movzx eax, byte ptr [edi]
        inc edi
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 24h], esi
        mov dword ptr [esp + 10h], edi
        mov edi, esi
        mov esi, eax
        mov dword ptr [esp + 20h], edx
        sub edi, edx
        sub esi, edx
        mov eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [esp + 18h], eax
        mov eax, esi
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [esp + 1ch], eax
        lea eax, [esi + edi]
        cdq
        mov esi, eax
        mov eax, dword ptr [esp + 18h]
        xor esi, edx
        sub esi, edx
        mov edx, dword ptr [esp + 1ch]
        cmp eax, edx
        ; Exact mapped bytes 7F 04: jg 0x587a2d34
        __asm _emit 0x7f
        __asm _emit 0x04
        cmp eax, esi
        ; Exact mapped bytes 7E 0F: jle 0x587a2d43
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [esp + 20h]
        cmp edx, esi
        cmovle eax, dword ptr [esp + 24h]
        mov dword ptr [esp + 34h], eax
        mov al, byte ptr [ecx]
        mov edx, 100h
        sub al, byte ptr [esp + 34h]
        movzx esi, al
        sub edx, esi
        mov byte ptr [ebx + ecx], al
        inc ecx
        cmp esi, 80h
        cmovae esi, edx
        add ebp, esi
        cmp ebp, dword ptr [esp + 3ch]
        ; Exact mapped bytes 77 1F: ja 0x587a2d87
        __asm _emit 0x77
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 30h]
        mov esi, dword ptr [esp + 28h]
        inc eax
        mov edi, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [esp + 30h], eax
        cmp eax, dword ptr [esp + 38h]
        ; Exact mapped bytes 0F 82 59 FF FF FF: jb 0x587a2ce0
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 1ch
        ret
    }
}
