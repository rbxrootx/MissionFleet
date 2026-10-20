// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869C890 .. +0xB68 bytes.
extern "C" __declspec(naked) void FUN_5869c890_5869C890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0e4h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 DA 00 00 00: mov cx, word ptr [eax + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 120h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        cmp dword ptr [eax + ecx + 5890c098h], 4bh
        ; Exact mapped bytes 0F 8D 86 01 00 00: jge 0x5869ca5e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 264h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 2a5h
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 81 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F8 95 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x95
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 260h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 25ah
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 81 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 98 95 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x95
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 33bh
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 81 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 38 95 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x95
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 268h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 2f0h
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 80 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x80
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D8 94 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x94
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 79 01 00 00: jmp 0x5869cbd7
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 264h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 19h
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 80 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x80
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 74 94 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x94
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 260h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        sub eax, 19h
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 80 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 16 94 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x94
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 7dh
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 7F DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 B8 93 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 268h]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 4bh
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 7F DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x7f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 5A 93 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x93
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 DA 00 00 00: mov ax, word ptr [edx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        imul edx, ecx, 6900h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 120h]
        shr ecx, 1
        and ecx, 7fffffffh
        imul eax, ecx, 0e0h
        lea ecx, [edx + eax + 5890bfd0h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 25ch]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 0cch]
        add ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 7E DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 15 A0 DE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 258h]
        mov dword ptr [ebp - 74h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 0cch]
        push edx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 7E DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x7e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 DC 9F DE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9f
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5869cd1f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 274h]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 DA 00 00 00: mov cx, word ptr [eax + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 120h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        ; Exact mapped bytes 66 8B 94 08 10 C0 90 58: mov dx, word ptr [eax + ecx + 0x5890c010]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0xc0
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        movzx eax, dx
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 50 2B E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 274h]
        mov dword ptr [ebp - 7ch], edx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 DA 91 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x91
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 270h]
        mov dword ptr [ebp - 80h], ecx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 C4 91 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x91
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x5869cd58
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 274h]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 55 92 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x92
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 270h]
        mov dword ptr [ebp - 88h], edx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 39 92 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x92
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, 2
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 0e0h]
        xor eax, 55h
        ; Exact mapped bytes 74 46: je 0x5869cdb6
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 0d4h]
        xor eax, 55h
        mov ecx, 4
        shl ecx, 0
        imul eax, dword ptr [ecx + 589475a0h]
        imul eax, eax, 0ah
        mov edx, 2
        imul ecx, edx, 0bh
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + ecx + 0e0h]
        xor ecx, 55h
        cdq
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869cdbd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], edx
        mov eax, 2
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 0e0h]
        xor eax, 55h
        ; Exact mapped bytes 74 44: je 0x5869ce1f
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 0d4h]
        xor eax, 55h
        mov ecx, 4
        shl ecx, 1
        imul eax, dword ptr [ecx + 589475a0h]
        imul eax, eax, 0ah
        mov edx, 2
        imul ecx, edx, 0bh
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + ecx + 0e0h]
        xor ecx, 55h
        cdq
        idiv ecx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869ce26
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, 2
        imul edx, ecx, 0bh
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 0e0h]
        xor ecx, 55h
        ; Exact mapped bytes 74 69: je 0x5869ceb6
        __asm _emit 0x74
        __asm _emit 0x69
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 0d4h]
        xor edx, 55h
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        movzx eax, word ptr [ecx + eax + 0d4h]
        xor eax, 55h
        add edx, eax
        mov ecx, 2
        shl ecx, 1
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + ecx + 0d4h]
        xor ecx, 55h
        add edx, ecx
        mov eax, edx
        imul eax, dword ptr [ebp - 18h]
        mov edx, 2
        imul ecx, edx, 0bh
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + ecx + 0e0h]
        xor ecx, 55h
        cdq
        idiv ecx
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869cebd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 8ch]
        sub eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 88h]
        mov dword ptr [ebp - 90h], ecx
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 0d4h]
        xor edx, 55h
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 84 E2 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 94h]
        mov dword ptr [ebp - 94h], eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + edx + 0d4h]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 11ch]
        xor edx, 55h
        imul eax, edx
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 32 E2 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7D 65: jge 0x5869cfca
        __asm _emit 0x7d
        __asm _emit 0x65
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0a0h]
        mov dword ptr [ebp - 98h], edx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 76 04 00 00: call 0x5869d400
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 0a0h], eax
        push 2
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 7B DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x7b
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 F9 27 E0 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x27
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 63: jmp 0x5869d02d
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0a0h]
        mov dword ptr [ebp - 0a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 11 04 00 00: call 0x5869d400
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 0ach], eax
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 7A DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7a
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 94 27 E0 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x27
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0a0h]
        mov dword ptr [ebp - 0b0h], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 1C D0 EE FF: call 0x5858a070
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd0
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 88h]
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 0d4h]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 02 E1 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe1
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 94h]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 0d4h]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 11ch]
        xor edx, 55h
        imul eax, edx
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 B0 E0 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe0
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a0h]
        mov dword ptr [ebp - 0bch], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 69 CF EE FF: call 0x5858a070
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xcf
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 0c0h], edx
        mov eax, 2
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 0d4h]
        xor edx, 55h
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 51 E0 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe0
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 94h]
        mov dword ptr [ebp - 0c4h], edx
        mov eax, 2
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        movzx eax, word ptr [ecx + eax + 0d4h]
        xor eax, 55h
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + 11ch]
        xor ecx, 55h
        imul eax, ecx
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 01 E0 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a0h]
        mov dword ptr [ebp - 0c8h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 BB CE EE FF: call 0x5858a070
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xce
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 0cch], eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 0d4h]
        xor ecx, 55h
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        movzx edx, word ptr [eax + edx + 0d4h]
        xor edx, 55h
        add ecx, edx
        mov eax, 2
        shl eax, 1
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + eax + 0d4h]
        xor eax, 55h
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 72 DF 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xdf
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 0d0h], eax
        mov ecx, 2
        imul edx, ecx, 0bh
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 0e0h]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 38 DF 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 DA 00 00 00: mov ax, word ptr [edx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 75 44: jne 0x5869d2b3
        __asm _emit 0x75
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        cdq
        mov ecx, 5
        idiv ecx
        add eax, 5
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 E3 DE 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x5869d3f4
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 DA 00 00 00: mov ax, word ptr [edx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 44: jne 0x5869d30d
        __asm _emit 0x75
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        cdq
        mov ecx, 6
        idiv ecx
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 89 DE 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x5869d3f4
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 DA 00 00 00: mov ax, word ptr [edx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 75 3E: jne 0x5869d361
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 DA 00 00 00: mov dx, word ptr [ecx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 35 DE 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x5869d3f4
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 DA 00 00 00: mov cx, word ptr [eax + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 75 3E: jne 0x5869d3b5
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 DA 00 00 00: mov ax, word ptr [edx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx eax, ax
        xor eax, 55h
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 DE DD 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3F: jmp 0x5869d3f4
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 0e4h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 DA 00 00 00: mov cx, word ptr [eax + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx eax, cx
        xor eax, 55h
        cdq
        mov ecx, 3
        idiv ecx
        add eax, 2
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 9D DD 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
