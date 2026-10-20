// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879E590 .. +0x35A bytes.
extern "C" __declspec(naked) void FUN_5879e590_5879E590() {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        ; Exact mapped bytes 0F 84 38 03 00 00: je 0x5879e8db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 0F 84 30 03 00 00: je 0x5879e8db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes E8 3C 03 00 00: call 0x5879e8f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test byte ptr [esi + 8], 8
        ; Exact mapped bytes 74 48: je 0x5879e605
        __asm _emit 0x74
        __asm _emit 0x48
        movzx eax, word ptr [esi + 14h]
        push eax
        push dword ptr [esi + 10h]
        push edi
        ; Exact mapped bytes E8 65 50 00 00: call 0x587a3630
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test byte ptr [esi + 8], 10h
        lea ebx, [esi + 8]
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x5879e6a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [edi + 7ch], 80000h
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5879e688
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 19h], 3
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x5879e688
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [esi + 16h]
        cmp edx, 100h
        ; Exact mapped bytes 76 13: jbe 0x5879e611
        __asm _emit 0x76
        __asm _emit 0x13
        mov edx, 100h
        ; Exact mapped bytes EB 19: jmp 0x5879e61e
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp byte ptr [esi + 19h], 3
        ; Exact mapped bytes 0F 84 D0 02 00 00: je 0x5879e8df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB BD: jmp 0x5879e5ce
        __asm _emit 0xeb
        __asm _emit 0xbd
        xor ecx, ecx
        mov eax, edx
        test edx, edx
        ; Exact mapped bytes 74 5F: je 0x5879e678
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp eax, 40h
        ; Exact mapped bytes 72 5A: jb 0x5879e678
        __asm _emit 0x72
        __asm _emit 0x5a
        mov eax, dword ptr [esi + 74h]
        mov ebx, edx
        ; Exact mapped bytes 0F 28 15 90 76 8B 58: movaps xmm2, xmmword ptr [0x588b7690]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x76
        __asm _emit 0x8b
        __asm _emit 0x58
        xor ecx, ecx
        and ebx, 0ffffffc0h
        add eax, 20h
        ; Exact mapped bytes 0F 10 40 E0: movups xmm0, xmmword ptr [eax - 0x20]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0xe0
        lea eax, [eax + 40h]
        add ecx, 40h
        ; Exact mapped bytes 0F 28 CA: movaps xmm1, xmm2
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 48 A0: movups xmmword ptr [eax - 0x60], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x48
        __asm _emit 0xa0
        ; Exact mapped bytes 0F 28 CA: movaps xmm1, xmm2
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        ; Exact mapped bytes 0F 10 40 B0: movups xmm0, xmmword ptr [eax - 0x50]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0xb0
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 48 B0: movups xmmword ptr [eax - 0x50], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x48
        __asm _emit 0xb0
        ; Exact mapped bytes 0F 28 CA: movaps xmm1, xmm2
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        ; Exact mapped bytes 0F 10 40 C0: movups xmm0, xmmword ptr [eax - 0x40]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 48 C0: movups xmmword ptr [eax - 0x40], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x48
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 28 CA: movaps xmm1, xmm2
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        ; Exact mapped bytes 0F 10 40 D0: movups xmm0, xmmword ptr [eax - 0x30]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 48 D0: movups xmmword ptr [eax - 0x30], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x48
        __asm _emit 0xd0
        cmp ecx, ebx
        ; Exact mapped bytes 7C BA: jl 0x5879e632
        __asm _emit 0x7c
        __asm _emit 0xba
        cmp ecx, edx
        ; Exact mapped bytes 7D 0C: jge 0x5879e688
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov ebx, dword ptr [esi + 74h]
        nop
        not byte ptr [ebx + ecx]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C F8: jl 0x5879e680
        __asm _emit 0x7c
        __asm _emit 0xf8
        movzx eax, byte ptr [esi + 19h]
        push eax
        movzx eax, word ptr [esi + 16h]
        push eax
        lea eax, [esi + 78h]
        push eax
        push dword ptr [esi + 74h]
        push edi
        ; Exact mapped bytes E8 51 77 00 00: call 0x587a5df0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        lea ebx, [esi + 8]
        test byte ptr [esi + 8], 20h
        ; Exact mapped bytes 74 15: je 0x5879e6c0
        __asm _emit 0x74
        __asm _emit 0x15
        movzx eax, byte ptr [esi + 19h]
        push eax
        lea eax, [esi + 82h]
        push eax
        push edi
        ; Exact mapped bytes E8 93 50 00 00: call 0x587a3750
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test dword ptr [esi + 8], 10000h
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 74 23: je 0x5879e6f0
        __asm _emit 0x74
        __asm _emit 0x23
        push dword ptr [esi + 0a4h]
        push dword ptr [esi + 0a8h]
        push edi
        ; Exact mapped bytes E8 41 58 00 00: call 0x587a3f20
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 8]
        add esp, 0ch
        or dword ptr [edi + 74h], 4000h
        mov dword ptr [esp + 10h], eax
        test byte ptr [esi + 8], 40h
        ; Exact mapped bytes 74 18: je 0x5879e70e
        __asm _emit 0x74
        __asm _emit 0x18
        movzx eax, word ptr [esi + 14h]
        push eax
        push dword ptr [esi + 0ach]
        push edi
        ; Exact mapped bytes E8 C9 62 00 00: call 0x587a49d0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 1ch]
        add esp, 0ch
        test dword ptr [esi + 8], 100h
        ; Exact mapped bytes 74 1D: je 0x5879e734
        __asm _emit 0x74
        __asm _emit 0x1d
        movzx eax, byte ptr [esi + 94h]
        push eax
        push dword ptr [esi + 90h]
        push dword ptr [esi + 8ch]
        push edi
        ; Exact mapped bytes E8 2F 69 00 00: call 0x587a5060
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test dword ptr [ebx], 400h
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 74 3E: je 0x5879e77e
        __asm _emit 0x74
        __asm _emit 0x3e
        push dword ptr [esi + 0c0h]
        movzx eax, byte ptr [esi + 0c5h]
        push dword ptr [esi + 0bch]
        push eax
        movzx eax, byte ptr [esi + 0c4h]
        push eax
        push dword ptr [esi + 0b8h]
        push dword ptr [esi + 0b4h]
        push dword ptr [esi + 0b0h]
        push edi
        ; Exact mapped bytes E8 BC 69 00 00: call 0x587a5130
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 8]
        add esp, 20h
        mov dword ptr [esp + 10h], eax
        test dword ptr [ebx], 4000h
        mov ebp, ebx
        ; Exact mapped bytes 74 21: je 0x5879e7a9
        __asm _emit 0x74
        __asm _emit 0x21
        push dword ptr [esi + 0e4h]
        movzx eax, byte ptr [esi + 0dch]
        push dword ptr [esi + 0e0h]
        push eax
        push edi
        ; Exact mapped bytes E8 7E 6E 00 00: call 0x587a5620
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 20h]
        add esp, 10h
        test byte ptr [ebx], 80h
        ; Exact mapped bytes 74 1D: je 0x5879e7cb
        __asm _emit 0x74
        __asm _emit 0x1d
        movzx eax, byte ptr [esi + 0a0h]
        push eax
        push dword ptr [esi + 9ch]
        push dword ptr [esi + 98h]
        push edi
        ; Exact mapped bytes E8 88 6C 00 00: call 0x587a5450
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test dword ptr [ebp], 200h
        ; Exact mapped bytes 74 14: je 0x5879e7e8
        __asm _emit 0x74
        __asm _emit 0x14
        lea eax, [esi + 64h]
        push eax
        push edi
        ; Exact mapped bytes E8 F2 74 00 00: call 0x587a5cd0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        or dword ptr [edi + 74h], 200h
        test dword ptr [ebp], 2000h
        ; Exact mapped bytes 74 2D: je 0x5879e81e
        __asm _emit 0x74
        __asm _emit 0x2d
        xor ebx, ebx
        cmp dword ptr [esi + 0d8h], ebx
        ; Exact mapped bytes 7E 23: jle 0x5879e81e
        __asm _emit 0x7e
        __asm _emit 0x23
        xor ebp, ebp
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d4h]
        add eax, ebp
        push eax
        push edi
        ; Exact mapped bytes E8 31 6F 00 00: call 0x587a5740
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        inc ebx
        add esp, 8
        add ebp, 10h
        cmp ebx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 7C E2: jl 0x5879e800
        __asm _emit 0x7c
        __asm _emit 0xe2
        xor ebp, ebp
        cmp dword ptr [esi + 58h], ebp
        ; Exact mapped bytes 0F 8E A4 00 00 00: jle 0x5879e8cd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        xor ebx, ebx
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        mov ecx, dword ptr [eax + ebx]
        test ecx, ecx
        ; Exact mapped bytes 7E 49: jle 0x5879e880
        __asm _emit 0x7e
        __asm _emit 0x49
        push dword ptr [eax + ebx + 8]
        push dword ptr [eax + ebx + 18h]
        push dword ptr [eax + ebx + 14h]
        push dword ptr [eax + ebx + 4]
        push ecx
        push edi
        ; Exact mapped bytes E8 F2 63 00 00: call 0x587a4c40
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        add esp, 18h
        mov edx, eax
        cmp dword ptr [eax + ebx], -1
        ; Exact mapped bytes 75 10: jne 0x5879e86c
        __asm _emit 0x75
        __asm _emit 0x10
        mov esi, ebx
        mov ecx, 0fffffffdh
        mov dword ptr [esi + edx], ecx
        mov esi, dword ptr [esp + 1ch]
        ; Exact mapped bytes EB 54: jmp 0x5879e8c0
        __asm _emit 0xeb
        __asm _emit 0x54
        mov edi, dword ptr [esp + 18h]
        mov esi, ebx
        mov ecx, 0fffffffeh
        mov dword ptr [esi + edx], ecx
        mov esi, dword ptr [esp + 1ch]
        ; Exact mapped bytes EB 40: jmp 0x5879e8c0
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 75 1C: jne 0x5879e89e
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push dword ptr [eax + ebx + 8]
        push dword ptr [eax + ebx + 4]
        push edi
        ; Exact mapped bytes E8 9E 77 00 00: call 0x587a6030
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov dword ptr [eax + ebx], 0fffffffeh
        ; Exact mapped bytes EB 1F: jmp 0x5879e8bd
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp ecx, -1
        ; Exact mapped bytes 75 1D: jne 0x5879e8c0
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        push dword ptr [eax + ebx + 8]
        push dword ptr [eax + ebx + 4]
        push edi
        ; Exact mapped bytes E8 FD 72 00 00: call 0x587a5bb0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov dword ptr [eax + ebx], 0fffffffdh
        add esp, 10h
        inc ebp
        add ebx, 1ch
        cmp ebp, dword ptr [esi + 58h]
        ; Exact mapped bytes 0F 8C 63 FF FF FF: jl 0x5879e830
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        push esi
        push edi
        ; Exact mapped bytes E8 AA 01 00 00: call 0x5879ea80
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        pop ebx
        pop edi
        pop esi
        pop ecx
        ret
        push 588b7528h
        push edi
        ; Exact mapped bytes E8 96 05 00 00: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
