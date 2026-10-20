// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CB1C0 .. +0x1D87 bytes.
extern "C" __declspec(naked) void FUN_586cb1c0_586CB1C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c152h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 398h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 5B 70 DB FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x70
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [eax], 588b2008h
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [edx + 58h], 100h
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [eax + 5ch], 0
        mov ecx, 1f4h
        ; Exact mapped bytes 66 89 8D BC FE FF FF: mov word ptr [ebp - 0x144], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 258h
        ; Exact mapped bytes 66 89 95 B8 FE FF FF: mov word ptr [ebp - 0x148], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 2bch
        ; Exact mapped bytes 66 89 85 C0 FE FF FF: mov word ptr [ebp - 0x140], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 3e8h
        ; Exact mapped bytes 66 89 8D FC FC FF FF: mov word ptr [ebp - 0x304], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], 0ffffffffh
        xor edx, edx
        mov dword ptr [ebp - 7ch], edx
        mov dword ptr [ebp - 78h], edx
        mov dword ptr [ebp - 74h], edx
        mov dword ptr [ebp - 70h], edx
        mov dword ptr [ebp - 6ch], edx
        mov dword ptr [ebp - 68h], edx
        mov dword ptr [ebp - 0f0h], 0ffffffffh
        xor eax, eax
        mov dword ptr [ebp - 0ech], eax
        mov dword ptr [ebp - 0e8h], eax
        mov dword ptr [ebp - 0e4h], eax
        mov dword ptr [ebp - 0e0h], eax
        mov dword ptr [ebp - 0dch], eax
        mov dword ptr [ebp - 0d8h], eax
        mov dword ptr [ebp - 128h], 0ffffffffh
        xor ecx, ecx
        mov dword ptr [ebp - 124h], ecx
        mov dword ptr [ebp - 120h], ecx
        mov dword ptr [ebp - 11ch], ecx
        mov dword ptr [ebp - 118h], ecx
        mov dword ptr [ebp - 114h], ecx
        mov dword ptr [ebp - 110h], ecx
        mov dword ptr [ebp - 0b8h], 0ffffffffh
        xor edx, edx
        mov dword ptr [ebp - 0b4h], edx
        mov dword ptr [ebp - 0b0h], edx
        mov dword ptr [ebp - 0ach], edx
        mov dword ptr [ebp - 0a8h], edx
        mov dword ptr [ebp - 0a4h], edx
        mov dword ptr [ebp - 0a0h], edx
        mov dword ptr [ebp - 64h], 0ffffffffh
        xor eax, eax
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 48h], 0ffffffffh
        xor ecx, ecx
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 0d4h], 0ffffffffh
        xor edx, edx
        mov dword ptr [ebp - 0d0h], edx
        mov dword ptr [ebp - 0cch], edx
        mov dword ptr [ebp - 0c8h], edx
        mov dword ptr [ebp - 0c4h], edx
        mov dword ptr [ebp - 0c0h], edx
        mov dword ptr [ebp - 0bch], edx
        mov dword ptr [ebp - 10ch], 0ffffffffh
        xor eax, eax
        mov dword ptr [ebp - 108h], eax
        mov dword ptr [ebp - 104h], eax
        mov dword ptr [ebp - 100h], eax
        mov dword ptr [ebp - 0fch], eax
        mov dword ptr [ebp - 0f8h], eax
        mov dword ptr [ebp - 0f4h], eax
        mov dword ptr [ebp - 9ch], 0ffffffffh
        xor ecx, ecx
        mov dword ptr [ebp - 98h], ecx
        mov dword ptr [ebp - 94h], ecx
        mov dword ptr [ebp - 90h], ecx
        mov dword ptr [ebp - 8ch], ecx
        mov dword ptr [ebp - 88h], ecx
        mov dword ptr [ebp - 84h], ecx
        mov dword ptr [ebp - 2ch], 0ffffffffh
        xor edx, edx
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 14h], edx
        push 198h
        ; Exact mapped bytes E8 E4 5B 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x5b
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 200h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 200h], 0
        ; Exact mapped bytes 74 1C: je 0x586cb452
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588b1f40h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 66 4F 0B 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cb45c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov eax, dword ptr [ebp - 19ch]
        mov dword ptr [ebp - 37ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ebp - 37ch]
        mov dword ptr [ecx + 60h], edx
        push 54h
        ; Exact mapped bytes E8 82 5B 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x5b
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 204h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 204h], 0
        ; Exact mapped bytes 74 53: je 0x586cb4eb
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 380h], ecx
        push 0
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 6C 96 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x96
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 384h], eax
        movzx edx, word ptr [ebp - 144h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 384h]
        push edx
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 3D 6E DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x6e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cb4f5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20ch], 0
        mov ecx, dword ptr [ebp - 20ch]
        mov dword ptr [ebp - 388h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 38ch], edx
        lea eax, [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 DB 91 DF FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x91
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 0F 96 DF FF: call 0x584c4b50
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x96
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 BB 5A 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5a
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 210h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 74 59: je 0x586cb5b8
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 390h], edx
        push 1
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 A5 95 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x95
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 394h], eax
        ; Exact mapped bytes 0F BF 85 C0 FE FF FF: movsx eax, word ptr [ebp - 0x140]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 5
        push edx
        mov eax, dword ptr [ebp - 394h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 D0 0F EA FF: call 0x5856c580
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cb5c2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 214h], 0
        mov edx, dword ptr [ebp - 214h]
        mov dword ptr [ebp - 398h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 398h]
        mov dword ptr [eax + 68h], ecx
        push 6ch
        ; Exact mapped bytes E8 1C 5A 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5a
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 218h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 218h], 0
        ; Exact mapped bytes 74 35: je 0x586cb633
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 0F BF 95 BC FE FF FF: movsx edx, word ptr [ebp - 0x144]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add edx, 5
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 122h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 D5 92 E6 FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x92
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cb63d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 21ch], 0
        mov eax, dword ptr [ebp - 21ch]
        mov dword ptr [ebp - 39ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 39ch]
        mov dword ptr [eax + edx + 70h], ecx
        push 58h
        ; Exact mapped bytes E8 98 59 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x59
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 220h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 220h], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x586cb724
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ecx + eax + 70h]
        ; Exact mapped bytes E8 13 0A DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 15h
        mov dword ptr [ebp - 22ch], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ecx + eax + 70h]
        ; Exact mapped bytes E8 03 B3 DB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb3
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 84h
        mov dword ptr [ebp - 230h], eax
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 3a0h], eax
        push 4
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 EC 93 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes 0F BF 8D BC FE FF FF: movsx ecx, word ptr [ebp - 0x144]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 22ch]
        push edx
        mov eax, dword ptr [ebp - 230h]
        push eax
        mov ecx, dword ptr [ebp - 234h]
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 F4 B0 DB FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb0
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cb72e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 224h], 0
        mov eax, dword ptr [ebp - 224h]
        mov dword ptr [ebp - 238h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ebp - 238h]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 23ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 E7 3D DD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x3d
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 93 58 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x58
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 154h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x586cb863
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ecx + eax + 70h]
        ; Exact mapped bytes E8 0E 09 DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 24h
        mov dword ptr [ebp - 240h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ecx + eax + 70h]
        ; Exact mapped bytes E8 FE B1 DB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb1
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 12dh
        mov dword ptr [ebp - 244h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ecx + eax + 70h]
        ; Exact mapped bytes E8 CC 08 DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 16h
        mov dword ptr [ebp - 248h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ecx + eax + 70h]
        ; Exact mapped bytes E8 BC B1 DB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb1
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 84h
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 250h], edx
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp - 240h]
        push eax
        mov ecx, dword ptr [ebp - 244h]
        push ecx
        mov edx, dword ptr [ebp - 248h]
        push edx
        mov eax, dword ptr [ebp - 24ch]
        push eax
        mov ecx, dword ptr [ebp - 250h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 55 6B DB FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6b
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cb86d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 254h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ebp - 254h]
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 258h], ecx
        ; Exact mapped bytes 0F BF 95 BC FE FF FF: movsx edx, word ptr [ebp - 0x144]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add edx, 0ch
        push edx
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 CF A5 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 25ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 13 A6 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa6
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 260h], eax
        push 6
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 97 E4 DE FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe4
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 10 57 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x586cb98f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 264h], edx
        push 1
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 A6 91 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x91
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 26ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 270h], ecx
        movzx edx, word ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 2
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 396h
        push ecx
        mov edx, dword ptr [ebp - 268h]
        push edx
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 26ch]
        push ecx
        mov edx, dword ptr [ebp - 270h]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 59 03 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cb999
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov eax, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 274h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ebp - 274h]
        mov dword ptr [ecx + 80h], edx
        push 0ach
        ; Exact mapped bytes E8 3F 56 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x56
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x586cba5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 278h], ecx
        push 2
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 D5 90 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x90
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 27ch], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 280h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 284h], eax
        movzx ecx, word ptr [ebp - 140h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 2
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 3c7h
        push eax
        mov ecx, dword ptr [ebp - 27ch]
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov eax, dword ptr [ebp - 280h]
        push eax
        mov ecx, dword ptr [ebp - 284h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 89 02 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cba69
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov edx, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 288h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 288h]
        mov dword ptr [eax + 84h], ecx
        push 0ach
        ; Exact mapped bytes E8 6F 55 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x55
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 16ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x586cbb31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 28ch], eax
        push 11h
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 05 90 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 294h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 298h], edx
        movzx eax, word ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 2
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 303h
        push edx
        mov eax, dword ptr [ebp - 290h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov edx, dword ptr [ebp - 294h]
        push edx
        mov eax, dword ptr [ebp - 298h]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 B7 01 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cbb3b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov ecx, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 29ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [ebp - 29ch]
        mov dword ptr [edx + 8ch], eax
        push 0ach
        ; Exact mapped bytes E8 9D 54 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x54
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 174h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x586cbc02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2a0h], edx
        push 4ch
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 33 8F DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2a8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2ach], ecx
        movzx edx, word ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 2
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 334h
        push ecx
        mov edx, dword ptr [ebp - 2a4h]
        push edx
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 2a8h]
        push ecx
        mov edx, dword ptr [ebp - 2ach]
        push edx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 E6 00 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cbc0c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov eax, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 2b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ebp - 2b0h]
        mov dword ptr [ecx + 94h], edx
        push 0ach
        ; Exact mapped bytes E8 CC 53 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x53
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x586cbcd2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2b4h], ecx
        push 20h
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 62 8E DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2bch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2c0h], eax
        movzx ecx, word ptr [ebp - 140h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 2
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 365h
        push eax
        mov ecx, dword ptr [ebp - 2b8h]
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov eax, dword ptr [ebp - 2bch]
        push eax
        mov ecx, dword ptr [ebp - 2c0h]
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 16 00 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cbcdc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov edx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 2c4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 2c4h]
        mov dword ptr [eax + 90h], ecx
        mov dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586cbd19
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 14ch]
        add edx, 1
        mov dword ptr [ebp - 14ch], edx
        cmp dword ptr [ebp - 14ch], 5
        ; Exact mapped bytes 0F 8D 92 00 00 00: jge 0x586cbdb8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 D4 52 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x52
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 184h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 74 3A: je 0x586cbd80
        __asm _emit 0x74
        __asm _emit 0x3a
        movzx eax, word ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 13ch]
        push eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 68 FF DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cbd8a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov eax, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 2c8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14ch]
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [ebp - 2c8h]
        mov dword ptr [edx + ecx*4 + 98h], eax
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586cbd0a
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 42 52 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x52
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x586cbe5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2cch], edx
        push 12h
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 D8 8C DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x8c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2d4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2d8h], ecx
        movzx edx, word ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 14dh
        push ecx
        mov edx, dword ptr [ebp - 2d0h]
        push edx
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 2d4h]
        push ecx
        mov edx, dword ptr [ebp - 2d8h]
        push edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 8B FE DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cbe67
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov eax, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 2dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ebp - 2dch]
        mov dword ptr [ecx + 0ach], edx
        push 0fch
        ; Exact mapped bytes E8 71 51 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x586cbf33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [edx + ecx + 70h]
        ; Exact mapped bytes E8 EC 01 DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 35h
        mov dword ptr [ebp - 2e0h], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [edx + ecx + 70h]
        ; Exact mapped bytes E8 DC AA DB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xaa
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 82h
        mov dword ptr [ebp - 2e4h], eax
        push 0bh
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 8B DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 2e8h], eax
        mov eax, dword ptr [ebp - 2e0h]
        push eax
        mov ecx, dword ptr [ebp - 2e4h]
        push ecx
        push 2
        mov edx, dword ptr [ebp - 2e8h]
        push edx
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 45 EA 0E 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cbf3d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov ecx, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 2ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [ebp - 2ech]
        mov dword ptr [edx + 0b0h], eax
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 2f0h], edx
        movzx eax, word ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 FC 9E DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9e
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 75 50 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x50
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 208h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 208h], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x586cc02d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + edx + 70h]
        ; Exact mapped bytes E8 F0 00 DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 35h
        mov dword ptr [ebp - 2f4h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + edx + 70h]
        ; Exact mapped bytes E8 E0 A9 DB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa9
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 4bh
        mov dword ptr [ebp - 2f8h], eax
        push 0bh
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 8A DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        mov ecx, dword ptr [ebp - 2f4h]
        push ecx
        mov edx, dword ptr [ebp - 2f8h]
        push edx
        push 2
        mov eax, dword ptr [ebp - 2fch]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 4B E9 0E 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cc037
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov edx, dword ptr [ebp - 1a0h]
        mov dword ptr [ebp - 300h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 300h]
        mov dword ptr [eax + 0b4h], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 354h], eax
        movzx ecx, word ptr [ebp - 148h]
        push ecx
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 02 9E DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x9e
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 7B 4F 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a4h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 1a4h], 0
        ; Exact mapped bytes 74 30: je 0x586cc0cf
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        sub edx, 1
        push edx
        push 300h
        push 400h
        push 18h
        push 70h
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 A9 88 03 00: call 0x58704970
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cc0d9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a8h], 0
        mov ecx, dword ptr [ebp - 1a8h]
        mov dword ptr [ebp - 308h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [ebp - 308h]
        mov dword ptr [edx + 0f0h], eax
        push 0ach
        ; Exact mapped bytes E8 FF 4E 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4e
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ach], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 1ach], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x586cc1a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 30ch], edx
        push 13h
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 95 89 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x89
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 310h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 314h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 318h], ecx
        movzx edx, word ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2afh
        push ecx
        mov edx, dword ptr [ebp - 310h]
        push edx
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 314h]
        push ecx
        mov edx, dword ptr [ebp - 318h]
        push edx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 48 FB DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfb
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cc1aa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b0h], 0
        mov eax, dword ptr [ebp - 1b0h]
        mov dword ptr [ebp - 31ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ebp - 31ch]
        mov dword ptr [ecx + 0f4h], edx
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 320h], ecx
        push 5
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 55 36 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x36
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 230h
        ; Exact mapped bytes E8 0E 4E 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4e
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b4h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 1b4h], 0
        ; Exact mapped bytes 74 2C: je 0x586cc238
        __asm _emit 0x74
        __asm _emit 0x2c
        push 40h
        push 0
        push 0
        push 0fffffee4h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 3
        push edx
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 20 2F 00 00: call 0x586cf150
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cc242
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov ecx, dword ptr [ebp - 1b8h]
        mov dword ptr [ebp - 324h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [ebp - 324h]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 328h], edx
        movzx eax, word ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 FD 9B DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x9b
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 32ch], edx
        push 0
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 41 9C DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x9c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 330h], ecx
        push 0
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 95 39 E3 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x39
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [edx + 0bch], 1
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [eax + 0c0h], 0
        mov ecx, 0ch
        mov edx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 66 89 8A D0 00 00 00: mov word ptr [edx + 0xd0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 66 89 81 D2 00 00 00: mov word ptr [ecx + 0xd2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [edx + 0c4h], 0
        push 0e8h
        ; Exact mapped bytes E8 EE 4C 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4c
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1bch], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 1bch], 0
        ; Exact mapped bytes 74 4C: je 0x586cc378
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        sub edx, 1
        push edx
        mov eax, dword ptr [ebp + 18h]
        sub eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 24eh
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 A0 CA FF FF: call 0x586c8e10
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cc382
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c0h], 0
        mov edx, dword ptr [ebp - 1c0h]
        mov dword ptr [ebp - 334h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 334h]
        mov dword ptr [eax + 0d4h], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 338h], eax
        push 1
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 CD EC FF FF: call 0x586cb090
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 0e8h
        ; Exact mapped bytes E8 36 4C 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x4c
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c4h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 1c4h], 0
        ; Exact mapped bytes 74 4D: je 0x586cc431
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 60h]
        push edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp + 18h]
        sub ecx, 0c8h
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 32eh
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 E7 C9 FF FF: call 0x586c8e10
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cc43b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c8h], 0
        mov eax, dword ptr [ebp - 1c8h]
        mov dword ptr [ebp - 33ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ebp - 33ch]
        mov dword ptr [ecx + 0d8h], edx
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 340h], ecx
        push 2
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 14 EC FF FF: call 0x586cb090
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ebp + eax - 80h], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [ebp + ecx - 80h], 17h
        mov edx, 4
        shl edx, 1
        mov dword ptr [ebp + edx - 80h], 18h
        mov eax, 4
        imul ecx, eax, 3
        mov dword ptr [ebp + ecx - 80h], 18h
        mov edx, 4
        shl edx, 2
        mov dword ptr [ebp + edx - 80h], 19h
        mov eax, 4
        imul ecx, eax, 5
        mov dword ptr [ebp + ecx - 80h], 17h
        mov edx, 4
        imul eax, edx, 6
        mov dword ptr [ebp + eax - 80h], 19h
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 48h], 0ffffffffh
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 48h], 2bh
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [ebp + ecx - 48h], 2ch
        mov edx, 4
        imul eax, edx, 3
        mov dword ptr [ebp + eax - 48h], 2ch
        mov ecx, 4
        shl ecx, 2
        mov dword ptr [ebp + ecx - 48h], 2dh
        mov edx, 4
        imul eax, edx, 5
        mov dword ptr [ebp + eax - 48h], 2bh
        mov ecx, 4
        imul edx, ecx, 6
        mov dword ptr [ebp + edx - 48h], 2dh
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [ebp + ecx - 0b8h], 0ffffffffh
        mov edx, 4
        shl edx, 0
        mov dword ptr [ebp + edx - 0b8h], 1ah
        mov eax, 4
        shl eax, 1
        mov dword ptr [ebp + eax - 0b8h], 1bh
        mov ecx, 4
        imul edx, ecx, 3
        mov dword ptr [ebp + edx - 0b8h], 1bh
        mov eax, 4
        shl eax, 2
        mov dword ptr [ebp + eax - 0b8h], 1ch
        mov ecx, 4
        imul edx, ecx, 5
        mov dword ptr [ebp + edx - 0b8h], 1ah
        mov eax, 4
        imul ecx, eax, 6
        mov dword ptr [ebp + ecx - 0b8h], 1ch
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ebp + eax - 9ch], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [ebp + ecx - 9ch], 2eh
        mov edx, 4
        shl edx, 1
        mov dword ptr [ebp + edx - 9ch], 2fh
        mov eax, 4
        imul ecx, eax, 3
        mov dword ptr [ebp + ecx - 9ch], 2fh
        mov edx, 4
        shl edx, 2
        mov dword ptr [ebp + edx - 9ch], 30h
        mov eax, 4
        imul ecx, eax, 5
        mov dword ptr [ebp + ecx - 9ch], 2eh
        mov edx, 4
        imul eax, edx, 6
        mov dword ptr [ebp + eax - 9ch], 30h
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 0f0h], 0ffffffffh
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 0f0h], 14h
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [ebp + ecx - 0f0h], 15h
        mov edx, 4
        imul eax, edx, 3
        mov dword ptr [ebp + eax - 0f0h], 15h
        mov ecx, 4
        shl ecx, 2
        mov dword ptr [ebp + ecx - 0f0h], 16h
        mov edx, 4
        imul eax, edx, 5
        mov dword ptr [ebp + eax - 0f0h], 14h
        mov ecx, 4
        imul edx, ecx, 6
        mov dword ptr [ebp + edx - 0f0h], 16h
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [ebp + ecx - 0d4h], 0ffffffffh
        mov edx, 4
        shl edx, 0
        mov dword ptr [ebp + edx - 0d4h], 28h
        mov eax, 4
        shl eax, 1
        mov dword ptr [ebp + eax - 0d4h], 29h
        mov ecx, 4
        imul edx, ecx, 3
        mov dword ptr [ebp + edx - 0d4h], 29h
        mov eax, 4
        shl eax, 2
        mov dword ptr [ebp + eax - 0d4h], 2ah
        mov ecx, 4
        imul edx, ecx, 5
        mov dword ptr [ebp + edx - 0d4h], 28h
        mov eax, 4
        imul ecx, eax, 6
        mov dword ptr [ebp + ecx - 0d4h], 2ah
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ebp + eax - 128h], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [ebp + ecx - 128h], 1dh
        mov edx, 4
        shl edx, 1
        mov dword ptr [ebp + edx - 128h], 1eh
        mov eax, 4
        imul ecx, eax, 3
        mov dword ptr [ebp + ecx - 128h], 1eh
        mov edx, 4
        shl edx, 2
        mov dword ptr [ebp + edx - 128h], 1fh
        mov eax, 4
        imul ecx, eax, 5
        mov dword ptr [ebp + ecx - 128h], 1dh
        mov edx, 4
        imul eax, edx, 6
        mov dword ptr [ebp + eax - 128h], 1fh
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 10ch], 0ffffffffh
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 10ch], 31h
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [ebp + ecx - 10ch], 32h
        mov edx, 4
        imul eax, edx, 3
        mov dword ptr [ebp + eax - 10ch], 32h
        mov ecx, 4
        shl ecx, 2
        mov dword ptr [ebp + ecx - 10ch], 33h
        mov edx, 4
        imul eax, edx, 5
        mov dword ptr [ebp + eax - 10ch], 31h
        mov ecx, 4
        imul edx, ecx, 6
        mov dword ptr [ebp + edx - 10ch], 33h
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [ebp + ecx - 64h], 0ffffffffh
        mov edx, 4
        shl edx, 0
        mov dword ptr [ebp + edx - 64h], 3ch
        mov eax, 4
        shl eax, 1
        mov dword ptr [ebp + eax - 64h], 3dh
        mov ecx, 4
        imul edx, ecx, 3
        mov dword ptr [ebp + edx - 64h], 3dh
        mov eax, 4
        shl eax, 2
        mov dword ptr [ebp + eax - 64h], 3eh
        mov ecx, 4
        imul edx, ecx, 5
        mov dword ptr [ebp + edx - 64h], 3ch
        mov eax, 4
        imul ecx, eax, 6
        mov dword ptr [ebp + ecx - 64h], 3eh
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ebp + eax - 2ch], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [ebp + ecx - 2ch], 43h
        mov edx, 4
        shl edx, 1
        mov dword ptr [ebp + edx - 2ch], 44h
        mov eax, 4
        imul ecx, eax, 3
        mov dword ptr [ebp + ecx - 2ch], 44h
        mov edx, 4
        shl edx, 2
        mov dword ptr [ebp + edx - 2ch], 45h
        mov eax, 4
        imul ecx, eax, 5
        mov dword ptr [ebp + ecx - 2ch], 43h
        mov edx, 4
        imul eax, edx, 6
        mov dword ptr [ebp + eax - 2ch], 45h
        push 0b8h
        ; Exact mapped bytes E8 AA 46 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x46
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1cch], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 1cch], 0
        ; Exact mapped bytes 74 4E: je 0x586cc9be
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 0F BF 95 C0 FE FF FF: movsx edx, word ptr [ebp - 0x140]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 18h]
        add eax, 15bh
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 135h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0f7h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0d1h
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 BA 84 DE FF: call 0x584b4e70
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cc9c8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov edx, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 344h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 344h]
        mov dword ptr [eax + 0dch], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 348h], eax
        lea ecx, [ebp - 48h]
        push ecx
        lea edx, [ebp - 80h]
        push edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 CA 8D DE FF: call 0x584b57f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0b8h
        ; Exact mapped bytes E8 D3 45 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x45
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d4h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes 74 4E: je 0x586cca95
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 0F BF 95 C0 FE FF FF: movsx edx, word ptr [ebp - 0x140]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 18h]
        add eax, 208h
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 334h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1a4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2d0h
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 E3 83 DE FF: call 0x584b4e70
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cca9f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d8h], 0
        mov edx, dword ptr [ebp - 1d8h]
        mov dword ptr [ebp - 34ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 34ch]
        mov dword ptr [eax + 0e8h], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 350h], eax
        lea ecx, [ebp - 9ch]
        push ecx
        lea edx, [ebp - 0b8h]
        push edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 ED 8C DE FF: call 0x584b57f0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x8c
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0b8h
        ; Exact mapped bytes E8 F6 44 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1dch], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 1dch], 0
        ; Exact mapped bytes 74 4E: je 0x586ccb72
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 0F BF 95 C0 FE FF FF: movsx edx, word ptr [ebp - 0x140]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 18h]
        add eax, 21ah
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 162h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1b6h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0feh
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 06 83 DE FF: call 0x584b4e70
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ccb7c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e0h], 0
        mov edx, dword ptr [ebp - 1e0h]
        mov dword ptr [ebp - 3a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 3a4h]
        mov dword ptr [eax + 0e0h], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 358h], eax
        lea ecx, [ebp - 0d4h]
        push ecx
        lea edx, [ebp - 0f0h]
        push edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 10 8C DE FF: call 0x584b57f0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8c
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0b8h
        ; Exact mapped bytes E8 19 44 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e4h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 1e4h], 0
        ; Exact mapped bytes 74 4E: je 0x586ccc4f
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 0F BF 95 C0 FE FF FF: movsx edx, word ptr [ebp - 0x140]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 18h]
        add eax, 145h
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 303h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e1h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 29fh
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 29 82 DE FF: call 0x584b4e70
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ccc59
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 228h], 0
        mov edx, dword ptr [ebp - 228h]
        mov dword ptr [ebp - 35ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 35ch]
        mov dword ptr [eax + 0e4h], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 0e4h]
        mov dword ptr [ebp - 360h], eax
        lea ecx, [ebp - 10ch]
        push ecx
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 33 8B DE FF: call 0x584b57f0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x8b
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0b8h
        ; Exact mapped bytes E8 3C 43 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ech], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 1ech], 0
        ; Exact mapped bytes 74 4E: je 0x586ccd2c
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 0F BF 95 C0 FE FF FF: movsx edx, word ptr [ebp - 0x140]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 18h]
        add eax, 0c6h
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 1feh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 85h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1b3h
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 4C 81 DE FF: call 0x584b4e70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ccd36
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f0h], 0
        mov edx, dword ptr [ebp - 1f0h]
        mov dword ptr [ebp - 364h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 364h]
        mov dword ptr [eax + 0ech], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 368h], eax
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 64h]
        push edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 5C 8A DE FF: call 0x584b57f0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8a
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], 10ah
        push 54h
        ; Exact mapped bytes E8 5F 42 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f4h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 1f4h], 0
        ; Exact mapped bytes 74 5C: je 0x586cce17
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 36ch], edx
        push 1d9h
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 46 7D DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x7d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 370h], eax
        movzx eax, word ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 150h]
        push edx
        mov eax, dword ptr [ebp - 370h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 11 55 DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x55
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cce21
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f8h], 0
        mov edx, dword ptr [ebp - 1f8h]
        mov dword ptr [ebp - 374h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 374h]
        mov dword ptr [eax + 0f8h], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [edx + 0f8h]
        ; Exact mapped bytes E8 7C 1F 00 00: call 0x586cedd0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        push 0
        mov eax, dword ptr [ebp - 13ch]
        add eax, 100h
        push eax
        ; Exact mapped bytes E8 A7 FF 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        push 70h
        ; Exact mapped bytes E8 91 41 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x41
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1fch], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 1fch], 0
        ; Exact mapped bytes 74 58: je 0x586ccee1
        __asm _emit 0x74
        __asm _emit 0x58
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 18h]
        add ecx, 0fh
        push ecx
        mov edx, dword ptr [ebp - 150h]
        mov eax, dword ptr [ebp + 14h]
        lea ecx, [eax + edx + 3ah]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 2
        push edx
        mov eax, dword ptr [ebp - 150h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 15h]
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 588b1f51h
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 D7 54 DB FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x54
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586cceeb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e8h], 0
        mov edx, dword ptr [ebp - 1e8h]
        mov dword ptr [ebp - 378h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 378h]
        mov dword ptr [eax + 0fch], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [edx + 0fch]
        ; Exact mapped bytes E8 B2 1E 00 00: call 0x586cedd0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 13ch]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 0F 41 16 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x41
        __asm _emit 0x16
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
