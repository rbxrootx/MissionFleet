// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A2F30 .. +0x188 bytes.
extern "C" __declspec(naked) void FUN_587a2f30_587A2F30() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        push ebx
        push ebp
        mov ecx, dword ptr [eax + 12ch]
        xor ebx, ebx
        push esi
        mov esi, dword ptr [eax + 128h]
        push edi
        mov byte ptr [ecx], 1
        inc esi
        xor edi, edi
        mov dword ptr [esp + 18h], esi
        inc ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 13 01 00 00: je 0x587a3070
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 8
        ; Exact mapped bytes 0F 82 DF 00 00 00: jb 0x587a3045
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xdf
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
        ; Exact mapped bytes 0F 8C D2 00 00 00: jl 0x587a3045
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx - 1]
        lea ebp, [edx - 1]
        add eax, esi
        add ebp, ecx
        cmp ecx, eax
        ; Exact mapped bytes 77 08: ja 0x587a2f89
        __asm _emit 0x77
        __asm _emit 0x08
        cmp ebp, esi
        ; Exact mapped bytes 0F 83 BC 00 00 00: jae 0x587a3045
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xbc
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
        ; Exact mapped bytes 66 0F 6E 06: movd xmm0, dword ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x06
        add ebx, 8
        ; Exact mapped bytes 66 0F 38 31 D8: pmovzxbd xmm3, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x31
        __asm _emit 0xd8
        ; Exact mapped bytes 66 0F 7E 01: movd dword ptr [ecx], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x01
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
        mov ebp, ebx
        ; Exact mapped bytes 0F 55 C8: andnps xmm1, xmm0
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 54 D3: andps xmm2, xmm3
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xd3
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
        ; Exact mapped bytes 66 0F 38 31 D8: pmovzxbd xmm3, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x31
        __asm _emit 0xd8
        ; Exact mapped bytes 0F 28 D3: movaps xmm2, xmm3
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F 7E 41 04: movd dword ptr [ecx + 4], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x41
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
        ; Exact mapped bytes 66 0F FE E9: paddd xmm5, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xe9
        ; Exact mapped bytes 0F 55 15 90 76 8B 58: andnps xmm2, xmmword ptr [0x588b7690]
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x76
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 0F 28 C7: movaps xmm0, xmm7
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 28 CA: movaps xmm1, xmm2
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F FA C3: psubd xmm0, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xc3
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
        add esi, 8
        add ecx, 8
        ; Exact mapped bytes 66 0F FE E1: paddd xmm4, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xe1
        cmp ebx, eax
        ; Exact mapped bytes 72 81: jb 0x587a2fa2
        __asm _emit 0x72
        __asm _emit 0x81
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
        ; Exact mapped bytes 66 0F 7E E7: movd edi, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xe7
        cmp ebp, edx
        ; Exact mapped bytes 73 2B: jae 0x587a3070
        __asm _emit 0x73
        __asm _emit 0x2b
        mov ebp, edx
        sub ebp, ebx
        mov ebx, edx
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi]
        movzx edx, al
        mov byte ptr [ecx], al
        mov eax, 100h
        sub eax, edx
        cmp edx, 80h
        cmovae edx, eax
        inc esi
        add edi, edx
        inc ecx
        sub ebp, 1
        ; Exact mapped bytes 75 E0: jne 0x587a3050
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ebp, dword ptr [esp + 1ch]
        cmp ebx, ebp
        ; Exact mapped bytes 73 39: jae 0x587a30b1
        __asm _emit 0x73
        __asm _emit 0x39
        mov edx, dword ptr [esp + 18h]
        sub esi, ecx
        sub edx, ecx
        mov dword ptr [esp + 18h], edx
        mov al, byte ptr [esi + ecx]
        sub al, byte ptr [edx + ecx]
        movzx edx, al
        mov byte ptr [ecx], al
        mov eax, 100h
        sub eax, edx
        cmp edx, 80h
        cmovae edx, eax
        add edi, edx
        cmp edi, dword ptr [esp + 20h]
        ; Exact mapped bytes 77 0A: ja 0x587a30b1
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [esp + 18h]
        inc ebx
        inc ecx
        cmp ebx, ebp
        ; Exact mapped bytes 72 D3: jb 0x587a3084
        __asm _emit 0x72
        __asm _emit 0xd3
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
