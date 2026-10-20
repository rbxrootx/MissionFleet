// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E670 .. +0x42E bytes.
extern "C" __declspec(naked) void FUN_5882e670() {
    __asm {
        mov edx, 2
        push esi
        mov esi, ecx
        cmp dword ptr [esp + 0ch], edx
        ; Exact mapped bytes 0F 85 07 02 00 00: jne 0x5882e889
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x5882e769
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 110h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 120h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0dch]
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esi + 10ch]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 11ch]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0e0h]
        mov eax, 1
        mov dword ptr [ecx + 50h], eax
        mov ecx, esi
        mov byte ptr [esi + 188h], al
        ; Exact mapped bytes E8 94 E6 FF FF: call 0x5882cdf0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 9D D2 FF FF: call 0x5882ba00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x5882e849
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 10ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 11ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e0h]
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esi + 110h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 120h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0dch]
        mov dword ptr [ecx + 50h], 1
        mov ecx, esi
        mov byte ptr [esi + 188h], dl
        ; Exact mapped bytes E8 64 E7 FF FF: call 0x5882cfa0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 5D D3 FF FF: call 0x5882bba0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 75 3E: jne 0x5882e88f
        __asm _emit 0x75
        __asm _emit 0x3e
        mov ecx, dword ptr [esi + 170h]
        test ecx, ecx
        ; Exact mapped bytes 74 2E: je 0x5882e889
        __asm _emit 0x74
        __asm _emit 0x2e
        push edi
        movzx edi, word ptr [esi + 18eh]
        ; Exact mapped bytes E8 C8 77 F5 FF: call 0x58786030
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx edx, di
        cmp edx, eax
        ; Exact mapped bytes 73 19: jae 0x5882e888
        __asm _emit 0x73
        __asm _emit 0x19
        mov ecx, dword ptr [esi + 164h]
        lea eax, [edi + 1]
        ; Exact mapped bytes 66 89 86 8E 01 00 00: mov word ptr [esi + 0x18e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, ax
        push eax
        ; Exact mapped bytes E8 D8 8A 0D 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 75 29: jne 0x5882e8c0
        __asm _emit 0x75
        __asm _emit 0x29
        movzx eax, word ptr [esi + 18eh]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 E6: jbe 0x5882e889
        __asm _emit 0x76
        __asm _emit 0xe6
        dec eax
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [esi + 164h]
        ; Exact mapped bytes 66 89 86 8E 01 00 00: mov word ptr [esi + 0x18e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A6 8A 0D 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0e4h]
        ; Exact mapped bytes 75 29: jne 0x5882e8f1
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [esi + 170h]
        test ecx, ecx
        ; Exact mapped bytes 74 B7: je 0x5882e889
        __asm _emit 0x74
        __asm _emit 0xb7
        movzx edx, word ptr [esi + 18eh]
        push edx
        ; Exact mapped bytes E8 A1 7B F5 FF: call 0x58786480
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x7b
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 D5 B6 F8 FF: call 0x587b9fc0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 75 2E: jne 0x5882e927
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 100h]
        ; Exact mapped bytes E8 FC 9C 0D 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104h]
        ; Exact mapped bytes E8 F1 9C 0D 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        ; Exact mapped bytes E8 E6 9C 0D 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 EF D9 FF FF: call 0x5882c310
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0ech]
        ; Exact mapped bytes 75 2E: jne 0x5882e95d
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 100h]
        ; Exact mapped bytes E8 46 9D 0D 00: call 0x58908680
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104h]
        ; Exact mapped bytes E8 3B 9D 0D 00: call 0x58908680
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        ; Exact mapped bytes E8 30 9D 0D 00: call 0x58908680
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 B9 D9 FF FF: call 0x5882c310
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0f0h]
        ; Exact mapped bytes 75 6E: jne 0x5882e9d3
        __asm _emit 0x75
        __asm _emit 0x6e
        mov al, byte ptr [esi + 188h]
        cmp al, 1
        ; Exact mapped bytes 75 2E: jne 0x5882e99d
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 10ch]
        ; Exact mapped bytes E8 86 9C 0D 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 7B 9C 0D 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 11ch]
        ; Exact mapped bytes E8 70 9C 0D 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 39 DA FF FF: call 0x5882c3d0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp al, dl
        ; Exact mapped bytes 0F 85 E4 FE FF FF: jne 0x5882e889
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 110h]
        ; Exact mapped bytes E8 50 9C 0D 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 45 9C 0D 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        ; Exact mapped bytes E8 3A 9C 0D 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 C3 DA FF FF: call 0x5882c490
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0f4h]
        ; Exact mapped bytes 75 6E: jne 0x5882ea49
        __asm _emit 0x75
        __asm _emit 0x6e
        mov al, byte ptr [esi + 188h]
        cmp al, 1
        ; Exact mapped bytes 75 2E: jne 0x5882ea13
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 10ch]
        ; Exact mapped bytes E8 90 9C 0D 00: call 0x58908680
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 85 9C 0D 00: call 0x58908680
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 11ch]
        ; Exact mapped bytes E8 7A 9C 0D 00: call 0x58908680
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 C3 D9 FF FF: call 0x5882c3d0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp al, dl
        ; Exact mapped bytes 0F 85 6E FE FF FF: jne 0x5882e889
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 110h]
        ; Exact mapped bytes E8 5A 9C 0D 00: call 0x58908680
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 4F 9C 0D 00: call 0x58908680
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        ; Exact mapped bytes E8 44 9C 0D 00: call 0x58908680
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 4D DA FF FF: call 0x5882c490
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + 170h], 0
        ; Exact mapped bytes 0F 84 33 FE FF FF: je 0x5882e889
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [esi + 189h]
        cmp al, 1
        ; Exact mapped bytes 75 27: jne 0x5882ea87
        __asm _emit 0x75
        __asm _emit 0x27
        push 0
        push 0
        push 5899dfd4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        push 28h
        ; Exact mapped bytes E8 76 D0 F3 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AF 62 F3 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x62
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp al, dl
        ; Exact mapped bytes 74 08: je 0x5882ea93
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 3
        ; Exact mapped bytes 0F 85 F6 FD FF FF: jne 0x5882e889
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 5899dfb0h
        ; Exact mapped bytes EB CB: jmp 0x5882ea69
        __asm _emit 0xeb
        __asm _emit 0xcb
    }
}
