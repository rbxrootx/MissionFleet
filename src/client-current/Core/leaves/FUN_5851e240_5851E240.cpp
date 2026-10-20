// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851E240 .. +0x332 bytes.
extern "C" __declspec(naked) void FUN_5851e240_5851E240() {
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
        sub esp, 180h
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 83 3D 80 5E 96 58 00: cmp dword ptr [0x58965e80], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x5851e376
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 10h
        cmp edx, dword ptr [ebx + 10h]
        ; Exact mapped bytes 0F 87 E4 00 00 00: ja 0x5851e376
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes C5 FE 6F 00: vmovdqu ymm0, ymmword ptr [eax]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x00
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
        ; Exact mapped bytes C5 FE 7F 85 00 FF FF FF: vmovdqu ymmword ptr [ebp - 0x100], ymm0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes C5 FE 6F 01: vmovdqu ymm0, ymmword ptr [ecx]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x01
        ; Exact mapped bytes C5 FE 7F 85 C0 FE FF FF: vmovdqu ymmword ptr [ebp - 0x140], ymm0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 6F 85 C0 FE FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0x140]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
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
        ; Exact mapped bytes C5 FE 6F 85 00 FF FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0x100]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FD 75 85 A0 FE FF FF: vpcmpeqw ymm0, ymm0, ymmword ptr [ebp - 0x160]
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0x75
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 7F 85 80 FE FF FF: vmovdqu ymmword ptr [ebp - 0x180], ymm0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FE 6F 85 80 FE FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0x180]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C5 FD D7 D0: vpmovmskb edx, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xd0
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], -1
        ; Exact mapped bytes 74 49: je 0x5851e356
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 1ch]
        not eax
        bsf ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        shr edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebx + 8]
        movzx edx, word ptr [ecx + eax*2]
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebx + 0ch]
        movzx eax, word ptr [ecx + eax*2]
        cmp edx, eax
        ; Exact mapped bytes 7D 09: jge 0x5851e347
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x5851e34e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes E9 15 02 00 00: jmp 0x5851e56b
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 20h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 20h
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E9 0D FF FF FF: jmp 0x5851e283
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        cmp ecx, dword ptr [ebx + 10h]
        ; Exact mapped bytes 0F 87 C1 00 00 00: ja 0x5851e446
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 10 02: movups xmm0, xmmword ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes 0F 29 45 A0: movaps xmmword ptr [ebp - 0x60], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes 0F 28 45 A0: movaps xmm0, xmmword ptr [ebp - 0x60]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes 0F 29 45 C0: movaps xmmword ptr [ebp - 0x40], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0xc0
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 10 00: movups xmm0, xmmword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x10
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
        ; Exact mapped bytes 0F 29 45 80: movaps xmmword ptr [ebp - 0x80], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes 0F 28 45 C0: movaps xmm0, xmmword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 75 45 80: pcmpeqw xmm0, xmmword ptr [ebp - 0x80]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0x45
        __asm _emit 0x80
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
        ; Exact mapped bytes 66 0F D7 C8: pmovmskb ecx, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        movzx edx, word ptr [ebp - 18h]
        cmp edx, 0ffffh
        ; Exact mapped bytes 74 4A: je 0x5851e426
        __asm _emit 0x74
        __asm _emit 0x4a
        movzx eax, word ptr [ebp - 18h]
        not eax
        bsf ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        shr edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebx + 8]
        movzx edx, word ptr [ecx + eax*2]
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebx + 0ch]
        movzx eax, word ptr [ecx + eax*2]
        cmp edx, eax
        ; Exact mapped bytes 7D 09: jge 0x5851e417
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x5851e41e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 1
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes E9 45 01 00 00: jmp 0x5851e56b
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 10h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 10h
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E9 30 FF FF FF: jmp 0x5851e376
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        cmp ecx, dword ptr [ebx + 10h]
        ; Exact mapped bytes 0F 87 BA 00 00 00: ja 0x5851e50f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes F3 0F 7E 02: movq xmm0, qword ptr [edx]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x02
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
        ; Exact mapped bytes 0F 29 45 B0: movaps xmmword ptr [ebp - 0x50], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0xb0
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes F3 0F 7E 00: movq xmm0, qword ptr [eax]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F 29 85 40 FF FF FF: movaps xmmword ptr [ebp - 0xc0], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 28 45 B0: movaps xmm0, xmmword ptr [ebp - 0x50]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 66 0F 75 85 40 FF FF FF: pcmpeqw xmm0, xmmword ptr [ebp - 0xc0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 29 85 30 FF FF FF: movaps xmmword ptr [ebp - 0xd0], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 28 85 30 FF FF FF: movaps xmm0, xmmword ptr [ebp - 0xd0]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 29 45 B0: movaps xmmword ptr [ebp - 0x50], xmm0
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 0F 28 45 B0: movaps xmm0, xmmword ptr [ebp - 0x50]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 66 0F D7 C8: pmovmskb ecx, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc8
        mov byte ptr [ebp - 9], cl
        movzx edx, byte ptr [ebp - 9]
        cmp edx, 0ffh
        ; Exact mapped bytes 74 47: je 0x5851e506
        __asm _emit 0x74
        __asm _emit 0x47
        movzx eax, byte ptr [ebp - 9]
        not eax
        bsf ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        shr edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebx + 8]
        movzx edx, word ptr [ecx + eax*2]
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebx + 0ch]
        movzx eax, word ptr [ecx + eax*2]
        cmp edx, eax
        ; Exact mapped bytes 7D 09: jge 0x5851e4fa
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x5851e501
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 1
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes EB 65: jmp 0x5851e56b
        __asm _emit 0xeb
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x5851e51a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebx + 10h]
        ; Exact mapped bytes 73 47: jae 0x5851e569
        __asm _emit 0x73
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebx + 8]
        movzx eax, word ptr [edx + ecx*2]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebx + 0ch]
        movzx ecx, word ptr [edx + ecx*2]
        cmp eax, ecx
        ; Exact mapped bytes 74 2D: je 0x5851e567
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebx + 8]
        movzx ecx, word ptr [eax + edx*2]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebx + 0ch]
        movzx edx, word ptr [eax + edx*2]
        cmp ecx, edx
        ; Exact mapped bytes 7D 09: jge 0x5851e55b
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x5851e562
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 1
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes EB 04: jmp 0x5851e56b
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB A8: jmp 0x5851e511
        __asm _emit 0xeb
        __asm _emit 0xa8
        xor eax, eax
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
