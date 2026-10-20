// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58724010 .. +0x3FB bytes.
extern "C" __declspec(naked) void FUN_58724010_58724010() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 54h
        push esi
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 F5 F4 FF: call 0x586735b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 13a4h], al
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 13a5h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 13a7h], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58724071
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 80h
        ; Exact mapped bytes 7D 35: jge 0x587240af
        __asm _emit 0x7d
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 11a4h], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 0fa4h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 0da4h], 0
        ; Exact mapped bytes EB B9: jmp 0x58724068
        __asm _emit 0xeb
        __asm _emit 0xb9
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 83 F8 FF: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 1C: jne 0x587240df
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B7 70 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 28 03 00 00: jmp 0x58724407
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x587240ec
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C7 7F D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7f
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 F1 02 00 00: je 0x587243e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E2 7D D6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x7d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 67 F2 D9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        xor eax, 55h
        mov byte ptr [ebp - 1], al
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4A F2 D9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov dword ptr [ebp - 28h], 1
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x5872414e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 7
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x587241e6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 10 F2 D9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + ecx*4 + 154h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 24h]
        shr ecx, 10h
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 25 DD FF: call 0x584f66d0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x25
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 50: je 0x587241e1
        __asm _emit 0x74
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 554h], 1
        ; Exact mapped bytes 74 44: je 0x587241e1
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 0F B6 05 9F 75 94 58: movzx eax, byte ptr [0x5894759f]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x9f
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x587241d8
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 24h]
        shr ecx, 10h
        movzx edx, cx
        cmp edx, 3
        ; Exact mapped bytes 75 17: jne 0x587241cd
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 24h]
        and eax, 0ffffh
        movzx ecx, ax
        cmp ecx, 0ah
        ; Exact mapped bytes 74 07: je 0x587241cd
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x58724145
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x587241d6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 10: jmp 0x587241e6
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes EB 09: jmp 0x587241e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 05: jmp 0x587241e6
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x58724145
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 8]
        cmp edx, 50h
        ; Exact mapped bytes 0F 84 DC 01 00 00: je 0x587243cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 8]
        cmp eax, 51h
        ; Exact mapped bytes 0F 84 CF 01 00 00: je 0x587243cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 8]
        cmp ecx, 52h
        ; Exact mapped bytes 0F 84 C2 01 00 00: je 0x587243cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 8]
        test edx, edx
        ; Exact mapped bytes 0F 84 B6 01 00 00: je 0x587243cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 8]
        cmp eax, 1
        ; Exact mapped bytes 0F 84 A9 01 00 00: je 0x587243cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 8]
        cmp ecx, 4ch
        ; Exact mapped bytes 0F 84 9C 01 00 00: je 0x587243cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 8]
        cmp edx, 4dh
        ; Exact mapped bytes 0F 84 8F 01 00 00: je 0x587243cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 8]
        cmp eax, 4eh
        ; Exact mapped bytes 0F 84 82 01 00 00: je 0x587243cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 8]
        cmp ecx, 4fh
        ; Exact mapped bytes 0F 84 75 01 00 00: je 0x587243cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x587243cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D4 07 D6 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0a0h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + ecx*4 + 0a4h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 70 07 D6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0a0h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 50h]
        mov esi, dword ptr [ebp - 4ch]
        mov dword ptr [edx + ecx*8 + 2a4h], eax
        mov dword ptr [edx + ecx*8 + 2a8h], esi
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CC 15 D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x15
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, al
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 0a0h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + eax*4 + 6a4h], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 27 14 D7 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x14
        __asm _emit 0xd7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F6: mov word ptr [ebp - 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf6
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 0a0h]
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 4D F6: mov cx, word ptr [ebp - 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf6
        ; Exact mapped bytes 66 89 8C 50 A4 08 00 00: mov word ptr [eax + edx*2 + 0x8a4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0xa4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FF 52 E0 FF: call 0x58529610
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0a0h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [edx + ecx*4 + 9a4h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9B 1C DA FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x1c
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 0a0h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + eax*4 + 0ba4h], edx
        push 80h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E2 11 09 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0a0h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + ecx*4 + 0da4h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 0a0h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 0fa4h], 0
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 0a0h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 11a4h], 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BF A9 D8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa9
        __asm _emit 0xd8
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B5 AC DD FF: call 0x584ff070
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xac
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [edx + 0a0h]
        add al, 1
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 0a0h], al
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 0a0h]
        cmp eax, 80h
        ; Exact mapped bytes 75 02: jne 0x587243e2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x587243e7
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 FA FC FF FF: jmp 0x587240e1
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 8A 6D 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6d
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
    }
}
