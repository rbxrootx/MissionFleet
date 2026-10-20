// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58652580 .. +0x2A8 bytes.
extern "C" __declspec(naked) void FUN_58652580_58652580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, byte ptr [eax + 2d9h]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 6F 02 00 00: jne 0x58652818
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 3C: jne 0x586525eb
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes E8 3C 4C E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x4c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        push 0
        push 24ch
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A6 67 E8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x67
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 49 E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x49
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 2D 02 00 00: jmp 0x58652818
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, byte ptr [eax + 2d8h]
        test ecx, ecx
        ; Exact mapped bytes 75 2F: jne 0x58652628
        __asm _emit 0x75
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 158h]
        mov dword ptr [ebp - 34h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 81 39 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x39
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 6B 39 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x39
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3C: jmp 0x58652664
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, byte ptr [eax + 2d8h]
        cmp ecx, 1
        ; Exact mapped bytes 75 2D: jne 0x58652664
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 158h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 43 39 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x39
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 40h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 2D 39 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x39
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0F: jne 0x58652679
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 28h]
        mov byte ptr [eax + 2d9h], 0
        ; Exact mapped bytes E9 9F 01 00 00: jmp 0x58652818
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 0C 3A E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 2dh
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 F1 39 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x39
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 4ah]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 48h]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 46h]
        mov dword ptr [ebp - 54h], eax
        push 588af51ch
        ; Exact mapped bytes E8 19 F9 EC FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf9
        __asm _emit 0xec
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 5ch], ecx
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 8E 39 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x39
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AF 56 E3 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x56
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x5865274e
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 28h]
        mov byte ptr [edx + 2d9h], 3
        push 0
        ; Exact mapped bytes A1 30 05 96 58: mov eax, dword ptr [0x58960530]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 A6 F2 FF: call 0x5857cd90
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa6
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x586527ed
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov byte ptr [ecx + 2d9h], 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 60h], edx
        push 5ah
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 A6 23 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x23
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 A7 37 E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x37
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 6ch], ecx
        push 59h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 75 23 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x23
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 76 37 E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x37
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 78h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 DD 2D 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2d
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 7ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 C4 2D 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2d
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ecx + 300h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 79 89 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x89
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2E E8 1D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
