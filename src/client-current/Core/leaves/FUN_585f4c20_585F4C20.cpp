// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F4C20 .. +0x655 bytes.
extern "C" __declspec(naked) void FUN_585f4c20_585F4C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 4ch], ecx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 68h]
        cmp ecx, 1
        ; Exact mapped bytes 74 4A: je 0x585f4c8d
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edx, dword ptr [ebp + 8]
        add edx, 6
        push edx
        push 588adbech
        push 588adc14h
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0
        push 588adc20h
        lea ecx, [ebp - 44h]
        push ecx
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 77 23 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x77
        __asm _emit 0x23
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 9ch], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 85 0F 05 00 00: jne 0x585f51b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 44h]
        shr ecx, 1
        and ecx, 1fh
        imul edx, ecx, 18h
        add edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A EF F2 FF: call 0x58523bd0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xef
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 4ch]
        movzx eax, word ptr [edx + 110h]
        cmp eax, 10h
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x585f4d6d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 4]
        mov eax, dword ptr [edx*4 + 58948c34h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 4B 77 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x77
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E4 FC E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0xff
        mov cl, byte ptr [eax + 35ch]
        mov byte ptr [ebp - 4dh], cl
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C3 C3 FF FF: call 0x585f10d0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 28 77 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x77
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C1 FC E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 68h], edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 13 77 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x77
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AC FC E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xe8
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
        mov byte ptr [ebp - 4eh], al
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx]
        mov dword ptr [ebp - 6ch], edx
        movzx eax, byte ptr [ebp - 4dh]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        push 0
        push 0
        movzx eax, byte ptr [ebp - 4eh]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 46 E0 F2 FF: call 0x58522db0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe0
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 74: jmp 0x585f4de1
        __asm _emit 0xeb
        __asm _emit 0x74
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx + 4]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        mov dword ptr [ebp - 80h], ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 4A C3 FF FF: call 0x585f10d0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 AF 76 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x76
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 48 FC E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 78h], edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 9A 76 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x76
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 FC E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xe8
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
        mov byte ptr [ebp - 4fh], al
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx]
        mov dword ptr [ebp - 7ch], edx
        push 9
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        push 0
        push 0
        movzx edx, byte ptr [ebp - 4fh]
        push edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 D0 DF F2 FF: call 0x58522db0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xdf
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 84h], edx
        push 0
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 EB E5 10 00: call 0x587033f0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe5
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 32 76 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x76
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CB FB E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx edx, word ptr [eax + 2]
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 58h], 1c3h
        ; Exact mapped bytes 7F 1A: jg 0x585f4e3f
        __asm _emit 0x7f
        __asm _emit 0x1a
        cmp dword ptr [ebp - 58h], 1c3h
        ; Exact mapped bytes 74 1C: je 0x585f4e4a
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp - 58h], 6fh
        ; Exact mapped bytes 74 16: je 0x585f4e4a
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 58h], 13eh
        ; Exact mapped bytes 74 0D: je 0x585f4e4a
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes EB 16: jmp 0x585f4e55
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp - 58h], 1c5h
        ; Exact mapped bytes 74 02: je 0x585f4e4a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x585f4e55
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 3C FD FF FF: call 0x585f4b90
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4ch]
        cmp dword ptr [eax + 114h], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x585f4f09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 589604e0h
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x585f4f04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 B9 75 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x75
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 52 FB E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xe8
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
        mov byte ptr [ebp - 50h], dl
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 9F 75 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x75
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov eax, 2
        imul esi, eax, 3
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 D4 D3 EC FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd3
        __asm _emit 0xec
        __asm _emit 0xff
        mov cl, byte ptr [eax + esi + 8]
        mov byte ptr [ebp - 51h], cl
        movzx edx, byte ptr [ebp - 50h]
        push edx
        movzx eax, byte ptr [ebp - 51h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 CD 0E 00: call 0x586e1c90
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 6
        push edx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 3B EC FF: call 0x584b8a20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3b
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        add eax, 6
        push eax
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 4B EC FF: call 0x584b9af0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4b
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x585f4fb4
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        movzx edx, word ptr [ecx + 1b6h]
        cmp edx, 8
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x585f4fb4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        movzx ecx, word ptr [eax + 1b6h]
        cmp ecx, 9
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x585f4fb4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 09 75 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x75
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A2 FA E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfa
        __asm _emit 0xe8
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
        mov byte ptr [ebp - 52h], dl
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 EF 74 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x74
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov eax, 2
        imul esi, eax, 3
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 24 D3 EC FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd3
        __asm _emit 0xec
        __asm _emit 0xff
        mov cl, byte ptr [eax + esi + 8]
        mov byte ptr [ebp - 53h], cl
        movzx edx, byte ptr [ebp - 52h]
        push edx
        movzx eax, byte ptr [ebp - 53h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 CD 0E 00: call 0x586e1c90
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 6
        push edx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 3A EC FF: call 0x584b8a20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x3a
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        add eax, 6
        push eax
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 4B EC FF: call 0x584b9af0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4b
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 50 F8 FF FF: call 0x585f4810
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 70 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x70
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 DE 2D E9 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2d
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx + 108h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585f500f
        __asm _emit 0x74
        __asm _emit 0x0e
        push 40000000h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 72 89 17 00: call 0x5876d980
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x89
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 47 8A 17 00: call 0x5876da60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x8a
        __asm _emit 0x17
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 BD 8A 17 00: call 0x5876dae0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x8a
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 109h]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x585f50d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        movzx ecx, word ptr [eax + 110h]
        test ecx, ecx
        ; Exact mapped bytes 75 4F: jne 0x585f5094
        __asm _emit 0x75
        __asm _emit 0x4f
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 10ch], 3
        ; Exact mapped bytes 73 41: jae 0x585f5092
        __asm _emit 0x73
        __asm _emit 0x41
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 05 8A 17 00: call 0x5876da60
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8a
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 9D 50 EB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4ch]
        add eax, 278h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D5 70 E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 A2: mov word ptr [ebp - 0x5e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa2
        push 0
        movzx ecx, word ptr [ebp - 5eh]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F D1 0E 00: call 0x586e21c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd1
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 42: jmp 0x585f50d6
        __asm _emit 0xeb
        __asm _emit 0x42
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C2 89 17 00: call 0x5876da60
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x89
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 5A 50 EB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4ch]
        add edx, 278h
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 91 70 E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 A0: mov word ptr [ebp - 0x60], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa0
        push 0
        movzx eax, word ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB D0 0E 00: call 0x586e21c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd0
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1A: jmp 0x585f50f2
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 109h]
        cmp edx, 2
        ; Exact mapped bytes 75 0B: jne 0x585f50f2
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 EF 89 17 00: call 0x5876dae0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x89
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 118h]
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 118h]
        mov eax, dword ptr [edx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4ch]
        movzx edx, word ptr [ecx + 1b6h]
        cmp edx, 2
        ; Exact mapped bytes 75 09: jne 0x585f5124
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 4D AB FF FF: call 0x585efc70
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 14 73 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x73
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD F8 E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf8
        __asm _emit 0xe8
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
        cmp ecx, 8
        ; Exact mapped bytes 75 15: jne 0x585f5158
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 2f0h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ecx + 2f0h], eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E0 72 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x72
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 F8 E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xe8
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
        cmp eax, 7
        ; Exact mapped bytes 74 1F: je 0x585f5196
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C1 72 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x72
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5A F8 E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xe8
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
        cmp edx, 6
        ; Exact mapped bytes 75 15: jne 0x585f51ab
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 2f4h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [edx + 2f4h], ecx
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x585f5264
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 44h]
        shr ecx, 1
        and ecx, 1fh
        imul edx, ecx, 18h
        add edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B BB F6 FF: call 0x58560d60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xbb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 98h], eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 F7 E1 10 00: call 0x587033f0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 6C E9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x6c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x585f5215
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1E 6F E9 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 49: je 0x585f5264
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1D 72 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x72
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D6 6C E9 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6c
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, 6
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 6
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x585f5262
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 68h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F 19 F0 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x19
        __asm _emit 0xf0
        __asm _emit 0xff
        add eax, 33ch
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 01 F7 FF FF: call 0x585f4960
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 02: jmp 0x585f5264
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB A6: jmp 0x585f520a
        __asm _emit 0xeb
        __asm _emit 0xa6
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 E1 BD 23 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xbd
        __asm _emit 0x23
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
