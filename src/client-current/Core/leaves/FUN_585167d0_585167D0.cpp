// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585167D0 .. +0x56A bytes.
extern "C" __declspec(naked) void FUN_585167d0_585167D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 42 05 00 00: je 0x58516d38
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 F1 F7 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf1
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 94 04 00 00: jne 0x58516ca8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 E4 0B 00: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x585168c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8B F6 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf6
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 75 F6 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf6
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5851687e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 3A: jge 0x585168be
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58516896
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 20: jge 0x585168bc
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 68h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 27 F6 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf6
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x5851688d
        __asm _emit 0xeb
        __asm _emit 0xd1
        ; Exact mapped bytes EB B7: jmp 0x58516875
        __asm _emit 0xeb
        __asm _emit 0xb7
        ; Exact mapped bytes EB 7F: jmp 0x5851693f
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0A F6 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf6
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F4 F5 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585168ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 3A: jge 0x5851693f
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58516917
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 20: jge 0x5851693d
        __asm _emit 0x7d
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 68h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A6 F5 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x5851690e
        __asm _emit 0xeb
        __asm _emit 0xd1
        ; Exact mapped bytes EB B7: jmp 0x585168f6
        __asm _emit 0xeb
        __asm _emit 0xb7
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 00 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F 66 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b8h], eax
        ; Exact mapped bytes 0F 85 FF 00 00 00: jne 0x58516a5f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 35ch
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, 3e8h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 76 0D 00: call 0x585ee070
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x76
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0c4h]
        test eax, eax
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x58516a5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 3ch], edx
        push 9
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C E1 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 8D 02 F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 91 FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C7 91 FF FF: call 0x5850fbc0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 0beh
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 E1 F6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 15 F5 F6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0cdh]
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x58516a5a
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B EC F7 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 60 FA FF FF: call 0x585164b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0cdh], 0
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x58516b0b
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b8h], 2
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x58516b0b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 FF F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 65 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x65
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b8h], eax
        ; Exact mapped bytes 74 7F: je 0x58516b0b
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0c4h]
        test eax, eax
        ; Exact mapped bytes 75 71: jne 0x58516b0b
        __asm _emit 0x75
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 5ch], edx
        push 0ah
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D E0 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 9E 01 F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 90 FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D8 90 FF FF: call 0x5850fbc0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 0bfh
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 E0 F6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 26 F4 F6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf4
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0ceh]
        test eax, eax
        ; Exact mapped bytes 0F 84 8B 01 00 00: je 0x58516ca8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0d0h], 0
        ; Exact mapped bytes 75 0F: jne 0x58516b38
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d0h], eax
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, dword ptr [eax + 0d0h]
        cmp ecx, 0ah
        ; Exact mapped bytes 73 39: jae 0x58516b8b
        __asm _emit 0x73
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 90 FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 68 90 FF FF: call 0x5850fbe0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 5B F3 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x58516ca8
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 1ch]
        sub eax, dword ptr [edx + 0d0h]
        cmp eax, 0bb8h
        ; Exact mapped bytes 72 55: jb 0x58516bf3
        __asm _emit 0x72
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 8F FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 1C 90 FF FF: call 0x5850fbe0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 09 F3 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0ceh], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d0h], 0
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x58516ca8
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, dword ptr [eax + 0d0h]
        cmp ecx, 7d0h
        ; Exact mapped bytes 72 48: jb 0x58516c4f
        __asm _emit 0x72
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 8F FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 A7 8F FF FF: call 0x5850fbe0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 94 F2 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 59: jmp 0x58516ca8
        __asm _emit 0xeb
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 1ch]
        sub eax, dword ptr [edx + 0d0h]
        cmp eax, 3e8h
        ; Exact mapped bytes 72 46: jb 0x58516ca8
        __asm _emit 0x72
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 8F FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 4C 8F FF FF: call 0x5850fbe0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 39 F2 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58516cc9
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58516cc9
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 60: je 0x58516d38
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58516cec
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58516cd2
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1C E9 F7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58516d10
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58516d38
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x58516d36
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F8 E8 F7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 9A: jmp 0x58516cd2
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov esp, ebp
    }
}
