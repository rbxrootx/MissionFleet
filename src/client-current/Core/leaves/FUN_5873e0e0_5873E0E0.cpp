// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873E0E0 .. +0x41C bytes.
extern "C" __declspec(naked) void FUN_5873e0e0_5873E0E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 7C D4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x7c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 62h]
        and cl, 7fh
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 98h]
        and al, 80h
        or al, cl
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 98h], al
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 1f4h]
        ; Exact mapped bytes E8 87 76 D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x76
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dl, byte ptr [ebp - 18h]
        and dl, 0fh
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 9ah]
        and cl, 0f0h
        or cl, dl
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 9ah], cl
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 1f4h]
        ; Exact mapped bytes E8 50 76 D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x76
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        sub edx, 1
        and dl, 7fh
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 99h]
        and cl, 80h
        or cl, dl
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 99h], cl
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 1f4h]
        ; Exact mapped bytes E8 17 76 D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x76
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0aeh], al
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 1f4h]
        ; Exact mapped bytes E8 F7 75 D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x75
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0afh], al
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 130h], 0
        ; Exact mapped bytes 74 53: je 0x5873e221
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1d0h]
        ; Exact mapped bytes E8 74 34 D9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x34
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, 1
        imul edx, ecx, 0
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5873e1ff
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1d0h]
        ; Exact mapped bytes E8 56 34 D9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x34
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 10: jmp 0x5873e20f
        __asm _emit 0xeb
        __asm _emit 0x10
        push 588b485ch
        ; Exact mapped bytes E8 E7 3D DE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x3d
        __asm _emit 0xde
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 68h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 13ch], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x5873e2be
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0ech]
        cmp eax, 9
        ; Exact mapped bytes 74 71: je 0x5873e2b1
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0ech]
        cmp edx, 8
        ; Exact mapped bytes 74 62: je 0x5873e2b1
        __asm _emit 0x74
        __asm _emit 0x62
        push 588b4870h
        ; Exact mapped bytes E8 97 3D DE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x3d
        __asm _emit 0xde
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        ; Exact mapped bytes E8 73 BF D6 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xbf
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x5873e298
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 78 06 96 58: mov ecx, dword ptr [0x58960678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 D3 DF FF: call 0x5853b5d0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd3
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], eax
        ; Exact mapped bytes EB 17: jmp 0x5873e2af
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 258h]
        ; Exact mapped bytes E8 AA 7E E0 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x7e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], eax
        ; Exact mapped bytes EB 0D: jmp 0x5873e2be
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e8h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        ; Exact mapped bytes E8 14 BF D6 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xbf
        __asm _emit 0xd6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10eh
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        add edx, 68h
        push edx
        ; Exact mapped bytes 8B 0D 78 06 96 58: mov ecx, dword ptr [0x58960678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 D0 DF FF: call 0x5853b360
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        add eax, 0f0h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0f0h
        push ecx
        ; Exact mapped bytes 8B 0D 78 06 96 58: mov ecx, dword ptr [0x58960678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C CF DF FF: call 0x5853b220
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 124h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 3
        and ecx, 1
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x5873e423
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0ech]
        cmp eax, 0ch
        ; Exact mapped bytes 75 44: jne 0x5873e38c
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, 4
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 17ch]
        ; Exact mapped bytes E8 D1 DD D4 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xdd
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1A 8E FA FF: call 0x586e7180
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, 4
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 17ch]
        ; Exact mapped bytes E8 B0 DD D4 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 E5 FF FF: call 0x5873c8d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 50: jmp 0x5873e3dc
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0ech]
        test edx, edx
        ; Exact mapped bytes 75 42: jne 0x5873e3dc
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, 4
        shl eax, 3
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 17ch]
        ; Exact mapped bytes E8 3F 4A E9 FF: call 0x585d2df0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C8 8D FA FF: call 0x586e7180
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, 4
        shl edx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 17ch]
        ; Exact mapped bytes E8 1E 4A E9 FF: call 0x585d2df0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F7 E4 FF FF: call 0x5873c8d0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5873e3ee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 2D: jge 0x5873e423
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        mov cl, byte ptr [edx + ecx*8]
        mov byte ptr [eax + 0b0h], cl
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 10h]
        mov al, byte ptr [ecx + eax*8 + 4]
        mov byte ptr [edx + 0b7h], al
        ; Exact mapped bytes EB C2: jmp 0x5873e3e5
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0eeach
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0ech]
        cmp eax, 6
        ; Exact mapped bytes 74 5A: je 0x5873e4b5
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0ech]
        cmp edx, 4
        ; Exact mapped bytes 74 4B: je 0x5873e4b5
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0ech]
        cmp ecx, 0ah
        ; Exact mapped bytes 74 3C: je 0x5873e4b5
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0ech]
        cmp eax, 5
        ; Exact mapped bytes 74 2D: je 0x5873e4b5
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0ech]
        cmp edx, 0bh
        ; Exact mapped bytes 74 1E: je 0x5873e4b5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0ech]
        cmp ecx, 0eh
        ; Exact mapped bytes 74 0F: je 0x5873e4b5
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0ech]
        cmp eax, 0fh
        ; Exact mapped bytes 75 20: jne 0x5873e4d5
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 88 5E 96 58: mov ecx, dword ptr [0x58965e88]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0ech]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 01 E4 FF: call 0x5857e6c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x5873e4f8
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 62h]
        push edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 60h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 68h
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 0B E4 FF: call 0x5857f070
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x0b
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
