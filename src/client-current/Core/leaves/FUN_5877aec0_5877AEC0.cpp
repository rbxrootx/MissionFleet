// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877AEC0 .. +0x260 bytes.
extern "C" __declspec(naked) void FUN_5877aec0_5877AEC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 94h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 58h], ecx
        push 50h
        push 0
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 2D 1F 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x1f
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 58: jne 0x5877af44
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + ecx*4 + 124h]
        mov dword ptr [ebp - 64h], eax
        push 505050h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D7 B1 D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + ecx*4 + 124h]
        mov dword ptr [ebp - 6ch], eax
        push 588b5834h
        ; Exact mapped bytes E8 CD 70 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        push 505050h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 C2 66 04 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CC 01 00 00: jmp 0x5877b110
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 9A D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9a
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 AE 4D D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4d
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 0F 84 A1 01 00 00: je 0x5877b110
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ffh
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 23 90 98 00 00 00: and dx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, dx
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [edx + 40ch], ecx
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        mov dword ptr [ebp - 60h], edx
        cmp dword ptr [ebp - 60h], 5
        ; Exact mapped bytes 0F 87 12 01 00 00: ja 0x5877b0be
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 24 85 20 B1 77 58: jmp dword ptr [eax*4 + 0x5877b120]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xb1
        __asm _emit 0x77
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp + 8]
        imul edx, dword ptr [ecx + 40ch]
        mov dword ptr [ebp - 74h], edx
        push 588b584ch
        ; Exact mapped bytes E8 20 70 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x70
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x5877b0be
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp + 8]
        imul edx, dword ptr [ecx + 40ch]
        mov dword ptr [ebp - 7ch], edx
        push 588b5864h
        ; Exact mapped bytes E8 E2 6F DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x6f
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x5877b0be
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp + 8]
        imul edx, dword ptr [ecx + 40ch]
        mov dword ptr [ebp - 84h], edx
        push 588b587ch
        ; Exact mapped bytes E8 A1 6F DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x6f
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes EB 45: jmp 0x5877b0be
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp + 8]
        imul edx, dword ptr [ecx + 40ch]
        mov dword ptr [ebp - 8ch], edx
        push 588b5894h
        ; Exact mapped bytes E8 5A 6F DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6f
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov edx, dword ptr [ebp - 90h]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        lea ecx, [ebp - 54h]
        push ecx
        mov ecx, 5890bef4h
        ; Exact mapped bytes E8 94 C4 D4 FF: call 0x584c7560
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc4
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 15 3C BF 90 58: mov dword ptr [0x5890bf3c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 40ch]
        ; Exact mapped bytes 89 0D 40 BF 90 58: mov dword ptr [0x5890bf40], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + edx*4 + 124h]
        mov dword ptr [ebp - 94h], ecx
        push 0ffffffh
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 F1 64 04 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 36 5F 0B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x5f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
