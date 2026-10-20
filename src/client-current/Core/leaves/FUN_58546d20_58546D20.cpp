// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58546D20 .. +0x19A8 bytes.
extern "C" __declspec(naked) void FUN_58546d20_58546D20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ech
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 2ech], ecx
        ; Exact mapped bytes C7 05 CC 20 96 58 01 00 00 00: mov dword ptr [0x589620cc], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 82 6C 02 00 00: mov word ptr [edx + 0x26c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 18: je 0x58546d6f
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 01 DD F3 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xdd
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 07: jmp 0x58546d76
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0ffffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 45 C8: mov ax, word ptr [ebp - 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 82 6E 02 00 00: mov word ptr [edx + 0x26e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 270h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 274h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 45 18: mov ax, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 82 78 02 00 00: mov word ptr [edx + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 260h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2c8h], 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 29ch]
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 26eh]
        cmp ecx, eax
        ; Exact mapped bytes 75 0F: jne 0x58546deb
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 2d8h]
        cmp edx, 2
        ; Exact mapped bytes 75 60: jne 0x58546e4b
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 6E 02 00 00: mov dx, word ptr [ecx + 0x26e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 9C 02 00 00: mov word ptr [eax + 0x29c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2a0h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2a4h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2a8h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ach], 0ffffffffh
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A B0 02 00 00: mov word ptr [edx + 0x2b0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 B2 02 00 00: mov word ptr [ecx + 0x2b2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2b4h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2b8h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2bch], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2c0h], 0ffffffffh
        mov eax, 0ffffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 C4 02 00 00: mov word ptr [ecx + 0x2c4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 C6 02 00 00: mov word ptr [eax + 0x2c6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B 94 FF FF: call 0x585402f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2fch], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 00 9A 27 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x9a
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 10 F4 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58546edb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 6
        ; Exact mapped bytes 7D 2F: jge 0x58546f10
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0b4h]
        ; Exact mapped bytes E8 CD 99 27 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 80h], edx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 D3 EF F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C2: jmp 0x58546ed2
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1ach]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 5B F0 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1ach]
        mov dword ptr [ebp - 88h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 36 F0 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1ach]
        mov dword ptr [ebp - 8ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 12 F0 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1a0h]
        mov dword ptr [ebp - 90h], edx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 F6 EF F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a8h]
        mov dword ptr [ebp - 94h], ecx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 DA EF F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 98h], eax
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 BE EF F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 250h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2d0h], 0
        movzx eax, word ptr [ebp + 8]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0dh
        ; Exact mapped bytes 0F 87 BE 16 00 00: ja 0x585486c1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbe
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 95 C8 86 54 58: jmp dword ptr [edx*4 + 0x585486c8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 264h], 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 2d8h]
        cmp edx, 3
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x585470b3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 0a0h], eax
        push 139h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB DA F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xda
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 C3 EE F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xee
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 0a8h], ecx
        push 13ah
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B DA F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xda
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 83 EE F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x58547134
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 0b0h], eax
        push 0c8h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 DA F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xda
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 3D EE F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xee
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 0b8h], ecx
        push 0c9h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 DA F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xda
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 FD ED F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xed
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2C: je 0x58547166
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9E D8 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x58547166
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 92 D8 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 250h], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2d0h], 1
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 2d8h]
        cmp ecx, 1
        ; Exact mapped bytes 75 3E: jne 0x585471b3
        __asm _emit 0x75
        __asm _emit 0x3e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 18: je 0x58547193
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DD D8 F3 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        shr edx, 0ah
        and edx, 3fffffh
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 07: jmp 0x5854719a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0ffffh
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        movzx edx, word ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 67 03 00: call 0x5857d980
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 09 15 00 00: jmp 0x585486c1
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 264h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 0c0h], ecx
        push 0cah
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 D9 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov edx, dword ptr [ebp - 0bch]
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 2B ED F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xed
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 0c8h], edx
        push 0cbh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 D8 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 EB EC F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xec
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1F: je 0x5854726b
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7C E5 F4 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe5
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5854726b
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 70 E5 F4 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 250h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58547288
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E7 D7 F3 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5854728f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0ffffh
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        movzx eax, word ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 66 03 00: call 0x5857d980
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 14 14 00 00: jmp 0x585486c1
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 264h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 0d0h], edx
        push 0d0h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E D8 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 36 EC F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xec
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 0d8h], eax
        push 0d1h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE D7 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 F6 EB F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xeb
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 27: je 0x58547368
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F3 5C F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x5c
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x58547368
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E3 5C F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 250h], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 2d8h]
        cmp ecx, 2
        ; Exact mapped bytes 74 3E: je 0x585473b5
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 18: je 0x58547395
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DB D6 F3 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd6
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        shr edx, 0ah
        and edx, 3fffffh
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes EB 07: jmp 0x5854739c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0ffffh
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        movzx edx, word ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 65 03 00: call 0x5857d980
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 07 13 00 00: jmp 0x585486c1
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 264h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 0e0h], ecx
        push 0cch
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 D7 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 29 EB F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xeb
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 0e8h], edx
        push 0cdh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 D6 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd6
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 E9 EA F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1F: je 0x5854746d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9A E3 F4 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe3
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5854746d
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8E E3 F4 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 250h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 17: je 0x5854748a
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E5 D5 F3 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58547491
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0ffffh
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        movzx eax, word ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 64 03 00: call 0x5857d980
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 12 12 00 00: jmp 0x585486c1
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 264h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 0f0h], edx
        push 0d2h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C D6 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd6
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 34 EA F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xea
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 0f8h], eax
        push 0d3h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC D5 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 F4 E9 F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 27: je 0x5854756a
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F1 5A F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x5a
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x5854756a
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E1 5A F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x5a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 250h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58547587
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E8 D4 F3 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5854758e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0ffffh
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        movzx eax, word ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 63 03 00: call 0x5857d980
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 15 11 00 00: jmp 0x585486c1
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 264h], 1
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 100h], edx
        push 0d4h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F D5 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        mov eax, dword ptr [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 37 E9 F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 108h], eax
        push 0d5h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF D4 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd4
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        mov ecx, dword ptr [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F7 E8 F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 10ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 32 E9 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 110h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 0D E9 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 114h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 E9 E8 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 118h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 CD E8 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1a8h]
        mov dword ptr [ebp - 11ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 B1 E8 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 124h], edx
        push 16h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 D3 F3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 4D F5 F3 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 128h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 61 E8 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 2d8h]
        cmp ecx, 2
        ; Exact mapped bytes 75 05: jne 0x58547744
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 7D 0F 00 00: jmp 0x585486c1
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D4 E9 FF FF: call 0x58546120
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 258h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 270h], 1ch
        ; Exact mapped bytes 0F 8C 49 02 00 00: jl 0x585479ae
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 73 D2 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd2
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 11ah]
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 254h], edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 58 D2 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd2
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 268h]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585477a3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 1ch
        ; Exact mapped bytes 0F 8D DE 00 00 00: jge 0x5854788b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        and eax, 80000000h
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x5854787e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 79 58 F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x58
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x5854787e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 65 58 F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x58
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, byte ptr [eax]
        cmp eax, 6
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x5854787e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4D 58 F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x58
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 09 58 F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx ecx, dx
        sub eax, ecx
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 7E 52: jle 0x5854787e
        __asm _emit 0x7e
        __asm _emit 0x52
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D6 84 F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x5854787e
        __asm _emit 0x74
        __asm _emit 0x40
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C4 84 F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 1eh]
        imul ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 134h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 254h]
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 130h]
        sub ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 254h], ecx
        mov eax, dword ptr [ebp - 30h]
        shl eax, 1
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x5854779a
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x5854789d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 0F 8D E8 00 00 00: jge 0x5854798f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x5854798a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4F 84 F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x5854798a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 39 84 F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx edx, byte ptr [eax]
        cmp edx, 0bh
        ; Exact mapped bytes 75 58: jne 0x58547937
        __asm _emit 0x75
        __asm _emit 0x58
        push 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 23 84 F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx esi, word ptr [eax + 1eh]
        push 1
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 11 57 F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x57
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        imul esi, edx
        imul eax, esi, 0ah
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        mov dword ptr [ebp - 138h], edx
        mov eax, dword ptr [ebp - 138h]
        sub eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 254h], eax
        ; Exact mapped bytes EB 53: jmp 0x5854798a
        __asm _emit 0xeb
        __asm _emit 0x53
        push 1
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CB 83 F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx esi, word ptr [eax + 1eh]
        push 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B9 56 F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x56
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        imul esi, ecx
        mov dword ptr [ebp - 144h], esi
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 254h]
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 140h]
        sub ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 254h], ecx
        ; Exact mapped bytes E9 05 FF FF FF: jmp 0x58547894
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 254h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 254h], eax
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x58547a9d
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 2A D0 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        movzx edx, word ptr [eax + ecx*2 + 0dah]
        imul esi, edx, 0ah
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 70 56 F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x56
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 1eh]
        imul edx, ecx, 0ah
        sub esi, edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 254h], esi
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 09: jne 0x585479f1
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 1
        ; Exact mapped bytes EB 07: jmp 0x585479f8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 08 83 F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x58547a9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 09: jne 0x58547a1f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 58h], 1
        ; Exact mapped bytes EB 07: jmp 0x58547a26
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DA 82 F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx edx, word ptr [eax + 1eh]
        mov dword ptr [ebp - 148h], edx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 09: jne 0x58547a4f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 5ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58547a56
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AA 55 F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x55
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        imul edx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 150h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 254h]
        mov dword ptr [ebp - 14ch], ecx
        mov edx, dword ptr [ebp - 14ch]
        sub edx, dword ptr [ebp - 150h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 254h], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x58547b5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 59 82 F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x58547b4e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 41 82 F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 250h], edx
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 26 55 F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x55
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 25ch], eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0A 82 F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F8 54 F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x54
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        imul eax, dword ptr [esi + 24h]
        mov dword ptr [ebp - 158h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 258h]
        mov dword ptr [ebp - 154h], edx
        mov eax, dword ptr [ebp - 154h]
        add eax, dword ptr [ebp - 158h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 258h], eax
        ; Exact mapped bytes EB 0D: jmp 0x58547b5b
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 25ch], 55h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58547b78
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F7 CE F3 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xce
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58547b7f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0ffffh
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        movzx eax, word ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 5D 03 00: call 0x5857d980
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 24 0B 00 00: jmp 0x585486c1
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 264h], 1
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 160h], edx
        push 0d6h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E CF F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xcf
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        mov eax, dword ptr [ebp - 15ch]
        push eax
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 46 E3 F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 168h], eax
        push 0d7h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E CF F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xcf
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 06 E3 F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 16ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 41 E3 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 170h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 1C E3 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 174h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 F8 E2 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe2
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 178h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 DC E2 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe2
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1a8h]
        mov dword ptr [ebp - 17ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 C0 E2 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe2
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 184h], edx
        push 16h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 CD F3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xcd
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        mov eax, dword ptr [ebp - 180h]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 5C EF F3 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 188h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 70 E2 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F8 E3 FF FF: call 0x58546120
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 258h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 270h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 FD 52 F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x52
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 92 CC F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 11ah]
        imul edx, ecx, 0ah
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7D CC F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xcc
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [eax + 268h]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58547d7e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 1ch
        ; Exact mapped bytes 0F 8D C5 00 00 00: jge 0x58547e4d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        and edx, 80000000h
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x58547e40
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x58547e40
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 91 52 F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x52
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x58547e40
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7D 52 F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x52
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, byte ptr [eax]
        cmp eax, 6
        ; Exact mapped bytes 75 75: jne 0x58547e40
        __asm _emit 0x75
        __asm _emit 0x75
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 69 52 F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x52
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 25 52 F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x52
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx ecx, dx
        sub eax, ecx
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 7E 30: jle 0x58547e40
        __asm _emit 0x7e
        __asm _emit 0x30
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F2 7E F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7e
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x58547e40
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E0 7E F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x7e
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 1eh]
        imul ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ebp - 18h]
        sub edx, ecx
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes E9 28 FF FF FF: jmp 0x58547d75
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 1dh
        ; Exact mapped bytes EB 09: jmp 0x58547e5f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D A0 00 00 00: jge 0x58547f09
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x58547f04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8D 7E F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 7D: je 0x58547f04
        __asm _emit 0x74
        __asm _emit 0x7d
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7B 7E F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x7e
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx edx, byte ptr [eax]
        cmp edx, 0bh
        ; Exact mapped bytes 75 36: jne 0x58547ed3
        __asm _emit 0x75
        __asm _emit 0x36
        push 1
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 65 7E F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x7e
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx esi, word ptr [eax + 1eh]
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 53 51 F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x51
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        imul esi, edx
        imul eax, esi, 0ah
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, eax
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 31: jmp 0x58547f04
        __asm _emit 0xeb
        __asm _emit 0x31
        push 1
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 2F 7E F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7e
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx esi, word ptr [eax + 1eh]
        push 1
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1D 51 F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x51
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        imul esi, ecx
        mov edx, dword ptr [ebp - 18h]
        sub edx, esi
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x58547e56
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 270h], 1ch
        ; Exact mapped bytes 7C 1E: jl 0x58547f33
        __asm _emit 0x7c
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 254h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 260h], 0
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x58548075
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A5 CA F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xca
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 268h]
        mov dword ptr [ebp - 190h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, 80000000h
        mov ecx, dword ptr [edx + 270h]
        shr eax, cl
        mov dword ptr [ebp - 194h], eax
        mov ecx, dword ptr [ebp - 190h]
        and ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes 74 28: je 0x58547f93
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 254h], eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 260h], eax
        ; Exact mapped bytes EB 27: jmp 0x58547fba
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 254h], 0
        mov eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes 66 8B 88 98 00 00 00: mov cx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 260h], edx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 09: jne 0x58547fc9
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 6ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58547fd0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 30 7D F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7d
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x58548075
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 09: jne 0x58547ff7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 70h], 1
        ; Exact mapped bytes EB 07: jmp 0x58547ffe
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 02 7D F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x7d
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx edx, word ptr [eax + 1eh]
        mov dword ptr [ebp - 198h], edx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 09: jne 0x58548027
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 74h], 1
        ; Exact mapped bytes EB 07: jmp 0x5854802e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D2 4F F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4f
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        imul edx, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 1a0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 254h]
        mov dword ptr [ebp - 19ch], ecx
        mov edx, dword ptr [ebp - 19ch]
        sub edx, dword ptr [ebp - 1a0h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 254h], edx
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8B 7C F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x5854811c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 73 7C F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 250h], edx
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 58 4F F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x4f
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 25ch], eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3C 7C F6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x7c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 2A 4F F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x4f
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        imul eax, dword ptr [esi + 24h]
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 258h]
        mov dword ptr [ebp - 1a4h], edx
        mov eax, dword ptr [ebp - 1a4h]
        add eax, dword ptr [ebp - 1a8h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 258h], eax
        ; Exact mapped bytes EB 0D: jmp 0x58548129
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 25ch], 55h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58548146
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 29 C9 F3 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x5854814d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0ffffh
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        movzx eax, word ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 58 03 00: call 0x5857d980
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 56 05 00 00: jmp 0x585486c1
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 264h], 1
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 1b0h], edx
        push 0d8h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 C9 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        mov eax, dword ptr [ebp - 1ach]
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 78 DD F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xdd
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 1b8h], eax
        push 0d9h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 C9 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        mov ecx, dword ptr [ebp - 1b4h]
        push ecx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 38 DD F3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xdd
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 1bch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 73 DD F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xdd
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 1c0h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 4E DD F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 1c4h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 2A DD F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xdd
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 1c8h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 0E DD F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdd
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1a8h]
        mov dword ptr [ebp - 1cch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 F2 DC F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xdc
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 1d4h], edx
        push 16h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 C8 F3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        mov eax, dword ptr [ebp - 1d0h]
        push eax
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 8E E9 F3 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 46 DE FF FF: call 0x58546120
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 258h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F5 C6 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc6
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, word ptr [eax + 11ch]
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 254h], eax
        mov dword ptr [ebp - 1ch], 1ch
        ; Exact mapped bytes EB 09: jmp 0x58548310
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 20h
        ; Exact mapped bytes 7D 71: jge 0x58548387
        __asm _emit 0x7d
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [eax + 270h]
        ; Exact mapped bytes 74 61: je 0x58548385
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 10 4D F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x58548385
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 00 4D F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x4d
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx esi, word ptr [eax + 1eh]
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BE 4C F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        imul esi, edx
        mov dword ptr [ebp - 1dch], esi
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 254h]
        mov dword ptr [ebp - 1d8h], ecx
        mov edx, dword ptr [ebp - 1d8h]
        sub edx, dword ptr [ebp - 1dch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 254h], edx
        ; Exact mapped bytes EB 80: jmp 0x58548307
        __asm _emit 0xeb
        __asm _emit 0x80
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AD 4C F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x4c
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x585483ca
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9D 4C F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x4c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 250h], eax
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 54 4C F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x4c
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 25ch], eax
        ; Exact mapped bytes EB 0D: jmp 0x585483d7
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 25ch], 55h
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2cch], 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 13 FE FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x13
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, ax
        and ecx, 0ff00h
        sar ecx, 8
        mov byte ptr [ebp - 5], cl
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 12 FA FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x58548420
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 93 3C F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x3c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 53 02 00 00: je 0x5854867d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        sub eax, 1ch
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 3
        ; Exact mapped bytes 0F 87 2D 02 00 00: ja 0x58548670
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 24 8D 00 87 54 58: jmp dword ptr [ecx*4 + 0x58548700]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8B 3A F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 94 11 FA FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 1fh
        ; Exact mapped bytes 74 28: je 0x58548489
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 77 3A F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 80 11 FA FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 66h
        ; Exact mapped bytes 74 14: je 0x58548489
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 63 3A F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C 11 FA FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 67h
        ; Exact mapped bytes 75 58: jne 0x585484e1
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4F 3A F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x3a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D8 AE F7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        movzx ecx, byte ptr [ebp - 5]
        cmp eax, ecx
        ; Exact mapped bytes 74 22: je 0x585484cd
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2D 3A F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x3a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        movzx edx, byte ptr [ebp - 5]
        push edx
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 B7 41 FB FF: call 0x584fc680
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x585484e1
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2cch], 1
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes E9 8A 01 00 00: jmp 0x58548670
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F2 39 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FB 10 FA FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 72 6C: jb 0x58548566
        __asm _emit 0x72
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DE 39 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E7 10 FA FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 22h
        ; Exact mapped bytes 77 58: ja 0x58548566
        __asm _emit 0x77
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CA 39 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 53 AE F7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        movzx eax, byte ptr [ebp - 5]
        cmp edx, eax
        ; Exact mapped bytes 74 22: je 0x58548552
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A8 39 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        movzx ecx, byte ptr [ebp - 5]
        push ecx
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 32 41 FB FF: call 0x584fc680
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58548566
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2cch], 1
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x58548670
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6D 39 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 10 FA FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 23h
        ; Exact mapped bytes 72 6C: jb 0x585485eb
        __asm _emit 0x72
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 59 39 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 62 10 FA FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 25h
        ; Exact mapped bytes 77 58: ja 0x585485eb
        __asm _emit 0x77
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 45 39 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CE AD F7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        movzx edx, byte ptr [ebp - 5]
        cmp ecx, edx
        ; Exact mapped bytes 74 22: je 0x585485d7
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 23 39 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        movzx eax, byte ptr [ebp - 5]
        push eax
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 AD 40 FB FF: call 0x584fc680
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x40
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x585485eb
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2cch], 1
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x58548670
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E8 38 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F1 0F FA FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 26h
        ; Exact mapped bytes 72 6C: jb 0x58548670
        __asm _emit 0x72
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D4 38 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DD 0F FA FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 28h
        ; Exact mapped bytes 77 58: ja 0x58548670
        __asm _emit 0x77
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C0 38 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 AD F7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        movzx ecx, byte ptr [ebp - 5]
        cmp eax, ecx
        ; Exact mapped bytes 74 22: je 0x5854865c
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9E 38 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        movzx edx, byte ptr [ebp - 5]
        push edx
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 28 40 FB FF: call 0x584fc680
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x40
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58548670
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2cch], 1
        mov dword ptr [ebp - 24h], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 02: je 0x58548678
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x5854867d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 98 FD FF FF: jmp 0x58548415
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 18: je 0x5854869b
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D5 C3 F3 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        mov dword ptr [ebp - 7ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x585486a2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0ffffh
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1bh
        shl eax, 10h
        push eax
        movzx ecx, word ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 52 03 00: call 0x5857d980
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
