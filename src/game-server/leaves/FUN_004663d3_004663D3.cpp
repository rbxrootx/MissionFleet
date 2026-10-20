// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004663D3 .. +0x671 bytes.
extern "C" __declspec(naked) void FUN_004663d3_004663D3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push edi
        push ecx
        lea edi, [ebp - 54h]
        mov ecx, 15h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
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
        ; Exact mapped bytes 74 37: je 0x46643f
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 38h]
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
        ; Exact mapped bytes 74 1D: je 0x46643f
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 120h]
        imul eax, eax, 5
        mov ecx, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ecx + 138h]
        sbb edx, edx
        inc edx
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 1B: jmp 0x46645a
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 120h]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp - 38h]
        cmp ecx, dword ptr [edx + 138h]
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 75 46: jne 0x4664a6
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 1eh
        ; Exact mapped bytes 76 32: jbe 0x4664a6
        __asm _emit 0x76
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 134h], 0
        ; Exact mapped bytes 75 26: jne 0x4664a6
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 0b2h]
        shr cl, 5
        and cl, 1
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AC 02 00 00: je 0x466752
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 EC 00 00 00: mov dx, word ptr [ecx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 4
        ; Exact mapped bytes 75 0C: jne 0x4664cc
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes D9 45 0C: fld dword ptr [ebp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes D8 0D 14 1C 58 00: fmul dword ptr [0x581c14]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D 0C: fstp dword ptr [ebp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        mov edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes D9 45 0C: fld dword ptr [ebp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes D8 8C 8A CC 01 00 00: fmul dword ptr [edx + ecx*4 + 0x1cc]
        __asm _emit 0xd8
        __asm _emit 0x8c
        __asm _emit 0x8a
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D 0C: fstp dword ptr [ebp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 94h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 0F 84 1C 02 00 00: je 0x46671d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 54h]
        shr eax, 1
        and eax, 7fffffffh
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 3
        ; Exact mapped bytes 74 08: je 0x46651f
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 40h], 39h
        ; Exact mapped bytes 74 37: je 0x466554
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes EB 69: jmp 0x466588
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 94 E6 FF FF: call 0x464bd3
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        ; Exact mapped bytes D9 1C 24: fstp dword ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 4B E9 FF FF: call 0x464e9a
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C7 01 00 00: jmp 0x46671b
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 60 E6 FF FF: call 0x464bd3
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        ; Exact mapped bytes D9 1C 24: fstp dword ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 17 E9 FF FF: call 0x464e9a
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 93 01 00 00: jmp 0x46671b
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 8
        mov dword ptr [ebp - 24h], 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        mov dword ptr [ebp - 28h], ecx
        lea edx, [ebp - 20h]
        push edx
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 08 D2 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd2
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x466617
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 38h]
        xor eax, eax
        mov al, byte ptr [edx + 12dh]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes DB 45 BC: fild dword ptr [ebp - 0x44]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes D8 0D 58 1C 58 00: fmul dword ptr [0x581c58]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 0D 54 1C 58 00: fmul dword ptr [0x581c54]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 4D 0C: fmul dword ptr [ebp + 0xc]
        __asm _emit 0xd8
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes D9 5D 0C: fstp dword ptr [ebp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D1 E5 FF FF: call 0x464bd3
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        ; Exact mapped bytes D9 1C 24: fstp dword ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 88 E8 FF FF: call 0x464e9a
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x46671b
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 1dh
        mov dword ptr [ebp - 30h], 9
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 54h]
        shr eax, 1
        and eax, 7fffffffh
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 30h]
        push edx
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 7A D1 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x4666ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        and edx, 0fh
        cmp edx, 4
        ; Exact mapped bytes 75 3F: jne 0x46669e
        __asm _emit 0x75
        __asm _emit 0x3f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 9
        ; Exact mapped bytes 75 2C: jne 0x46669e
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 38h]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        mov ecx, dword ptr [ebp - 38h]
        xor edx, edx
        mov dl, byte ptr [ecx + 12dh]
        cmp eax, edx
        ; Exact mapped bytes 7D 12: jge 0x46669e
        __asm _emit 0x7d
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 38h]
        mov dl, byte ptr [ecx + 12dh]
        mov byte ptr [eax + 12ch], dl
        mov eax, dword ptr [ebp - 38h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 12ch]
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes DB 45 B8: fild dword ptr [ebp - 0x48]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes D8 0D 58 1C 58 00: fmul dword ptr [0x581c58]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 4D 0C: fmul dword ptr [ebp + 0xc]
        __asm _emit 0xd8
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes D9 5D 0C: fstp dword ptr [ebp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 14h]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F9 E4 FF FF: call 0x464bd3
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        ; Exact mapped bytes D9 1C 24: fstp dword ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B0 E7 FF FF: call 0x464e9a
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2F: jmp 0x46671b
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 14h]
        and eax, 0ffh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C8 E4 FF FF: call 0x464bd3
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        ; Exact mapped bytes D9 1C 24: fstp dword ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7F E7 FF FF: call 0x464e9a
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 30: jmp 0x46674d
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 96 E4 FF FF: call 0x464bd3
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        ; Exact mapped bytes D9 1C 24: fstp dword ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 4D E7 FF FF: call 0x464e9a
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0D 02 00 00: jmp 0x46695f
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        shr eax, 4
        and eax, 0ffh
        mov ecx, dword ptr [ecx + eax*4 + 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 138h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 120h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 BC ED FF FF: call 0x465552
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 50 1C 58 00: fdiv dword ptr [0x581c50]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x50
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D F4: fstp dword ptr [ebp - 0xc]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xf4
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes DF 6D B0: fild qword ptr [ebp - 0x50]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xb0
        ; Exact mapped bytes D8 4D F4: fmul dword ptr [ebp - 0xc]
        __asm _emit 0xd8
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes DC 0D 48 1C 58 00: fmul qword ptr [0x581c48]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 3F 2D 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 7C 07: jl 0x4667d6
        __asm _emit 0x7c
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 06: jae 0x4667e4
        __asm _emit 0x73
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 7C 11: jl 0x4667f5
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 58h], ecx
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x46695f
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        sub edx, 1
        and edx, 0ffh
        shl edx, 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fffff00fh
        or ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 10h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 40ca8h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        shr ecx, 4
        and ecx, 0ffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + ecx*4 + 18h]
        mov dword ptr [eax + 5ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 76 12: jbe 0x466878
        __asm _emit 0x76
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 10: jmp 0x466888
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x46689a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0ch
        ; Exact mapped bytes 7D 67: jge 0x466907
        __asm _emit 0x7d
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 50 14: mov cx, word ptr [eax + edx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x50
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 42 2C: movsx eax, byte ptr [edx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x2c
        sub ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 7D 15: jge 0x4668d2
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 44 4A 14 00 00: mov word ptr [edx + ecx*2 + 0x14], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 AE 00 00: mov word ptr [ebp - 0x52], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x466905
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 0F BE 48 2C: movsx cx, byte ptr [eax + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 54 50 14: mov dx, word ptr [eax + edx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 66 2B D1: sub dx, cx
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 54 41 14: mov word ptr [ecx + eax*2 + 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x41
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4C 50 14: mov cx, word ptr [eax + edx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 4D AE: mov word ptr [ebp - 0x52], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xae
        ; Exact mapped bytes EB 8A: jmp 0x466891
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 51 37: movsx edx, byte ptr [ecx + 0x37]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x37
        sub eax, edx
        test eax, eax
        ; Exact mapped bytes 7E 26: jle 0x466943
        __asm _emit 0x7e
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 0F BE 48 37: movsx cx, byte ptr [eax + 0x37]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 66 2B C1: sub ax, cx
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 41 08: mov word ptr [ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 45 AC: mov word ptr [ebp - 0x54], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes EB 0F: jmp 0x466952
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 41 08 00 00: mov word ptr [ecx + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 AC 00 00: mov word ptr [ebp - 0x54], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 85 6A FE FF FF: jne 0x4667c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x466a33
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x466988
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 20h
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x466a33
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 1ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 0cch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 1fe0h
        shr eax, 5
        cmp ecx, eax
        ; Exact mapped bytes 75 74: jne 0x466a2e
        __asm _emit 0x75
        __asm _emit 0x74
        ; Exact mapped bytes D9 45 0C: fld dword ptr [ebp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes D8 0D 1C 1C 58 00: fmul dword ptr [0x581c1c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 34 2B 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + ecx*4 + 0ech]
        add ecx, eax
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + edx*4 + 0ech], ecx
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 134h], 0
        ; Exact mapped bytes 74 1F: je 0x466a0f
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + edx*8 + 16ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + edx*8 + 16ch], ecx
        ; Exact mapped bytes EB 1D: jmp 0x466a2c
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + ecx*8 + 170h]
        add eax, 1
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + ecx*8 + 170h], eax
        ; Exact mapped bytes EB 05: jmp 0x466a33
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x46697f
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        add esp, 54h
        cmp ebp, esp
        ; Exact mapped bytes E8 A2 1D 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
