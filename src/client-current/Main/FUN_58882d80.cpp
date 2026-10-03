// Complete Ghidra body ranges for the selected function.
// 5 discontiguous segments; total 4167 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58882D80 .. +0x419 bytes.
extern "C" __declspec(naked) void FUN_58882d80_segment_00() {
    __asm {
        sub esp, 434h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 430h], eax
        push ebp
        push esi
        mov esi, ecx
        xor eax, eax
        mov ebp, 1
        push edi
        mov edi, dword ptr [esp + 450h]
        mov dword ptr [esi + 94h], 0
        ; Exact mapped bytes 66 89 86 92 00 00 00: mov word ptr [esi + 0x92], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 448h], ebp
        ; Exact mapped bytes 74 25: je 0x58882de6
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [esi + 68h], ebp
        ; Exact mapped bytes 0F 85 F3 0F 00 00: jne 0x58883dbd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 44ch]
        mov edx, dword ptr [esp + 444h]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 8F 80 FF FF: call 0x5887ae70
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D7 0F 00 00: jmp 0x58883dbd
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 444h]
        add eax, 7ffd3effh
        cmp eax, 5
        ; Exact mapped bytes 0F 87 C2 0F 00 00: ja 0x58883dbd
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc2
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes FF 24 85 D8 3D 88 58: jmp dword ptr [eax*4 + 0x58883dd8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x58
        test edi, edi
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x58882f3a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 EF E0 FF FF: call 0x58880f00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        push 1004h
        mov ecx, esi
        ; Exact mapped bytes E8 D3 75 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9A 0F 00 00: jmp 0x58883dbc
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x58882f3a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esp + 452h]
        add eax, -2
        cmp eax, 0eh
        ; Exact mapped bytes 0F 87 7E 0F 00 00: ja 0x58883dbc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x7e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 58883dfch]
        ; Exact mapped bytes FF 24 85 F0 3D 88 58: jmp dword ptr [eax*4 + 0x58883df0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x58
        movzx ecx, byte ptr [edi]
        ; Exact mapped bytes 88 0D CC B4 A0 58: mov byte ptr [0x58a0b4cc], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        movzx edx, byte ptr [edi + 1]
        ; Exact mapped bytes 88 15 CD B4 A0 58: mov byte ptr [0x58a0b4cd], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xcd
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        movzx eax, byte ptr [edi + 2]
        ; Exact mapped bytes A2 CE B4 A0 58: mov byte ptr [0x58a0b4ce], al
        __asm _emit 0xa2
        __asm _emit 0xce
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        movzx ecx, byte ptr [edi + 3]
        ; Exact mapped bytes 88 0D CF B4 A0 58: mov byte ptr [0x58a0b4cf], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xcf
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        movzx edx, byte ptr [edi + 4]
        ; Exact mapped bytes 88 15 D0 B4 A0 58: mov byte ptr [0x58a0b4d0], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        movzx eax, byte ptr [edi + 5]
        ; Exact mapped bytes A2 D1 B4 A0 58: mov byte ptr [0x58a0b4d1], al
        __asm _emit 0xa2
        __asm _emit 0xd1
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        movzx ecx, byte ptr [edi + 6]
        ; Exact mapped bytes 88 0D D2 B4 A0 58: mov byte ptr [0x58a0b4d2], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xd2
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        movzx edx, byte ptr [edi + 7]
        push ebp
        mov ecx, esi
        ; Exact mapped bytes 88 15 D3 B4 A0 58: mov byte ptr [0x58a0b4d3], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xd3
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF E0 FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 65 F5 FF: call 0x587d9460
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x65
        __asm _emit 0xf5
        __asm _emit 0xff
        push 1068h
        mov ecx, esi
        ; Exact mapped bytes E8 38 75 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FF 0E 00 00: jmp 0x58883dbc
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1774h
        ; Exact mapped bytes E8 23 8C EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x8c
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5C 1E EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x1e
        __asm _emit 0xee
        __asm _emit 0xff
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 94 E0 FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DB 0E 00 00: jmp 0x58883dbc
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 55: je 0x58882f3a
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 FF 14 07 00: call 0x588f43f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 EF 01 FF FF: call 0x588730f0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 67 E0 FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [edi + 170h]
        cmp edi, ebp
        ; Exact mapped bytes 74 16: je 0x58882f29
        __asm _emit 0x74
        __asm _emit 0x16
        cmp edi, 2
        ; Exact mapped bytes 74 11: je 0x58882f29
        __asm _emit 0x74
        __asm _emit 0x11
        push 10cch
        mov ecx, esi
        ; Exact mapped bytes E8 CC 74 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 93 0E 00 00: jmp 0x58883dbc
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 10cfh
        mov ecx, esi
        ; Exact mapped bytes E8 BB 74 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 82 0E 00 00: jmp 0x58883dbc
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fa2h
        ; Exact mapped bytes E8 AC 74 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 73 0E 00 00: jmp 0x58883dbc
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 452h]
        dec eax
        ; Exact mapped bytes 66 89 44 24 16: mov word ptr [esp + 0x16], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0F: jne 0x58882f6a
        __asm _emit 0x75
        __asm _emit 0x0f
        test edi, edi
        ; Exact mapped bytes 74 0B: je 0x58882f6a
        __asm _emit 0x74
        __asm _emit 0x0b
        push edi
        ; Exact mapped bytes E8 4B F0 FF FF: call 0x58881fb0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2B 0D 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 16: jne 0x58882f85
        __asm _emit 0x75
        __asm _emit 0x16
        test edi, edi
        ; Exact mapped bytes 74 12: je 0x58882f85
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE 0F: movsx ecx, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0f
        push 0
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 10 ED FF FF: call 0x58881c90
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 10 0D 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x58882f9e
        __asm _emit 0x75
        __asm _emit 0x13
        test edi, edi
        ; Exact mapped bytes 74 0F: je 0x58882f9e
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 0F BE 17: movsx edx, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x17
        push ebp
        push edx
        ; Exact mapped bytes E8 F7 EC FF FF: call 0x58881c90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F7 0C 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 19 01 00 00: jne 0x588830c1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 11 01 00 00: je 0x588830c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 D1 10 07 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 94 0C 00 00: je 0x58883c5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + 50h]
        test edx, edx
        ; Exact mapped bytes 0F 84 89 0C 00 00: je 0x58883c5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 4A 08: xor cx, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x4a
        __asm _emit 0x08
        movzx ecx, cx
        ; Exact mapped bytes 66 83 F9 0A: cmp cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 82 B3 00 00 00: jb 0x5888309b
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edi, word ptr [edx + 0ch]
        movzx edx, word ptr [edx + 0ah]
        movzx ecx, cx
        xor edx, 0aah
        xor edi, 0aah
        push edi
        add edx, 0ah
        sub ecx, 0ah
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 31 9B EF FF: call 0x5877cb40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9b
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [esi + 80h]
        push ebp
        mov ecx, esi
        mov dword ptr [esi + 84h], edx
        ; Exact mapped bytes E8 4D DF FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 264h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 7E 46: jle 0x58883075
        __asm _emit 0x7e
        __asm _emit 0x46
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 68 89 FF FF: call 0x5887b9a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 7E 11: jle 0x58883053
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, esi
        ; Exact mapped bytes E8 E7 8C FF FF: call 0x5887bd30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, ebp
        cmp edi, dword ptr [esi + 84h]
        ; Exact mapped bytes 7C EF: jl 0x58883042
        __asm _emit 0x7c
        __asm _emit 0xef
        lea edi, [esi + 244h]
        mov ebx, 5
        mov edi, edi
        mov ecx, dword ptr [esi + 88h]
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 C2 57 08 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, ebp
        ; Exact mapped bytes 75 EB: jne 0x58883060
        __asm _emit 0x75
        __asm _emit 0xeb
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 0F 84 16 0C 00 00: je 0x58883c95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1132h
        ; Exact mapped bytes E8 61 8A EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x8a
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9A 1C EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x1c
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes E9 FA 0B 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 0F 84 F0 0B 00 00: je 0x58883c95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1138h
        ; Exact mapped bytes E8 3B 8A EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8a
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 1C EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1c
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes E9 D4 0B 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 75 0B: jne 0x588830d2
        __asm _emit 0x75
        __asm _emit 0x0b
        push edi
        ; Exact mapped bytes E8 53 F0 FF FF: call 0x58882120
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C3 0B 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 3F 02 00 00: jne 0x5888331b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 37 02 00 00: je 0x5888331b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 9D 0F 07 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 60 0B 00 00: je 0x58883c5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + 50h]
        test edx, edx
        ; Exact mapped bytes 0F 84 55 0B 00 00: je 0x58883c5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 4A 08: xor cx, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x4a
        __asm _emit 0x08
        movzx ecx, cx
        ; Exact mapped bytes 66 83 F9 64: cmp cx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x64
        ; Exact mapped bytes 72 83: jb 0x5888309b
        __asm _emit 0x72
        __asm _emit 0x83
        movzx edi, word ptr [edx + 0ch]
        movzx edx, word ptr [edx + 0ah]
        movzx ecx, cx
        xor edx, 0aah
        xor edi, 0aah
        push edi
        add edx, 64h
        sub ecx, 64h
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 01 9A EF FF: call 0x5877cb40
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [esi + 80h]
        push ebp
        mov ecx, esi
        mov dword ptr [esi + 84h], edx
        ; Exact mapped bytes E8 1D DE FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 264h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 0F 8E 12 FF FF FF: jle 0x58883075
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4E 78: mov word ptr [esi + 0x78], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x78
        mov dword ptr [esi + 80h], ecx
        lea edi, [esi + 244h]
        lea ebx, [ecx + 5]
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 71 56 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, ebp
        ; Exact mapped bytes 75 F2: jne 0x58883178
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [edx + 14h]
        test edi, edi
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x588832ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x588831a0
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588831A0 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_58882d80_segment_01() {
    __asm {
        mov eax, dword ptr [edi + 0ch]
        movzx ebp, word ptr [eax + 58h]
        lea ecx, [esp + 240h]
        push 5898c922h
        push ecx
        xor ebp, 0aah
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [edi + 0ch]
        mov eax, dword ptr [edx + 50h]
        add esp, 8
        push 0ffffffh
        push eax
        lea ecx, [esp + 248h]
        push ecx
        mov ecx, dword ptr [esi + 244h]
        ; Exact mapped bytes E8 EE 56 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 66 8B 42 5E: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        movzx ecx, al
        push 0ffffffh
        xor ecx, 0aah
        push ebx
        push ecx
        mov ecx, dword ptr [esi + 248h]
        ; Exact mapped bytes E8 88 59 08 00: call 0x58908b90
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        movzx eax, word ptr [ecx + 5eh]
        and eax, 0fh
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [ecx + 0a4h]
        shr eax, 1
        lea ecx, [eax + edx*8]
        imul ecx, ecx, 0e0h
        push 0ffffffh
        add ecx, 589cfca8h
        push 0
        push ecx
        mov ecx, dword ptr [esi + 250h]
        inc ebx
        ; Exact mapped bytes E8 8C 56 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 1c0h]
        push 0ffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 04: jne 0x5888325b
        __asm _emit 0x75
        __asm _emit 0x04
        push 8
        ; Exact mapped bytes EB 1B: jmp 0x58883276
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x5888326e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 23ch]
        mov edx, dword ptr [ecx + 6ch]
        push 9
        push edx
        ; Exact mapped bytes EB 12: jmp 0x58883280
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx ecx, word ptr [eax + 5eh]
        and ecx, 0fh
        push ecx
        mov edx, dword ptr [eax + 23ch]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [esi + 24ch]
        ; Exact mapped bytes E8 45 56 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, 64h
        ; Exact mapped bytes 73 0E: jae 0x5888329e
        __asm _emit 0x73
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f198h
        ; Exact mapped bytes EB 0C: jmp 0x588832aa
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 0ffffffh
        push 1
        push 5899f104h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 254h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 11 56 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 46 78: inc word ptr [esi + 0x78]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x46
        __asm _emit 0x78
        mov edi, dword ptr [edi + 8]
        test edi, edi
        ; Exact mapped bytes 0F 85 D2 FE FF FF: jne 0x588831a0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 6B 7F FF FF: call 0x5887b240
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 7E 11: jle 0x588832f0
        __asm _emit 0x7e
        __asm _emit 0x11
        nop
        mov ecx, esi
        ; Exact mapped bytes E8 49 8A FF FF: call 0x5887bd30
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        inc edi
        cmp edi, dword ptr [esi + 84h]
        ; Exact mapped bytes 7C F0: jl 0x588832e0
        __asm _emit 0x7c
        __asm _emit 0xf0
        lea edi, [esi + 244h]
        mov ebx, 5
        ; Exact mapped bytes EB 03: jmp 0x58883300
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883300 .. +0x26D bytes.
extern "C" __declspec(naked) void FUN_58882d80_segment_02() {
    __asm {
        mov ecx, dword ptr [esi + 88h]
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 22 55 08 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EA: jne 0x58883300
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes E9 5A FD FF FF: jmp 0x58883075
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 16h]
        add edx, -18h
        ; Exact mapped bytes 66 83 FA 07: cmp dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x07
        ; Exact mapped bytes 77 0F: ja 0x58883337
        __asm _emit 0x77
        __asm _emit 0x0f
        test edi, edi
        ; Exact mapped bytes 74 0B: je 0x58883337
        __asm _emit 0x74
        __asm _emit 0x0b
        push edi
        ; Exact mapped bytes E8 FE EE FF FF: call 0x58882230
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5E 09 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 29: cmp ax, 0x29
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x29
        ; Exact mapped bytes 0F 84 45 09 00 00: je 0x58883c86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 2A: cmp ax, 0x2a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2a
        ; Exact mapped bytes 75 08: jne 0x5888334f
        __asm _emit 0x75
        __asm _emit 0x08
        test edi, edi
        ; Exact mapped bytes 0F 85 37 09 00 00: jne 0x58883c86
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 2B: cmp ax, 0x2b
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2b
        ; Exact mapped bytes 0F 85 32 02 00 00: jne 0x5888358b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 2A 02 00 00: je 0x5888358b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 20 0D 07 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E3 08 00 00: je 0x58883c5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + 50h]
        test edx, edx
        ; Exact mapped bytes 0F 84 D8 08 00 00: je 0x58883c5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 4A 08: xor cx, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x4a
        __asm _emit 0x08
        movzx ecx, cx
        ; Exact mapped bytes 66 3B CD: cmp cx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 82 03 FD FF FF: jb 0x5888309b
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edi, word ptr [edx + 0ch]
        movzx edx, word ptr [edx + 0ah]
        movzx ecx, cx
        xor edx, 0aah
        xor edi, 0aah
        push edi
        add edx, ebp
        sub ecx, ebp
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 83 97 EF FF: call 0x5877cb40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x97
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [esi + 80h]
        push ebp
        mov ecx, esi
        mov dword ptr [esi + 84h], edx
        ; Exact mapped bytes E8 9F DB FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 264h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 0F 8E 94 FC FF FF: jle 0x58883075
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4E 78: mov word ptr [esi + 0x78], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x78
        mov dword ptr [esi + 80h], ecx
        lea edi, [esi + 244h]
        lea ebx, [ecx + 5]
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 F3 53 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, ebp
        ; Exact mapped bytes 75 F2: jne 0x588833f6
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [edx + 14h]
        test edi, edi
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x5888353d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        movzx ebp, word ptr [eax + 58h]
        lea ecx, [esp + 40h]
        push 5898c922h
        push ecx
        xor ebp, 0aah
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [edi + 0ch]
        mov eax, dword ptr [edx + 50h]
        add esp, 8
        push 0ffffffh
        push eax
        lea ecx, [esp + 48h]
        push ecx
        mov ecx, dword ptr [esi + 244h]
        ; Exact mapped bytes E8 7F 54 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 66 8B 42 5E: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        movzx ecx, al
        push 0ffffffh
        xor ecx, 0aah
        push ebx
        push ecx
        mov ecx, dword ptr [esi + 248h]
        ; Exact mapped bytes E8 19 57 08 00: call 0x58908b90
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        movzx eax, word ptr [ecx + 5eh]
        and eax, 0fh
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [ecx + 0a4h]
        shr eax, 1
        lea ecx, [eax + edx*8]
        imul ecx, ecx, 0e0h
        push 0ffffffh
        add ecx, 589cfca8h
        push 0
        push ecx
        mov ecx, dword ptr [esi + 250h]
        inc ebx
        ; Exact mapped bytes E8 1D 54 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 1c0h]
        push 0ffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 04: jne 0x588834ca
        __asm _emit 0x75
        __asm _emit 0x04
        push 8
        ; Exact mapped bytes EB 1B: jmp 0x588834e5
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x588834dd
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 23ch]
        mov edx, dword ptr [ecx + 6ch]
        push 9
        push edx
        ; Exact mapped bytes EB 12: jmp 0x588834ef
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx ecx, word ptr [eax + 5eh]
        and ecx, 0fh
        push ecx
        mov edx, dword ptr [eax + 23ch]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [esi + 24ch]
        ; Exact mapped bytes E8 D6 53 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, 1
        ; Exact mapped bytes 73 0E: jae 0x5888350d
        __asm _emit 0x73
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f198h
        ; Exact mapped bytes EB 0C: jmp 0x58883519
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 0ffffffh
        push 1
        push 5899f104h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 254h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 A2 53 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 46 78: inc word ptr [esi + 0x78]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x46
        __asm _emit 0x78
        mov edi, dword ptr [edi + 8]
        test edi, edi
        ; Exact mapped bytes 0F 85 D8 FE FF FF: jne 0x58883415
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 FC 7C FF FF: call 0x5887b240
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 7E 12: jle 0x58883560
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edi, edi
        mov ecx, esi
        ; Exact mapped bytes E8 D9 87 FF FF: call 0x5887bd30
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        inc edi
        cmp edi, dword ptr [esi + 84h]
        ; Exact mapped bytes 7C F0: jl 0x58883550
        __asm _emit 0x7c
        __asm _emit 0xf0
        lea edi, [esi + 244h]
        mov ebx, 5
        ; Exact mapped bytes EB 03: jmp 0x58883570
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883570 .. +0x6CD bytes.
extern "C" __declspec(naked) void FUN_58882d80_segment_03() {
    __asm {
        mov ecx, dword ptr [esi + 88h]
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 B2 52 08 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EA: jne 0x58883570
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes E9 EA FA FF FF: jmp 0x58883075
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 75 14: jne 0x588835a5
        __asm _emit 0x75
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 74 10: je 0x588835a5
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 0F BE 17: movsx edx, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x17
        push 2
        push edx
        ; Exact mapped bytes E8 F0 E6 FF FF: call 0x58881c90
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F0 06 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 11: cmp ax, 0x11
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x11
        ; Exact mapped bytes 75 14: jne 0x588835bf
        __asm _emit 0x75
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 74 10: je 0x588835bf
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        push 5
        push eax
        ; Exact mapped bytes E8 D6 E6 FF FF: call 0x58881c90
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D6 06 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 12: cmp ax, 0x12
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x12
        ; Exact mapped bytes 75 16: jne 0x588835db
        __asm _emit 0x75
        __asm _emit 0x16
        test edi, edi
        ; Exact mapped bytes 74 12: je 0x588835db
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE 0F: movsx ecx, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0f
        push 8
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 BA E6 FF FF: call 0x58881c90
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BA 06 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 13: cmp ax, 0x13
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x13
        ; Exact mapped bytes 75 14: jne 0x588835f5
        __asm _emit 0x75
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 74 10: je 0x588835f5
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 0F BE 17: movsx edx, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x17
        push 3
        push edx
        ; Exact mapped bytes E8 A0 E6 FF FF: call 0x58881c90
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A0 06 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 14: cmp ax, 0x14
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x14
        ; Exact mapped bytes 75 14: jne 0x5888360f
        __asm _emit 0x75
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 74 10: je 0x5888360f
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        push 6
        push eax
        ; Exact mapped bytes E8 86 E6 FF FF: call 0x58881c90
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 86 06 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 15: cmp ax, 0x15
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x15
        ; Exact mapped bytes 0F 85 15 03 00 00: jne 0x5888392e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 0D 03 00 00: je 0x5888392e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 60 0A 07 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 23 06 00 00: je 0x58883c5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + 50h]
        test edx, edx
        ; Exact mapped bytes 0F 84 18 06 00 00: je 0x58883c5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 0aah
        ; Exact mapped bytes 66 33 7A 0A: xor di, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x7a
        __asm _emit 0x0a
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 4A 08: xor cx, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x4a
        __asm _emit 0x08
        movzx edi, di
        mov ebx, 0aah
        ; Exact mapped bytes 66 33 5A 0C: xor bx, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x5a
        __asm _emit 0x0c
        movzx ecx, cx
        movzx edx, bx
        ; Exact mapped bytes 66 83 FF 0A: cmp di, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 82 AC 02 00 00: jb 0x5888391d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, dx
        add edx, 0ah
        push edx
        movzx edx, di
        movzx ecx, cx
        sub edx, 0ah
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B6 94 EF FF: call 0x5877cb40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x94
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [esi + 80h]
        push ebp
        mov ecx, esi
        mov dword ptr [esi + 84h], edx
        ; Exact mapped bytes E8 D2 D8 FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 264h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 0F 8E 49 02 00 00: jle 0x588838f7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        xor ebp, ebp
        ; Exact mapped bytes 66 89 4E 78: mov word ptr [esi + 0x78], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x78
        mov dword ptr [esi + 80h], ebp
        lea edi, [esi + 244h]
        lea ebx, [ecx + 5]
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 24 51 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x588836c5
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [edx + 14h]
        mov dword ptr [esp + 10h], ebp
        cmp edi, ebp
        ; Exact mapped bytes 0F 84 CC 01 00 00: je 0x588838b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        movzx ebx, word ptr [eax + 7ah]
        movzx ecx, word ptr [eax + 5ah]
        movzx eax, word ptr [eax + 5ch]
        xor ebx, 0aah
        xor ecx, 0aah
        xor eax, 0aah
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 1ch], eax
        test ebx, ebx
        ; Exact mapped bytes 77 05: ja 0x58883721
        __asm _emit 0x77
        __asm _emit 0x05
        mov ebx, 1
        mov ecx, ebx
        imul ecx, ecx, 2dh
        mov eax, 51eb851fh
        mul ecx
        mov ebp, edx
        lea edx, [esp + 140h]
        push 5898c922h
        push edx
        shr ebp, 5
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 50h]
        add esp, 8
        push 0ffffffh
        push ecx
        mov ecx, dword ptr [esi + 244h]
        lea edx, [esp + 148h]
        push edx
        ; Exact mapped bytes E8 69 51 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 248h]
        push 0ffffffh
        push eax
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        movzx eax, dl
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 00 54 08 00: call 0x58908b90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        movzx eax, word ptr [ecx + 5eh]
        inc dword ptr [esp + 10h]
        and eax, 0fh
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [ecx + 0a4h]
        shr eax, 1
        lea ecx, [eax + edx*8]
        imul ecx, ecx, 0e0h
        push 0ffffffh
        add ecx, 589cfca8h
        push 0
        push ecx
        mov ecx, dword ptr [esi + 250h]
        ; Exact mapped bytes E8 01 51 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 1c0h]
        push 0ffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 04: jne 0x588837e6
        __asm _emit 0x75
        __asm _emit 0x04
        push 8
        ; Exact mapped bytes EB 1B: jmp 0x58883801
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x588837f9
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 23ch]
        mov edx, dword ptr [ecx + 6ch]
        push 9
        push edx
        ; Exact mapped bytes EB 12: jmp 0x5888380b
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx ecx, word ptr [eax + 5eh]
        and ecx, 0fh
        push ecx
        mov edx, dword ptr [eax + 23ch]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [esi + 24ch]
        ; Exact mapped bytes E8 BA 50 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        lea ecx, [eax + 0ah]
        cmp ecx, ebp
        ; Exact mapped bytes 76 0E: jbe 0x5888382f
        __asm _emit 0x76
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f180h
        ; Exact mapped bytes EB 62: jmp 0x58883891
        __asm _emit 0xeb
        __asm _emit 0x62
        cmp dword ptr [esp + 14h], 0ah
        ; Exact mapped bytes 73 0E: jae 0x58883844
        __asm _emit 0x73
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f148h
        ; Exact mapped bytes EB 4D: jmp 0x58883891
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 06: jge 0x58883856
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        test ebx, ebx
        ; Exact mapped bytes 7D 06: jge 0x58883868
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 18 F1 99 58: fmul qword ptr [0x5899f118]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xf1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 5
        ; Exact mapped bytes 7A 0E: jp 0x58883885
        __asm _emit 0x7a
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f164h
        ; Exact mapped bytes EB 0C: jmp 0x58883891
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 0ffffffh
        push 1
        push 5899f104h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 254h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 2A 50 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 46 78: inc word ptr [esi + 0x78]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x46
        __asm _emit 0x78
        mov edi, dword ptr [edi + 8]
        test edi, edi
        ; Exact mapped bytes 0F 85 3B FE FF FF: jne 0x588836f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 84 79 FF FF: call 0x5887b240
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 7E 10: jle 0x588838d6
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, esi
        ; Exact mapped bytes E8 63 84 FF FF: call 0x5887bd30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        inc edi
        cmp edi, dword ptr [esi + 84h]
        ; Exact mapped bytes 7C F0: jl 0x588838c6
        __asm _emit 0x7c
        __asm _emit 0xf0
        lea edi, [esi + 244h]
        mov ebx, 5
        mov edx, dword ptr [esi + 88h]
        mov ecx, dword ptr [edi]
        push edx
        ; Exact mapped bytes E8 41 4F 08 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4f
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EA: jne 0x588838e1
        __asm _emit 0x75
        __asm _emit 0xea
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 0F 84 94 03 00 00: je 0x58883c95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1131h
        ; Exact mapped bytes E8 DF 81 EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x81
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 14 EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes E9 78 03 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1139h
        mov ecx, esi
        ; Exact mapped bytes E8 C7 6A FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 67 03 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 2C: cmp ax, 0x2c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2c
        ; Exact mapped bytes 75 14: jne 0x58883948
        __asm _emit 0x75
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 74 10: je 0x58883948
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        push 4
        push eax
        ; Exact mapped bytes E8 4D E3 FF FF: call 0x58881c90
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4D 03 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 2D: cmp ax, 0x2d
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2d
        ; Exact mapped bytes 75 16: jne 0x58883964
        __asm _emit 0x75
        __asm _emit 0x16
        test edi, edi
        ; Exact mapped bytes 74 12: je 0x58883964
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE 0F: movsx ecx, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0f
        push 7
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 31 E3 FF FF: call 0x58881c90
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 31 03 00 00: jmp 0x58883c95
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 2E: cmp ax, 0x2e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2e
        ; Exact mapped bytes 0F 85 0C 03 00 00: jne 0x58883c7a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 04 03 00 00: je 0x58883c7a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 0B 07 07 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 CE 02 00 00: je 0x58883c5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + 50h]
        test edx, edx
        ; Exact mapped bytes 0F 84 C3 02 00 00: je 0x58883c5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 0aah
        ; Exact mapped bytes 66 33 7A 0A: xor di, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x7a
        __asm _emit 0x0a
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 4A 08: xor cx, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x4a
        __asm _emit 0x08
        movzx edi, di
        mov ebx, 0aah
        ; Exact mapped bytes 66 33 5A 0C: xor bx, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x5a
        __asm _emit 0x0c
        movzx ecx, cx
        movzx edx, bx
        ; Exact mapped bytes 66 83 FF 0A: cmp di, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 82 57 FF FF FF: jb 0x5888391d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, dx
        add edx, 0ah
        push edx
        movzx edx, di
        movzx ecx, cx
        sub edx, 0ah
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 61 91 EF FF: call 0x5877cb40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x91
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [esi + 80h]
        push ebp
        mov ecx, esi
        mov dword ptr [esi + 84h], edx
        ; Exact mapped bytes E8 7D D5 FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 264h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 0F 8E F4 FE FF FF: jle 0x588838f7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        xor ebp, ebp
        ; Exact mapped bytes 66 89 4E 78: mov word ptr [esi + 0x78], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x78
        mov dword ptr [esi + 80h], ebp
        lea edi, [esi + 244h]
        lea ebx, [ecx + 5]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 C9 4D 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x58883a20
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [edx + 14h]
        mov dword ptr [esp + 10h], ebp
        cmp edi, ebp
        ; Exact mapped bytes 0F 84 C5 01 00 00: je 0x58883c09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        movzx ebx, word ptr [eax + 7ah]
        movzx ecx, word ptr [eax + 5ah]
        movzx eax, word ptr [eax + 5ch]
        xor ebx, 0aah
        xor ecx, 0aah
        xor eax, 0aah
        mov dword ptr [esp + 1ch], ecx
        mov dword ptr [esp + 14h], eax
        test ebx, ebx
        ; Exact mapped bytes 77 05: ja 0x58883a75
        __asm _emit 0x77
        __asm _emit 0x05
        mov ebx, 1
        mov ecx, ebx
        imul ecx, ecx, 32h
        mov eax, 51eb851fh
        mul ecx
        mov ebp, edx
        lea edx, [esp + 340h]
        push 5898c922h
        push edx
        shr ebp, 5
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 50h]
        add esp, 8
        push 0ffffffh
        push ecx
        mov ecx, dword ptr [esi + 244h]
        lea edx, [esp + 348h]
        push edx
        ; Exact mapped bytes E8 15 4E 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4e
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 248h]
        push 0ffffffh
        push eax
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        movzx eax, dl
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 AC 50 08 00: call 0x58908b90
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        movzx eax, word ptr [ecx + 5eh]
        inc dword ptr [esp + 10h]
        and eax, 0fh
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [ecx + 0a4h]
        shr eax, 1
        lea ecx, [eax + edx*8]
        imul ecx, ecx, 0e0h
        push 0ffffffh
        add ecx, 589cfca8h
        push 0
        push ecx
        mov ecx, dword ptr [esi + 250h]
        ; Exact mapped bytes E8 AD 4D 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 1c0h]
        push 0ffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 04: jne 0x58883b3a
        __asm _emit 0x75
        __asm _emit 0x04
        push 8
        ; Exact mapped bytes EB 1B: jmp 0x58883b55
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x58883b4d
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 23ch]
        mov edx, dword ptr [ecx + 6ch]
        push 9
        push edx
        ; Exact mapped bytes EB 12: jmp 0x58883b5f
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx ecx, word ptr [eax + 5eh]
        and ecx, 0fh
        push ecx
        mov edx, dword ptr [eax + 23ch]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [esi + 24ch]
        ; Exact mapped bytes E8 66 4D 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        lea ecx, [eax + 0ah]
        cmp ecx, ebp
        ; Exact mapped bytes 76 0E: jbe 0x58883b83
        __asm _emit 0x76
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f180h
        ; Exact mapped bytes EB 62: jmp 0x58883be5
        __asm _emit 0xeb
        __asm _emit 0x62
        cmp dword ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 73 0E: jae 0x58883b98
        __asm _emit 0x73
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f148h
        ; Exact mapped bytes EB 4D: jmp 0x58883be5
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 06: jge 0x58883baa
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        test ebx, ebx
        ; Exact mapped bytes 7D 06: jge 0x58883bbc
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 60 CF 98 58: fmul qword ptr [0x5898cf60]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 5
        ; Exact mapped bytes 7A 0E: jp 0x58883bd9
        __asm _emit 0x7a
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f164h
        ; Exact mapped bytes EB 0C: jmp 0x58883be5
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 0ffffffh
        push 1
        push 5899f104h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 254h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 D6 4C 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 46 78: inc word ptr [esi + 0x78]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x46
        __asm _emit 0x78
        mov edi, dword ptr [edi + 8]
        test edi, edi
        ; Exact mapped bytes 0F 85 3B FE FF FF: jne 0x58883a44
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 30 76 FF FF: call 0x5887b240
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 7E 16: jle 0x58883c30
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 09 81 FF FF: call 0x5887bd30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        inc edi
        cmp edi, dword ptr [esi + 84h]
        ; Exact mapped bytes 7C F0: jl 0x58883c20
        __asm _emit 0x7c
        __asm _emit 0xf0
        lea edi, [esi + 244h]
        mov ebx, 5
        ; Exact mapped bytes EB 03: jmp 0x58883c40
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883C40 .. +0x197 bytes.
extern "C" __declspec(naked) void FUN_58882d80_segment_04() {
    __asm {
        mov edx, dword ptr [esi + 88h]
        mov ecx, dword ptr [edi]
        push edx
        ; Exact mapped bytes E8 E2 4B 08 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4b
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EA: jne 0x58883c40
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes E9 9C FC FF FF: jmp 0x588838f7
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 34: je 0x58883c95
        __asm _emit 0x74
        __asm _emit 0x34
        push 0
        push 0
        push 0
        push 1135h
        ; Exact mapped bytes E8 7F 7E EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7e
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B8 10 EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x10
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 1B: jmp 0x58883c95
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 0fa2h
        ; Exact mapped bytes E8 6C 67 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0F: jmp 0x58883c95
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 0F BE 0F: movsx ecx, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0f
        movzx eax, ax
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 9B E1 FF FF: call 0x58881e30
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 5
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x58883dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 244h]
        ; Exact mapped bytes E8 CB 61 ED FF: call 0x58759e90
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x61
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 BF 03 07 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x58883dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 0
        push eax
        ; Exact mapped bytes E8 B9 C2 FE FF: call 0x5886ffa0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [esi + 0c8h]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x58883dbc
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 264h]
        mov edi, dword ptr [ecx + 64h]
        mov ebx, dword ptr [esp + 452h]
        xor eax, eax
        push 0ah
        push 20h
        lea edx, [esp + 28h]
        push edx
        mov dword ptr [esp + 2dh], eax
        mov dword ptr [esp + 31h], eax
        mov dword ptr [esp + 35h], eax
        mov dword ptr [esp + 39h], eax
        mov dword ptr [esp + 3dh], eax
        mov dword ptr [esp + 41h], eax
        mov dword ptr [esp + 45h], eax
        ; Exact mapped bytes 66 89 44 24 49: mov word ptr [esp + 0x49], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x49
        mov byte ptr [esp + 4bh], al
        push 0
        mov eax, edi
        cdq
        push 3e8h
        push edx
        push eax
        dec ebx
        mov byte ptr [esp + 3ch], 0
        ; Exact mapped bytes E8 EE 93 0F 00: call 0x5897d140
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x93
        __asm _emit 0x0f
        __asm _emit 0x00
        push edx
        push eax
        ; Exact mapped bytes E8 D7 93 0F 00: call 0x5897d130
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x93
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 14h
        push 20h
        lea eax, [esp + 24h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 46 75 FF FF: call 0x5887b2b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 FB 03: cmp bx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x03
        ; Exact mapped bytes 75 1E: jne 0x58883d8e
        __asm _emit 0x75
        __asm _emit 0x1e
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 F8 D1 FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 3E: je 0x58883dbc
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0
        push 0
        lea ecx, [esp + 28h]
        push ecx
        push 1195h
        ; Exact mapped bytes EB 22: jmp 0x58883db0
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 66 83 FB 04: cmp bx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x04
        ; Exact mapped bytes 75 28: jne 0x58883dbc
        __asm _emit 0x75
        __asm _emit 0x28
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 D4 D1 FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 1A: je 0x58883dbc
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        push 0
        lea edx, [esp + 28h]
        push edx
        push 1196h
        ; Exact mapped bytes E8 3B 7D EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7d
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 0F EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x0f
        __asm _emit 0xee
        __asm _emit 0xff
        pop ebx
        mov ecx, dword ptr [esp + 43ch]
        pop edi
        pop esi
        pop ebp
        xor ecx, esp
        ; Exact mapped bytes E8 0C 8E 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 434h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
