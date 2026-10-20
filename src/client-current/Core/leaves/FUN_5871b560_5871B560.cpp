// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871B560 .. +0xC4D bytes.
extern "C" __declspec(naked) void FUN_5871b560_5871B560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0cch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 19eh]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 9F 0B 00 00: jne 0x5871c11e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 09 0B 00 00: jne 0x5871c092
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0b4h]
        ; Exact mapped bytes 0F 85 FD 06 00 00: jne 0x5871bc98
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 24h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        ; Exact mapped bytes E8 30 E1 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe1
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E 7F 02 00 00: jle 0x5871b847
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5871b5da
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 FF E0 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe0
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 0F 8D 4D 02 00 00: jge 0x5871b847
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 45 55 0A 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 08 01 00 00: jne 0x5871b72c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5871b636
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 8
        ; Exact mapped bytes 0F 8D DE 00 00 00: jge 0x5871b71e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [ebp - 4ch], eax
        movzx ecx, byte ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 17 92 00 00: call 0x58724870
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 10 7D DA FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x7d
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + edx*4 + 154h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        shr edx, 10h
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 B0 DD FF: call 0x584f66d0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5871b719
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 554h], 1
        ; Exact mapped bytes 74 77: je 0x5871b719
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 0F B6 0D 9F 75 94 58: movzx ecx, byte ptr [0x5894759f]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x9f
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 4A: je 0x5871b6f7
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 1ch]
        shr edx, 10h
        movzx eax, dx
        cmp eax, 3
        ; Exact mapped bytes 75 18: jne 0x5871b6d3
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffffh
        movzx edx, cx
        cmp edx, 0ah
        ; Exact mapped bytes 74 07: je 0x5871b6d3
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x5871b62d
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x5871b6f5
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 18 BB DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xbb
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0
        push 0
        push 0
        push 1b8h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 82 D6 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd6
        __asm _emit 0xdb
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 B5 0A 00 00: jmp 0x5871c1aa
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x5871b719
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 F4 BA DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 0
        push 0
        push 0
        push 1b8h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 5E D6 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd6
        __asm _emit 0xdb
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 91 0A 00 00: jmp 0x5871c1aa
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x5871b62d
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes E9 16 01 00 00: jmp 0x5871b842
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 13 54 0A 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x5871b842
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 164h]
        mov dword ptr [ebp - 5ch], ecx
        movzx edx, byte ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 31 BE 00 00: call 0x587275a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EA 92 D6 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x92
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx eax, word ptr [eax + 48h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 38h]
        shr edx, 10h
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 AF DD FF: call 0x584f66d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2E: je 0x5871b7d0
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 554h], 1
        ; Exact mapped bytes 74 22: je 0x5871b7d0
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 3D BA DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xba
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        push 0
        push 0
        push 0
        push 1b8h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 A7 D5 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 DA 09 00 00: jmp 0x5871c1aa
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x5871b7e2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 6
        ; Exact mapped bytes 7D 51: jge 0x5871b839
        __asm _emit 0x7d
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 164h]
        mov dword ptr [ebp - 64h], eax
        movzx ecx, byte ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 9F BD 00 00: call 0x587275a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 58 92 D6 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x92
        __asm _emit 0xd6
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 20h], 0ch
        movzx eax, word ptr [eax + edx + 5ah]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x5871b837
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 D6 B9 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb9
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 0
        push 0
        push 0
        push 1268h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 40 D5 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 73 09 00 00: jmp 0x5871c1aa
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A0: jmp 0x5871b7d9
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes E9 8A FD FF FF: jmp 0x5871b5d1
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 5E 9F D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 50 9F D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x9f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes E8 3F 9F D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x9f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 2E 9F D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x9f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 42: jne 0x5871b8cd
        __asm _emit 0x75
        __asm _emit 0x42
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 3C: jne 0x5871b8cd
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e4h]
        ; Exact mapped bytes E8 48 DE E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xde
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x5871b8cd
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 3F B9 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb9
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 0
        push 0
        push 0
        push 194h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 A9 D4 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd4
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C6 03 00 00: jmp 0x5871bc93
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 04 96 58: mov eax, dword ptr [0x589604f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 70h]
        cmp eax, ecx
        ; Exact mapped bytes 72 16: jb 0x5871b8f7
        __asm _emit 0x72
        __asm _emit 0x16
        ; Exact mapped bytes 8B 15 FC 04 96 58: mov edx, dword ptr [0x589604fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 2ch]
        add eax, dword ptr [ebp - 74h]
        cmp edx, eax
        ; Exact mapped bytes 73 21: jae 0x5871b918
        __asm _emit 0x73
        __asm _emit 0x21
        ; Exact mapped bytes E8 F4 B8 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb8
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        push 0
        push 0
        push 0
        push 198h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 5E D4 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd4
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7B 03 00 00: jmp 0x5871bc93
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 0
        mov dword ptr [ebp - 3ch], 249f0h
        mov dword ptr [ebp - 40h], 249f0h
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 DC DC FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xdc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5871b948
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 6B 07 D7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x07
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 31: je 0x5871b97f
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8A 05 D7 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 43 D9 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x43
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        cmp ecx, 1eh
        ; Exact mapped bytes 7C 15: jl 0x5871b97d
        __asm _emit 0x7c
        __asm _emit 0x15
        mov dword ptr [ebp - 3ch], 0c350h
        mov dword ptr [ebp - 40h], 0c350h
        mov dword ptr [ebp - 44h], 1
        ; Exact mapped bytes EB BE: jmp 0x5871b93d
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes 8B 35 F8 04 96 58: mov esi, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a8h]
        ; Exact mapped bytes E8 17 9E D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x9e
        __asm _emit 0xd7
        __asm _emit 0xff
        sub esi, eax
        cmp esi, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F 8E A3 02 00 00: jle 0x5871bc47
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 FC 04 96 58: mov esi, dword ptr [0x589604fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, 55555555h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 F2 9D D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x9d
        __asm _emit 0xd7
        __asm _emit 0xff
        sub esi, eax
        cmp esi, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F 86 7E 02 00 00: jbe 0x5871bc47
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 7ch], edx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 61 3E D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x3e
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 80h], ecx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 EB A3 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 CF A3 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 88h], edx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 B3 A3 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 8ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 97 A3 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 7B A3 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 198h]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 5F A3 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 43 A3 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 3B DC E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xdc
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E 70 01 00 00: jle 0x5871bc2d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 1C DC E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xdc
        __asm _emit 0xe0
        __asm _emit 0xff
        imul eax, eax, 3
        add eax, 1
        mov edx, 2
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 53 55 11 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x55
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e4h]
        ; Exact mapped bytes E8 D8 DB E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xdb
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 04 11: mov word ptr [ecx + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5871bb39
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e4h]
        ; Exact mapped bytes E8 A0 DB E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xdb
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 79: jge 0x5871bbce
        __asm _emit 0x7d
        __asm _emit 0x79
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 E4 4F 0A 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x4f
        __asm _emit 0x0a
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 3
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 44 51 02: mov word ptr [ecx + edx*2 + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x02
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 B1 4F 0A 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x4f
        __asm _emit 0x0a
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 3
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 44 4A 04: mov word ptr [edx + ecx*2 + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x04
        imul eax, dword ptr [ebp - 8], 3
        xor ecx, ecx
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 4C 42 06: mov word ptr [edx + eax*2 + 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x06
        ; Exact mapped bytes E9 62 FF FF FF: jmp 0x5871bb30
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e4h]
        ; Exact mapped bytes E8 0B DB E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xdb
        __asm _emit 0xe0
        __asm _emit 0xff
        imul eax, eax, 3
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 0a8h], ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 28 E6 FF: call 0x5857e450
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ach], eax
        push 2
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        ; Exact mapped bytes E8 0C 54 11 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 18: jmp 0x5871bc45
        __asm _emit 0xeb
        __asm _emit 0x18
        push 0
        push 0
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 28 E6 FF: call 0x5857e450
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x28
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4C: jmp 0x5871bc93
        __asm _emit 0xeb
        __asm _emit 0x4c
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 24: je 0x5871bc71
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes E8 9E B5 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        push 0
        push 0
        push 0
        push 193h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 02 D1 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd1
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x5871bc93
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 7A B5 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        push 0
        push 0
        push 0
        push 1b4h
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 DE D0 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd0
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F5 03 00 00: jmp 0x5871c08d
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0b8h]
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x5871bd4b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 CA A2 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa2
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 5E 3B D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 E2 A0 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa0
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 19ch]
        cmp ecx, 4
        ; Exact mapped bytes 75 0E: jne 0x5871bd1c
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 26 E6 FF: call 0x5857e410
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x26
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2A: jmp 0x5871bd46
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 19ch]
        cmp eax, 7
        ; Exact mapped bytes 75 1B: jne 0x5871bd46
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, 9
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 9C 01 00 00: mov word ptr [edx + 0x19c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 30 E6 FF: call 0x5857edb0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x30
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 42 03 00 00: jmp 0x5871c08d
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes 75 50: jne 0x5871bda9
        __asm _emit 0x75
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1d0h], 0
        ; Exact mapped bytes 75 3F: jne 0x5871bda4
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 B2 DB FF: call 0x584d6f90
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb2
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 74 23: je 0x5871bd9b
        __asm _emit 0x74
        __asm _emit 0x23
        push 3
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB CF DB FF: call 0x584d8d50
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xcf
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 09: jmp 0x5871bda4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 46 00 00: call 0x587203d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E4 02 00 00: jmp 0x5871c08d
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0c0h]
        ; Exact mapped bytes 75 3C: jne 0x5871bdf3
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 0c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 0D A0 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, 8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 9C 01 00 00: mov word ptr [eax + 0x19c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 2F E6 FF: call 0x5857edb0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2f
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9A 02 00 00: jmp 0x5871c08d
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes 75 4D: jne 0x5871be4e
        __asm _emit 0x75
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 19ch]
        test ecx, ecx
        ; Exact mapped bytes 74 2C: je 0x5871be3b
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 19ch]
        cmp eax, 1
        ; Exact mapped bytes 74 1D: je 0x5871be3b
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, 6
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 9C 01 00 00: mov word ptr [edx + 0x19c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 2F E6 FF: call 0x5857ede0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2f
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0E: jmp 0x5871be49
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 3F 02 00 00: jmp 0x5871c08d
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes 75 1F: jne 0x5871be7b
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 19ch]
        cmp ecx, 3
        ; Exact mapped bytes 75 0B: jne 0x5871be76
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB F0 FF FF: call 0x5871af40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 12 02 00 00: jmp 0x5871c08d
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0cch]
        ; Exact mapped bytes 75 1F: jne 0x5871bea8
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 19ch]
        cmp edx, 3
        ; Exact mapped bytes 75 0B: jne 0x5871bea3
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 49 00 00: call 0x58720850
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E5 01 00 00: jmp 0x5871c08d
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0d0h]
        ; Exact mapped bytes 75 1F: jne 0x5871bed5
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 19ch]
        cmp eax, 3
        ; Exact mapped bytes 75 0B: jne 0x5871bed0
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 F1 FF FF: call 0x5871b010
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B8 01 00 00: jmp 0x5871c08d
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0d4h]
        ; Exact mapped bytes 75 1F: jne 0x5871bf02
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 19ch]
        cmp ecx, 3
        ; Exact mapped bytes 75 0B: jne 0x5871befd
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 49 00 00: call 0x58720880
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8B 01 00 00: jmp 0x5871c08d
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 198h]
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x5871bfef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 19ch]
        cmp edx, 3
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x5871bfea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 9E 01 00 00: mov word ptr [ecx + 0x19e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 1C D3 D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd3
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 74 16: je 0x5871bf62
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 06 D3 D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd3
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 1A: jne 0x5871bf7c
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 170h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        ; Exact mapped bytes E8 D6 D2 D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd2
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 74 16: je 0x5871bfa8
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 16ch]
        ; Exact mapped bytes E8 C0 D2 D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd2
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 1A: jne 0x5871bfc2
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 16ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 168h]
        ; Exact mapped bytes E8 60 BF D6 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xbf
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x5871c08d
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 190h]
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x5871c08d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 19ch]
        cmp ecx, 3
        ; Exact mapped bytes 75 7D: jne 0x5871c08d
        __asm _emit 0x75
        __asm _emit 0x7d
        mov edx, 2
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 9E 01 00 00: mov word ptr [eax + 0x19e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 16ch]
        ; Exact mapped bytes E8 33 D2 D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd2
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 74 16: je 0x5871c04b
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        ; Exact mapped bytes E8 1D D2 D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd2
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 1A: jne 0x5871c065
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 16ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 16ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 164h]
        ; Exact mapped bytes E8 BD BE D6 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xbe
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 164h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 164h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x5871c119
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 02: jne 0x5871c09a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 7F: jmp 0x5871c119
        __asm _emit 0xeb
        __asm _emit 0x7f
        cmp dword ptr [ebp + 0ch], 0f235h
        ; Exact mapped bytes 75 76: jne 0x5871c119
        __asm _emit 0x75
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 BF D5 E6 FF: call 0x58589670
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd5
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        push 588b4000h
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x5871c0df
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0c8h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 B4 F0 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3A: jmp 0x5871c119
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 83 D5 E6 FF: call 0x58589670
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd5
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        push 588b4008h
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x5871c119
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0cch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 78 F0 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x5871c1a8
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 19eh]
        cmp edx, 1
        ; Exact mapped bytes 74 1E: je 0x5871c14b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 19eh]
        cmp ecx, 2
        ; Exact mapped bytes 74 0F: je 0x5871c14b
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 19eh]
        cmp eax, 3
        ; Exact mapped bytes 75 5D: jne 0x5871c1a8
        __asm _emit 0x75
        __asm _emit 0x5d
        cmp dword ptr [ebp + 0ch], 0ee48h
        ; Exact mapped bytes 75 54: jne 0x5871c1a8
        __asm _emit 0x75
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 75 1D: jne 0x5871c17f
        __asm _emit 0x75
        __asm _emit 0x1d
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 9E 01 00 00: mov word ptr [ecx + 0x19e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x5871c17d
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 37 00 00: call 0x5871f960
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 29: jmp 0x5871c1a8
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 164h]
        ; Exact mapped bytes 75 1B: jne 0x5871c1a8
        __asm _emit 0x75
        __asm _emit 0x1b
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 9E 01 00 00: mov word ptr [edx + 0x19e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x5871c1a8
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 37 00 00: call 0x5871f960
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        pop esi
        mov esp, ebp
    }
}
