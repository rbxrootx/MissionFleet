// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866D050 .. +0x52E bytes.
extern "C" __declspec(naked) void FUN_5866d050_5866D050() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 09 05 00 00: je 0x5866d57c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 0F 85 57 01 00 00: jne 0x5866d1e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 27 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x27
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0E 8E E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5B 27 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x27
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E8 8D E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        add edx, 78h
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 7E 54: jle 0x5866d15e
        __asm _emit 0x7e
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 78h
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5E F6 E7 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AB 8C E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x8c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 98 8C E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E5 26 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x26
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3A: jmp 0x5866d198
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6F 8C E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5C 8C E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A9 26 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x26
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 78 E1 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x78
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 40h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 90h], 1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 02: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes E9 0D 03 00 00: jmp 0x5866d4f2
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 0F 85 C2 00 00 00: jne 0x5866d2c2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffdh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 B3 32 E6 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x32
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 6ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 95 32 E6 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x32
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 70h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 77 E1 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x77
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes 8B 15 00 06 96 58: mov edx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 44h], edx
        push 0
        push 64h
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], 0
        ; Exact mapped bytes E9 30 02 00 00: jmp 0x5866d4f2
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 15 02 00 00: jne 0x5866d4f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 68 43 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 5
        ; Exact mapped bytes 7D 75: jge 0x5866d369
        __asm _emit 0x7d
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 C1 76 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x76
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5866d317
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 2A 25 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x25
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 6E 85 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x5866d33d
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 A4 8B E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes E8 48 85 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 14: jne 0x5866d364
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 54h], ecx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 7D 8B E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 89 01 00 00: jmp 0x5866d4f2
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 A4 00 00 00: movsx eax, word ptr [edx + 0xa4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 14h
        ; Exact mapped bytes 0F 85 5E 01 00 00: jne 0x5866d4da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 C9 42 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x42
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 F2 FA FF: call 0x5861c5a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf2
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x5866d439
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 14 76 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x76
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5866d3c4
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 5ch], edx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 7D 24 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x24
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 C1 84 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 14: jne 0x5866d3eb
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 60h], eax
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 F6 8A E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x8a
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes E8 CA 75 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x75
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5866d40e
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 33 24 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x24
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes E8 77 84 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x5866d434
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 68h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 AD 8A E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x8a
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x5866d4cc
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 64h]
        ; Exact mapped bytes E8 7C 75 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5866d45c
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 6ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 E5 23 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x23
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 64h]
        ; Exact mapped bytes E8 29 84 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5866d482
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 5F 8A E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8a
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 33 75 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x75
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5866d4a5
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 74h], edx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 9C 23 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x23
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 E0 83 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 14: jne 0x5866d4cc
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 15 8A E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x8a
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A A4 00 00 00: mov word ptr [edx + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5866d4f2
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 A4 00 00 00: mov cx, word ptr [eax + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A A4 00 00 00: mov word ptr [edx + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5866d513
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5866d513
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x5866d57c
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x5866d536
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x5866d51c
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D2 80 E2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5866d55a
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x5866d57c
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5866d57a
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AE 80 E2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x5866d51c
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
