// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587515B0 .. +0x7FC bytes.
extern "C" __declspec(naked) void FUN_587515b0_587515B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF 1D D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x1d
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 75 0D: jne 0x587515e7
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E B2 DA FF: call 0x584fc840
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb2
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x587515f2
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 B1 DA FF: call 0x584fc7e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb1
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + ecx*4 + 0b50h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x58751688
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes 74 24: je 0x5875163c
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 46 1D D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1d
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [eax + 64h]
        and edx, 10000000h
        ; Exact mapped bytes 74 07: je 0x5875163c
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 86 07 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 75 1C: jne 0x5875166e
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 DC B1 DA FF: call 0x584fc840
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb1
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, eax
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 1A: jmp 0x58751688
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 60 B1 DA FF: call 0x584fc7e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb1
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, eax
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 1C D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 1f4h]
        shr ecx, 0ah
        and ecx, 3fffffh
        cmp dword ptr [eax + 68h], ecx
        ; Exact mapped bytes 75 38: jne 0x587516df
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
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
        cmp edx, 9
        ; Exact mapped bytes 75 12: jne 0x587516cf
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B B1 DA FF: call 0x584fc840
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb1
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, eax
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 10: jmp 0x587516df
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 B1 DA FF: call 0x584fc7e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb1
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        sub edx, eax
        mov dword ptr [ebp - 1ch], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 69 FD DE FF: call 0x58541450
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfd
        __asm _emit 0xde
        __asm _emit 0xff
        add eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        imul ecx, dword ptr [edx + 78h], 3e8h
        cmp eax, ecx
        ; Exact mapped bytes 76 26: jbe 0x58751721
        __asm _emit 0x76
        __asm _emit 0x26
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 19: je 0x5875171a
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 EA 5A D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x5a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        push 68h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 57 76 D8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x76
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes E9 A1 06 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 A5 05 00 00: jne 0x58751cd0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        movzx ecx, byte ptr [eax + 35ch]
        test ecx, ecx
        ; Exact mapped bytes 75 0A: jne 0x58751746
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 7C 06 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 38ch]
        and ecx, 10000000h
        ; Exact mapped bytes 0F 84 80 04 00 00: je 0x58751bde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 64h]
        and eax, 10000000h
        ; Exact mapped bytes 0F 84 4B 04 00 00: je 0x58751bba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
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
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 40 01 00 00: jne 0x587518cd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 12h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        movzx edx, ax
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx eax, cx
        xor eax, 55h
        cmp edx, eax
        ; Exact mapped bytes 0F 8F 00 01 00 00: jg 0x587518cd
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        movzx ecx, byte ptr [edx + 35ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 0A: jne 0x587517f6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 CC 05 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        cmp eax, 78h
        ; Exact mapped bytes 75 74: jne 0x58751888
        __asm _emit 0x75
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        movzx ecx, byte ptr [edx + 35ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 53: jne 0x58751886
        __asm _emit 0x75
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 12h]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 411h
        ; Exact mapped bytes 74 36: je 0x5875187c
        __asm _emit 0x74
        __asm _emit 0x36
        cmp dword ptr [ebp - 24h], 7f4h
        ; Exact mapped bytes 74 2D: je 0x5875187c
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp dword ptr [ebp - 24h], 0be0h
        ; Exact mapped bytes 74 24: je 0x5875187c
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp - 24h], 0fbfh
        ; Exact mapped bytes 74 1B: je 0x5875187c
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 24h], 13ach
        ; Exact mapped bytes 74 12: je 0x5875187c
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 24h], 1781h
        ; Exact mapped bytes 74 09: je 0x5875187c
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 24h], 1b6bh
        ; Exact mapped bytes 75 0A: jne 0x58751886
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 3C 05 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 45: jmp 0x587518cd
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C 09 00 00: call 0x587521a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x587518a4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, 1
        ; Exact mapped bytes E9 20 05 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x587518cd
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        movzx edx, byte ptr [eax + 35ch]
        cmp ecx, edx
        ; Exact mapped bytes 75 0A: jne 0x587518cd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 F5 04 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0B 31 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x31
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        movzx edx, ax
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx eax, cx
        xor eax, 55h
        cmp edx, eax
        ; Exact mapped bytes 7E 6D: jle 0x5875196e
        __asm _emit 0x7e
        __asm _emit 0x6d
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 60: je 0x58751967
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D1 30 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x30
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        mov dword ptr [ebp - 30h], eax
        push 588b4eb8h
        ; Exact mapped bytes E8 C1 06 DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        push 58965d60h
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes E8 A0 58 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        push 58965d60h
        push 65h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0A 74 D8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x74
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes E9 54 04 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        mov dl, byte ptr [ecx + 35ch]
        mov byte ptr [ebp - 1], dl
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 91 5E 03 00 00: mov dx, word ptr [ecx + 0x35e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 0F B6 91 5C 03 00 00: movzx dx, byte ptr [ecx + 0x35c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 91 5E 03 00 00: mov dx, word ptr [ecx + 0x35e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, byte ptr [eax + 10h]
        movzx edx, byte ptr [ebp - 1]
        cmp ecx, edx
        ; Exact mapped bytes 75 0F: jne 0x587519cf
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 12h]
        movzx edx, word ptr [ebp - 8]
        cmp ecx, edx
        ; Exact mapped bytes 74 0C: je 0x587519db
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 49 92 DA FF: call 0x584fac20
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x92
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x587519e7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, 1
        ; Exact mapped bytes E9 DD 03 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 56: jmp 0x58751a3d
        __asm _emit 0xeb
        __asm _emit 0x56
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AD 07 00 00: call 0x587521a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x58751a03
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, 1
        ; Exact mapped bytes E9 C1 03 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x58751a3d
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x58751a15
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 20h
        ; Exact mapped bytes 7D 22: jge 0x58751a3d
        __asm _emit 0x7d
        __asm _emit 0x22
        movzx edx, word ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 18h]
        movzx eax, word ptr [ecx + eax*2 + 0c0h]
        cmp edx, eax
        ; Exact mapped bytes 75 0A: jne 0x58751a3b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 87 03 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB CF: jmp 0x58751a0c
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        xor eax, 55h
        cmp eax, 78h
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x58751b44
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        movzx ecx, byte ptr [edx + 35ch]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x58751b44
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        movzx ecx, word ptr [eax + 35eh]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 12h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 7
        ; Exact mapped bytes 75 3F: jne 0x58751aed
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 6
        ; Exact mapped bytes 75 25: jne 0x58751aed
        __asm _emit 0x75
        __asm _emit 0x25
        cmp dword ptr [ebp - 20h], 19h
        ; Exact mapped bytes 74 15: je 0x58751ae3
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 20h], 41h
        ; Exact mapped bytes 74 0F: je 0x58751ae3
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 20h], 7dh
        ; Exact mapped bytes 74 09: je 0x58751ae3
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 20h], 0a0h
        ; Exact mapped bytes 75 0A: jne 0x58751aed
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 D5 02 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 8
        ; Exact mapped bytes 75 3F: jne 0x58751b42
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
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
        cmp ecx, 6
        ; Exact mapped bytes 75 25: jne 0x58751b42
        __asm _emit 0x75
        __asm _emit 0x25
        cmp dword ptr [ebp - 20h], 1eh
        ; Exact mapped bytes 74 15: je 0x58751b38
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 20h], 47h
        ; Exact mapped bytes 74 0F: je 0x58751b38
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 20h], 7ch
        ; Exact mapped bytes 74 09: je 0x58751b38
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 20h], 0a3h
        ; Exact mapped bytes 75 0A: jne 0x58751b42
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 80 02 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x58751b5e
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 50 06 00 00: call 0x587521a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x58751b5e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 64 02 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7A 2E D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x2e
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        movzx edx, ax
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx eax, cx
        xor eax, 55h
        cmp edx, eax
        ; Exact mapped bytes 7F 1F: jg 0x58751bb1
        __asm _emit 0x7f
        __asm _emit 0x1f
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 19: je 0x58751bb1
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 53 56 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x56
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        push 0
        push 6bh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C0 71 D8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x71
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes E9 0A 02 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x58751bd9
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes E8 31 56 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x56
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        push 0
        push 0
        push 69h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 9E 71 D8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x71
        __asm _emit 0xd8
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 E9 01 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x58751cc4
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        movzx edx, ax
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx eax, cx
        xor eax, 55h
        cmp edx, eax
        ; Exact mapped bytes 0F 8F 91 00 00 00: jg 0x58751ca5
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        movzx eax, byte ptr [edx + 35ch]
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x58751c31
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, 1
        ; Exact mapped bytes E9 93 01 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 72: jmp 0x58751ca3
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 63 05 00 00: call 0x587521a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x58751c4d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, 1
        ; Exact mapped bytes E9 77 01 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 56: jmp 0x58751ca3
        __asm _emit 0xeb
        __asm _emit 0x56
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B 17 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x17
        __asm _emit 0xd7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        movzx ecx, byte ptr [edx + 35ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 0C: jne 0x58751c7d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, 1
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x58751ca3
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 19: je 0x58751c9c
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 68 55 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x55
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 0
        push 0
        push 0
        push 78h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D5 70 D8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x58751cc4
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 19: je 0x58751cc4
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 40 55 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x55
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 0
        push 0
        push 0
        push 65h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 AD 70 D8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x70
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x58751dbd
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 64h]
        and eax, 10000000h
        ; Exact mapped bytes 74 26: je 0x58751d03
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 19: je 0x58751cfc
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 08 55 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x55
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 0
        push 0
        push 0
        push 67h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 75 70 D8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x70
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x58751dc2
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7C 74: jl 0x58751d7d
        __asm _emit 0x7c
        __asm _emit 0x74
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 7F 6E: jg 0x58751d7d
        __asm _emit 0x7f
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0cf0h], 0
        ; Exact mapped bytes 72 0C: jb 0x58751d27
        __asm _emit 0x72
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 0cf0h], 4
        ; Exact mapped bytes 76 4D: jbe 0x58751d74
        __asm _emit 0x76
        __asm _emit 0x4d
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + eax*4 + 0b50h], 0
        ; Exact mapped bytes 74 3D: je 0x58751d74
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 83 01 00 00: call 0x58751ed0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x58751d74
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 19: je 0x58751d70
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 94 54 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x54
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0
        push 0
        push 0
        push 7bh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 01 70 D8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x70
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes EB 4E: jmp 0x58751dc2
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, 1
        ; Exact mapped bytes EB 47: jmp 0x58751dc2
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes EB 40: jmp 0x58751dbd
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp dword ptr [ebp + 0ch], 5
        ; Exact mapped bytes 7C 3A: jl 0x58751dbd
        __asm _emit 0x7c
        __asm _emit 0x3a
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 41 01 00 00: call 0x58751ed0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x58751db6
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 19: je 0x58751db2
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 52 54 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x54
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 0
        push 0
        push 0
        push 7bh
        mov ecx, dword ptr [ebp - 54h]
    }
}
