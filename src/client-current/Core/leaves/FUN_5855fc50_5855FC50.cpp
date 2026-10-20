// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855FC50 .. +0x2D7 bytes.
extern "C" __declspec(naked) void FUN_5855fc50_5855FC50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 158h
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 10 84 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855fc82
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 60h]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 FF 7D F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 158h
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F7 84 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2E 7D F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 74 02 00 00: je 0x5855ff21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 8B 7D F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 34h], ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B4 83 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x83
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855fcde
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 68h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A3 7D F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5A 7D F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 38h], edx
        lea eax, [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 93 84 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CA 7C F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 0B 02 00 00: je 0x5855ff1c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 27 7D F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 3ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 50 83 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x83
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 07 7D F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 40h], eax
        lea ecx, [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 40 84 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 77 7C F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 B3 01 00 00: je 0x5855ff17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 D0 7C F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 0eh
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 7F 01 00 00: jne 0x5855ff03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B4 7C F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 6E F9 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x5855fe85
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        movzx ecx, ax
        cmp ecx, 10h
        ; Exact mapped bytes 7D 45: jge 0x5855fe08
        __asm _emit 0x7d
        __asm _emit 0x45
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 75 7C F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        movzx eax, byte ptr [edx + 0ch]
        imul ecx, eax, 48h
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 184h]
        mov dword ptr [ebp - 18h], eax
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
        movzx eax, dx
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 1ch]
        movzx edx, byte ptr [ecx]
        sub edx, 1
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 1ch]
        mov byte ptr [eax], dl
        ; Exact mapped bytes EB 46: jmp 0x5855fe4e
        __asm _emit 0xeb
        __asm _emit 0x46
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 30 7C F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        movzx edx, byte ptr [ecx + 0ch]
        imul eax, edx, 48h
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 18eh]
        mov dword ptr [ebp - 20h], edx
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
        sub edx, 10h
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [ebp - 24h]
        movzx ecx, byte ptr [eax]
        sub ecx, 1
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ebp - 24h]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 4ch], ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 E1 7B F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        movzx eax, byte ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*4 + 3c4h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        sub edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax], edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B3 7B F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 2C: je 0x5855febe
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A6 7B F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 50h], ecx
        push 134h
        mov edx, dword ptr [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 87 11 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x11
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 88 7B F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [eax], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7A 7B F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        lea edx, [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C3 A0 F5 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 6ch], edx
        ; Exact mapped bytes EB 0F: jmp 0x5855ff12
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 78h]
        push ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 6F 7B F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1A FE FF FF: jmp 0x5855fd31
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B3 FD FF FF: jmp 0x5855fccf
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 52 FD FF FF: jmp 0x5855fc73
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
