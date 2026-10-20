// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58743670 .. +0x311 bytes.
extern "C" __declspec(naked) void FUN_58743670_58743670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 C2 2A E0 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2a
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 0F 84 E5 02 00 00: je 0x5874397c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 15 D5 07 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 AF D5 07 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        sub esi, eax
        cmp esi, 7
        ; Exact mapped bytes 7E 0D: jle 0x587436d5
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE 02 00 00: call 0x587439a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x5874370e
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 D7 D4 07 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 71 D5 07 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        sub esi, eax
        ; Exact mapped bytes 79 0B: jns 0x5874370e
        __asm _emit 0x79
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 02 00 00: call 0x587439a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 2E 2A E0 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 13 13 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x13
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 20h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE DA E1 FF: call 0x58561220
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xda
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 62 01 00 00: je 0x587438b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58743761
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x58743784
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 88h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5F 27 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x27
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58743758
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58743796
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 1A: jge 0x587437b6
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 74h]
        mov dword ptr [ebp - 20h], eax
        push -1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DD DD 07 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D7: jmp 0x5874378d
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 0F 87 BF 00 00 00: ja 0x5874388e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 85 84 39 74 58: jmp dword ptr [eax*4 + 0x58743984]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 3A D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x3a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 320h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7C 55 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x55
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x587438aa
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F1 39 D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x39
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        push 0
        push 321h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5B 55 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x55
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x587438aa
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D0 39 D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x39
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        push 322h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 3A 55 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x55
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 71: jmp 0x587438aa
        __asm _emit 0xeb
        __asm _emit 0x71
        ; Exact mapped bytes E8 B2 39 D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x39
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        push 0
        push 323h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1C 55 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x55
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 53: jmp 0x587438aa
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes E8 94 39 D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x39
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D9 11 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        lea edx, [eax + ecx + 40h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        push 0
        push 0
        push 325h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E5 54 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x54
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x587438aa
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 5D 39 D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x39
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        push 0
        push 324h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C7 54 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x54
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x5874397e
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 74h]
        ; Exact mapped bytes E8 8B 28 E0 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x28
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 11 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x11
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp dword ptr [eax + 20h], 2
        ; Exact mapped bytes 75 19: jne 0x587438eb
        __asm _emit 0x75
        __asm _emit 0x19
        push 0
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 1C E5 FF: call 0x585954f0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1c
        __asm _emit 0xe5
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 07: je 0x587438eb
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x5874397e
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A C3 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E3 10 D4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x10
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 7
        ; Exact mapped bytes 75 66: jne 0x58743973
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 C3 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C1 10 D4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x10
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 8
        ; Exact mapped bytes 75 40: jne 0x58743973
        __asm _emit 0x75
        __asm _emit 0x40
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 74h]
        ; Exact mapped bytes E8 09 28 E0 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x28
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 10 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x10
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp dword ptr [eax + 20h], 0ah
        ; Exact mapped bytes 74 1F: je 0x58743973
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes E8 97 38 D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x38
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        push 0
        push 0
        push 516h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 01 54 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x5874397e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5874397e
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5874397e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        mov esp, ebp
    }
}
