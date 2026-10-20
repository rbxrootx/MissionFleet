// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58554D90 .. +0x2F8 bytes.
extern "C" __declspec(naked) void FUN_58554d90_58554D90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 16ch], 3ch
        ; Exact mapped bytes 73 18: jae 0x58554dc5
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 16ch]
        imul eax, dword ptr [edx + 16ch]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58554dcc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0e10h
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 70 F3 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x70
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x58554dfa
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 39 73 F3 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 C0 01 00 00: je 0x58554fc4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 44 C8 F7 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 A8 01 00 00: jne 0x58554fbf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F1 D3 20 00: call 0x58762220
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd3
        __asm _emit 0x20
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x58554ea3
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 76 F3 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x76
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 74 60: je 0x58554ea3
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 3ech], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 72 F3 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x72
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 144h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D8 75 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 71 FB F2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfb
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 75 18: jne 0x58554e97
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 75 F3 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x58554e97
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 3
        ; Exact mapped bytes EB 07: jmp 0x58554e9e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes E9 21 01 00 00: jmp 0x58554fc4
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 15 1B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F4 71 F3 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x71
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 8]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 1ch]
        imul ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 20h]
        imul edx, dword ptr [ebp - 20h]
        imul eax, edx, 0eh
        cdq
        mov esi, 0ah
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 76 08: jbe 0x58554ef3
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 06: jmp 0x58554ef9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3f0h], 0
        ; Exact mapped bytes 74 5E: je 0x58554f69
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 3f0h]
        ; Exact mapped bytes E8 97 80 F3 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8D 80 F3 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x58554fbf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0D 75 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A6 FA F2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfa
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 74 1F: je 0x58554f69
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EE 74 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x74
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 FA F2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 75 56: jne 0x58554fbf
        __asm _emit 0x75
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EF C7 20 00: call 0x58761760
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc7
        __asm _emit 0x20
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 77 49: ja 0x58554fbf
        __asm _emit 0x77
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 75 2E: jne 0x58554fb6
        __asm _emit 0x75
        __asm _emit 0x2e
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E 0F F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3e8h], 0
        ; Exact mapped bytes 74 17: je 0x58554fb6
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3e8h]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2B 0F F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 05: jmp 0x58554fc4
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 2B FE FF FF: jmp 0x58554def
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 28h], 1
        ; Exact mapped bytes 74 66: je 0x58555030
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3f0h]
        ; Exact mapped bytes E8 D8 7F F3 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 19 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x19
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 7F F3 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7f
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 40: je 0x58555030
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 2E: je 0x58555030
        __asm _emit 0x74
        __asm _emit 0x2e
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 0E F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3e8h], 0
        ; Exact mapped bytes 74 17: je 0x58555030
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3e8h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B1 0E F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 12 01 00 00: mov ax, word ptr [edx + 0x112]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 37: je 0x58555080
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 13ch], 0
        ; Exact mapped bytes 74 2B: je 0x58555080
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 7D 23: jge 0x58555080
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 40ch]
        ; Exact mapped bytes 77 0E: ja 0x58555079
        __asm _emit 0x77
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 40ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x58555080
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 2
        mov eax, dword ptr [ebp - 10h]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
