// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046340D .. +0x75D bytes.
extern "C" __declspec(naked) void FUN_0046340d_0046340D() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 7158h
        ; Exact mapped bytes E8 A6 63 04 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        push esi
        push edi
        push ecx
        lea edi, [ebp - 7158h]
        mov ecx, 1c56h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 7154h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 7154h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes E8 19 0B FA FF: call 0x403f80
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E8 06 00 00: je 0x463b57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7154h]
        mov dword ptr [ecx + 14h], 1
        mov edx, dword ptr [ebp - 7154h]
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes E8 26 50 00 00: call 0x4684b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, 6ch
        lea edi, [ebp - 7150h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edi, dword ptr [ebp - 7154h]
        add edi, 18h
        mov ecx, 6ch
        lea esi, [ebp - 7150h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 7154h]
        add eax, 1b0h
        push eax
        mov ecx, dword ptr [ebp - 7154h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 E3 BB FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 74 06 00 00: je 0x463b4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 6F FA FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 7154h]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 85 5D 06 00 00: jne 0x463b4a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 72 06 00 00: call 0x463b6a
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 B5 07 00 00: call 0x463cbc
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x463513
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 38 45 00 00: call 0x467a5a
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x46352e
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 2F 3C 00 00: call 0x46716c
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x463549
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 F0 34 00 00: call 0x466a44
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x463560
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 D8 0A 00 00: call 0x464043
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 7154h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 EC 00 00 00: mov ax, word ptr [edx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 45: jne 0x4635cd
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 7154h]
        mov edx, dword ptr [ecx + 120h]
        mov eax, dword ptr [ebp - 7154h]
        add edx, dword ptr [eax + 13ch]
        mov ecx, dword ptr [ebp - 7154h]
        mov dword ptr [ecx + 120h], edx
        mov edx, dword ptr [ebp - 7154h]
        cmp dword ptr [edx + 134h], 0
        ; Exact mapped bytes 74 10: je 0x4635cb
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 7154h]
        mov dword ptr [eax + 13ch], 0
        ; Exact mapped bytes EB 60: jmp 0x46362d
        __asm _emit 0xeb
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 7154h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 EC 00 00 00: mov cx, word ptr [eax + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 5
        ; Exact mapped bytes 75 43: jne 0x46362d
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 7154h]
        mov eax, dword ptr [edx + 120h]
        mov ecx, dword ptr [ebp - 7154h]
        add eax, dword ptr [ecx + 13ch]
        mov edx, dword ptr [ebp - 7154h]
        mov dword ptr [edx + 120h], eax
        mov eax, dword ptr [ebp - 7154h]
        cmp dword ptr [eax + 134h], 0
        ; Exact mapped bytes 74 10: je 0x46362d
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 7154h]
        mov dword ptr [ecx + 13ch], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 85 13 05 00 00: jne 0x463b4a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7154h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 104h], 0ch
        ; Exact mapped bytes 0F 85 1A 02 00 00: jne 0x46386d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7154h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 63 6E FA FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 1E 4B 00 00: call 0x468196
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x463696
        __asm _emit 0x75
        __asm _emit 0x1a
        lea edx, [ebp - 6fa0h]
        push edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 1F 1F 00 00: call 0x4655b5
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        and dh, 0feh
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        mov ecx, dword ptr [ecx + eax + 16be4h]
        and ecx, 0ffffh
        shl ecx, 9
        mov edx, dword ptr [ebp - 18h]
        and edx, 0fe0001ffh
        or edx, ecx
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 168h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 4E: mov dx, word ptr [ecx + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x4e
        and edx, 0ffh
        mov eax, dword ptr [ebp - 18h]
        and al, 0
        or eax, edx
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        and ecx, 1fh
        shl ecx, 19h
        mov edx, dword ptr [ebp - 18h]
        and edx, 0c1ffffffh
        or edx, ecx
        mov dword ptr [ebp - 18h], edx
        push 0ch
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 7154h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 7D D8 FA FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd8
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2B: je 0x46377a
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 37ch
        push ecx
        lea edx, [ebp - 6fa0h]
        push edx
        mov eax, dword ptr [ebp - 7154h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov ecx, dword ptr [edx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 4C D8 FA FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd8
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A8 68 FE FF: call 0x44a02a
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 6E: jne 0x4637f4
        __asm _emit 0x75
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1D 68 FE FF: call 0x449fab
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x4637db
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 108h], 0
        ; Exact mapped bytes 75 19: jne 0x4637b7
        __asm _emit 0x75
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 1
        push 8002c003h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7D 3A 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x4637d9
        __asm _emit 0xeb
        __asm _emit 0x22
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 54 8C FE FF: call 0x44c420
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0D 63 FE FF: call 0x449ae6
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x4637f2
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002c003h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 40 3A 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x46380b
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002c003h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 27 3A 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 7154h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov ecx, dword ptr [edx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 69 6C FA FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 7154h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov ecx, dword ptr [edx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 2E 6C FA FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 16ch]
        and ecx, 0ffffh
        or ecx, 10000h
        push ecx
        push 80022001h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CA 39 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 9E 02 00 00: jmp 0x463b0b
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 15 37 00 00: call 0x466f8d
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 EC 05 00 00: call 0x463e6f
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 F7 0D 00 00: call 0x464685
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 95 05 00 00: call 0x463e2e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 F2 48 00 00: call 0x468196
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x4638c2
        __asm _emit 0x75
        __asm _emit 0x1a
        lea edx, [ebp - 6fa0h]
        push edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 F3 1C 00 00: call 0x4655b5
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7154h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 114h], 0
        ; Exact mapped bytes 74 0F: je 0x4638e9
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 2D 3B 00 00: call 0x467416
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 22 49 00 00: call 0x46821a
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        and ch, 0feh
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        mov eax, dword ptr [eax + edx + 16be4h]
        and eax, 0ffffh
        shl eax, 9
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0fe0001ffh
        or ecx, eax
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 168h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 4E: mov cx, word ptr [eax + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x4e
        and ecx, 0ffh
        mov edx, dword ptr [ebp - 18h]
        and dl, 0
        or edx, ecx
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 8]
        and eax, 1fh
        shl eax, 19h
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0c1ffffffh
        or ecx, eax
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 7154h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 2B 6B FA FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0ch
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 7154h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov ecx, dword ptr [edx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 01 D6 FA FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd6
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2B: je 0x4639f6
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 37ch
        push eax
        lea ecx, [ebp - 6fa0h]
        push ecx
        mov edx, dword ptr [ebp - 7154h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 D0 D5 FA FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2C 66 FE FF: call 0x44a02a
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 6E: jne 0x463a70
        __asm _emit 0x75
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A1 65 FE FF: call 0x449fab
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x463a57
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 108h], 0
        ; Exact mapped bytes 75 19: jne 0x463a33
        __asm _emit 0x75
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 1
        push 8002c003h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 01 38 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x463a55
        __asm _emit 0xeb
        __asm _emit 0x22
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 D8 89 FE FF: call 0x44c420
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 91 60 FE FF: call 0x449ae6
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x463a6e
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002c003h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C4 37 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x463a87
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002c003h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AB 37 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 7154h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 ED 69 FA FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 7154h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 B2 69 FA FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 16ch]
        and eax, 0ffffh
        or eax, 10000h
        push eax
        push 80022001h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 50 37 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 7154h]
        ; Exact mapped bytes E8 E7 1D 00 00: call 0x4658d8
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 7154h]
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 AA EB 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 188h], 0
        mov esi, esp
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 7154h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 F4 D7 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 7158h], eax
        mov edx, dword ptr [ebp - 7158h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 7158h]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 96 4C 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7154h]
        mov dword ptr [ecx + 14h], 0
        pop edi
        pop esi
        add esp, 7158h
        cmp ebp, esp
        ; Exact mapped bytes E8 7A 4C 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
