// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B54B0 .. +0x433 bytes.
extern "C" __declspec(naked) void FUN_585b54b0_585B54B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4c4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 4c4h], ecx
        push 200h
        push 0
        lea eax, [ebp - 388h]
        push eax
        ; Exact mapped bytes E8 34 79 29 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push 0
        lea ecx, [ebp - 188h]
        push ecx
        ; Exact mapped bytes E8 1E 79 29 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 14 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 490h], eax
        ; Exact mapped bytes EB 11: jmp 0x585b5519
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 9D 6B ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 490h], eax
        cmp dword ptr [ebp - 490h], 0
        ; Exact mapped bytes 74 66: je 0x585b5588
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 33 F5 EC FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf5
        __asm _emit 0xec
        __asm _emit 0xff
        movzx edx, word ptr [eax + 26h]
        push edx
        push 588ab6dch
        lea eax, [ebp - 188h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [ebp - 188h]
        push ecx
        push 200h
        lea edx, [ebp - 388h]
        push edx
        ; Exact mapped bytes E8 11 10 ED FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 45 6B ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x585b5586
        __asm _emit 0x74
        __asm _emit 0x17
        push 588ab6e0h
        push 200h
        lea eax, [ebp - 388h]
        push eax
        ; Exact mapped bytes E8 EB 0F ED FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x0f
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 80: jmp 0x585b5508
        __asm _emit 0xeb
        __asm _emit 0x80
        mov dword ptr [ebp - 494h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585b55a3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 494h]
        add ecx, 1
        mov dword ptr [ebp - 494h], ecx
        lea edx, [ebp - 388h]
        push edx
        ; Exact mapped bytes E8 D1 BB 29 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xbb
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [ebp - 494h], eax
        ; Exact mapped bytes 73 23: jae 0x585b55dd
        __asm _emit 0x73
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 494h]
        ; Exact mapped bytes 0F BE 8C 05 78 FC FF FF: movsx ecx, byte ptr [ebp + eax - 0x388]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 494h]
        mov byte ptr [ebp + edx - 388h], cl
        ; Exact mapped bytes EB B7: jmp 0x585b5594
        __asm _emit 0xeb
        __asm _emit 0xb7
        push 104h
        push 0
        lea eax, [ebp - 48ch]
        push eax
        ; Exact mapped bytes E8 20 78 29 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4b0h], 104h
        push 104h
        push 0
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 00 78 29 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4b4h], 104h
        mov dword ptr [ebp - 49ch], 0
        lea edx, [ebp - 498h]
        push edx
        push 20019h
        push 0
        push 588ab6e8h
        push 80000001h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 4b0h]
        push eax
        lea ecx, [ebp - 48ch]
        push ecx
        push 0
        push 0
        push 588ab730h
        mov edx, dword ptr [ebp - 498h]
        push edx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 498h]
        push eax
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 588ab73ch
        lea ecx, [ebp - 48ch]
        push ecx
        ; Exact mapped bytes E8 28 A7 FC FF: call 0x5857fdb0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 C8 01 00 00: je 0x585b585b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 49ch]
        push edx
        push 588ab74ch
        lea eax, [ebp - 48ch]
        push eax
        ; Exact mapped bytes E8 C5 24 2A 00: call 0x58857b70
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x24
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4a0h], eax
        lea ecx, [ebp - 49ch]
        push ecx
        push 588ab750h
        push 0
        ; Exact mapped bytes E8 A9 24 2A 00: call 0x58857b70
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x24
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4a0h], eax
        mov edx, dword ptr [ebp - 4b4h]
        push edx
        lea eax, [ebp - 108h]
        push eax
        push 588ab754h
        ; Exact mapped bytes FF 15 98 42 89 58: call dword ptr [0x58894298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4a0h]
        push ecx
        push 104h
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes E8 6F 0E ED FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0e
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 78 42 89 58: call dword ptr [0x58894278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x585b57df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588ab760h
        push 104h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 42 0E ED FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0e
        __asm _emit 0xed
        __asm _emit 0xff
        push 0
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes FF 15 7C 42 89 58: call dword ptr [0x5889427c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 588ab770h
        push 104h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 1D 0E ED FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0e
        __asm _emit 0xed
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes FF 15 7C 42 89 58: call dword ptr [0x5889427c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 589604e0h
        push 104h
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes E8 F8 0D ED FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0xed
        __asm _emit 0xff
        push 588ab77ch
        push 104h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 E2 0D ED FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0d
        __asm _emit 0xed
        __asm _emit 0xff
        push 588ab784h
        lea ecx, [ebp - 108h]
        push ecx
        lea edx, [ebp - 4a4h]
        push edx
        ; Exact mapped bytes E8 6F BB 29 00: call 0x58851315
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xbb
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4b8h], eax
        cmp dword ptr [ebp - 4b8h], 0
        ; Exact mapped bytes 75 25: jne 0x585b57dd
        __asm _emit 0x75
        __asm _emit 0x25
        lea eax, [ebp - 388h]
        push eax
        mov ecx, dword ptr [ebp - 4a4h]
        push ecx
        ; Exact mapped bytes E8 E5 BD EF FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xbd
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 4a4h]
        push edx
        ; Exact mapped bytes E8 A7 BC 29 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbc
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 7A: jmp 0x585b5859
        __asm _emit 0xeb
        __asm _emit 0x7a
        push 0
        push 588ab788h
        ; Exact mapped bytes FF 15 7C 42 89 58: call dword ptr [0x5889427c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 589604e0h
        push 588ab794h
        push 104h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 E9 B5 EF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 10h
        push 588ab7a8h
        lea ecx, [ebp - 108h]
        push ecx
        lea edx, [ebp - 4a8h]
        push edx
        ; Exact mapped bytes E8 F3 BA 29 00: call 0x58851315
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xba
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4bch], eax
        cmp dword ptr [ebp - 4bch], 0
        ; Exact mapped bytes 75 25: jne 0x585b5859
        __asm _emit 0x75
        __asm _emit 0x25
        lea eax, [ebp - 388h]
        push eax
        mov ecx, dword ptr [ebp - 4a8h]
        push ecx
        ; Exact mapped bytes E8 69 BD EF FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xbd
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 4a8h]
        push edx
        ; Exact mapped bytes E8 2B BC 29 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbc
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 7A: jmp 0x585b58d5
        __asm _emit 0xeb
        __asm _emit 0x7a
        push 0
        push 588ab7ach
        ; Exact mapped bytes FF 15 7C 42 89 58: call dword ptr [0x5889427c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 589604e0h
        push 588ab7b8h
        push 104h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 6D B5 EF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb5
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 10h
        push 588ab7cch
        lea ecx, [ebp - 108h]
        push ecx
        lea edx, [ebp - 4ach]
        push edx
        ; Exact mapped bytes E8 77 BA 29 00: call 0x58851315
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xba
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4c0h], eax
        cmp dword ptr [ebp - 4c0h], 0
        ; Exact mapped bytes 75 25: jne 0x585b58d5
        __asm _emit 0x75
        __asm _emit 0x25
        lea eax, [ebp - 388h]
        push eax
        mov ecx, dword ptr [ebp - 4ach]
        push ecx
        ; Exact mapped bytes E8 ED BC EF FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xbc
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 4ach]
        push edx
        ; Exact mapped bytes E8 AF BB 29 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xbb
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 71 B7 27 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb7
        __asm _emit 0x27
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
