// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4710 .. +0x276 bytes.
extern "C" __declspec(naked) void FUN_587b4710_587B4710() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0ffffffe0h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 160h
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 83 3D 80 5E 96 58 00: cmp dword ptr [0x58965e80], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x587b481e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 10h], 10h
        ; Exact mapped bytes 0F 82 C7 00 00 00: jb 0x587b481e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 0ch]
        ; Exact mapped bytes 66 0F 6E C1: movd xmm0, ecx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 29 45 A0: movaps xmmword ptr [ebp - 0x60], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes C4 E2 7D 79 45 A0: vpbroadcastw ymm0, word ptr [ebp - 0x60]
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x7d
        __asm _emit 0x79
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes C5 FE 7F 85 00 FF FF FF: vmovdqu ymmword ptr [ebp - 0x100], ymm0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 6F 85 00 FF FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0x100]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 7F 85 C0 FE FF FF: vmovdqu ymmword ptr [ebp - 0x140], ymm0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes C5 FE 6F 02: vmovdqu ymm0, ymmword ptr [edx]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x02
        ; Exact mapped bytes C5 FE 7F 85 E0 FE FF FF: vmovdqu ymmword ptr [ebp - 0x120], ymm0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 6F 85 E0 FE FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0x120]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 7F 85 20 FF FF FF: vmovdqu ymmword ptr [ebp - 0xe0], ymm0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 6F 85 20 FF FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0xe0]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FD 75 85 C0 FE FF FF: vpcmpeqw ymm0, ymm0, ymmword ptr [ebp - 0x140]
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0x75
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 7F 85 A0 FE FF FF: vmovdqu ymmword ptr [ebp - 0x160], ymm0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 6F 85 A0 FE FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0x160]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 7F 85 20 FF FF FF: vmovdqu ymmword ptr [ebp - 0xe0], ymm0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 6F 85 20 FF FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0xe0]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FD D7 C0: vpmovmskb eax, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xc0
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x587b47fd
        __asm _emit 0x74
        __asm _emit 0x20
        bsf ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        shr edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebx + 8]
        lea eax, [ecx + eax*2]
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x587b497f
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 10h
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 20h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        cmp ecx, dword ptr [ebx + 10h]
        ; Exact mapped bytes 0F 86 63 FF FF FF: jbe 0x587b4781
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        cmp edx, dword ptr [ebx + 10h]
        ; Exact mapped bytes 0F 87 1E 01 00 00: ja 0x587b494b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 43 0C: movsx eax, word ptr [ebx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0x0c
        ; Exact mapped bytes 66 0F 6E C0: movd xmm0, eax
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 61 C0: punpcklwd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 70 C0 00: pshufd xmm0, xmm0, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x00
        ; Exact mapped bytes 0F 29 45 90: movaps xmmword ptr [ebp - 0x70], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0x90
        ; Exact mapped bytes 0F 28 45 90: movaps xmm0, xmmword ptr [ebp - 0x70]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0x90
        ; Exact mapped bytes 0F 29 45 B0: movaps xmmword ptr [ebp - 0x50], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0xb0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        cmp ecx, dword ptr [ebx + 10h]
        ; Exact mapped bytes 77 7B: ja 0x587b48d0
        __asm _emit 0x77
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 10 02: movups xmm0, xmmword ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes 0F 29 45 80: movaps xmmword ptr [ebp - 0x80], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes 0F 28 45 80: movaps xmm0, xmmword ptr [ebp - 0x80]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes 0F 29 45 D0: movaps xmmword ptr [ebp - 0x30], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 28 45 D0: movaps xmm0, xmmword ptr [ebp - 0x30]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F 75 45 B0: pcmpeqw xmm0, xmmword ptr [ebp - 0x50]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 0F 29 85 70 FF FF FF: movaps xmmword ptr [ebp - 0x90], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 28 85 70 FF FF FF: movaps xmm0, xmmword ptr [ebp - 0x90]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 29 45 D0: movaps xmmword ptr [ebp - 0x30], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 28 45 D0: movaps xmm0, xmmword ptr [ebp - 0x30]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F D7 C0: pmovmskb eax, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        movzx ecx, word ptr [ebp - 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x587b48b9
        __asm _emit 0x74
        __asm _emit 0x23
        movzx edx, word ptr [ebp - 14h]
        bsf eax, edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        shr ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebx + 8]
        lea eax, [eax + edx*2]
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x587b497f
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 10h
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x587b484a
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        cmp eax, dword ptr [ebx + 10h]
        ; Exact mapped bytes 77 70: ja 0x587b494b
        __asm _emit 0x77
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes F3 0F 7E 01: movq xmm0, qword ptr [ecx]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x01
        ; Exact mapped bytes 0F 29 85 60 FF FF FF: movaps xmmword ptr [ebp - 0xa0], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 28 85 60 FF FF FF: movaps xmm0, xmmword ptr [ebp - 0xa0]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 29 45 C0: movaps xmmword ptr [ebp - 0x40], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 28 45 C0: movaps xmm0, xmmword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 75 45 B0: pcmpeqw xmm0, xmmword ptr [ebp - 0x50]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 0F 29 85 50 FF FF FF: movaps xmmword ptr [ebp - 0xb0], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 28 85 50 FF FF FF: movaps xmm0, xmmword ptr [ebp - 0xb0]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 29 45 C0: movaps xmmword ptr [ebp - 0x40], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 28 45 C0: movaps xmm0, xmmword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F D7 D0: pmovmskb edx, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xd0
        mov byte ptr [ebp - 9], dl
        movzx eax, byte ptr [ebp - 9]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x587b4942
        __asm _emit 0x74
        __asm _emit 0x20
        movzx ecx, byte ptr [ebp - 9]
        bsf edx, ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        shr eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebx + 8]
        lea eax, [edx + ecx*2]
        ; Exact mapped bytes EB 3D: jmp 0x587b497f
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x587b4956
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebx + 10h]
        ; Exact mapped bytes 73 1F: jae 0x587b497d
        __asm _emit 0x73
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebx + 8]
        movzx edx, word ptr [ecx + eax*2]
        movzx eax, word ptr [ebx + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 0B: jne 0x587b497b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebx + 8]
        lea eax, [edx + ecx*2]
        ; Exact mapped bytes EB 04: jmp 0x587b497f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D0: jmp 0x587b494d
        __asm _emit 0xeb
        __asm _emit 0xd0
        xor eax, eax
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
