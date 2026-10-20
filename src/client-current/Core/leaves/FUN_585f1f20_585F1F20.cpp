// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F1F20 .. +0x37F bytes.
extern "C" __declspec(naked) void FUN_585f1f20_585F1F20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 A1 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa1
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 110h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        sub edx, 4
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0ch
        ; Exact mapped bytes 0F 87 EA 02 00 00: ja 0x585f2256
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 24 85 A0 22 5F 58: jmp dword ptr [eax*4 + 0x585f22a0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x22
        __asm _emit 0x5f
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 52 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x52
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 1
        ; Exact mapped bytes 74 1D: je 0x585f1fad
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0f4241h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 F1 F6 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 2A E9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x2a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 A0 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa0
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 7C 09: jl 0x585f1fc6
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 22: jmp 0x585f1fe8
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 25 52 EE FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x52
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        push 1d6h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8F 6D EE FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 B3 02 00 00: jmp 0x585f229b
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 69 02 00 00: jmp 0x585f2256
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 51 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, word ptr [eax + 38h]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 4
        ; Exact mapped bytes 77 35: ja 0x585f2041
        __asm _emit 0x77
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 8D D4 22 5F 58: jmp dword ptr [ecx*4 + 0x585f22d4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x22
        __asm _emit 0x5f
        __asm _emit 0x58
        mov dword ptr [ebp - 8], 0eh
        ; Exact mapped bytes EB 22: jmp 0x585f2041
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 8], 8
        ; Exact mapped bytes EB 19: jmp 0x585f2041
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 8], 0ch
        ; Exact mapped bytes EB 10: jmp 0x585f2041
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 8], 10h
        ; Exact mapped bytes EB 07: jmp 0x585f2041
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0eh
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 A0 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa0
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 72 09: jb 0x585f205a
        __asm _emit 0x72
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 22: jmp 0x585f207c
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 91 51 EE FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        push 0
        push 1d6h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 FB 6C EE FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 1F 02 00 00: jmp 0x585f229b
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D5 01 00 00: jmp 0x585f2256
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 51 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [eax + 3ch]
        and edx, 1
        ; Exact mapped bytes 74 1D: je 0x585f20b8
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0f4241h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 F0 F6 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8E 29 E9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x29
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 9F E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x9f
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 10h
        ; Exact mapped bytes 7C 09: jl 0x585f20d1
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 22: jmp 0x585f20f3
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 1A 51 EE FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 0
        push 0
        push 0
        push 1d6h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 84 6C EE FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 A8 01 00 00: jmp 0x585f229b
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x585f2256
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 50 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x50
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 1
        ; Exact mapped bytes 74 1D: je 0x585f212f
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0f4241h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E EF F6 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xef
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 29 E9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x29
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 9F E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x9f
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ch
        ; Exact mapped bytes 7C 09: jl 0x585f2148
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 22: jmp 0x585f216a
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 A3 50 EE FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        push 0
        push 1d6h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0D 6C EE FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 31 01 00 00: jmp 0x585f229b
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x585f2256
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 9D E9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x585f2198
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9B 9F E9 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 22: je 0x585f21c0
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0A AE E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xae
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x585f21b5
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 09: jmp 0x585f21be
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB CD: jmp 0x585f218d
        __asm _emit 0xeb
        __asm _emit 0xcd
        cmp dword ptr [ebp - 20h], 0ah
        ; Exact mapped bytes 7C 0F: jl 0x585f21d5
        __asm _emit 0x7c
        __asm _emit 0x0f
        cmp dword ptr [ebp - 24h], 0ah
        ; Exact mapped bytes 7C 09: jl 0x585f21d5
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 22: jmp 0x585f21f7
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 16 50 EE FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x50
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        push 0
        push 1d6h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 80 6B EE FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x585f229b
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5D: jmp 0x585f2256
        __asm _emit 0xeb
        __asm _emit 0x5d
        push 10h
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 29 DE FF FF: call 0x585f0030
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 4A: jmp 0x585f2256
        __asm _emit 0xeb
        __asm _emit 0x4a
        push 0eh
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 16 DE FF FF: call 0x585f0030
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 37: jmp 0x585f2256
        __asm _emit 0xeb
        __asm _emit 0x37
        push 0eh
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 03 DE FF FF: call 0x585f0030
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 24: jmp 0x585f2256
        __asm _emit 0xeb
        __asm _emit 0x24
        push 0eh
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F0 DD FF FF: call 0x585f0030
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 11: jmp 0x585f2256
        __asm _emit 0xeb
        __asm _emit 0x11
        push 0eh
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DD DD FF FF: call 0x585f0030
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x585f2261
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 3A: jmp 0x585f229b
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A7 FA FF FF: call 0x585f1d10
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x585f2276
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 22: jmp 0x585f2298
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 75 4F EE FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4f
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        push 0
        push 0
        push 1d7h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 DF 6A EE FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6a
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
