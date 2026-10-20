// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882F6C0 .. +0x2FF bytes.
extern "C" __declspec(naked) void FUN_5882f6c0_5882F6C0() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff0h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 78h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebx + 8]
        push esi
        mov esi, dword ptr [ebx + 0ch]
        push edi
        mov edi, dword ptr [ebx + 14h]
        mov dword ptr [ebp - 28h], esi
        mov esi, dword ptr [ebx + 10h]
        mov dword ptr [ebp - 34h], ecx
        test edi, edi
        ; Exact mapped bytes 0F 84 A8 02 00 00: je 0x5882f9a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 75 13: jne 0x5882f717
        __asm _emit 0x75
        __asm _emit 0x13
        movzx eax, byte ptr [esi]
        push eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        push ecx
        ; Exact mapped bytes E8 AE 02 00 00: call 0x5882f9c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 93 02 00 00: jmp 0x5882f9aa
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov edx, eax
        sub edx, ecx
        cmp edx, edi
        ; Exact mapped bytes 0F 82 84 02 00 00: jb 0x5882f9aa
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 60 90 58: mov eax, dword ptr [0x589060b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        shr eax, 2
        test al, 1
        ; Exact mapped bytes 0F 84 35 02 00 00: je 0x5882f96b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 10h
        ; Exact mapped bytes 0F 82 2C 02 00 00: jb 0x5882f96b
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 10h
        ; Exact mapped bytes 0F 87 1A 01 00 00: ja 0x5882f862
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 11h
        mov eax, 1
        sub ecx, edi
        and edx, 0fh
        shl eax, cl
        dec eax
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 34h]
        add eax, edx
        push edi
        mov dword ptr [ebp - 38h], eax
        lea eax, [ebp - 20h]
        push esi
        push eax
        ; Exact mapped bytes E8 1D D1 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        lea eax, [ebp - 24h]
        ; Exact mapped bytes 0F 28 5D E0: movaps xmm3, xmmword ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x5d
        __asm _emit 0xe0
        add ecx, -10h
        mov dword ptr [ebp - 70h], eax
        add esp, 0ch
        mov eax, dword ptr [ebp - 3ch]
        mov edx, 10h
        xor eax, 0ffffh
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 6ch], eax
        mov eax, edi
        ; Exact mapped bytes 66 0F 3A 60 19 0C: pcmpestrm xmm3, xmmword ptr [ecx], 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x60
        __asm _emit 0x19
        __asm _emit 0x0c
        ; Exact mapped bytes 66 0F 7E C0: movd eax, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 29 5D A0: movaps xmmword ptr [ebp - 0x60], xmm3
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x5d
        __asm _emit 0xa0
        mov dword ptr [ebp - 50h], edi
        and eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 74 0A: je 0x5882f7bb
        __asm _emit 0x74
        __asm _emit 0x0a
        bsr eax, eax
        add eax, ecx
        ; Exact mapped bytes E9 EF 01 00 00: jmp 0x5882f9aa
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 74 35: je 0x5882f7f5
        __asm _emit 0x74
        __asm _emit 0x35
        sub ecx, 10h
        mov eax, edi
        mov edx, 10h
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 66 0F 3A 60 19 0C: pcmpestrm xmm3, xmmword ptr [ecx], 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x60
        __asm _emit 0x19
        __asm _emit 0x0c
        ; Exact mapped bytes 66 0F 7E C6: movd esi, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc6
        test esi, esi
        ; Exact mapped bytes 74 15: je 0x5882f7f0
        __asm _emit 0x74
        __asm _emit 0x15
        push esi
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 AC 09 00 00: call 0x58830190
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 70: jne 0x5882f858
        __asm _emit 0x75
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 24h]
        and esi, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 75 5C: jne 0x5882f84c
        __asm _emit 0x75
        __asm _emit 0x5c
        cmp ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 75 CB: jne 0x5882f7c0
        __asm _emit 0x75
        __asm _emit 0xcb
        mov ecx, dword ptr [ebp - 30h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A7 01 00 00: je 0x5882f9a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 34h]
        mov eax, edi
        mov dword ptr [ebp - 24h], esi
        mov edx, 10h
        ; Exact mapped bytes 66 0F 3A 60 1E 0C: pcmpestrm xmm3, xmmword ptr [esi], 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x60
        __asm _emit 0x1e
        __asm _emit 0x0c
        mov eax, 1
        ; Exact mapped bytes 66 0F 7E C6: movd esi, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc6
        shl eax, cl
        dec eax
        and esi, eax
        ; Exact mapped bytes 0F 84 80 01 00 00: je 0x5882f9a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 60 09 00 00: call 0x58830190
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 24: jne 0x5882f858
        __asm _emit 0x75
        __asm _emit 0x24
        and esi, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F 84 6A 01 00 00: je 0x5882f9a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        bsr eax, esi
        add ecx, eax
        mov eax, ecx
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x5882f9aa
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        bsr eax, esi
        add ecx, eax
        mov eax, ecx
        ; Exact mapped bytes E9 52 01 00 00: jmp 0x5882f9aa
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov eax, ecx
        ; Exact mapped bytes E9 48 01 00 00: jmp 0x5882f9aa
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        sub edx, edi
        ; Exact mapped bytes 0F 10 0E: movups xmm1, xmmword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 34h]
        sub ecx, edi
        and edx, 0fh
        mov dword ptr [ebp - 24h], ecx
        add eax, edx
        mov dword ptr [ebp - 30h], edx
        add esi, 10h
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 0F 10 01: movups xmm0, xmmword ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x01
        lea eax, [ebp - 24h]
        mov dword ptr [ebp - 50h], esi
        ; Exact mapped bytes 0F 29 4D A0: movaps xmmword ptr [ebp - 0x60], xmm1
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes 0F 57 C1: xorps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc1
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 66 0F 38 17 C0: ptest xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x17
        __asm _emit 0xc0
        mov dword ptr [ebp - 4ch], edi
        ; Exact mapped bytes 75 56: jne 0x5882f8f3
        __asm _emit 0x75
        __asm _emit 0x56
        add edi, -10h
        lea edx, [ecx + 10h]
        sub edi, 4
        ; Exact mapped bytes 72 11: jb 0x5882f8b9
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [esi]
        ; Exact mapped bytes 75 10: jne 0x5882f8be
        __asm _emit 0x75
        __asm _emit 0x10
        add edx, 4
        add esi, 4
        sub edi, 4
        ; Exact mapped bytes 73 EF: jae 0x5882f8a8
        __asm _emit 0x73
        __asm _emit 0xef
        cmp edi, -4
        ; Exact mapped bytes 74 9D: je 0x5882f85b
        __asm _emit 0x74
        __asm _emit 0x9d
        mov al, byte ptr [edx]
        cmp al, byte ptr [esi]
        ; Exact mapped bytes 75 2F: jne 0x5882f8f3
        __asm _emit 0x75
        __asm _emit 0x2f
        cmp edi, -3
        ; Exact mapped bytes 74 92: je 0x5882f85b
        __asm _emit 0x74
        __asm _emit 0x92
        mov al, byte ptr [edx + 1]
        cmp al, byte ptr [esi + 1]
        ; Exact mapped bytes 75 22: jne 0x5882f8f3
        __asm _emit 0x75
        __asm _emit 0x22
        cmp edi, -2
        ; Exact mapped bytes 74 85: je 0x5882f85b
        __asm _emit 0x74
        __asm _emit 0x85
        mov al, byte ptr [edx + 2]
        cmp al, byte ptr [esi + 2]
        ; Exact mapped bytes 75 15: jne 0x5882f8f3
        __asm _emit 0x75
        __asm _emit 0x15
        cmp edi, -1
        ; Exact mapped bytes 0F 84 74 FF FF FF: je 0x5882f85b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [edx + 3]
        cmp al, byte ptr [esi + 3]
        ; Exact mapped bytes 0F 84 68 FF FF FF: je 0x5882f85b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 38h]
        cmp ecx, esi
        ; Exact mapped bytes 74 35: je 0x5882f92f
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 10h
        mov eax, 10h
        mov edx, eax
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 66 0F 3A 60 09 0C: pcmpestrm xmm1, xmmword ptr [ecx], 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x60
        __asm _emit 0x09
        __asm _emit 0x0c
        ; Exact mapped bytes 66 0F 7E C0: movd eax, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5882f92b
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 8C 09 00 00: call 0x588302b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 3E: jne 0x5882f966
        __asm _emit 0x75
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, esi
        ; Exact mapped bytes 75 D1: jne 0x5882f900
        __asm _emit 0x75
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 71: je 0x5882f9a7
        __asm _emit 0x74
        __asm _emit 0x71
        mov esi, dword ptr [ebp - 34h]
        mov eax, 10h
        mov edx, eax
        mov dword ptr [ebp - 24h], esi
        ; Exact mapped bytes 66 0F 3A 60 0E 0C: pcmpestrm xmm1, xmmword ptr [esi], 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x60
        __asm _emit 0x0e
        __asm _emit 0x0c
        mov eax, 1
        ; Exact mapped bytes 66 0F 7E C2: movd edx, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc2
        shl eax, cl
        dec eax
        and edx, eax
        ; Exact mapped bytes 74 4E: je 0x5882f9a7
        __asm _emit 0x74
        __asm _emit 0x4e
        push edx
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 4E 09 00 00: call 0x588302b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 41: je 0x5882f9a7
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 3F: jmp 0x5882f9aa
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 28h]
        mov dl, byte ptr [esi]
        sub eax, edi
        mov byte ptr [ebp - 29h], dl
        sub esi, eax
        mov dword ptr [ebp - 30h], eax
        cmp byte ptr [eax], dl
        ; Exact mapped bytes 75 21: jne 0x5882f99f
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, 1
        inc eax
        mov cl, byte ptr [eax]
        cmp cl, byte ptr [esi + eax]
        ; Exact mapped bytes 75 0B: jne 0x5882f996
        __asm _emit 0x75
        __asm _emit 0x0b
        inc edx
        inc eax
        cmp edx, edi
        ; Exact mapped bytes 75 F3: jne 0x5882f984
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes EB 14: jmp 0x5882f9aa
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 34h]
        mov dl, byte ptr [ebp - 29h]
        cmp eax, ecx
        ; Exact mapped bytes 74 04: je 0x5882f9a7
        __asm _emit 0x74
        __asm _emit 0x04
        dec eax
        inc esi
        ; Exact mapped bytes EB D0: jmp 0x5882f977
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 9A 16 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
