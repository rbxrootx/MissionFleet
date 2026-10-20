// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867F630 .. +0x5FD bytes.
extern "C" __declspec(naked) void FUN_5867f630_5867F630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b0h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 74 20 96 58 00: cmp dword ptr [0x58962074], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 1D 02 00 00: jne 0x5867f866
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 400h
        ; Exact mapped bytes 0F 8C 08 02 00 00: jl 0x5867f861
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 1
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5867f672
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 4B: jge 0x5867f6c3
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 1E 54 EB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x54
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 74 21: je 0x5867f6ba
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        shl ecx, 0
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 FD 53 EB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x53
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 07: jne 0x5867f6c1
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB A6: jmp 0x5867f669
        __asm _emit 0xeb
        __asm _emit 0xa6
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 94 01 00 00: je 0x5867f861
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 E0 F6 FF: call 0x585ed710
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 67 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D9 67 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C6 67 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2a8h]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A7 67 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2a8h]
        mov dword ptr [ebp - 28h], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 88 67 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2b0h]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 72 67 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2b4h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5C 67 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2b8h]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 46 67 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2bch]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 30 67 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 304h]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 1A 67 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 308h]
        mov dword ptr [ebp - 40h], ecx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 04 67 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2c0h]
        ; Exact mapped bytes E8 56 C5 FF FF: call 0x5867bd40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 4ffh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 53 E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x53
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 24 67 E0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2c0h]
        ; Exact mapped bytes E8 26 C5 FF FF: call 0x5867bd40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 100h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 16 5D 13 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2c0h]
        ; Exact mapped bytes E8 08 C5 FF FF: call 0x5867bd40
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 6B 5D 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x5d
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2c0h]
        ; Exact mapped bytes E8 0D C5 FF FF: call 0x5867bd60
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 50 5D 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x5d
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C3 03 00 00: jmp 0x5867fc29
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5867f87f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 4B: jge 0x5867f8d0
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 11 52 EB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x52
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 74 21: je 0x5867f8c7
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        shl ecx, 0
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 F0 51 EB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 07: jne 0x5867f8ce
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB A6: jmp 0x5867f876
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov edx, dword ptr [ebp - 4]
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
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 0F 84 3E 03 00 00: je 0x5867fc29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a4h]
        ; Exact mapped bytes E8 67 99 E3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x99
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 0F 84 24 03 00 00: je 0x5867fc29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 1A 03 00 00: je 0x5867fc29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2c0h]
        ; Exact mapped bytes E8 A3 70 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2c0h]
        ; Exact mapped bytes E8 82 C7 E0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        push 400h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 74 E3 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x74
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2c0h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 BF 5C 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x5c
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 64h], ecx
        push -3ch
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 B7 74 E3 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x74
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0c4h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5867f9a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 6A: jge 0x5867fa15
        __asm _emit 0x7d
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        add eax, 68h
        push eax
        imul ecx, dword ptr [ebp - 8], 4ch
        add ecx, 3dh
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 93 BE EE FF: call 0x5856b870
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xbe
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        add edx, 9ah
        push edx
        imul eax, dword ptr [ebp - 8], 4ch
        add eax, 3dh
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 5E BE EE FF: call 0x5856b870
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbe
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 87: jmp 0x5867f99c
        __asm _emit 0xeb
        __asm _emit 0x87
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 12 ED FF: call 0x58550c30
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x12
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 2F: jne 0x5867fa57
        __asm _emit 0x75
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 7E 6F E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 500h
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 DA 73 E3 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x73
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC DC F6 FF: call 0x585ed710
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xdc
        __asm _emit 0xf6
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 64 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x64
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 78h], ecx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 5C 64 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x64
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 7ch], eax
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 49 64 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x64
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2a8h]
        mov dword ptr [ebp - 80h], ecx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 2A 64 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x64
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2a8h]
        mov dword ptr [ebp - 84h], ecx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 05 64 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2b0h]
        mov dword ptr [ebp - 88h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 E9 63 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2b4h]
        mov dword ptr [ebp - 8ch], edx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 CD 63 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x63
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2b8h]
        mov dword ptr [ebp - 90h], ecx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 B1 63 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x63
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2bch]
        mov dword ptr [ebp - 94h], eax
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 95 63 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x63
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 304h]
        mov dword ptr [ebp - 98h], edx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 79 63 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x63
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 308h]
        mov dword ptr [ebp - 9ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 5D 63 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x63
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2c0h]
        ; Exact mapped bytes E8 AF C1 FF FF: call 0x5867bd40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        push 1efh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 4F E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x4f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 71 63 E0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x63
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2c0h]
        ; Exact mapped bytes E8 73 C1 FF FF: call 0x5867bd40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        push 96h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 5D 59 13 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x59
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2c0h]
        ; Exact mapped bytes E8 4F C1 FF FF: call 0x5867bd40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        push 101h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 A9 59 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x59
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2c0h]
        ; Exact mapped bytes E8 4B C1 FF FF: call 0x5867bd60
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        push 46h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 88 59 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x59
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
