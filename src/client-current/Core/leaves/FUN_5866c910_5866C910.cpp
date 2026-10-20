// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866C910 .. +0x6D0 bytes.
extern "C" __declspec(naked) void FUN_5866c910_5866C910() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b4h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 A5 06 00 00: je 0x5866cfda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5866c9cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x5866c961
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 7F 06 00 00: jmp 0x5866cfe0
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 D4 7F E1 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x5866c980
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 62 06 00 00: jmp 0x5866cfe0
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x5866c9ac
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 9D 7F E1 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x5866c9ac
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x5866c9cd
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x5866c9cb
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x5866c9cb
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes E9 15 06 00 00: jmp 0x5866cfe0
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x5866c971
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 200h
        ; Exact mapped bytes 77 1B: ja 0x5866c9fa
        __asm _emit 0x77
        __asm _emit 0x1b
        cmp dword ptr [ebp - 10h], 200h
        ; Exact mapped bytes 0F 84 FD 04 00 00: je 0x5866cee9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 102h
        ; Exact mapped bytes 74 24: je 0x5866ca19
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes E9 4B 05 00 00: jmp 0x5866cf45
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        sub eax, 201h
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 0F 87 36 05 00 00: ja 0x5866cf45
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 8D E8 CF 66 58: jmp dword ptr [ecx*4 + 0x5866cfe8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x66
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x5866cae4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 9
        ; Exact mapped bytes 74 2F: je 0x5866ca67
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp dword ptr [ebp - 14h], 0dh
        ; Exact mapped bytes 74 0B: je 0x5866ca49
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 14h], 1bh
        ; Exact mapped bytes 74 13: je 0x5866ca57
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x5866cadd
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 0B 00 00: call 0x5866d580
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x5866cadd
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 76: jmp 0x5866cadd
        __asm _emit 0xeb
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 EE 7E E1 FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x7e
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 29: jne 0x5866caa3
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 53 93 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x93
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 40 93 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x93
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3A: jmp 0x5866cadd
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 B2 7E E1 FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x7e
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 27: jne 0x5866cadd
        __asm _emit 0x75
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 17 93 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x93
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 04 93 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x93
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes E9 FC 04 00 00: jmp 0x5866cfe0
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5C 04 00 00: jmp 0x5866cf45
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 7F E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 14 8E E1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8e
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x5866cc43
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 75 36: jne 0x5866cb56
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 7F E1 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        push 64h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 7E E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A7 8D E1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x5866cba9
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 50 92 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x92
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 50h], ecx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 3D 92 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x92
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x5866cc3a
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 7E E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 54 8D E1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x5866cbf9
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 FD 91 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x91
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 60h], edx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 EA 91 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x91
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 41: jmp 0x5866cc3a
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 1
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 9D E1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x9d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 F4 E1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a0h], eax
        xor eax, eax
        ; Exact mapped bytes E9 9F 03 00 00: jmp 0x5866cfe0
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 70: jmp 0x5866ccb3
        __asm _emit 0xeb
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 74 64: je 0x5866ccb3
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 64h], edx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 7E 91 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x91
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 68h], ecx
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 6B 91 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x91
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 7D E1 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 70h], edx
        ; Exact mapped bytes A1 00 06 96 58: mov eax, dword ptr [0x58960600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6ch], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 90: call dword ptr [ebp - 0x70]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x90
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 90h], 0
        ; Exact mapped bytes E9 8D 02 00 00: jmp 0x5866cf45
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 94h], 0
        ; Exact mapped bytes 74 5D: je 0x5866cd21
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 9C E1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 F3 E1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf3
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 0a0h], eax
        lea eax, [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 27 E3 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x27
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 94h], 0
        ; Exact mapped bytes E9 1F 02 00 00: jmp 0x5866cf45
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 5D: je 0x5866cd8f
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 9C E1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x9c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 F3 E1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf3
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 0a8h], eax
        lea eax, [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB 26 E3 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x26
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 94h], 0
        ; Exact mapped bytes E9 B1 01 00 00: jmp 0x5866cf45
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 78h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 7C E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 69 8B E1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5866ce5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 80h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 7C E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 3E 8B E1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 74: jne 0x5866ce5a
        __asm _emit 0x75
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 88h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 7C E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 0B 8B E1 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 41: jne 0x5866ce5a
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 98h], 1
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 9B E1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x9b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 F2 E1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf2
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a0h], eax
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x5866cee7
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 74 7C: je 0x5866cee7
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 8ch], edx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 5C 8F E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 90h], ecx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 43 8F E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x8f
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 7B E1 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 98h], edx
        ; Exact mapped bytes A1 00 06 96 58: mov eax, dword ptr [0x58960600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 94h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 68 FF FF FF: call dword ptr [ebp - 0x98]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 90h], 0
        ; Exact mapped bytes EB 5C: jmp 0x5866cf45
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 75 0C: jne 0x5866cf01
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 74 44: je 0x5866cf45
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 9A E1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x9a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A F1 E1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf1
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 0b0h], eax
        lea edx, [ebp - 0b4h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC 24 E3 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x24
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5866cfda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0E: ja 0x5866cf6e
        __asm _emit 0x77
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes EB 72: jmp 0x5866cfe0
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 C7 79 E1 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x79
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 06: jne 0x5866cf8a
        __asm _emit 0x75
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 58: jmp 0x5866cfe0
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes EB 32: jmp 0x5866cfbc
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 95 64 FF FF FF: call dword ptr [ebp - 0x9c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 8D 79 E1 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x79
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x5866cfbc
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1E: jmp 0x5866cfda
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 16: je 0x5866cfd8
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0B: ja 0x5866cfd8
        __asm _emit 0x77
        __asm _emit 0x0b
        mov dword ptr [ebp - 0ch], 0
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x5866cfe0
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB A4: jmp 0x5866cf7e
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
    }
}
