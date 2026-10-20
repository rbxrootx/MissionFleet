// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848E740 .. +0x81A bytes.
extern "C" __declspec(naked) void FUN_5848e740_5848E740() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 84 FB 07 00 00: je 0x5848ef55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE E9 FF FF: call 0x5848d140
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D6 07 00 00: je 0x5848ef40
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 24ch]
        xor edx, edx
        mov ecx, 19h
        div ecx
        test edx, edx
        ; Exact mapped bytes 74 61: je 0x5848e7e1
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 35 82 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, -19h
        ; Exact mapped bytes 7C 34: jl 0x5848e7c4
        __asm _emit 0x7c
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 25 82 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3219h
        ; Exact mapped bytes 7F 22: jg 0x5848e7c4
        __asm _emit 0x7f
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 03 D9 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, -19h
        ; Exact mapped bytes 7C 12: jl 0x5848e7c4
        __asm _emit 0x7c
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 F3 D8 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1919h
        ; Exact mapped bytes 7E 1D: jle 0x5848e7e1
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 28h]
        cmp ecx, 6
        ; Exact mapped bytes 75 11: jne 0x5848e7e1
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 35 D5 2D 00: call 0x5876bd10
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd5
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 74 07 00 00: jmp 0x5848ef55
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 F0 00 00 00: movsx ecx, word ptr [eax + 0xf0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 FA 01 00 00: jne 0x5848e9ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 28h]
        cmp eax, 6
        ; Exact mapped bytes 0F 84 EA 01 00 00: je 0x5848e9ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 1
        mov dword ptr [ebp - 0ch], 1eh
        ; Exact mapped bytes EB 09: jmp 0x5848e81d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 2F: jge 0x5848e852
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 12 DC FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        push 1
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 D1 E7 FF FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        ; Exact mapped bytes 74 09: je 0x5848e850
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 02: jmp 0x5848e852
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C2: jmp 0x5848e814
        __asm _emit 0xeb
        __asm _emit 0xc2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 92 01 00 00: je 0x5848e9ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5848e86e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 100h]
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 7D 46: jge 0x5848e8c3
        __asm _emit 0x7d
        __asm _emit 0x46
        imul edx, dword ptr [ebp - 0ch], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 108h]
        cmp ecx, 3
        ; Exact mapped bytes 74 14: je 0x5848e8a5
        __asm _emit 0x74
        __asm _emit 0x14
        imul edx, dword ptr [ebp - 0ch], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 108h]
        cmp ecx, 4
        ; Exact mapped bytes 75 1C: jne 0x5848e8c1
        __asm _emit 0x75
        __asm _emit 0x1c
        imul edx, dword ptr [ebp - 0ch], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 109h]
        test ecx, ecx
        ; Exact mapped bytes 7E 09: jle 0x5848e8c1
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 02: jmp 0x5848e8c3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB A2: jmp 0x5848e865
        __asm _emit 0xeb
        __asm _emit 0xa2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x5848e9ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 6
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 28: mov word ptr [eax + 0x28], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 DC 80 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 CF 80 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 3200h
        sub ecx, eax
        cmp esi, ecx
        ; Exact mapped bytes 7D 17: jge 0x5848e913
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 B9 80 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 1C: jmp 0x5848e92f
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 A2 80 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 3200h
        sub ecx, eax
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 48h], 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 76 D7 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 69 D7 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 1900h
        sub ecx, eax
        cmp esi, ecx
        ; Exact mapped bytes 7D 17: jge 0x5848e969
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 53 D7 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 1C: jmp 0x5848e985
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 3C D7 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 3200h
        sub ecx, eax
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 44h], 1
        mov edx, dword ptr [ebp - 3ch]
        cmp edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 7E 26: jle 0x5848e9b3
        __asm _emit 0x7e
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 28 80 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 09: je 0x5848e9aa
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 34h], 19c8h
        ; Exact mapped bytes EB 07: jmp 0x5848e9b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0ffffff38h
        ; Exact mapped bytes EB 24: jmp 0x5848e9d7
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 F2 D6 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 09: je 0x5848e9d0
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 32c8h
        ; Exact mapped bytes EB 07: jmp 0x5848e9d7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0ffffff38h
        push 0
        push 0
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 D1 FF FF: call 0x5848bb30
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        cmp dword ptr [edx + 11ch], 6
        ; Exact mapped bytes 75 33: jne 0x5848ea30
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 38 D5 FF FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B1 D4 FF FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 18: jle 0x5848ea2b
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 64h], edx
        push 0
        push 0
        push 9
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 B6 BA 2D 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xba
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x5848eb0e
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2a4h], -1
        ; Exact mapped bytes 74 0E: je 0x5848ea4a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2a4h]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes EB 15: jmp 0x5848ea5f
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 EB D4 FF FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 D6 FF FF: call 0x5848c0d0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 D0 D4 FF FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 D4 FF FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes 7D 1A: jge 0x5848ea96
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 68h], ecx
        push 0
        push 0
        push 8
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 4D BA 2D 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xba
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 60: jmp 0x5848eaf6
        __asm _emit 0xeb
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 9F D4 FF FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 D4 FF FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes 7E 1A: jle 0x5848eac7
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 6ch], ecx
        push 0
        push 0
        push 9
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 1C BA 2D 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2F: jmp 0x5848eaf6
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 70h], eax
        push 0
        push 0
        push 8
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 02 BA 2D 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xba
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 74h], edx
        push 0
        push 0
        push 9
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 EB B9 2D 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb9
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        cmp dword ptr [ecx + 11ch], 3
        ; Exact mapped bytes 75 09: jne 0x5848eb0e
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 04 00 00: call 0x5848ef80
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        cmp dword ptr [eax + 11ch], 5
        ; Exact mapped bytes 74 0F: je 0x5848eb2c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 F0 00 00 00: movsx edx, word ptr [ecx + 0xf0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 4
        ; Exact mapped bytes 75 1F: jne 0x5848eb4b
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 24ch]
        xor edx, edx
        mov ecx, 32h
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x5848eb4b
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A6 AB FF FF: call 0x584896f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 100h]
        test eax, eax
        ; Exact mapped bytes 7E 09: jle 0x5848eb62
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F E8 FF FF: call 0x5848d380
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0f8h], 0
        ; Exact mapped bytes 74 41: je 0x5848ebc3
        __asm _emit 0x74
        __asm _emit 0x41
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 F0 00 00 00: movsx ecx, word ptr [eax + 0xf0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4
        ; Exact mapped bytes 75 09: jne 0x5848eba1
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0ch
        ; Exact mapped bytes EB 07: jmp 0x5848eba8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 19h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24ch]
        xor edx, edx
        div dword ptr [ebp - 30h]
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x5848ebc3
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE 08 00 00: call 0x5848f490
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 B3 FF FF: call 0x58489f60
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 24h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 EE 00 00 00: movsx edx, word ptr [ecx + 0xee]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x5848ecc6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 10: jne 0x5848ec0f
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 30h]
        cmp ecx, 32h
        ; Exact mapped bytes 0F 8C A3 00 00 00: jl 0x5848ecb2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 24h]
        push edx
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 D8 FF FF: call 0x5848c4e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 09: je 0x5848ec32
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 1
        ; Exact mapped bytes EB 07: jmp 0x5848ec39
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B F5 FF FF: call 0x5848e180
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 30h], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 4E: je 0x5848ecb0
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 D2 FF FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov ecx, 38h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 88h]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 D7 31 06 00: call 0x584f1e70
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 82 EE 00 00 00: mov word ptr [edx + 0xee], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 A5 FF FF: call 0x584891c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5848ecc1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 30h]
        add dl, 1
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 30h], dl
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x5848ed56
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0C: je 0x5848ecd8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 30h]
        cmp edx, 32h
        ; Exact mapped bytes 7C 70: jl 0x5848ed48
        __asm _emit 0x7c
        __asm _emit 0x70
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 D7 FF FF: call 0x5848c4e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 09: je 0x5848ecfb
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 58h], 1
        ; Exact mapped bytes EB 07: jmp 0x5848ed02
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        lea edx, [ebp - 24h]
        push edx
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 F4 FF FF: call 0x5848e180
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 30h], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 0E: jne 0x5848ed39
        __asm _emit 0x75
        __asm _emit 0x0e
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 EE 00 00 00: mov word ptr [eax + 0xee], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x5848ed46
        __asm _emit 0xeb
        __asm _emit 0x0d
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B A4 FF FF: call 0x584891c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0E: jmp 0x5848ed56
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 30h]
        add al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 30h], al
        ; Exact mapped bytes 0F BF 55 F8: movsx edx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xf8
        test edx, edx
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x5848ee4a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5848ed7d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D C3 00 00 00: jge 0x5848ee4a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 10h], 38h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 4C 10 5C: movsx ecx, word ptr [eax + edx + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x5c
        cmp ecx, 1
        ; Exact mapped bytes 75 36: jne 0x5848edce
        __asm _emit 0x75
        __asm _emit 0x36
        imul edx, dword ptr [ebp - 10h], 38h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 88h], 0
        ; Exact mapped bytes 74 23: je 0x5848edcc
        __asm _emit 0x74
        __asm _emit 0x23
        imul ecx, dword ptr [ebp - 10h], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 88h]
        ; Exact mapped bytes E8 94 28 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 09: jne 0x5848edcc
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 2
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 77: jmp 0x5848ee45
        __asm _emit 0xeb
        __asm _emit 0x77
        imul ecx, dword ptr [ebp - 10h], 38h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 44 0A 5C: movsx eax, word ptr [edx + ecx + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x5c
        cmp eax, 2
        ; Exact mapped bytes 75 66: jne 0x5848ee45
        __asm _emit 0x75
        __asm _emit 0x66
        imul ecx, dword ptr [ebp - 10h], 38h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 8ch], 0
        ; Exact mapped bytes 74 55: je 0x5848ee45
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 D1 FF FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        imul eax, dword ptr [ebp - 10h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 CF E3 FF FF: call 0x5848d1f0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5848ee45
        __asm _emit 0x74
        __asm _emit 0x20
        imul ecx, dword ptr [ebp - 10h], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 8ch]
        ; Exact mapped bytes E8 78 E3 FF FF: call 0x5848d1b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5848ee45
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 2
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E9 2A FF FF FF: jmp 0x5848ed74
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 4D F8: movsx ecx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xf8
        cmp ecx, 2
        ; Exact mapped bytes 75 75: jne 0x5848eec8
        __asm _emit 0x75
        __asm _emit 0x75
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 28: je 0x5848ee81
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 22: je 0x5848ee81
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 30h]
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x5848ee81
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 CC FF FF: call 0x5848bb30
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        cmp dword ptr [ecx + 11ch], 5
        ; Exact mapped bytes 75 09: jne 0x5848ee99
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 74 09: je 0x5848eea2
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF E9 FF FF: call 0x5848d850
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 28h]
        cmp ecx, 2
        ; Exact mapped bytes 74 18: je 0x5848eec6
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 28h]
        cmp eax, 6
        ; Exact mapped bytes 74 0C: je 0x5848eec6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, 2
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 28: mov word ptr [edx + 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x28
        ; Exact mapped bytes EB 78: jmp 0x5848ef40
        __asm _emit 0xeb
        __asm _emit 0x78
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2C: je 0x5848eefa
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 26: je 0x5848eefa
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        cmp dword ptr [ecx + 11ch], 5
        ; Exact mapped bytes 75 17: jne 0x5848eefa
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 CC FF FF: call 0x5848bb30
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 28h]
        cmp edx, 2
        ; Exact mapped bytes 75 3A: jne 0x5848ef40
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 28: mov word ptr [ecx + 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x28
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5848ef24
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 2
        ; Exact mapped bytes 7D 16: jge 0x5848ef40
        __asm _emit 0x7d
        __asm _emit 0x16
        imul eax, dword ptr [ebp - 2ch], 38h
        mov ecx, 0ffffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8C 02 90 00 00 00: mov word ptr [edx + eax + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB DB: jmp 0x5848ef1b
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24ch], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
