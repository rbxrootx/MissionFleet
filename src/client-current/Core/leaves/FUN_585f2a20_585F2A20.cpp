// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F2A20 .. +0x403 bytes.
extern "C" __declspec(naked) void FUN_585f2a20_585F2A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 174h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 144h], ecx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 24ch
        ; Exact mapped bytes E8 64 96 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E C1 03 00 00: jle 0x585f2e15
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 24ch
        ; Exact mapped bytes E8 FB E5 FF FF: call 0x585f1060
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4fh
        mov esi, eax
        lea edi, [ebp - 140h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 148h], eax
        cmp dword ptr [ebp - 148h], 50h
        ; Exact mapped bytes 77 3D: ja 0x585f2ac6
        __asm _emit 0x77
        __asm _emit 0x3d
        cmp dword ptr [ebp - 148h], 50h
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x585f2be0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 148h]
        sub ecx, 1
        mov dword ptr [ebp - 148h], ecx
        cmp dword ptr [ebp - 148h], 3fh
        ; Exact mapped bytes 0F 87 37 03 00 00: ja 0x585f2de9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 148h]
        movzx eax, byte ptr [edx + 585f2e44h]
        ; Exact mapped bytes FF 24 85 28 2E 5F 58: jmp dword ptr [eax*4 + 0x585f2e28]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x2e
        __asm _emit 0x5f
        __asm _emit 0x58
        cmp dword ptr [ebp - 148h], 400h
        ; Exact mapped bytes 77 32: ja 0x585f2b04
        __asm _emit 0x77
        __asm _emit 0x32
        cmp dword ptr [ebp - 148h], 400h
        ; Exact mapped bytes 0F 84 AD 02 00 00: je 0x585f2d8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 148h], 70h
        ; Exact mapped bytes 0F 84 B9 01 00 00: je 0x585f2ca8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 148h], 100h
        ; Exact mapped bytes 0F 84 13 02 00 00: je 0x585f2d12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E5 02 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 148h], 4000008h
        ; Exact mapped bytes 74 79: je 0x585f2b89
        __asm _emit 0x74
        __asm _emit 0x79
        cmp dword ptr [ebp - 148h], 4000009h
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x585f2ba7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C4 02 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 164h], ecx
        ; Exact mapped bytes 66 8B 95 C8 FE FF FF: mov dx, word ptr [ebp - 0x138]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 95 A0 FE FF FF: mov word ptr [ebp - 0x160], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 164h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 DF 31 00 00: call 0x585f5d30
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 92 02 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 86 2E 00 00: call 0x585f59f0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 79 02 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 DD 2E 00 00: call 0x585f5a60
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 60 02 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        lea ecx, [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 7F 20 00 00: call 0x585f4c20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 42 02 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp - 8]
        push edx
        lea eax, [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 61 20 00 00: call 0x585f4c20
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 24 02 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        movzx ecx, word ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 B6 27 00 00: call 0x585f5390
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 09 02 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        movzx edx, word ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 9B 27 00 00: call 0x585f5390
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EE 01 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 144h]
        cmp dword ptr [eax + 114h], 0
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x585f2ca3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 16ch], ecx
        ; Exact mapped bytes 66 8B 95 C8 FE FF FF: mov dx, word ptr [ebp - 0x138]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 95 98 FE FF FF: mov word ptr [ebp - 0x168], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 144h]
        movzx ecx, word ptr [eax + 110h]
        test ecx, ecx
        ; Exact mapped bytes 75 51: jne 0x585f2c8a
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 2B EA FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2b
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 74 10: je 0x585f2c59
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 2B EA FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x2b
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 0ch
        ; Exact mapped bytes 75 31: jne 0x585f2c8a
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [ebp - 30h], 3
        ; Exact mapped bytes 73 0C: jae 0x585f2c6b
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dword ptr [ebp - 158h], 1
        ; Exact mapped bytes EB 0A: jmp 0x585f2c75
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov edx, dword ptr [ebp - 158h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 39 2E 00 00: call 0x585f5ac0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x585f2ca3
        __asm _emit 0xeb
        __asm _emit 0x19
        movzx eax, word ptr [ebp - 16ch]
        push eax
        movzx ecx, word ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 AE 2E 00 00: call 0x585f5b50
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 144h]
        cmp dword ptr [edx + 114h], 0
        ; Exact mapped bytes 75 33: jne 0x585f2cea
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes 66 8B 8D C8 FE FF FF: mov cx, word ptr [ebp - 0x138]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 8D 90 FE FF FF: mov word ptr [ebp - 0x170], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 174h]
        push edx
        movzx eax, word ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 97 2F 00 00: call 0x585f5c80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        movzx ecx, word ptr [ebp - 13ch]
        push ecx
        movzx edx, byte ptr [ebp - 138h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 94 25 00 00: call 0x585f52a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x585f2de9
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 13ch]
        push eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 12 F3 FF: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x12
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        movzx ecx, word ptr [ebp - 13ah]
        push ecx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 82 3B 00 00: call 0x585f68c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp - 137h]
        imul eax, edx, 64h
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 4C 97 17 00: call 0x5876c4a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x97
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 AA 1A 00 00: call 0x585f4810
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [edx + 1bch]
        and eax, 1
        ; Exact mapped bytes 74 13: je 0x585f2d8b
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 E8 F6 FF: call 0x58561600
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5C: jmp 0x585f2de9
        __asm _emit 0xeb
        __asm _emit 0x5c
        ; Exact mapped bytes EB 5A: jmp 0x585f2de9
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 154h], edx
        ; Exact mapped bytes 66 8B 85 C8 FE FF FF: mov ax, word ptr [ebp - 0x138]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 B0 FE FF FF: mov word ptr [ebp - 0x150], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 154h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 55 3B 00 00: call 0x585f6910
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [edx + 1bch]
        and eax, 1
        ; Exact mapped bytes 74 1C: je 0x585f2de9
        __asm _emit 0x74
        __asm _emit 0x1c
        movzx ecx, byte ptr [ebp - 150h]
        push ecx
        movzx edx, byte ptr [ebp - 14fh]
        push edx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 E7 F6 FF: call 0x585615c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe7
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 21: je 0x585f2e10
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 15ch], eax
        push 1
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        ; Exact mapped bytes E8 2E E2 23 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe2
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes E9 26 FC FF FF: jmp 0x585f2a3b
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2F E2 23 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe2
        __asm _emit 0x23
        __asm _emit 0x00
        mov esp, ebp
    }
}
