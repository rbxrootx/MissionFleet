// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EAEA0 .. +0x6FD bytes.
extern "C" __declspec(naked) void FUN_584eaea0_584EAEA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c74h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0c08h], ecx
        mov eax, dword ptr [ebp - 0c08h]
        movzx ecx, byte ptr [eax + 78h]
        sub ecx, 1
        imul edx, ecx, 418h
        mov eax, dword ptr [ebp - 0c08h]
        mov ecx, dword ptr [eax + 6ch]
        cmp dword ptr [ecx + edx + 400h], 0
        ; Exact mapped bytes 75 74: jne 0x584eaf53
        __asm _emit 0x75
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 0c08h]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 0c64h], eax
        mov ecx, dword ptr [ebp - 0c08h]
        movzx edx, byte ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 0c08h]
        movzx ecx, byte ptr [eax + 79h]
        cmp edx, ecx
        ; Exact mapped bytes 75 0C: jne 0x584eaf12
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0c18h], 1
        ; Exact mapped bytes EB 0A: jmp 0x584eaf1c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c18h], 0
        mov edx, dword ptr [ebp - 0c18h]
        push edx
        mov eax, dword ptr [ebp - 0c08h]
        movzx ecx, byte ptr [eax + 78h]
        sub ecx, 1
        imul edx, ecx, 418h
        mov eax, dword ptr [ebp - 0c08h]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 0c64h]
        ; Exact mapped bytes E8 D3 16 00 00: call 0x584ec620
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3A 06 00 00: jmp 0x584eb58d
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0c08h]
        mov al, byte ptr [edx + 7ah]
        mov byte ptr [ebp - 0c1ch], al
        cmp byte ptr [ebp - 0c1ch], 2
        ; Exact mapped bytes 74 12: je 0x584eaf7d
        __asm _emit 0x74
        __asm _emit 0x12
        cmp byte ptr [ebp - 0c1ch], 3
        ; Exact mapped bytes 0F 84 C2 01 00 00: je 0x584eb13a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 06 00 00: jmp 0x584eb58d
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c08h]
        mov dl, byte ptr [ecx + 78h]
        mov byte ptr [ebp - 0c68h], dl
        cmp byte ptr [ebp - 0c68h], 4
        ; Exact mapped bytes 74 05: je 0x584eaf9a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 9B 01 00 00: jmp 0x584eb135
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c08h]
        movzx ecx, byte ptr [eax + 78h]
        sub ecx, 1
        imul edx, ecx, 418h
        mov eax, dword ptr [ebp - 0c08h]
        mov ecx, dword ptr [eax + 6ch]
        mov edx, dword ptr [ecx + edx + 414h]
        mov dword ptr [ebp - 0c10h], edx
        cmp dword ptr [ebp - 0c10h], 0
        ; Exact mapped bytes 0F 84 59 01 00 00: je 0x584eb129
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c10h]
        ; Exact mapped bytes E8 95 83 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 18: jne 0x584eb003
        __asm _emit 0x75
        __asm _emit 0x18
        push 588a1f00h
        ; Exact mapped bytes E8 FB 6F 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c2ch], eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x584eb0cd
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c10h]
        ; Exact mapped bytes E8 62 83 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x83
        __asm _emit 0xfd
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
        cmp eax, 2
        ; Exact mapped bytes 75 18: jne 0x584eb036
        __asm _emit 0x75
        __asm _emit 0x18
        push 588a1f28h
        ; Exact mapped bytes E8 C8 6F 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c28h], eax
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x584eb0c1
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c10h]
        ; Exact mapped bytes E8 2F 83 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 3
        ; Exact mapped bytes 75 15: jne 0x584eb066
        __asm _emit 0x75
        __asm _emit 0x15
        push 588a1f50h
        ; Exact mapped bytes E8 95 6F 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c24h], eax
        ; Exact mapped bytes EB 4F: jmp 0x584eb0b5
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 0c10h]
        ; Exact mapped bytes E8 FF 82 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 75 15: jne 0x584eb096
        __asm _emit 0x75
        __asm _emit 0x15
        push 588a1f78h
        ; Exact mapped bytes E8 65 6F 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c20h], eax
        ; Exact mapped bytes EB 13: jmp 0x584eb0a9
        __asm _emit 0xeb
        __asm _emit 0x13
        push 588a1fa0h
        ; Exact mapped bytes E8 50 6F 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c20h], eax
        mov edx, dword ptr [ebp - 0c20h]
        mov dword ptr [ebp - 0c24h], edx
        mov eax, dword ptr [ebp - 0c24h]
        mov dword ptr [ebp - 0c28h], eax
        mov ecx, dword ptr [ebp - 0c28h]
        mov dword ptr [ebp - 0c2ch], ecx
        mov edx, dword ptr [ebp - 0c2ch]
        push edx
        mov eax, dword ptr [ebp - 0c08h]
        movzx ecx, byte ptr [eax + 78h]
        sub ecx, 1
        imul edx, ecx, 418h
        mov eax, dword ptr [ebp - 0c08h]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, edx
        push ecx
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 0c08h]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 0c6ch], ecx
        push 0
        lea edx, [ebp - 404h]
        push edx
        mov ecx, dword ptr [ebp - 0c6ch]
        ; Exact mapped bytes E8 FA 14 00 00: call 0x584ec620
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0C: jmp 0x584eb135
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0c08h]
        ; Exact mapped bytes E8 BC E2 FF FF: call 0x584e93f0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 53 04 00 00: jmp 0x584eb58d
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c08h]
        mov cl, byte ptr [eax + 78h]
        mov byte ptr [ebp - 0c30h], cl
        cmp byte ptr [ebp - 0c30h], 2
        ; Exact mapped bytes 74 12: je 0x584eb164
        __asm _emit 0x74
        __asm _emit 0x12
        cmp byte ptr [ebp - 0c30h], 3
        ; Exact mapped bytes 0F 84 9A 01 00 00: je 0x584eb2f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 29 04 00 00: jmp 0x584eb58d
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 418h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0c08h]
        mov edx, dword ptr [ecx + 6ch]
        mov eax, dword ptr [edx + eax + 414h]
        mov dword ptr [ebp - 0c14h], eax
        cmp dword ptr [ebp - 0c14h], 0
        ; Exact mapped bytes 0F 84 59 01 00 00: je 0x584eb2e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c14h]
        ; Exact mapped bytes E8 D6 81 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 75 18: jne 0x584eb1c2
        __asm _emit 0x75
        __asm _emit 0x18
        push 588a1fc8h
        ; Exact mapped bytes E8 3C 6E 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c40h], eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x584eb28c
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c14h]
        ; Exact mapped bytes E8 A3 81 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 75 18: jne 0x584eb1f5
        __asm _emit 0x75
        __asm _emit 0x18
        push 588a1ff0h
        ; Exact mapped bytes E8 09 6E 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c3ch], eax
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x584eb280
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c14h]
        ; Exact mapped bytes E8 70 81 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x81
        __asm _emit 0xfd
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
        cmp eax, 3
        ; Exact mapped bytes 75 15: jne 0x584eb225
        __asm _emit 0x75
        __asm _emit 0x15
        push 588a2018h
        ; Exact mapped bytes E8 D6 6D 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c38h], eax
        ; Exact mapped bytes EB 4F: jmp 0x584eb274
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 0c14h]
        ; Exact mapped bytes E8 40 81 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 75 15: jne 0x584eb255
        __asm _emit 0x75
        __asm _emit 0x15
        push 588a2040h
        ; Exact mapped bytes E8 A6 6D 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c34h], eax
        ; Exact mapped bytes EB 13: jmp 0x584eb268
        __asm _emit 0xeb
        __asm _emit 0x13
        push 588a2068h
        ; Exact mapped bytes E8 91 6D 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c34h], eax
        mov eax, dword ptr [ebp - 0c34h]
        mov dword ptr [ebp - 0c38h], eax
        mov ecx, dword ptr [ebp - 0c38h]
        mov dword ptr [ebp - 0c3ch], ecx
        mov edx, dword ptr [ebp - 0c3ch]
        mov dword ptr [ebp - 0c40h], edx
        mov eax, dword ptr [ebp - 0c40h]
        push eax
        mov ecx, dword ptr [ebp - 0c08h]
        movzx edx, byte ptr [ecx + 78h]
        sub edx, 1
        imul eax, edx, 418h
        mov ecx, dword ptr [ebp - 0c08h]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        push edx
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0c08h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 0c70h], edx
        push 0
        lea eax, [ebp - 804h]
        push eax
        mov ecx, dword ptr [ebp - 0c70h]
        ; Exact mapped bytes E8 3B 13 00 00: call 0x584ec620
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0C: jmp 0x584eb2f4
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0c08h]
        ; Exact mapped bytes E8 FD E0 FF FF: call 0x584e93f0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 94 02 00 00: jmp 0x584eb58d
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 418h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0c08h]
        mov ecx, dword ptr [eax + 6ch]
        mov edx, dword ptr [ecx + edx + 414h]
        mov dword ptr [ebp - 0c0ch], edx
        cmp dword ptr [ebp - 0c0ch], 0
        ; Exact mapped bytes 0F 84 5D 02 00 00: je 0x584eb581
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c0ch]
        ; Exact mapped bytes E8 41 80 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 18: jne 0x584eb357
        __asm _emit 0x75
        __asm _emit 0x18
        push 588a2090h
        ; Exact mapped bytes E8 A7 6C 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c5ch], eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x584eb421
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c0ch]
        ; Exact mapped bytes E8 0E 80 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x80
        __asm _emit 0xfd
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
        cmp eax, 2
        ; Exact mapped bytes 75 18: jne 0x584eb38a
        __asm _emit 0x75
        __asm _emit 0x18
        push 588a20b8h
        ; Exact mapped bytes E8 74 6C 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4ch], eax
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x584eb415
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c0ch]
        ; Exact mapped bytes E8 DB 7F FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 3
        ; Exact mapped bytes 75 15: jne 0x584eb3ba
        __asm _emit 0x75
        __asm _emit 0x15
        push 588a20e0h
        ; Exact mapped bytes E8 41 6C 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c48h], eax
        ; Exact mapped bytes EB 4F: jmp 0x584eb409
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 0c0ch]
        ; Exact mapped bytes E8 AB 7F FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 75 15: jne 0x584eb3ea
        __asm _emit 0x75
        __asm _emit 0x15
        push 588a2108h
        ; Exact mapped bytes E8 11 6C 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c44h], eax
        ; Exact mapped bytes EB 13: jmp 0x584eb3fd
        __asm _emit 0xeb
        __asm _emit 0x13
        push 588a2130h
        ; Exact mapped bytes E8 FC 6B 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c44h], eax
        mov edx, dword ptr [ebp - 0c44h]
        mov dword ptr [ebp - 0c48h], edx
        mov eax, dword ptr [ebp - 0c48h]
        mov dword ptr [ebp - 0c4ch], eax
        mov ecx, dword ptr [ebp - 0c4ch]
        mov dword ptr [ebp - 0c5ch], ecx
        mov ecx, dword ptr [ebp - 0c0ch]
        ; Exact mapped bytes E8 44 7F FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x7f
        __asm _emit 0xfd
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
        cmp eax, 1
        ; Exact mapped bytes 75 18: jne 0x584eb454
        __asm _emit 0x75
        __asm _emit 0x18
        push 588a2158h
        ; Exact mapped bytes E8 AA 6B 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c60h], eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x584eb51e
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c0ch]
        ; Exact mapped bytes E8 11 7F FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 75 18: jne 0x584eb487
        __asm _emit 0x75
        __asm _emit 0x18
        push 588a2180h
        ; Exact mapped bytes E8 77 6B 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c58h], eax
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x584eb512
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c0ch]
        ; Exact mapped bytes E8 DE 7E FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 75 15: jne 0x584eb4b7
        __asm _emit 0x75
        __asm _emit 0x15
        push 588a21a8h
        ; Exact mapped bytes E8 44 6B 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c54h], eax
        ; Exact mapped bytes EB 4F: jmp 0x584eb506
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 0c0ch]
        ; Exact mapped bytes E8 AE 7E FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7e
        __asm _emit 0xfd
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
        cmp eax, 4
        ; Exact mapped bytes 75 15: jne 0x584eb4e7
        __asm _emit 0x75
        __asm _emit 0x15
        push 588a21d0h
        ; Exact mapped bytes E8 14 6B 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c50h], eax
        ; Exact mapped bytes EB 13: jmp 0x584eb4fa
        __asm _emit 0xeb
        __asm _emit 0x13
        push 588a21f8h
        ; Exact mapped bytes E8 FF 6A 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c50h], eax
        mov ecx, dword ptr [ebp - 0c50h]
        mov dword ptr [ebp - 0c54h], ecx
        mov edx, dword ptr [ebp - 0c54h]
        mov dword ptr [ebp - 0c58h], edx
        mov eax, dword ptr [ebp - 0c58h]
        mov dword ptr [ebp - 0c60h], eax
        mov ecx, dword ptr [ebp - 0c08h]
        movzx edx, byte ptr [ecx + 78h]
        sub edx, 1
        imul eax, edx, 418h
        mov ecx, dword ptr [ebp - 0c08h]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        mov eax, dword ptr [ebp - 0c5ch]
        push eax
        mov ecx, dword ptr [ebp - 0c60h]
        push ecx
        push edx
        lea edx, [ebp - 0c04h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, dword ptr [ebp - 0c08h]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 0c74h], ecx
        push 1
        lea edx, [ebp - 0c04h]
        push edx
        mov ecx, dword ptr [ebp - 0c74h]
        ; Exact mapped bytes E8 A2 10 00 00: call 0x584ec620
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0C: jmp 0x584eb58d
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0c08h]
        ; Exact mapped bytes E8 64 DE FF FF: call 0x584e93f0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B9 5A 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x5a
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
