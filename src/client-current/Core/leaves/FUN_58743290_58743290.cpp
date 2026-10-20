// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58743290 .. +0x3D7 bytes.
extern "C" __declspec(naked) void FUN_58743290_58743290() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 A2 2E E0 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2e
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 0F 84 AB 03 00 00: je 0x58743662
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 F5 D8 07 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 8F D9 07 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0x00
        sub esi, eax
        cmp esi, 7
        ; Exact mapped bytes 7E 0D: jle 0x587432f5
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 06 00 00: call 0x587439a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x5874332e
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 B7 D8 07 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 51 D9 07 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0x00
        sub esi, eax
        ; Exact mapped bytes 79 0B: jns 0x5874332e
        __asm _emit 0x79
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 06 00 00: call 0x587439a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 0E 2E E0 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A3 13 D8 FF: call 0x584c46f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x13
        __asm _emit 0xd8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 0D 03 00 00: je 0x58743662
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 16 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x16
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF 16 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x16
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 49 13 D8 FF: call 0x584c46f0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x13
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6A 17 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6B 2B D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 88h]
        mov dword ptr [ebp - 34h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0E 13 D8 FF: call 0x584c46f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x13
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2F 17 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x17
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 30 2B D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x2b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 88h]
        mov dword ptr [ebp - 38h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 8E 21 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58743435
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 1D: jge 0x58743458
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 88h]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 8B 2A D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x2a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5874342c
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 34h], 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D3 15 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [eax + 2ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 30h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 3ch], 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC 15 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A2 15 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [esi + 2ch]
        imul edx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 40h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 44h], 7dh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 48h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 4ch], 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 15 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 50h]
        mov dl, byte ptr [eax + 2ch]
        and dl, 0fh
        mov al, byte ptr [ecx + 32h]
        and al, 0f0h
        or al, dl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 32h], al
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2C 15 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 21 15 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [eax + 2ch]
        imul edx, dword ptr [ecx + 30h]
        and dl, 7fh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov al, byte ptr [ecx + 31h]
        and al, 80h
        or al, dl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 31h], al
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 46h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 47h], 7dh
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 74 15: je 0x5874357d
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 80h], 0
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x58743605
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b4af8h
        ; Exact mapped bytes E8 69 EA DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xea
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        add edx, 0a6h
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        push eax
        ; Exact mapped bytes 8B 0D 78 06 96 58: mov ecx, dword ptr [0x58960678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 7D DF FF: call 0x5853b360
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x7d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        add edx, 88h
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        add eax, 88h
        push eax
        ; Exact mapped bytes 8B 0D 78 06 96 58: mov ecx, dword ptr [0x58960678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 7C DF FF: call 0x5853b220
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [edx + 0bch], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58743617
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 1D: jge 0x5874363a
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 88h]
        mov dword ptr [ebp - 64h], ecx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 A9 28 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x28
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5874360e
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 5E D7 FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 68h], ecx
        push 0
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 98: call dword ptr [ebp - 0x68]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x98
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
