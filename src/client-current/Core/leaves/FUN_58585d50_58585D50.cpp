// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58585D50 .. +0x2C8 bytes.
extern "C" __declspec(naked) void FUN_58585d50_58585D50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 148h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 128h], ecx
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp - 124h]
        push ecx
        ; Exact mapped bytes E8 5E 36 FB FF: call 0x585393e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        movzx edx, word ptr [ebp - 106h]
        push edx
        movzx eax, word ptr [ebp - 108h]
        push eax
        movzx ecx, word ptr [ebp - 10ah]
        push ecx
        movzx edx, word ptr [ebp - 10ch]
        push edx
        movzx eax, word ptr [ebp - 10eh]
        push eax
        movzx ecx, word ptr [ebp - 112h]
        push ecx
        movzx eax, word ptr [ebp - 114h]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        push 588aab98h
        push 20h
        mov edx, dword ptr [ebp - 128h]
        add edx, 5
        push edx
        ; Exact mapped bytes E8 15 B0 F2 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 28h
        movzx eax, word ptr [ebp - 11ah]
        push eax
        movzx ecx, word ptr [ebp - 11ch]
        push ecx
        movzx edx, word ptr [ebp - 11eh]
        push edx
        movzx eax, word ptr [ebp - 122h]
        push eax
        movzx eax, word ptr [ebp - 124h]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        push 588aabbch
        push 100h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 CC AF F2 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xaf
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 20h
        mov eax, dword ptr [ebp - 128h]
        add eax, 5
        push eax
        push 588aabd4h
        ; Exact mapped bytes E8 B5 C1 F9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        push eax
        push 80h
        mov ecx, dword ptr [ebp - 128h]
        add ecx, 25h
        push ecx
        ; Exact mapped bytes E8 9D AF F2 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xaf
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes 83 3D EC 90 94 58 00: cmp dword ptr [0x589490ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A7 01 00 00: je 0x5858600a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 10 06 96 58 00: cmp dword ptr [0x58960610], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 26: je 0x58585e92
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 10 06 96 58: cmp edx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 18: jne 0x58585e92
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 128h]
        add eax, 25h
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 E9 05 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 58: jmp 0x58585eea
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D 04 06 96 58 00: cmp dword ptr [0x58960604], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 2B: je 0x58585ec6
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 04 06 96 58: cmp ecx, dword ptr [0x58960604]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x58585ec6
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0ffffffh
        mov edx, dword ptr [ebp - 128h]
        add edx, 25h
        push edx
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 20 FA FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 24: jmp 0x58585eea
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes 83 3D 78 75 94 58 00: cmp dword ptr [0x58947578], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1B: je 0x58585eea
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0ffffffh
        mov eax, dword ptr [ebp - 128h]
        add eax, 25h
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 A4 15 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa4
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 128h]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 75 A2 F2 FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa2
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 38: jne 0x58585f37
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 134h], eax
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 EB EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xeb
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 8A 98 F1 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 13ch], eax
        push 0ah
        push 0
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes E8 5F 17 2D 00: call 0x588576b8
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x17
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 138h], eax
        mov edx, dword ptr [ebp - 138h]
        push edx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 AC 00 00 00: call 0x58586020
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + 0b0h]
        push ecx
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 8D F2 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x8d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 140h], eax
        push 1
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 B5 07 00 00: call 0x58586760
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 144h], edx
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 F7 F0 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf7
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 1388h
        ; Exact mapped bytes 66 89 85 D6 FE FF FF: mov word ptr [ebp - 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 12ah]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 96 FE EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 148h], eax
        push 1
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 D7 FE EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 3C B0 2A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb0
        __asm _emit 0x2a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
