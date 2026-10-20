// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857DB40 .. +0x367 bytes.
extern "C" __declspec(naked) void FUN_5857db40_5857DB40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 8E F0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 55 F4 F0 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf4
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x5857db6d
        __asm _emit 0x75
        __asm _emit 0x0e
        movzx eax, word ptr [ebp + 8]
        or eax, 7c3d0000h
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0D: jmp 0x5857db7a
        __asm _emit 0xeb
        __asm _emit 0x0d
        movzx ecx, word ptr [ebp + 8]
        or ecx, 409b0000h
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 3
        ; Exact mapped bytes 77 2C: ja 0x5857dbb2
        __asm _emit 0x77
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 24 85 A8 DE 57 58: jmp dword ptr [eax*4 + 0x5857dea8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0xde
        __asm _emit 0x57
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], 0d36f9ac4h
        ; Exact mapped bytes EB 19: jmp 0x5857dbb2
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 10h], 9367fc08h
        ; Exact mapped bytes EB 10: jmp 0x5857dbb2
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 10h], 36d49a6ch
        ; Exact mapped bytes EB 07: jmp 0x5857dbb2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0f74503b1h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A6 3A FF FF: call 0x58571660
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 98 3A FF FF: call 0x58571660
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 E4 F0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe4
        __asm _emit 0xf0
        __asm _emit 0xff
        imul ecx, eax, 3
        add ecx, 0ah
        push ecx
        ; Exact mapped bytes E8 5D 34 2B 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x34
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 E4 F0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe4
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + edx], al
        mov dword ptr [ebp - 0ch], 0ah
        mov edx, 1
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx], 0
        mov ecx, 1
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 E2 F0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xe2
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x5857dc49
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EA E4 F0 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe4
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x5857dd35
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 3A FF FF: call 0x58571710
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x5857dcca
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D9 E7 F0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 92 E2 F0 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe2
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x5857dc96
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, 1
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + ecx]
        add al, 1
        mov ecx, 1
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx], al
        ; Exact mapped bytes EB 34: jmp 0x5857dcca
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A2 E7 F0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe7
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5B E2 F0 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe2
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 4]
        cmp eax, 1
        ; Exact mapped bytes 75 1C: jne 0x5857dcca
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, 1
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + ecx]
        add al, 1
        mov ecx, 1
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx], al
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3E 3B FF FF: call 0x58571810
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx], al
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3D 3B FF FF: call 0x58571830
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx], al
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DC 3A FF FF: call 0x585717f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx], al
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 09 FF FF FF: jmp 0x5857dc3e
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [edx + 58948c34h]
        ; Exact mapped bytes E8 38 6C F0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + edx], al
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [edx + 58948c34h]
        ; Exact mapped bytes E8 17 6C F0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx], al
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [ecx + 58948c34h]
        ; Exact mapped bytes E8 C6 3A FF FF: call 0x58571850
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5857dd97
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 07: jmp 0x5857dd9e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, 1
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ebp - 20h]
        mov byte ptr [ecx + eax], dl
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [eax + 58948c34h]
        ; Exact mapped bytes E8 8E 3A FF FF: call 0x58571850
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5857ddcf
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 07: jmp 0x5857ddd6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, 1
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 24h]
        mov byte ptr [eax + edx], cl
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [eax + 58948c34h]
        ; Exact mapped bytes E8 96 93 F5 FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x93
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, 1
        imul edx, ecx, 7
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + edx], al
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [edx + 58948c34h]
        ; Exact mapped bytes E8 75 93 F5 FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x93
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 3
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx], al
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 8B F0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 38 F5 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5857de48
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 07: jmp 0x5857de4f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, 1
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [ebp - 28h]
        mov byte ptr [edx + ecx], al
        push 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 E2 F0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe2
        __asm _emit 0xf0
        __asm _emit 0xff
        imul ecx, eax, 3
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 80013111h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 02 EB 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xeb
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 AD 31 2B 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x31
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
