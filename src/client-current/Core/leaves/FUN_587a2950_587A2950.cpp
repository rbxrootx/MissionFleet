// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A2950 .. +0x1C7 bytes.
extern "C" __declspec(naked) void FUN_587a2950_587A2950() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        mov ecx, dword ptr [edx + 12ch]
        mov ebp, dword ptr [edx + 128h]
        mov eax, dword ptr [edx + 124h]
        inc ebp
        push esi
        inc eax
        mov byte ptr [ecx], 3
        xor edx, edx
        mov esi, ebp
        push edi
        lea edi, [ecx + 1]
        test ebx, ebx
        ; Exact mapped bytes 74 1A: je 0x587a2998
        __asm _emit 0x74
        __asm _emit 0x1a
        mov dword ptr [esp + 14h], ebx
        mov dl, byte ptr [eax]
        inc eax
        mov cl, byte ptr [esi]
        inc esi
        shr dl, 1
        sub cl, dl
        mov byte ptr [edi], cl
        inc edi
        sub ebx, 1
        ; Exact mapped bytes 75 EE: jne 0x587a2982
        __asm _emit 0x75
        __asm _emit 0xee
        mov edx, dword ptr [esp + 14h]
        mov ebx, dword ptr [esp + 1ch]
        mov ecx, ebx
        sub ecx, edx
        mov dword ptr [esp + 1ch], ecx
        cmp edx, ebx
        ; Exact mapped bytes 0F 83 66 01 00 00: jae 0x587a2b12
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 8
        ; Exact mapped bytes 0F 82 37 01 00 00: jb 0x587a2aec
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + edx]
        mov dword ptr [esp + 14h], ecx
        lea ecx, [edx + ebp]
        mov dword ptr [esp + 18h], ecx
        lea ecx, [ebx - 1]
        add ecx, ebp
        cmp dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 77 0F: ja 0x587a29dd
        __asm _emit 0x77
        __asm _emit 0x0f
        lea ecx, [ebx - 1]
        add ecx, edi
        cmp ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F 83 0F 01 00 00: jae 0x587a2aec
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + edx]
        mov dword ptr [esp + 18h], ecx
        lea ecx, [ebx - 1]
        add ecx, eax
        cmp dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 77 0F: ja 0x587a29fe
        __asm _emit 0x77
        __asm _emit 0x0f
        lea ecx, [ebx - 1]
        add ecx, edi
        cmp ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F 83 EE 00 00 00: jae 0x587a2aec
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + edx]
        mov dword ptr [esp + 18h], ecx
        lea ecx, [ebx - 1]
        add ecx, esi
        cmp dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 77 0F: ja 0x587a2a1f
        __asm _emit 0x77
        __asm _emit 0x0f
        lea ecx, [ebx - 1]
        add ecx, edi
        cmp ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F 83 CD 00 00 00: jae 0x587a2aec
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 0F 28 1D 70 90 8B 58: movaps xmm3, xmmword ptr [0x588b9070]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x1d
        __asm _emit 0x70
        __asm _emit 0x90
        __asm _emit 0x8b
        __asm _emit 0x58
        and ecx, 7
        ; Exact mapped bytes 0F 10 25 50 85 8B 58: movups xmm4, xmmword ptr [0x588b8550]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x25
        __asm _emit 0x50
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x58
        mov dword ptr [esp + 14h], ebx
        sub dword ptr [esp + 14h], ecx
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 0F 6E 10: movd xmm2, dword ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x10
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 6E 4D 00: movd xmm1, dword ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x4d
        __asm _emit 0x00
        add edx, 8
        ; Exact mapped bytes 66 0F 60 C8: punpcklbw xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x60
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 60 D0: punpcklbw xmm2, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x60
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F 61 C8: punpcklwd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 61 D0: punpcklwd xmm2, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F FE D1: paddd xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F 6E 0E: movd xmm1, dword ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x0e
        ; Exact mapped bytes 66 0F 66 C2: pcmpgtd xmm0, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x66
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 54 C3: andps xmm0, xmm3
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xc3
        ; Exact mapped bytes 66 0F FE C2: paddd xmm0, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xc2
        ; Exact mapped bytes 66 0F 72 E0 01: psrad xmm0, 1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 0F 54 C4: andps xmm0, xmm4
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xc4
        ; Exact mapped bytes 66 0F 67 C0: packuswb xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x67
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 67 C0: packuswb xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x67
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 7E 0F: movd dword ptr [edi], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 66 0F 6E 50 04: movd xmm2, dword ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x50
        __asm _emit 0x04
        add eax, 8
        ; Exact mapped bytes 66 0F 6E 4D 04: movd xmm1, dword ptr [ebp + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x4d
        __asm _emit 0x04
        add ebp, 8
        ; Exact mapped bytes 66 0F 60 C8: punpcklbw xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x60
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 60 D0: punpcklbw xmm2, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x60
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F 61 C8: punpcklwd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 61 D0: punpcklwd xmm2, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F FE D1: paddd xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F 6E 4E 04: movd xmm1, dword ptr [esi + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F 66 C2: pcmpgtd xmm0, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x66
        __asm _emit 0xc2
        add esi, 8
        ; Exact mapped bytes 0F 54 C3: andps xmm0, xmm3
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xc3
        ; Exact mapped bytes 66 0F FE C2: paddd xmm0, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xc2
        ; Exact mapped bytes 66 0F 72 E0 01: psrad xmm0, 1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 0F 54 C4: andps xmm0, xmm4
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xc4
        ; Exact mapped bytes 66 0F 67 C0: packuswb xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x67
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 67 C0: packuswb xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x67
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 7E 4F 04: movd dword ptr [edi + 4], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x4f
        __asm _emit 0x04
        add edi, 8
        cmp edx, ecx
        ; Exact mapped bytes 0F 82 58 FF FF FF: jb 0x587a2a40
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edx, ebx
        ; Exact mapped bytes 73 26: jae 0x587a2b12
        __asm _emit 0x73
        __asm _emit 0x26
        sub ebp, eax
        sub esi, eax
        sub edi, eax
        sub ebx, edx
        movzx ecx, byte ptr [eax]
        lea eax, [eax + 1]
        movzx edx, byte ptr [eax + ebp - 1]
        add edx, ecx
        mov cl, byte ptr [eax + esi - 1]
        shr edx, 1
        sub cl, dl
        mov byte ptr [edi + eax - 1], cl
        sub ebx, 1
        ; Exact mapped bytes 75 E2: jne 0x587a2af4
        __asm _emit 0x75
        __asm _emit 0xe2
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
