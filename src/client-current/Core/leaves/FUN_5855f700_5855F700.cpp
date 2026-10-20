// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855F700 .. +0x3CC bytes.
extern "C" __declspec(naked) void FUN_5855f700_5855F700() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8ch
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 158h
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5C 89 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x89
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855f736
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 60h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4B 83 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x83
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 158h
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 43 8A F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x8a
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7A 82 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 64 03 00 00: je 0x5855fac5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 D7 82 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 0ch]
        cmp dword ptr [eax + 78h], edx
        ; Exact mapped bytes 0F 85 45 03 00 00: jne 0x5855fac0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 BD 82 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 28h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A4 82 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CD 88 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 86 82 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 2ch], ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 6D 82 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 96 88 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F 82 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 42 8A F2 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8a
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 86 68 01 00 00: jbe 0x5855f96e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 2B 82 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 54 88 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0D 82 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 34h], ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 36 88 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855f85c
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 74h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 25 82 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 DC 81 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 38h], edx
        lea eax, [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 05 88 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE 81 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 3ch], edx
        lea eax, [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F7 88 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2E 81 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 7C: je 0x5855f925
        __asm _emit 0x74
        __asm _emit 0x7c
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8F 81 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        movzx eax, word ptr [edx + 8]
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 8]
        cmp eax, edx
        ; Exact mapped bytes 7E 5E: jle 0x5855f920
        __asm _emit 0x7e
        __asm _emit 0x5e
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 76 81 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 40h], ecx
        lea edx, [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 9F 87 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 58 81 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], eax
        lea ecx, [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 9A A7 F5 FF: call 0x584ba0b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa7
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 05: jmp 0x5855f925
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 28 FF FF FF: jmp 0x5855f84d
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 41: jne 0x5855f96c
        __asm _emit 0x75
        __asm _emit 0x41
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 0D 81 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 50h], edx
        lea eax, [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 33 87 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EC 80 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 54h], edx
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B5 88 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 41: jmp 0x5855f9af
        __asm _emit 0xeb
        __asm _emit 0x41
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 CA 80 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 58h], edx
        lea eax, [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 F0 86 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 80 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 5ch], edx
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 72 88 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 70h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 72 F9 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x72
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x5855faa9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
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
        cmp edx, 10h
        ; Exact mapped bytes 7D 50: jge 0x5855fa31
        __asm _emit 0x7d
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 0ch]
        imul edx, ecx, 48h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 184h]
        mov edx, dword ptr [ebp - 0ch]
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
        movzx edx, ax
        movzx eax, byte ptr [ecx + edx]
        add eax, 1
        mov ecx, dword ptr [ebp - 0ch]
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
        movzx ecx, dx
        mov edx, dword ptr [ebp + 8]
        movzx edx, byte ptr [edx + 0ch]
        imul edx, edx, 48h
        mov esi, dword ptr [ebp - 8]
        lea edx, [esi + edx + 184h]
        mov byte ptr [edx + ecx], al
        ; Exact mapped bytes EB 50: jmp 0x5855fa81
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 0ch]
        imul edx, ecx, 48h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 184h]
        mov edx, dword ptr [ebp - 0ch]
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
        movzx edx, ax
        movzx eax, byte ptr [ecx + edx - 6]
        add eax, 1
        mov ecx, dword ptr [ebp - 0ch]
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
        movzx ecx, dx
        mov edx, dword ptr [ebp + 8]
        movzx edx, byte ptr [edx + 0ch]
        imul edx, edx, 48h
        mov esi, dword ptr [ebp - 8]
        lea edx, [esi + edx + 184h]
        mov byte ptr [edx + ecx - 6], al
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 3c4h]
        mov ecx, dword ptr [ebp - 0ch]
        add eax, dword ptr [ecx + 78h]
        mov edx, dword ptr [ebp + 8]
        movzx ecx, byte ptr [edx + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 3c4h], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x5855fabe
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 6ch], ecx
        ; Exact mapped bytes EB 05: jmp 0x5855fac5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 62 FC FF FF: jmp 0x5855f727
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
