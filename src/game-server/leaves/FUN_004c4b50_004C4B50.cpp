// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C4B50 .. +0x516 bytes.
extern "C" __declspec(naked) void FUN_004c4b50_004C4B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        ; Exact mapped bytes 66 C7 45 9C 10 4D: mov word ptr [ebp - 0x64], 0x4d10
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x4d
        ; Exact mapped bytes 66 C7 45 C4 4D 00: mov word ptr [ebp - 0x3c], 0x4d
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xc4
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 A0 9A 00: mov word ptr [ebp - 0x60], 0x9a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa0
        __asm _emit 0x9a
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 134312f4h
        mov byte ptr [ebp - 54h], 0cch
        mov byte ptr [ebp - 53h], 0cch
        mov byte ptr [ebp - 52h], 0cch
        mov byte ptr [ebp - 51h], 0cch
        mov byte ptr [ebp - 50h], 0cch
        mov byte ptr [ebp - 4fh], 0cch
        mov byte ptr [ebp - 4eh], 0cch
        mov byte ptr [ebp - 4dh], 0cch
        mov byte ptr [ebp - 4ch], 0cch
        mov byte ptr [ebp - 4bh], 0cch
        mov byte ptr [ebp - 4ah], 0fbh
        mov byte ptr [ebp - 49h], 3fh
        mov dword ptr [ebp - 58h], 1
        ; Exact mapped bytes 66 8B 45 10: mov ax, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 45 90: mov word ptr [ebp - 0x70], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x90
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 70h]
        and eax, 0ffffh
        and eax, 8000h
        ; Exact mapped bytes 66 89 45 98: mov word ptr [ebp - 0x68], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 66 8B 4D 90: mov cx, word ptr [ebp - 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes 66 81 E1 FF 7F: and cx, 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 66 89 4D 90: mov word ptr [ebp - 0x70], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x90
        mov edx, dword ptr [ebp - 68h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x4c4bee
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 1ch]
        mov byte ptr [eax + 2], 2dh
        ; Exact mapped bytes EB 07: jmp 0x4c4bf5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, dword ptr [ebp + 1ch]
        mov byte ptr [ecx + 2], 20h
        mov edx, dword ptr [ebp - 70h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 75 3A: jne 0x4c4c3c
        __asm _emit 0x75
        __asm _emit 0x3a
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 34: jne 0x4c4c3c
        __asm _emit 0x75
        __asm _emit 0x34
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 75 2E: jne 0x4c4c3c
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 66 C7 00 00 00: mov word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        mov byte ptr [ecx + 2], 20h
        mov edx, dword ptr [ebp + 1ch]
        mov byte ptr [edx + 3], 1
        mov eax, dword ptr [ebp + 1ch]
        mov byte ptr [eax + 4], 30h
        mov ecx, dword ptr [ebp + 1ch]
        mov byte ptr [ecx + 5], 0
        mov eax, 1
        ; Exact mapped bytes E9 26 04 00 00: jmp 0x4c5062
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 70h]
        and edx, 0ffffh
        cmp edx, 7fffh
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x4c4d36
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 66 C7 00 01 00: mov word ptr [eax], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 80000000h
        ; Exact mapped bytes 75 06: jne 0x4c4c68
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 34: je 0x4c4c9c
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 24h]
        and ecx, 40000000h
        test ecx, ecx
        ; Exact mapped bytes 75 27: jne 0x4c4c9c
        __asm _emit 0x75
        __asm _emit 0x27
        push 58d550h
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 BA 51 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 1ch]
        mov byte ptr [eax + 3], 6
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x4c4d31
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 68h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 33: je 0x4c4cdc
        __asm _emit 0x74
        __asm _emit 0x33
        cmp dword ptr [ebp - 24h], 0c0000000h
        ; Exact mapped bytes 75 2A: jne 0x4c4cdc
        __asm _emit 0x75
        __asm _emit 0x2a
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 75 24: jne 0x4c4cdc
        __asm _emit 0x75
        __asm _emit 0x24
        push 58d548h
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 77 51 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 1ch]
        mov byte ptr [eax + 3], 5
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 55: jmp 0x4c4d31
        __asm _emit 0xeb
        __asm _emit 0x55
        cmp dword ptr [ebp - 24h], 80000000h
        ; Exact mapped bytes 75 2A: jne 0x4c4d0f
        __asm _emit 0x75
        __asm _emit 0x2a
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 75 24: jne 0x4c4d0f
        __asm _emit 0x75
        __asm _emit 0x24
        push 58d540h
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 44 51 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 1ch]
        mov byte ptr [edx + 3], 5
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 22: jmp 0x4c4d31
        __asm _emit 0xeb
        __asm _emit 0x22
        push 58d538h
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 20 51 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 1ch]
        mov byte ptr [ecx + 3], 6
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes E9 29 03 00 00: jmp 0x4c505f
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 70h]
        and edx, 0ffffh
        sar edx, 8
        ; Exact mapped bytes 66 89 55 94: mov word ptr [ebp - 0x6c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x94
        mov eax, dword ptr [ebp - 70h]
        and eax, 0ffffh
        and eax, 0ffh
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 24h]
        shr ecx, 18h
        ; Exact mapped bytes 66 89 4D C0: mov word ptr [ebp - 0x40], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 64h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 70h]
        and eax, 0ffffh
        imul edx, eax
        mov ecx, dword ptr [ebp - 3ch]
        and ecx, 0ffffh
        mov eax, dword ptr [ebp - 6ch]
        and eax, 0ffffh
        imul ecx, eax
        add edx, ecx
        mov ecx, dword ptr [ebp - 60h]
        and ecx, 0ffffh
        mov eax, dword ptr [ebp - 40h]
        and eax, 0ffffh
        imul ecx, eax
        add edx, ecx
        sub edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 8]
        sar ecx, 10h
        ; Exact mapped bytes 66 89 4D A4: mov word ptr [ebp - 0x5c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 66 8B 55 90: mov dx, word ptr [ebp - 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x90
        ; Exact mapped bytes 66 89 55 D2: mov word ptr [ebp - 0x2e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 32h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 36h], ecx
        ; Exact mapped bytes 66 C7 45 C8 00 00: mov word ptr [ebp - 0x38], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 0F BF 55 A4: movsx edx, word ptr [ebp - 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xa4
        neg edx
        push edx
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 93 26 00 00: call 0x4c7470
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 2eh]
        and ecx, 0ffffh
        cmp ecx, 3fffh
        ; Exact mapped bytes 7C 1C: jl 0x4c4e0d
        __asm _emit 0x7c
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B 55 A4: mov dx, word ptr [ebp - 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa4
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 A4: mov word ptr [ebp - 0x5c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa4
        lea eax, [ebp - 54h]
        push eax
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 26 22 00 00: call 0x4c7030
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 66 8B 45 A4: mov ax, word ptr [ebp - 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 40: je 0x4c4e61
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 0F BF 55 A4: movsx edx, word ptr [ebp - 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xa4
        mov eax, dword ptr [ebp + 14h]
        add eax, edx
        mov dword ptr [ebp + 14h], eax
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7F 2E: jg 0x4c4e61
        __asm _emit 0x7f
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 66 C7 01 00 00: mov word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        mov byte ptr [edx + 2], 20h
        mov eax, dword ptr [ebp + 1ch]
        mov byte ptr [eax + 3], 1
        mov ecx, dword ptr [ebp + 1ch]
        mov byte ptr [ecx + 4], 30h
        mov edx, dword ptr [ebp + 1ch]
        mov byte ptr [edx + 5], 0
        mov eax, 1
        ; Exact mapped bytes E9 01 02 00 00: jmp 0x4c5062
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 15h
        ; Exact mapped bytes 7E 07: jle 0x4c4e6e
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp + 14h], 15h
        mov eax, dword ptr [ebp - 2eh]
        and eax, 0ffffh
        sub eax, 3ffeh
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 66 C7 45 D2 00 00: mov word ptr [ebp - 0x2e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x4c4e96
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 1
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 8
        ; Exact mapped bytes 7D 0E: jge 0x4c4eaa
        __asm _emit 0x7d
        __asm _emit 0x0e
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 BB 02 00 00: call 0x4c5160
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB E3: jmp 0x4c4e8d
        __asm _emit 0xeb
        __asm _emit 0xe3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 7D 2C: jge 0x4c4edc
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 2ch]
        neg eax
        and eax, 0ffh
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 09: jmp 0x4c4ec8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 74h]
        sub ecx, 1
        mov dword ptr [ebp - 74h], ecx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 7E 0E: jle 0x4c4edc
        __asm _emit 0x7e
        __asm _emit 0x0e
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 E9 02 00 00: call 0x4c51c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB E3: jmp 0x4c4ebf
        __asm _emit 0xeb
        __asm _emit 0xe3
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4c4ef9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 66: jle 0x4c4f65
        __asm _emit 0x7e
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 46 02 00 00: call 0x4c5160
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 3A 02 00 00: call 0x4c5160
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 7A 01 00 00: call 0x4c50b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 1E 02 00 00: call 0x4c5160
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 2dh]
        and edx, 0ffh
        add edx, 30h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], dl
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov byte ptr [ebp - 2dh], 0
        ; Exact mapped bytes EB 8B: jmp 0x4c4ef0
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 28h], cl
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes 0F BE 45 D8: movsx eax, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xd8
        cmp eax, 35h
        ; Exact mapped bytes 7C 5B: jl 0x4c4fe3
        __asm _emit 0x7c
        __asm _emit 0x5b
        ; Exact mapped bytes EB 09: jmp 0x4c4f93
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 72 13: jb 0x4c4fb1
        __asm _emit 0x72
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 39h
        ; Exact mapped bytes 75 08: jne 0x4c4fb1
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 30h
        ; Exact mapped bytes EB D9: jmp 0x4c4f8a
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 73 19: jae 0x4c4fd5
        __asm _emit 0x73
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        add al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB 59: jmp 0x4c503c
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes EB 09: jmp 0x4c4fee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 72 0D: jb 0x4c5006
        __asm _emit 0x72
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 30h
        ; Exact mapped bytes 75 02: jne 0x4c5006
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DF: jmp 0x4c4fe5
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 73 2B: jae 0x4c503c
        __asm _emit 0x73
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 66 C7 01 00 00: mov word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        mov byte ptr [edx + 2], 20h
        mov eax, dword ptr [ebp + 1ch]
        mov byte ptr [eax + 3], 1
        mov ecx, dword ptr [ebp + 1ch]
        mov byte ptr [ecx + 4], 30h
        mov edx, dword ptr [ebp + 1ch]
        mov byte ptr [edx + 5], 0
        mov eax, 1
        ; Exact mapped bytes EB 26: jmp 0x4c5062
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov ecx, dword ptr [ebp - 4]
        sub ecx, eax
        add ecx, 1
        mov edx, dword ptr [ebp + 1ch]
        mov byte ptr [edx + 3], cl
        mov eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F BE 48 03: movsx ecx, byte ptr [eax + 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x03
        mov edx, dword ptr [ebp + 1ch]
        mov byte ptr [edx + ecx + 4], 0
        mov eax, dword ptr [ebp - 58h]
        mov esp, ebp
        pop ebp
        ret
    }
}
