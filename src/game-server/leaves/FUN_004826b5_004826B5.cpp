// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004826B5 .. +0x682 bytes.
extern "C" __declspec(naked) void FUN_004826b5_004826B5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5f8h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 5f8h]
        mov ecx, 17eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 5f4h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4826e7
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 3B 06 00 00: jmp 0x482d22
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [eax + 218h]
        ; Exact mapped bytes E8 28 EC F7 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [eax + 0db4h], 0
        ; Exact mapped bytes 75 27: jne 0x482728
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 4F FC FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ecx + 218h]
        ; Exact mapped bytes E8 06 EC F7 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD CA FC FF: call 0x44f1ce
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 FA 05 00 00: jmp 0x482d22
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [edx + 18ech]
        ; Exact mapped bytes E8 97 7D F8 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        mov dword ptr [ebp - 5f8h], eax
        mov ecx, dword ptr [ebp - 5f8h]
        sub ecx, 1
        mov dword ptr [ebp - 5f8h], ecx
        cmp dword ptr [ebp - 5f8h], 4
        ; Exact mapped bytes 0F 87 BA 05 00 00: ja 0x482d1d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes FF 24 95 37 2D 48 00: jmp dword ptr [edx*4 + 0x482d37]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x37
        __asm _emit 0x2d
        __asm _emit 0x48
        __asm _emit 0x00
        push 78h
        push 0
        lea eax, [ebp - 0a4h]
        push eax
        ; Exact mapped bytes E8 F0 6B 02 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx + 168h]
        mov ecx, 1eh
        lea edi, [ebp - 0a4h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dl, byte ptr [ebp - 2ch]
        and dl, 0fh
        or dl, 10h
        mov byte ptr [ebp - 2ch], dl
        mov al, byte ptr [ebp - 2ch]
        and al, 0f0h
        or al, 1
        mov byte ptr [ebp - 2ch], al
        mov dword ptr [ebp - 28h], 0ffffffffh
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        push 5c4570h
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 05 60 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 78h
        mov dword ptr [ebp - 4], 0
        push 2ch
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ecx + 18ech]
        ; Exact mapped bytes E8 C6 E7 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        push 78h
        lea edx, [ebp - 0a4h]
        push edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [eax + 18ech]
        ; Exact mapped bytes E8 AC E7 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ecx + 18ech]
        ; Exact mapped bytes E8 63 7C F8 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [edx + 18ech]
        ; Exact mapped bytes E8 31 7C F8 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020efeh
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [eax + 218h]
        ; Exact mapped bytes E8 C6 EA F7 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xea
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 CD 49 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B3 04 00 00: jmp 0x482d1d
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        shr ecx, 10h
        ; Exact mapped bytes 66 89 8D 58 FF FF FF: mov word ptr [ebp - 0xa8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5dch], 31h
        mov dword ptr [ebp - 5e0h], 0
        mov edx, dword ptr [ebp - 0a8h]
        and edx, 0ffffh
        mov dword ptr [ebp - 5e4h], edx
        lea eax, [ebp - 5dch]
        push eax
        lea ecx, [ebp - 5e0h]
        push ecx
        lea edx, [ebp - 5e4h]
        push edx
        ; Exact mapped bytes E8 09 0F F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 18 02 00 00: je 0x482ada
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 500h
        push 0
        lea eax, [ebp - 5a8h]
        push eax
        ; Exact mapped bytes E8 9B 6A 02 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0a8h]
        and eax, 0ffffh
        imul eax, eax, 370h
        mov ecx, dword ptr [edx + eax + 16bdch]
        mov dword ptr [ebp - 23ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0a8h]
        and ecx, 0ffffh
        imul ecx, ecx, 370h
        lea esi, [eax + ecx + 16be0h]
        mov ecx, 17h
        lea edi, [ebp - 5a8h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0a8h]
        and ecx, 0ffffh
        imul ecx, ecx, 370h
        lea esi, [eax + ecx + 16c3ch]
        mov ecx, 33h
        lea edi, [ebp - 54ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        push 140h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0a8h]
        and ecx, 0ffffh
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16d0ah]
        push edx
        lea eax, [ebp - 47eh]
        push eax
        ; Exact mapped bytes E8 8D 66 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0a8h]
        and eax, 0ffffh
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16ecch]
        push ecx
        lea edx, [ebp - 33ch]
        push edx
        ; Exact mapped bytes E8 57 66 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0a8h]
        and edx, 0ffffh
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16e4ch]
        push eax
        lea ecx, [ebp - 2bch]
        push ecx
        ; Exact mapped bytes E8 20 66 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dl, byte ptr [ebp - 2ch]
        and dl, 0fh
        or dl, 20h
        mov byte ptr [ebp - 2ch], dl
        mov al, byte ptr [ebp - 2ch]
        and al, 0f0h
        or al, 1
        mov byte ptr [ebp - 2ch], al
        mov ecx, dword ptr [ebp - 0a8h]
        and ecx, 0ffffh
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        push 5c4574h
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 93 5D 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 500h
        mov dword ptr [ebp - 4], 0
        push 2ch
        lea ecx, [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [edx + 18ech]
        ; Exact mapped bytes E8 54 E5 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe5
        __asm _emit 0xf8
        __asm _emit 0xff
        push 500h
        lea eax, [ebp - 5a8h]
        push eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ecx + 18ech]
        ; Exact mapped bytes E8 37 E5 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe5
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [edx + 18ech]
        ; Exact mapped bytes E8 EE 79 F8 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [eax + 18ech]
        ; Exact mapped bytes E8 BC 79 F8 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020efeh
        mov ecx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ecx + 218h]
        ; Exact mapped bytes E8 51 E8 F7 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 58 47 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3E 02 00 00: jmp 0x482d1d
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        shr edx, 10h
        ; Exact mapped bytes 66 89 95 54 FA FF FF: mov word ptr [ebp - 0x5ac], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5e8h], 63h
        mov dword ptr [ebp - 5ech], 0ffffffffh
        mov eax, dword ptr [ebp - 5ach]
        and eax, 0ffffh
        mov dword ptr [ebp - 5f0h], eax
        lea ecx, [ebp - 5e8h]
        push ecx
        lea edx, [ebp - 5ech]
        push edx
        lea eax, [ebp - 5f0h]
        push eax
        ; Exact mapped bytes E8 95 0C F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x482c45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebp - 5d8h]
        and cl, 0fh
        or cl, 40h
        mov byte ptr [ebp - 5d8h], cl
        mov edx, dword ptr [ebp - 5ach]
        and edx, 0ffffh
        mov dword ptr [ebp - 5d4h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        mov esi, esp
        push eax
        push 5c4578h
        lea ecx, [ebp - 5d0h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 5F 5C 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 5b8h], 37ch
        mov dl, byte ptr [ebp - 5d8h]
        and dl, 0f0h
        or dl, 1
        mov byte ptr [ebp - 5d8h], dl
        mov dword ptr [ebp - 5b0h], 0
        push 2ch
        lea eax, [ebp - 5d8h]
        push eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ecx + 18ech]
        ; Exact mapped bytes E8 05 E4 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0xf8
        __asm _emit 0xff
        push 37ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 5ach]
        and ecx, 0ffffh
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        push edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [eax + 18ech]
        ; Exact mapped bytes E8 CC E3 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe3
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ecx + 18ech]
        ; Exact mapped bytes E8 83 78 F8 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [edx + 18ech]
        ; Exact mapped bytes E8 51 78 F8 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020efeh
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [eax + 218h]
        ; Exact mapped bytes E8 E6 E6 F7 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe6
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 ED 45 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x482d1d
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebp - 2ch]
        and cl, 0fh
        or cl, 50h
        mov byte ptr [ebp - 2ch], cl
        mov dl, byte ptr [ebp - 2ch]
        and dl, 0f0h
        or dl, 1
        mov byte ptr [ebp - 2ch], dl
        mov dword ptr [ebp - 28h], 1
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        mov esi, esp
        push eax
        push 5c457ch
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 53 5B 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 1ch
        mov dword ptr [ebp - 4], 0
        push 2ch
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [eax + 18ech]
        ; Exact mapped bytes E8 14 E3 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe3
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        add edx, 78h
        push edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [eax + 18ech]
        ; Exact mapped bytes E8 F4 E2 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe2
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ecx + 18ech]
        ; Exact mapped bytes E8 AB 77 F8 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [edx + 18ech]
        ; Exact mapped bytes E8 79 77 F8 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020efeh
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [eax + 218h]
        ; Exact mapped bytes E8 0E E6 F7 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe6
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 15 45 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 5f8h
        cmp ebp, esp
        ; Exact mapped bytes E8 AF 5A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
