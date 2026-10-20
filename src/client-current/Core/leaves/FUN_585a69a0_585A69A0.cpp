// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A69A0 .. +0x657 bytes.
extern "C" __declspec(naked) void FUN_585a69a0_585A69A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 0dd4h]
        ; Exact mapped bytes E8 0F 06 F3 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 75 1F: jne 0x585a69e5
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 0F B6 0D C5 05 96 58: movzx ecx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx*4 + 589605ach]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 A9 1D 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa9
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 2A: jmp 0x585a6a0f
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 0dd4h]
        ; Exact mapped bytes E8 DD 05 F3 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax*4 + 589605ach]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 A8 1D 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa8
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 DF ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xdf
        __asm _emit 0xed
        __asm _emit 0xff
        imul eax, dword ptr [eax + 78h], 3e8h
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 27 AA F9 FF: call 0x58541450
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 BD 05 00 00: je 0x585a6ff3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 15h], 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E 5C F5 FF: call 0x584fc660
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 DE A5 28 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa5
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, 2
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 BA A5 28 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa5
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 A5 A5 28 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa5
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, 2
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 81 A5 28 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa5
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 34h], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 2D 63 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x63
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        shl eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 19 63 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x63
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 20h]
        shl edx, 2
        push edx
        push 0
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 04 63 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x63
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 20h]
        shl ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 F0 62 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x62
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        movzx eax, byte ptr [ebp - 15h]
        test eax, eax
        ; Exact mapped bytes 0F 84 BF 03 00 00: je 0x585a6eee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585a6b41
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 83 90 03 00 00: jae 0x585a6edd
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E7 64 EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x64
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 84 53 03 00 00: je 0x585a6eb9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9C 91 F0 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x91
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 36 03 00 00: je 0x585a6eb7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2c4h]
        add ecx, edx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 02 F5 FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 57 64 EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x64
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 C4: mov word ptr [ebp - 0x3c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax*2]
        test edx, edx
        ; Exact mapped bytes 75 67: jne 0x585a6c38
        __asm _emit 0x75
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 5A: jne 0x585a6c38
        __asm _emit 0x75
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FA DD ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xdd
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + edx*2 + 0dah]
        mov ecx, dword ptr [ebp - 4ch]
        movzx edx, word ptr [ecx + 1eh]
        sub eax, edx
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 59 05 08 52 89 58: mulss xmm0, dword ptr [0x58895208]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 2C C0: cvttss2si eax, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 04 4A: mov word ptr [edx + ecx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 1ch]
        movzx ecx, word ptr [eax + 1eh]
        movzx edx, word ptr [ebp - 3ch]
        imul ecx, edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + eax*2]
        sub eax, ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 04 4A: mov word ptr [edx + ecx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x4a
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3E: je 0x585a6c7c
        __asm _emit 0x74
        __asm _emit 0x3e
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C4 63 EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x63
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        ; Exact mapped bytes 66 89 4D D0: mov word ptr [ebp - 0x30], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 50h]
        movzx eax, word ptr [edx + 1eh]
        movzx ecx, word ptr [ebp - 30h]
        imul eax, ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + edx*2]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 14 41: mov word ptr [ecx + eax*2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x41
        ; Exact mapped bytes EB 06: jmp 0x585a6c82
        __asm _emit 0xeb
        __asm _emit 0x06
        xor edx, edx
        ; Exact mapped bytes 66 89 55 D0: mov word ptr [ebp - 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 24 02 00 00: jne 0x585a6eb7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, dword ptr [ebp - 44h]
        cmp dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes 0F 82 DF 01 00 00: jb 0x585a6e8a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2]
        mov edx, dword ptr [ebp - 1ch]
        movzx eax, word ptr [edx + 1eh]
        sub ecx, eax
        ; Exact mapped bytes 0F 88 A5 01 00 00: js 0x585a6e69
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 1ch]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 20 01 00 00: jne 0x585a6dfd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 1ch]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 8
        ; Exact mapped bytes 0F 85 07 01 00 00: jne 0x585a6dfd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0C 63 EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x63
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 34h], -1
        ; Exact mapped bytes 75 32: jne 0x585a6d45
        __asm _emit 0x75
        __asm _emit 0x32
        push 0
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 1ch]
        movzx eax, word ptr [edx + ecx + 20h]
        push eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 1ch]
        movzx ecx, word ptr [eax + edx + 20h]
        push ecx
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E CB 11 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xcb
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 24h]
        movzx ecx, word ptr [eax + edx*2]
        add ecx, dword ptr [ebp - 54h]
        cmp ecx, 32h
        ; Exact mapped bytes 0F 83 81 00 00 00: jae 0x585a6ddc
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 32h
        ; Exact mapped bytes 73 7B: jae 0x585a6ddc
        __asm _emit 0x73
        __asm _emit 0x7b
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 7E 75: jle 0x585a6ddc
        __asm _emit 0x7e
        __asm _emit 0x75
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 24h]
        movzx ecx, word ptr [eax + edx*2]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 89 0C 50: mov word ptr [eax + edx*2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 1ch]
        movzx edx, word ptr [ecx + 1eh]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [ecx + eax*2]
        sub eax, edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 04 4A: mov word ptr [edx + ecx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2]
        test ecx, ecx
        ; Exact mapped bytes 75 1F: jne 0x585a6dda
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x585a6dda
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx], 1
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 1F: jmp 0x585a6dfb
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x585a6dfb
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 1
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 6A: jmp 0x585a6e67
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 24h]
        movzx eax, word ptr [edx + ecx*2]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 89 04 4A: mov word ptr [edx + ecx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 1ch]
        movzx ecx, word ptr [eax + 1eh]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        movzx edx, word ptr [eax + edx*2]
        sub edx, ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 14 41: mov word ptr [ecx + eax*2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 38h]
        add edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax*2]
        test edx, edx
        ; Exact mapped bytes 75 1F: jne 0x585a6e67
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x585a6e67
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 1
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 1F: jmp 0x585a6e88
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 12: jne 0x585a6e88
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 1
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 1F: jmp 0x585a6ea9
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x585a6ea9
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx], 1
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax + edx*4], ecx
        ; Exact mapped bytes EB 1F: jmp 0x585a6ed8
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 12: jne 0x585a6ed8
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 1
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E9 5B FC FF FF: jmp 0x585a6b38
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 04: jne 0x585a6ee9
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [ebp - 15h], 0
        ; Exact mapped bytes E9 35 FC FF FF: jmp 0x585a6b23
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x585a6f00
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 73 69: jae 0x585a6f71
        __asm _emit 0x73
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 24h]
        movzx ecx, word ptr [eax + edx*2]
        test ecx, ecx
        ; Exact mapped bytes 74 59: je 0x585a6f6f
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 0C 50: mov cx, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x50
        ; Exact mapped bytes 66 89 4D C2: mov word ptr [ebp - 0x3e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc2
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx*4]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 74h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 22 DB ED FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xdb
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        ; Exact mapped bytes 66 89 45 C0: mov word ptr [ebp - 0x40], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc0
        push 0
        movzx ecx, word ptr [ebp - 3eh]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        movzx eax, byte ptr [ebp - 28h]
        push eax
        push 0
        movzx ecx, word ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 6A FD FF: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6a
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 86: jmp 0x585a6ef7
        __asm _emit 0xeb
        __asm _emit 0x86
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x585a6f90
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        ; Exact mapped bytes E8 C5 A0 28 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa0
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 19: je 0x585a6faf
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes E8 A6 A0 28 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa0
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 19: je 0x585a6fce
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        ; Exact mapped bytes E8 87 A0 28 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], 0
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1F: je 0x585a6ff3
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 62 A0 28 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa0
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
