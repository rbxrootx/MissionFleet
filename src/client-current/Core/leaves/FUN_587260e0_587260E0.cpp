// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587260E0 .. +0xA51 bytes.
extern "C" __declspec(naked) void FUN_587260e0_587260E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0e8h
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
        ; Exact mapped bytes 0F 84 2C 0A 00 00: je 0x58726b31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5872619d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x58726131
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 06 0A 00 00: jmp 0x58726b37
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 04 E8 D5 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x58726150
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 E9 09 00 00: jmp 0x58726b37
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x5872617c
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 CD E7 D5 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x5872617c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x5872619d
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 19: je 0x5872619b
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x5872619b
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 0ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 9C 09 00 00: jmp 0x58726b37
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x58726141
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 203h
        ; Exact mapped bytes 77 24: ja 0x587261d3
        __asm _emit 0x77
        __asm _emit 0x24
        cmp dword ptr [ebp - 14h], 203h
        ; Exact mapped bytes 0F 84 DC 06 00 00: je 0x58726898
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 100h
        ; Exact mapped bytes 74 1C: je 0x587261e1
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp - 14h], 201h
        ; Exact mapped bytes 74 7E: je 0x5872624c
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes E9 5E 09 00 00: jmp 0x58726b31
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 20ah
        ; Exact mapped bytes 74 34: je 0x58726210
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes E9 50 09 00 00: jmp 0x58726b31
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 1bh
        ; Exact mapped bytes 75 21: jne 0x5872620b
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3d0h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        ; Exact mapped bytes E9 2C 09 00 00: jmp 0x58726b37
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 21 09 00 00: jmp 0x58726b31
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        shr ecx, 10h
        and ecx, 0ffffh
        ; Exact mapped bytes 0F BF D1: movsx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd1
        test edx, edx
        ; Exact mapped bytes 7E 07: jle 0x58726234
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 17 00 00: call 0x58727940
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 F0 08 00 00: jmp 0x58726b37
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E5 08 00 00: jmp 0x58726b31
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3dch]
        ; Exact mapped bytes E8 06 30 D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x30
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 1A: jne 0x5872627c
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3dch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 3dch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 5E D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 07 D6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x07
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 58 1B 00 00: call 0x58727e00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 E7 D5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 54 F6 D5 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf6
        __asm _emit 0xd5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x587263be
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 05 34 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E CB 00 00 00: jle 0x587263be
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3e0h], 0
        ; Exact mapped bytes 75 34: jne 0x58726333
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3dch]
        mov dword ptr [ebp - 48h], ecx
        push 58h
        push 2b2h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 06 F3 08 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3dch]
        mov dword ptr [ebp - 4ch], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B0 1A 00 00: call 0x58727de0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x5872634a
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3dch]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 97 1A 00 00: call 0x58727de0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3dch]
        mov dword ptr [ebp - 60h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 3d4h]
        mov dword ptr [ebp - 58h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 3E A8 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 CF A7 09 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 FC 50 00 00: call 0x5872b4a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3dch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 3dch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587263d0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 0F 8D 74 02 00 00: jge 0x5872664e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 FF 32 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x32
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7C 05: jl 0x587263fb
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 53 02 00 00: jmp 0x5872664e
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 68h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED E5 D5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe5
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 FE F4 D5 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf4
        __asm _emit 0xd5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 1F 02 00 00: je 0x58726649
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 E6 D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 72 59 09 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 E6 D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 74h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 8C: call dword ptr [ebp - 0x74]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x8c
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        ; Exact mapped bytes E8 0F F4 D6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf4
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 85 3D 01 00 00: jne 0x587265c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3e0h], 0
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x58726556
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x587264ae
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0aeh]
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 7D 22: jge 0x587264df
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 3d4h]
        ; Exact mapped bytes E8 F1 A6 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa6
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + eax*4 + 240h], 0
        ; Exact mapped bytes EB C6: jmp 0x587264a5
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0aeh], 0
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 5B D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5b
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 1
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 04 D6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 32h
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 18 00 00: call 0x58727e00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 8E A6 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 240h], 1
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 0aeh]
        add al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0aeh], al
        ; Exact mapped bytes EB 71: jmp 0x587265c7
        __asm _emit 0xeb
        __asm _emit 0x71
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 5B D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x5b
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 1
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 04 D6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 32h
        mov dword ptr [ebp - 84h], eax
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 18 00 00: call 0x58727e00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3d4h]
        ; Exact mapped bytes E8 1B A6 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 240h], 1
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 0aeh]
        add al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0aeh], al
        ; Exact mapped bytes EB 77: jmp 0x58726640
        __asm _emit 0xeb
        __asm _emit 0x77
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 5A D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x5a
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 1
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 03 D6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 32h
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 17 00 00: call 0x58727e00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3d4h]
        ; Exact mapped bytes E8 A2 A5 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 240h], 0
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 0aeh]
        sub al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0aeh], al
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 0B 00 00: call 0x587271e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 79 FD FF FF: jmp 0x587263c7
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3e0h], 0
        ; Exact mapped bytes 0F 85 2E 02 00 00: jne 0x5872688c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58726670
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D 12 02 00 00: jge 0x5872688c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3d4h]
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 E3 D5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe3
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 70 F2 D5 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf2
        __asm _emit 0xd5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CF 01 00 00: je 0x58726887
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB E3 D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe3
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 D7 56 09 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A E3 D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe3
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 60 FF FF FF: call dword ptr [ebp - 0xa0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 4A: jne 0x58726763
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 3d4h]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3d4h]
        ; Exact mapped bytes E8 78 A4 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 30 AE 09 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xae
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4E: jmp 0x587267b1
        __asm _emit 0xeb
        __asm _emit 0x4e
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 75 48: jne 0x587267b1
        __asm _emit 0x75
        __asm _emit 0x48
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 3d4h]
        mov dword ptr [ebp - 0b0h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 28 A4 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 E0 AD 09 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 F8 A3 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C B5 00 00 00: jl 0x58726885
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587267e2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 64h
        ; Exact mapped bytes 7D 13: jge 0x587267fb
        __asm _emit 0x7d
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 240h], 0
        ; Exact mapped bytes EB DE: jmp 0x587267d9
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0aeh], 0
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 58 D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 1
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 01 D6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 32h
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD 15 00 00: call 0x58727e00
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 66 A3 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 240h], 1
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 0aeh]
        add al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0aeh], al
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 09 00 00: call 0x587271e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x5872688c
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 DB FD FF FF: jmp 0x58726667
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 A4 02 00 00: jmp 0x58726b37
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 99 02 00 00: jmp 0x58726b31
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3e0h], 0
        ; Exact mapped bytes 0F 84 89 02 00 00: je 0x58726b31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x587268ba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D 6D 02 00 00: jge 0x58726b31
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3d4h]
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E E1 D5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 26 F0 D5 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf0
        __asm _emit 0xd5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 2A 02 00 00: je 0x58726b2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 3d4h]
        mov dword ptr [ebp - 0cch], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 57 D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x57
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 3d4h]
        ; Exact mapped bytes E8 88 00 D6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 5
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 76 AB 09 00: call 0x587c14d0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C CA 01 00 00: jl 0x58726b2c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 E1 D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d0h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 2E 54 09 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x54
        __asm _emit 0x09
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 E0 D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 28 FF FF FF: call dword ptr [ebp - 0xd8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 4A: jne 0x58726a0c
        __asm _emit 0x75
        __asm _emit 0x4a
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3d4h]
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 CF A1 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 87 AB 09 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4E: jmp 0x58726a5a
        __asm _emit 0xeb
        __asm _emit 0x4e
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 75 48: jne 0x58726a5a
        __asm _emit 0x75
        __asm _emit 0x48
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 3d4h]
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 7F A1 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 37 AB 09 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3d4h]
        ; Exact mapped bytes E8 4F A1 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C B1 00 00 00: jl 0x58726b2a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3d4h]
        ; Exact mapped bytes E8 30 A1 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 240h], 0
        ; Exact mapped bytes 75 09: jne 0x58726aa6
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes EB 07: jmp 0x58726aad
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 FC A0 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [edx + eax*4 + 240h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 D8 A0 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + eax*4 + 240h], 0
        ; Exact mapped bytes 74 17: je 0x58726b0c
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 0aeh]
        add cl, 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0aeh], cl
        ; Exact mapped bytes EB 15: jmp 0x58726b21
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 0aeh]
        sub cl, 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0aeh], cl
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 06 00 00: call 0x587271e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x58726b31
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 80 FD FF FF: jmp 0x587268b1
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
