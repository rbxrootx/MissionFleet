// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58652240 .. +0x33B bytes.
extern "C" __declspec(naked) void FUN_58652240_58652240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 2d9h]
        cmp ecx, 2
        ; Exact mapped bytes 75 30: jne 0x5865228b
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 25: jne 0x58652286
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 158h]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 19 3D E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x3d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 2d9h], 0
        ; Exact mapped bytes E9 EF 02 00 00: jmp 0x58652575
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EA 02 00 00: jmp 0x58652575
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 2d9h]
        cmp eax, 3
        ; Exact mapped bytes 0F 85 D7 02 00 00: jne 0x58652575
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 25: jne 0x586522c9
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D6 3C E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x3c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 2d9h], 0
        ; Exact mapped bytes E9 AC 02 00 00: jmp 0x58652575
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 0F 84 A6 01 00 00: je 0x5865247c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B8 06 96 58 00: cmp dword ptr [0x589606b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x586523e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        sub eax, 1
        push eax
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 25 E7 FF: call 0x584c4810
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x58652348
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 B3 E6 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb3
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 04 3C E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9E 3B E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x3b
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x586523dd
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 1ch], edx
        push 5ah
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B6 27 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x27
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B7 3B E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 28h], ecx
        push 59h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 85 27 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 86 3B E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 34h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 ED 31 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x31
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 38h], eax
        push 101h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D4 31 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x31
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x58652477
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 3ch], ecx
        push 5ah
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 1C 27 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 1D 3B E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 48h], eax
        push 59h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 EB 26 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x26
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 EC 3A E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 54h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 53 31 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x31
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 58h], edx
        push 101h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 3A 31 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x31
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x58652511
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 5ch], eax
        push 5ah
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 82 26 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x26
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 83 3A E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x3a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 68h], edx
        push 59h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 51 26 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x26
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 52 3A E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x3a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 74h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 B9 30 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x30
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 78h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 A0 30 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x30
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 144h]
        mov dword ptr [ebp - 7ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 7D 30 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x30
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14ch]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0ch
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 52 3B E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x3b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 2d9h], 5
        mov eax, dword ptr [ebp + 8]
        add eax, 5ch
        push eax
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 5ah]
        push edx
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C A8 F2 FF: call 0x5857cdc0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa8
        __asm _emit 0xf2
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
