// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58782540 .. +0x378 bytes.
extern "C" __declspec(naked) void FUN_58782540_58782540() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 184h], 3ch
        ; Exact mapped bytes 73 18: jae 0x58782575
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 184h]
        imul eax, dword ptr [edx + 184h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878257c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0e10h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 99 D0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x99
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x587825a3
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 90 9B D0 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 B3 02 00 00: je 0x58782860
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9B F0 D4 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf0
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 9B 02 00 00: jne 0x5878285b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 48 FC FD FF: call 0x58762220
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 3B 01 00 00: je 0x5878271b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 98 9E D0 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x9e
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x5878271b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 9B D0 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 424h], 1
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x587826b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58782628
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7D 1B: jge 0x58782649
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 428h]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 07: jne 0x58782647
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB D6: jmp 0x5878261f
        __asm _emit 0xeb
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 30 D1 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x30
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 4]
        imul edx, eax, 11h
        push edx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 48 96 D0 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 0ah
        div ecx
        cmp edx, 3
        ; Exact mapped bytes 73 3A: jae 0x587826b0
        __asm _emit 0x73
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 43ch]
        cdq
        mov ecx, 5
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + edx*4 + 428h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 43ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 43ch], eax
        mov dword ptr [ebp - 1ch], 1
        cmp dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes 75 05: jne 0x587826bb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A5 01 00 00: jmp 0x58782860
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 3f8h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 81 9A D0 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9a
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 60 9D D0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x9d
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F9 22 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x22
        __asm _emit 0xd0
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
        ; Exact mapped bytes 75 18: jne 0x5878270f
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 81 9D D0 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9d
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x5878270f
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 3
        ; Exact mapped bytes EB 07: jmp 0x58782716
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes E9 45 01 00 00: jmp 0x58782860
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9D 42 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x42
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 99 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x99
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 8]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 28h]
        imul ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 2ch]
        imul edx, dword ptr [ebp - 2ch]
        imul eax, edx, 0eh
        cdq
        mov esi, 0ah
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1D 9D D0 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x9d
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 74 1C: je 0x58782787
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 76 08: jbe 0x5878277b
        __asm _emit 0x76
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 06: jmp 0x58782781
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3fch], 0
        ; Exact mapped bytes 74 20: je 0x587827b3
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3fch]
        ; Exact mapped bytes E8 0F A8 D0 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xa8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 05 A8 D0 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xd0
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x5878285b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 75 4E: jne 0x58782813
        __asm _emit 0x75
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 93 EF FD FF: call 0x58761760
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 77 3F: ja 0x58782811
        __asm _emit 0x77
        __asm _emit 0x3f
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 37 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x37
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3f4h]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 EE 36 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x36
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 41 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x41
        __asm _emit 0xd0
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0E: jne 0x58782811
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 4C E6 FF: call 0x585e74e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4c
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 48: jmp 0x5878285b
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 EF FD FF: call 0x58761760
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 77 3B: ja 0x5878285b
        __asm _emit 0x77
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 41 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x41
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE 2E D1 FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x2e
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x5878285b
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 41 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x41
        __asm _emit 0xd0
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 15: jne 0x5878285b
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push 81h
        push 20h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 F2 FE FF: call 0x58771ac0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 38 FD FF FF: jmp 0x58782598
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 0A 01 00 00: mov cx, word ptr [eax + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 74 37: je 0x587828b0
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 144h], 0
        ; Exact mapped bytes 74 2B: je 0x587828b0
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7D 23: jge 0x587828b0
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 41ch]
        ; Exact mapped bytes 77 0E: ja 0x587828a9
        __asm _emit 0x77
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 41ch], edx
        ; Exact mapped bytes EB 07: jmp 0x587828b0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 2
        mov eax, dword ptr [ebp - 18h]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
