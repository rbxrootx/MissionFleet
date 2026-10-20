// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879D7B0 .. +0x423 bytes.
extern "C" __declspec(naked) void FUN_5879d7b0_5879D7B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891fddh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 54h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        mov esi, dword ptr [ebp + 8]
        mov ecx, esi
        mov dword ptr [ebp - 60h], esi
        ; Exact mapped bytes E8 A7 D5 FF FF: call 0x5879ad90
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 0F 87 97 03 00 00: ja 0x5879db89
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 D4 DB 79 58: jmp dword ptr [eax*4 + 0x5879dbd4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xdb
        __asm _emit 0x79
        __asm _emit 0x58
        lea eax, [edi + 64h]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 FC E6 FF FF: call 0x5879bf00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 80 03 00 00: jmp 0x5879db89
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 50 C1 FF FF: call 0x58799960
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        push edx
        push eax
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 F5 F3 FF FF: call 0x5879cc10
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 4], 0
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 D3 E6 FF FF: call 0x5879bf00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 FB C4 D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc4
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes E9 4F 03 00 00: jmp 0x5879db89
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 BF C2 FF FF: call 0x58799b00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        push edx
        push eax
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 94 F4 FF FF: call 0x5879cce0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB CD: jmp 0x5879d825
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov al, byte ptr [edi + 94h]
        mov ecx, esi
        push dword ptr [edi + 9ch]
        shr al, 2
        push dword ptr [edi + 98h]
        and al, 1
        push eax
        ; Exact mapped bytes E8 D9 BF FF FF: call 0x58799850
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 8
        lea eax, [ebp - 58h]
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        push eax
        ; Exact mapped bytes E8 AA F0 FF FF: call 0x5879c930
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes EB 93: jmp 0x5879d825
        __asm _emit 0xeb
        __asm _emit 0x93
        lea eax, [ebp - 5ch]
        mov ecx, esi
        push eax
        lea eax, [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 9F CE FF FF: call 0x5879a740
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [edi + 94h]
        test al, al
        ; Exact mapped bytes 74 2C: je 0x5879d8d7
        __asm _emit 0x74
        __asm _emit 0x2c
        shr cl, 3
        and cl, 1
        movzx eax, cl
        mov ecx, dword ptr [ebp - 60h]
        push eax
        mov eax, dword ptr [ebp - 5ch]
        sub eax, ecx
        push eax
        push ecx
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 38 E9 FF FF: call 0x5879c200
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 4], 3
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x5879d825
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 11 45 C0: movups xmmword ptr [ebp - 0x40], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc0
        mov dword ptr [ebp - 2ch], 0fh
        mov byte ptr [ebp - 40h], 0
        mov dword ptr [ebp - 4], 4
        lea eax, [ebp - 40h]
        test cl, 1
        ; Exact mapped bytes 74 0B: je 0x5879d90a
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        lea ecx, [edi + 8]
        ; Exact mapped bytes E8 08 0D D8 FF: call 0x5851e610
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x5879d918
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push eax
        push dword ptr [edi + 4]
        ; Exact mapped bytes E8 3B D7 FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 2ch]
        cmp ecx, 0fh
        ; Exact mapped bytes 0F 86 65 02 00 00: jbe 0x5879db89
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879d946
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 60 02 00 00: ja 0x5879dba6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 E7 36 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 34 02 00 00: jmp 0x5879db89
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 14 BE FF FF: call 0x58799770
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        push eax
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 F7 F3 FF FF: call 0x5879cd60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], 5
        ; Exact mapped bytes E9 AD FE FF FF: jmp 0x5879d825
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 20 F5 FF FF: call 0x5879cea0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 04 02 00 00: jmp 0x5879db89
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 34h]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 C0 CA FF FF: call 0x5879a450
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [ebp - 4], 6
        mov dword ptr [ebp - 14h], 0fh
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 75 30: jne 0x5879d9dd
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, 7d7bh
        mov dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        mov byte ptr [ebp - 26h], 0
        lea eax, [ebp - 28h]
        mov byte ptr [ebp - 4], 7
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 30 E5 FF FF: call 0x5879bf00
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 58 C3 D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc3
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes E9 A4 01 00 00: jmp 0x5879db81
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 66 C7 45 D8 7B 00: mov word ptr [ebp - 0x28], 0x7b
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0x7b
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        mov byte ptr [ebp - 4], 8
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 07 02 00 00: call 0x5879dc00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov byte ptr [ebp - 4], 6
        cmp ecx, 0fh
        ; Exact mapped bytes 76 2C: jbe 0x5879da31
        __asm _emit 0x76
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 28h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879da27
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 8E 01 00 00: ja 0x5879dbb5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 06 36 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov ecx, edi
        ; Exact mapped bytes E8 48 DC FF FF: call 0x5879b680
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 60h]
        mov eax, esi
        push eax
        ; Exact mapped bytes E8 6A B7 FF FF: call 0x587991b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, edi
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes E8 0F FA FF FF: call 0x5879d460
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        mov edx, ecx
        cmp dword ptr [ecx + 14h], 0fh
        ; Exact mapped bytes 76 02: jbe 0x5879da5d
        __asm _emit 0x76
        __asm _emit 0x02
        mov edx, dword ptr [ecx]
        mov al, byte ptr [edi + 94h]
        shr al, 3
        and al, 1
        movzx eax, al
        push eax
        push dword ptr [ecx + 10h]
        lea eax, [ebp - 28h]
        push edx
        push eax
        ; Exact mapped bytes E8 87 E7 FF FF: call 0x5879c200
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        push eax
        mov ecx, edi
        mov byte ptr [ebp - 4], 9
        ; Exact mapped bytes E8 78 01 00 00: call 0x5879dc00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov byte ptr [ebp - 4], 6
        cmp ecx, 0fh
        ; Exact mapped bytes 76 2C: jbe 0x5879dac0
        __asm _emit 0x76
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 28h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879dab6
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 F0 00 00 00: ja 0x5879dba6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 77 35 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [edi + 60h], 0fh
        lea ecx, [edi + 4ch]
        ; Exact mapped bytes 76 03: jbe 0x5879dacc
        __asm _emit 0x76
        __asm _emit 0x03
        mov ecx, dword ptr [edi + 4ch]
        push dword ptr [edi + 5ch]
        push ecx
        push dword ptr [edi + 4]
        ; Exact mapped bytes E8 78 D5 FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, edi
        push dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 CB FC FF FF: call 0x5879d7b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 18h
        cmp esi, dword ptr [ebp - 30h]
        ; Exact mapped bytes 74 1F: je 0x5879db0c
        __asm _emit 0x74
        __asm _emit 0x1f
        push 588b73b8h
        push dword ptr [edi + 4]
        ; Exact mapped bytes E8 F6 6A D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x6a
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        mov ecx, edi
        push dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 99 F7 FF FF: call 0x5879d2a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x5879da3b
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 5ch]
        mov ecx, edi
        ; Exact mapped bytes E8 8A F7 FF FF: call 0x5879d2a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 24h]
        lea ecx, [edi + 14h]
        sub eax, dword ptr [edi + 40h]
        push 0
        push eax
        ; Exact mapped bytes E8 09 E2 D6 FF: call 0x5850bd30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        mov dword ptr [ebp - 14h], 0fh
        ; Exact mapped bytes 66 C7 45 D8 7D 00: mov word ptr [ebp - 0x28], 0x7d
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0x7d
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        mov byte ptr [ebp - 4], 0ah
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 AF 00 00 00: call 0x5879dc00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, 0fh
        ; Exact mapped bytes 76 28: jbe 0x5879db81
        __asm _emit 0x76
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 28h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 10: jb 0x5879db77
        __asm _emit 0x72
        __asm _emit 0x10
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 77 4D: ja 0x5879dbc4
        __asm _emit 0x77
        __asm _emit 0x4d
        push ecx
        push edx
        ; Exact mapped bytes E8 B6 34 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 57 95 D6 FF: call 0x585070e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x95
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 B0 34 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 24 34 0B 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0b
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 15 34 0B 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x0b
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 06 34 0B 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x34
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}
