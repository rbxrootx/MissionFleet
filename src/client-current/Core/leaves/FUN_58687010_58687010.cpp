// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58687010 .. +0x344 bytes.
extern "C" __declspec(naked) void FUN_58687010_58687010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        push esi
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B F9 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf9
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 1D 03 00 00: je 0x5868734f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 56 C2 F4 FF: call 0x585d3290
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc2
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ecx + 98h]
        ; Exact mapped bytes 74 05: je 0x5868704a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 05 03 00 00: jmp 0x5868734f
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        movzx eax, word ptr [edx + 0a4h]
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x58687063
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, 1
        ; Exact mapped bytes 66 89 4D F2: mov word ptr [ebp - 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf2
        ; Exact mapped bytes EB 06: jmp 0x58687069
        __asm _emit 0xeb
        __asm _emit 0x06
        xor edx, edx
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 8B 4D F2: mov cx, word ptr [ebp - 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf2
        ; Exact mapped bytes 66 89 88 A4 00 00 00: mov word ptr [eax + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        movzx edx, word ptr [ecx + 0a4h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AA 87 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0F 4D 13 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x4d
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0b4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov byte ptr [ebp - 1], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 0C: jmp 0x586870ee
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D F8: mov cx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        movzx esi, word ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 46 53 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x53
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DF D8 DF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd8
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp esi, eax
        ; Exact mapped bytes 0F 8D 37 02 00 00: jge 0x5868734f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 20 53 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x53
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        movzx ecx, word ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 30 5F E0 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5f
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        movzx edx, word ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6F B6 F4 FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb6
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 C0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        movzx ecx, word ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6A E2 F7 FF: call 0x586053c0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe2
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 D0: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        movzx eax, word ptr [ebp - 14h]
        cmp eax, 5
        ; Exact mapped bytes 0F 85 DF 01 00 00: jne 0x5868734a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [edx + 98h]
        ; Exact mapped bytes 0F 85 CC 01 00 00: jne 0x5868734a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ecx + 9ch]
        ; Exact mapped bytes 0F 85 B9 01 00 00: jne 0x5868734a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 9A EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9a
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        movzx edx, word ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C4 C0 F4 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc0
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 1ch]
        movzx ecx, word ptr [eax + 0a4h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E8 FD ED FF: call 0x58566fb0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CB 5E E0 FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 1ch]
        movzx edx, word ptr [ecx + 0a4h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 BF FD ED FF: call 0x58566fb0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A2 5E E0 FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x5e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + 34h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 9A EC FF: call 0x58550c30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9a
        __asm _emit 0xec
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 0F 85 24 01 00 00: jne 0x5868734a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        movzx edx, word ptr [ecx + 0a4h]
        test edx, edx
        ; Exact mapped bytes 75 27: jne 0x5868725b
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 99 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x99
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        movzx eax, word ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 21 C0 F4 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc0
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA 50 E0 FF: call 0x5848c340
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x50
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 25: jmp 0x58687280
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 99 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x99
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        movzx ecx, word ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 FA BF F4 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xbf
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 93 FB FF FF: call 0x58686e10
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 82 9A 00 00 00: mov ax, word ptr [edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 1D: jne 0x586872b7
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B FB FF FF: call 0x58686df0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 0ch]
        imul ecx, edx, 38h
        mov edx, 2
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        ; Exact mapped bytes EB 1B: jmp 0x586872d2
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E FB FF FF: call 0x58686df0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 0ch]
        imul edx, ecx, 38h
        mov ecx, 1
        ; Exact mapped bytes 66 89 0C 10: mov word ptr [eax + edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x10
        movzx edx, byte ptr [ebp - 1]
        test edx, edx
        ; Exact mapped bytes 75 70: jne 0x5868734a
        __asm _emit 0x75
        __asm _emit 0x70
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 99 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x99
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        movzx eax, word ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 7B BF F4 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbf
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D4 FA FF FF: call 0x58686dd0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 49: jne 0x5868734a
        __asm _emit 0x75
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 1ch]
        movzx edx, word ptr [ecx + 0a4h]
        test edx, edx
        ; Exact mapped bytes 75 1F: jne 0x5868732e
        __asm _emit 0x75
        __asm _emit 0x1f
        push 0
        movzx eax, word ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 45 0D F5 FF: call 0x585d8060
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0d
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x5868732c
        __asm _emit 0x75
        __asm _emit 0x09
        mov cl, byte ptr [ebp - 1]
        add cl, 1
        mov byte ptr [ebp - 1], cl
        ; Exact mapped bytes EB 1C: jmp 0x5868734a
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 1
        movzx edx, word ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 26 0D F5 FF: call 0x585d8060
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x0d
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        cmp eax, 1
        ; Exact mapped bytes 75 08: jne 0x5868734a
        __asm _emit 0x75
        __asm _emit 0x08
        mov al, byte ptr [ebp - 1]
        add al, 1
        mov byte ptr [ebp - 1], al
        ; Exact mapped bytes E9 93 FD FF FF: jmp 0x586870e2
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
