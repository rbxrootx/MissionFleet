// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F5D30 .. +0x3D7 bytes.
extern "C" __declspec(naked) void FUN_585f5d30_585F5D30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 E2 F2 FF: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe2
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 84 03 00 00: je 0x585f60dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 50 72 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x72
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9D 8D 17 00: call 0x5876eb10
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x8d
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 0C E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 75 5B: jne 0x585f5ddf
        __asm _emit 0x75
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 104h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F0 01 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 104h]
        mov eax, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D0 01 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 100h], edx
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 174h]
        ; Exact mapped bytes E8 32 C7 10 00: call 0x58702510
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc7
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx*4 + 58948c34h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 75 B3 FF FF: call 0x585f1170
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9E 66 E9 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x66
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 110h]
        cmp ecx, 10h
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x585f5ee4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx + 4]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        mov dword ptr [ebp - 38h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0F 66 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x66
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A8 EB E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xeb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dl, byte ptr [eax + 35ch]
        mov byte ptr [ebp - 1], dl
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 87 B2 FF FF: call 0x585f10d0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [eax + 1]
        mov byte ptr [ebp - 2], cl
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx]
        mov dword ptr [ebp - 34h], eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        movzx eax, byte ptr [ebp - 2]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 11 CF F2 FF: call 0x58522db0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xcf
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx*4 + 58948c34h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8C 65 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x65
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 EB E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xeb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov cl, byte ptr [eax + 35ch]
        mov byte ptr [ebp - 3], cl
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx]
        mov dword ptr [ebp - 3ch], eax
        movzx ecx, byte ptr [ebp - 3]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A2 D3 F2 FF: call 0x58523280
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd3
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x585f5f6f
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 4]
        mov edx, dword ptr [ecx*4 + 58948c34h]
        mov dword ptr [ebp - 58h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D3 B1 FF FF: call 0x585f10d0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [eax + 1]
        mov byte ptr [ebp - 4], cl
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx]
        mov dword ptr [ebp - 54h], eax
        push 9
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        movzx edx, byte ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 60 CE F2 FF: call 0x58522db0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xce
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx*4 + 58948c34h]
        mov dword ptr [ebp - 5ch], edx
        push 9
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 12 D3 F2 FF: call 0x58523280
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd3
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 2]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 41 09 00 00: call 0x585f68c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 5]
        imul eax, edx, 64h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0E 65 17 00: call 0x5876c4a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 72 E8 FF FF: call 0x585f4810
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1bch]
        and eax, 1
        ; Exact mapped bytes 74 14: je 0x585f5fc1
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 B6 F6 FF: call 0x58561630
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb6
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 60h], ecx
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 15 D4 10 00: call 0x587033f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 64h], ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 F7 D3 10 00: call 0x587033f0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd3
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 1b6h]
        cmp edx, 2
        ; Exact mapped bytes 75 09: jne 0x585f6012
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5F 9C FF FF: call 0x585efc70
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 1b6h]
        cmp ecx, 6
        ; Exact mapped bytes 74 78: je 0x585f6099
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 1b6h]
        cmp eax, 4
        ; Exact mapped bytes 74 69: je 0x585f6099
        __asm _emit 0x74
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 1b6h]
        cmp edx, 0ah
        ; Exact mapped bytes 74 5A: je 0x585f6099
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 1b6h]
        cmp ecx, 5
        ; Exact mapped bytes 74 4B: je 0x585f6099
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 1b6h]
        cmp eax, 0bh
        ; Exact mapped bytes 74 3C: je 0x585f6099
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 1b6h]
        cmp edx, 0eh
        ; Exact mapped bytes 74 2D: je 0x585f6099
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 1b6h]
        cmp ecx, 0dh
        ; Exact mapped bytes 74 1E: je 0x585f6099
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 1b6h]
        cmp eax, 0fh
        ; Exact mapped bytes 74 0F: je 0x585f6099
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 1b6h]
        cmp edx, 10h
        ; Exact mapped bytes 75 41: jne 0x585f60da
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 09 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 75 31: jne 0x585f60da
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E7 CF FF FF: call 0x585f30a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 B7 D2 10 00: call 0x58703390
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd2
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x585f6101
        __asm _emit 0xeb
        __asm _emit 0x25
        push 40000h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0a0h]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 85 F8 FF: call 0x5857e660
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
