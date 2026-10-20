// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866F6E0 .. +0x36D bytes.
extern "C" __declspec(naked) void FUN_5866f6e0_5866F6E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 52 03 00 00: jne 0x5866fa45
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes 75 53: jne 0x5866f751
        __asm _emit 0x75
        __asm _emit 0x53
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 1B: jne 0x5866f71f
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0d4h]
        cmp eax, 3
        ; Exact mapped bytes 75 0C: jne 0x5866f71f
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 0d4h], 0
        ; Exact mapped bytes EB 19: jmp 0x5866f738
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0d4h]
        cmp eax, 1
        ; Exact mapped bytes 75 0A: jne 0x5866f738
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 0d4h], 2
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 95 66 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x66
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F4 02 00 00: jmp 0x5866fa45
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0bch]
        ; Exact mapped bytes 75 4C: jne 0x5866f7ab
        __asm _emit 0x75
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], -1
        ; Exact mapped bytes 74 3B: je 0x5866f7a6
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0dch]
        cmp dword ptr [edx*4 + 589605ach], -1
        ; Exact mapped bytes 74 28: je 0x5866f7a6
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0dch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax*4 + 589605ach]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B E1 F0 FF: call 0x5857d8c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe1
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9A 02 00 00: jmp 0x5866fa45
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0c0h]
        ; Exact mapped bytes 75 40: jne 0x5866f7f9
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0dch], -1
        ; Exact mapped bytes 74 2F: je 0x5866f7f4
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0dch]
        cmp dword ptr [eax*4 + 589605ach], -1
        ; Exact mapped bytes 74 1C: je 0x5866f7f4
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes E8 13 7A E6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7a
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 2bch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CD 1F E7 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x1f
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4C 02 00 00: jmp 0x5866fa45
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes 75 30: jne 0x5866f837
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], -1
        ; Exact mapped bytes 74 1F: je 0x5866f832
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0dch]
        cmp dword ptr [edx*4 + 589605ach], -1
        ; Exact mapped bytes 74 0C: je 0x5866f832
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 71 F3 FF: call 0x585a69a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x71
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0E 02 00 00: jmp 0x5866fa45
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes 0F 85 2A 01 00 00: jne 0x5866f973
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 51 E1 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x51
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x5866f934
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 51 E1 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x51
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 72 51 E1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x51
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 02: mov dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FD FD FF FF: call 0x5866f680
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 21: je 0x5866f8ab
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes E8 61 79 E6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x79
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 398h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CB 94 E6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x94
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x5866f934
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 50 E1 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x50
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 23 51 E1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x51
        __asm _emit 0xe1
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
        cmp eax, 3
        ; Exact mapped bytes 7F 4B: jg 0x5866f918
        __asm _emit 0x7f
        __asm _emit 0x4b
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5866f8df
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 11: jge 0x5866f8f6
        __asm _emit 0x7d
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx*4 + 589605ach], -1
        ; Exact mapped bytes 75 02: jne 0x5866f8f4
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x5866f8f6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB E0: jmp 0x5866f8d6
        __asm _emit 0xeb
        __asm _emit 0xe0
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 1A: jge 0x5866f916
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0e0h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0e0h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5866f934
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 D3 78 E6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x78
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 398h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3D 94 E6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0dch], 0ffffffffh
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E9 FE E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D3 FE E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x5866fa45
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0cch]
        ; Exact mapped bytes 75 5F: jne 0x5866f9e0
        __asm _emit 0x75
        __asm _emit 0x5f
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0dch]
        push edx
        push 8001f003h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC CF 1B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xcf
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0dch], 0ffffffffh
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 79 FE E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 63 FE E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 65: jmp 0x5866fa45
        __asm _emit 0xeb
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0d0h]
        ; Exact mapped bytes 75 57: jne 0x5866fa45
        __asm _emit 0x75
        __asm _emit 0x57
        push 0
        push 0
        push 0
        push 0
        push 0ffh
        push 8001f003h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 CF 1B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0dch], 0ffffffffh
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 12 FE E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 FC FD E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
