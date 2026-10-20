// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58560610 .. +0x318 bytes.
extern "C" __declspec(naked) void FUN_58560610_58560610() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 158h
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4D 7A F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58560645
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 68h]
        push edx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 3C 74 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 158h
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 34 7B F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 6B 73 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 B2 02 00 00: je 0x58560922
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 C8 73 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 78h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 85 97 02 00 00: jne 0x5856091d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 B2 73 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 DB 79 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x79
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x585606b7
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 70h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CA 73 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 81 73 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 3ch], ecx
        lea edx, [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 BA 7A F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F1 72 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x72
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 31 02 00 00: je 0x5856091b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 4E 73 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 40h], edx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 77 79 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x79
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2E 73 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 44h], edx
        lea eax, [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 67 7A F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 9E 72 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x72
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D9 01 00 00: je 0x58560916
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 99 F4 FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x99
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F0 72 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        add edx, 0eh
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 94 01 00 00: jne 0x58560902
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 CA 72 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x72
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 64 F9 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x64
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x5856086f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes 7D 45: jge 0x585607f2
        __asm _emit 0x7d
        __asm _emit 0x45
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 8B 72 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        movzx eax, byte ptr [edx + 0ch]
        imul ecx, eax, 48h
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 184h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
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
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 20h]
        movzx edx, byte ptr [ecx]
        sub edx, 1
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp - 20h]
        mov byte ptr [eax], dl
        ; Exact mapped bytes EB 46: jmp 0x58560838
        __asm _emit 0xeb
        __asm _emit 0x46
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 46 72 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x72
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        movzx edx, byte ptr [ecx + 0ch]
        imul eax, edx, 48h
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 18eh]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 10h]
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
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 28h]
        movzx ecx, byte ptr [eax]
        sub ecx, 1
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 28h]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 58h], ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F7 71 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        movzx eax, byte ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*4 + 3c4h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 54h]
        sub edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax], edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C9 71 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C C7 F2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc7
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov byte ptr [edx + 0ch], al
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E 61 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x61
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 B8 F2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb8
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 BB F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xbb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4C B6 F2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb6
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov dl, byte ptr [eax + 5]
        mov byte ptr [ecx + 0dh], dl
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 35 EE FF FF: call 0x5855f700
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6C 71 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        lea eax, [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 B5 96 F5 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x96
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0F: jmp 0x58560911
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 80h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 70 71 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F4 FD FF FF: jmp 0x5856070a
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8D FD FF FF: jmp 0x585606a8
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x58560922
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 14 FD FF FF: jmp 0x58560636
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
