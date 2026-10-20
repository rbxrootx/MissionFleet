// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875E210 .. +0x294 bytes.
extern "C" __declspec(naked) void FUN_5875e210_5875E210() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 164h]
        cmp ecx, 6
        ; Exact mapped bytes 75 08: jne 0x5875e238
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E9 65 02 00 00: jmp 0x5875e49d
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D DC D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdc
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x5875e253
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 DE D2 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xde
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 3D 02 00 00: je 0x5875e49a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 33 D7 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x33
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 25 02 00 00: jne 0x5875e495
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 ED D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xed
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E ED D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xed
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 0B 02 00 00: jne 0x5875e495
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE E1 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 47 67 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x67
        __asm _emit 0xd2
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
        cmp eax, 1
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x5875e35b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B E1 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 24 67 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x67
        __asm _emit 0xd2
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
        cmp edx, 2
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5875e35b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 E1 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 67 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x67
        __asm _emit 0xd2
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
        cmp ecx, 3
        ; Exact mapped bytes 74 6C: je 0x5875e35b
        __asm _emit 0x74
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 49 E1 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E2 66 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x66
        __asm _emit 0xd2
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
        ; Exact mapped bytes 74 4D: je 0x5875e35b
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2A E1 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C3 66 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x66
        __asm _emit 0xd2
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
        cmp edx, 8
        ; Exact mapped bytes 74 2E: je 0x5875e35b
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0B E1 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 66 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x66
        __asm _emit 0xd2
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
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C0 2D 00 00: call 0x58761110
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 3A 01 00 00: je 0x5875e495
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D E1 D2 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe1
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x5875e39a
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE E0 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe0
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E7 66 D2 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x66
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 18: jne 0x5875e39a
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 DB D2 FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xdb
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3F 43 E7 FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x43
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 05: jle 0x5875e39a
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 AE FE FF FF: jmp 0x5875e248
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE AA D4 FF: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xaa
        __asm _emit 0xd4
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 AA D4 FF: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xaa
        __asm _emit 0xd4
        __asm _emit 0xff
        imul esi, eax
        mov dword ptr [ebp - 18h], esi
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 86 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x86
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        sub eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 DC D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xdc
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        sub eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, dword ptr [ebp - 14h]
        imul eax, edx, 0eh
        cdq
        mov esi, 0ah
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7C 70: jl 0x5875e46a
        __asm _emit 0x7c
        __asm _emit 0x70
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 85 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 57: jne 0x5875e468
        __asm _emit 0x75
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 4F: je 0x5875e468
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 85 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 72 D3 FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x72
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x5875e468
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 6208h], 0
        ; Exact mapped bytes 75 2D: jne 0x5875e468
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 620ch], 0
        ; Exact mapped bytes 75 21: jne 0x5875e468
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        push 80h
        push 1fh
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 36 01 00: call 0x58771ac0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 6208h], 1
        ; Exact mapped bytes EB 2B: jmp 0x5875e495
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 85 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 1B: jne 0x5875e495
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 6208h], 0
        push 1fh
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 3A 01 00: call 0x58771ea0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AE FD FF FF: jmp 0x5875e248
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
