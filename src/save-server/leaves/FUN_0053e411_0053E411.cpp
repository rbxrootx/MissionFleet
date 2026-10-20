// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053E411 .. +0x2A3 bytes.
extern "C" __declspec(naked) void FUN_0053e411_0053E411() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c5f2h
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
        mov dword ptr [eax], 635744h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 31: je 0x53e47c
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 12: je 0x53e475
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
        ; Exact mapped bytes EB 07: jmp 0x53e47c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 31: je 0x53e4b9
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x53e4b2
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
        ; Exact mapped bytes EB 07: jmp 0x53e4b9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes E8 A5 21 00 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x53e54c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 3C 6A 68 00 00: cmp dword ptr [0x686a3c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x53e50c
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 15 3C 6A 68 00: mov edx, dword ptr [0x686a3c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 12: je 0x53e4fb
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
        ; Exact mapped bytes EB 07: jmp 0x53e502
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes C7 05 3C 6A 68 00 00 00 00 00: mov dword ptr [0x686a3c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 38 6A 68 00 00: cmp dword ptr [0x686a38], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x53e54c
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes A1 38 6A 68 00: mov eax, dword ptr [0x686a38]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 12: je 0x53e53b
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
        ; Exact mapped bytes EB 07: jmp 0x53e542
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes C7 05 38 6A 68 00 00 00 00 00: mov dword ptr [0x686a38], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 74 0F: je 0x53e567
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 2D DA FA FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 9ch], 0
        ; Exact mapped bytes 74 0F: je 0x53e582
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 9ch]
        push eax
        ; Exact mapped bytes E8 12 DA FA FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xda
        __asm _emit 0xfa
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
        ; Exact mapped bytes 74 11: je 0x53e5a3
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
        ; Exact mapped bytes FF 15 F4 B9 68 00: call dword ptr [0x68b9f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb9
        __asm _emit 0x68
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
        ; Exact mapped bytes 74 11: je 0x53e5c4
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
        ; Exact mapped bytes FF 15 F4 B9 68 00: call dword ptr [0x68b9f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 31: je 0x53e601
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 12: je 0x53e5fa
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
        ; Exact mapped bytes EB 07: jmp 0x53e601
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes E8 5D 20 00 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax + 10h]
        cmp edx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 75 0A: jne 0x53e621
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 75 0A: jne 0x53e636
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        ; Exact mapped bytes E8 DE 8C F2 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        ; Exact mapped bytes E8 CC 8C F2 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x8c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 8ch]
        push eax
        ; Exact mapped bytes E8 BA 8C F2 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x8c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 90h]
        push edx
        ; Exact mapped bytes E8 A8 8C F2 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        ; Exact mapped bytes E8 96 8C F2 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [edx + 28h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 0A AC 04 00: call 0x5892b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xac
        __asm _emit 0x04
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
