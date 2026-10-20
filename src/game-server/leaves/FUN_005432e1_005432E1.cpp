// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005432E1 .. +0x2A3 bytes.
extern "C" __declspec(naked) void FUN_005432e1_005432E1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cc52h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 44h
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [eax], 58328ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 31: je 0x54334c
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 12: je 0x543345
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x54334c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 31: je 0x543389
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x543382
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x543389
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes E8 B5 20 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x54341c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 28 E5 5D 00 00: cmp dword ptr [0x5de528], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x5433dc
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 15 28 E5 5D 00: mov edx, dword ptr [0x5de528]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 12: je 0x5433cb
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5433d2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes C7 05 28 E5 5D 00 00 00 00 00: mov dword ptr [0x5de528], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 24 E5 5D 00 00: cmp dword ptr [0x5de524], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x54341c
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes A1 24 E5 5D 00: mov eax, dword ptr [0x5de524]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 12: je 0x54340b
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x543412
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes C7 05 24 E5 5D 00 00 00 00 00: mov dword ptr [0x5de524], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 74 0F: je 0x543437
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 9D 3B FC FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 9ch], 0
        ; Exact mapped bytes 74 0F: je 0x543452
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 9ch]
        push eax
        ; Exact mapped bytes E8 82 3B FC FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 B4 00 00 00: mov dx, word ptr [ecx + 0xb4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x543473
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 66 8B 88 B4 00 00 00: mov cx, word ptr [eax + 0xb4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 A4 23 5E 00: call dword ptr [0x5e23a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 B6 00 00 00: mov ax, word ptr [edx + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x543494
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 66 8B 91 B6 00 00 00: mov dx, word ptr [ecx + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 A4 23 5E 00: call dword ptr [0x5e23a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 31: je 0x5434d1
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 12: je 0x5434ca
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5434d1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes E8 6D 1F 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax + 10h]
        cmp edx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 75 0A: jne 0x5434f1
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 75 0A: jne 0x543506
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        ; Exact mapped bytes E8 6E 77 F6 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        ; Exact mapped bytes E8 5C 77 F6 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 8ch]
        push eax
        ; Exact mapped bytes E8 4A 77 F6 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 90h]
        push edx
        ; Exact mapped bytes E8 38 77 F6 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        ; Exact mapped bytes E8 26 77 F6 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [edx + 28h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 DA 5D 03 00: call 0x579350
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
