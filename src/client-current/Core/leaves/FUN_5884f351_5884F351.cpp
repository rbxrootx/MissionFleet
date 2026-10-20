// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F351 .. +0x28E bytes.
extern "C" __declspec(naked) void FUN_5884f351_5884F351() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        xor eax, eax
        push edi
        movzx edi, word ptr [ecx]
        movzx edx, di
        mov dword ptr [ebp - 0ch], edi
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 08: jne 0x5884f376
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 62 02 00 00: jmp 0x5884f5d8
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        push esi
        ; Exact mapped bytes 0F 8E 19 01 00 00: jle 0x5884f49d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        and eax, 0fffh
        cmp eax, 0ff0h
        ; Exact mapped bytes 77 05: ja 0x5884f397
        __asm _emit 0x77
        __asm _emit 0x05
        ; Exact mapped bytes 0F 10 01: movups xmm0, xmmword ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x01
        ; Exact mapped bytes EB 47: jmp 0x5884f3de
        __asm _emit 0xeb
        __asm _emit 0x47
        push 8
        movzx edx, di
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov esi, ecx
        pop edi
        movzx eax, dx
        mov dword ptr [ebp - 8], eax
        movzx eax, dx
        ; Exact mapped bytes 66 0F 73 D8 02: psrldq xmm0, 2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd8
        __asm _emit 0x02
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 66 0F C4 C0 07: pinsrw xmm0, eax, 7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0xc0
        __asm _emit 0x07
        lea eax, [esi + 2]
        ; Exact mapped bytes 66 39 55 FC: cmp word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 74 03: je 0x5884f3c8
        __asm _emit 0x74
        __asm _emit 0x03
        movzx edx, word ptr [eax]
        xor ecx, ecx
        ; Exact mapped bytes 66 3B 4D F8: cmp cx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4d
        __asm _emit 0xf8
        cmove eax, esi
        mov esi, eax
        sub edi, 1
        ; Exact mapped bytes 75 CA: jne 0x5884f3a2
        __asm _emit 0x75
        __asm _emit 0xca
        mov ecx, dword ptr [ebp + 0ch]
        movzx edi, word ptr [ecx]
        mov edx, dword ptr [ebp + 8]
        push 2
        pop esi
        mov eax, edx
        and eax, 0fffh
        cmp eax, 0ff0h
        ; Exact mapped bytes 77 5F: ja 0x5884f451
        __asm _emit 0x77
        __asm _emit 0x5f
        ; Exact mapped bytes 66 0F 3A 63 02 0D: pcmpistri xmm0, xmmword ptr [edx], 0xd
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x0d
        ; Exact mapped bytes 76 08: jbe 0x5884f402
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        add edx, 10h
        ; Exact mapped bytes EB E2: jmp 0x5884f3e4
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact mapped bytes 0F 83 CD 01 00 00: jae 0x5884f5d5
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 3A 63 02 0D: pcmpistri xmm0, xmmword ptr [edx], 0xd
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x0d
        lea edx, [edx + ecx*2]
        mov ecx, dword ptr [ebp + 0ch]
        mov edi, edx
        mov eax, edi
        mov dword ptr [ebp - 4], ecx
        and eax, 0fffh
        cmp eax, 0ff0h
        ; Exact mapped bytes 77 4A: ja 0x5884f471
        __asm _emit 0x77
        __asm _emit 0x4a
        mov eax, ecx
        and eax, 0fffh
        cmp eax, 0ff0h
        ; Exact mapped bytes 77 3C: ja 0x5884f471
        __asm _emit 0x77
        __asm _emit 0x3c
        ; Exact mapped bytes 0F 10 09: movups xmm1, xmmword ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x09
        ; Exact mapped bytes 66 0F 3A 63 0F 0D: pcmpistri xmm1, xmmword ptr [edi], 0xd
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x63
        __asm _emit 0x0f
        __asm _emit 0x0d
        ; Exact mapped bytes 71 50: jno 0x5884f490
        __asm _emit 0x71
        __asm _emit 0x50
        ; Exact mapped bytes 0F 88 95 01 00 00: js 0x5884f5db
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add edi, 10h
        add ecx, 10h
        ; Exact mapped bytes EB C5: jmp 0x5884f416
        __asm _emit 0xeb
        __asm _emit 0xc5
        movzx eax, word ptr [edx]
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 66 39 45 F8: cmp word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x5884f5d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 AA: je 0x5884f414
        __asm _emit 0x74
        __asm _emit 0xaa
        add edx, esi
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x5884f3e4
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ecx]
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 66 39 45 F8: cmp word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 0F 84 56 01 00 00: je 0x5884f5db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 07: cmp word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x07
        ; Exact mapped bytes 75 06: jne 0x5884f490
        __asm _emit 0x75
        __asm _emit 0x06
        add edi, esi
        add ecx, esi
        ; Exact mapped bytes EB 86: jmp 0x5884f416
        __asm _emit 0xeb
        __asm _emit 0x86
        mov ecx, dword ptr [ebp + 0ch]
        add edx, esi
        mov edi, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E9 47 FF FF FF: jmp 0x5884f3e4
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x5884f581
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx eax, di
        push 2
        pop esi
        ; Exact mapped bytes 66 0F 6E C0: movd xmm0, eax
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 70 C0 00: pshuflw xmm0, xmm0, 0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 70 D8 00: pshufd xmm3, xmm0, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xd8
        __asm _emit 0x00
        mov eax, ecx
        and eax, 0fffh
        cmp eax, 0ff0h
        ; Exact mapped bytes 77 26: ja 0x5884f4ee
        __asm _emit 0x77
        __asm _emit 0x26
        ; Exact mapped bytes 0F 10 09: movups xmm1, xmmword ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x09
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 75 C1: pcmpeqw xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 75 CB: pcmpeqw xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 56 C1: orps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F D7 C0: pmovmskb eax, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5884f4e6
        __asm _emit 0x75
        __asm _emit 0x05
        add ecx, 10h
        ; Exact mapped bytes EB D4: jmp 0x5884f4ba
        __asm _emit 0xeb
        __asm _emit 0xd4
        bsf eax, eax
        shr eax, 1
        lea ecx, [ecx + eax*2]
        movzx eax, word ptr [ecx]
        xor edi, edi
        ; Exact mapped bytes 66 3B F8: cmp di, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x5884f5d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 75: jne 0x5884f576
        __asm _emit 0x75
        __asm _emit 0x75
        mov edi, dword ptr [ebp + 0ch]
        mov edx, ecx
        mov eax, edi
        and eax, 0fffh
        cmp eax, 0ff0h
        ; Exact mapped bytes 77 44: ja 0x5884f558
        __asm _emit 0x77
        __asm _emit 0x44
        mov eax, edx
        and eax, 0fffh
        cmp eax, 0ff0h
        ; Exact mapped bytes 77 36: ja 0x5884f558
        __asm _emit 0x77
        __asm _emit 0x36
        ; Exact mapped bytes 0F 10 17: movups xmm2, xmmword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x17
        ; Exact mapped bytes 0F 10 0A: movups xmm1, xmmword ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 75 CA: pcmpeqw xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 75 C2: pcmpeqw xmm0, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0xc2
        ; Exact mapped bytes 66 0F 75 0D D0 25 8C 58: pcmpeqw xmm1, xmmword ptr [0x588c25d0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x25
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 56 C8: orps xmm1, xmm0
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F D7 C1: pmovmskb eax, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc1
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x5884f54e
        __asm _emit 0x75
        __asm _emit 0x08
        add edx, 10h
        add edi, 10h
        ; Exact mapped bytes EB B8: jmp 0x5884f506
        __asm _emit 0xeb
        __asm _emit 0xb8
        bsf eax, eax
        and eax, 0fffffffeh
        add edx, eax
        add edi, eax
        movzx eax, word ptr [edi]
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 66 39 45 F4: cmp word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 74 15: je 0x5884f57d
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 39 02: cmp word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x02
        ; Exact mapped bytes 75 06: jne 0x5884f573
        __asm _emit 0x75
        __asm _emit 0x06
        add edx, esi
        add edi, esi
        ; Exact mapped bytes EB 93: jmp 0x5884f506
        __asm _emit 0xeb
        __asm _emit 0x93
        mov edx, dword ptr [ebp - 8]
        add ecx, esi
        ; Exact mapped bytes E9 3D FF FF FF: jmp 0x5884f4ba
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ecx
        ; Exact mapped bytes EB 56: jmp 0x5884f5d7
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 39 02: cmp word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x02
        ; Exact mapped bytes 74 4A: je 0x5884f5d5
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edi, edx
        push 2
        sub edi, ecx
        pop esi
        mov eax, ecx
        mov dword ptr [ebp - 4], ecx
        movzx ecx, word ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 39: je 0x5884f5db
        __asm _emit 0x74
        __asm _emit 0x39
        movzx ecx, word ptr [edi + eax]
        mov eax, dword ptr [ebp - 0ch]
        movzx eax, ax
        sub ecx, eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 0F: jne 0x5884f5c2
        __asm _emit 0x75
        __asm _emit 0x0f
        add eax, esi
        xor ecx, ecx
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 66 39 0C 07: cmp word ptr [edi + eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x07
        ; Exact mapped bytes 75 D7: jne 0x5884f597
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes EB 02: jmp 0x5884f5c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 39 08: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        ; Exact mapped bytes 74 12: je 0x5884f5db
        __asm _emit 0x74
        __asm _emit 0x12
        add edx, esi
        add edi, esi
        ; Exact mapped bytes 66 39 0A: cmp word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 BD: jne 0x5884f592
        __asm _emit 0x75
        __asm _emit 0xbd
        xor eax, eax
        pop esi
        pop edi
        leave
        ret
        mov eax, edx
        ; Exact mapped bytes EB F8: jmp 0x5884f5d7
        __asm _emit 0xeb
        __asm _emit 0xf8
    }
}
