// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BDB30 .. +0x39E bytes.
extern "C" __declspec(naked) void FUN_587bdb30_587BDB30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 94 44 89 58: call dword ptr [0x58894494]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 3C 93 CF FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x93
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 DD 92 CF FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x92
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 64h], eax
        ; Exact mapped bytes 8B 0D 38 5F 96 58: mov ecx, dword ptr [0x58965f38]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        and ecx, 8
        ; Exact mapped bytes 74 05: je 0x587bdb9b
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 23 03 00 00: jmp 0x587bdebe
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 94h]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 17 8E CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ecx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 0D 90 5F 90 58: mov dword ptr [0x58905f90], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 15 94 5F 90 58: mov dword ptr [0x58905f94], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A1 98 5F 90 58: mov eax, dword ptr [0x58905f98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        imul eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 9C 5F 90 58: mov dword ptr [0x58905f9c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 9C 5F 90 58: mov ecx, dword ptr [0x58905f9c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        imul ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 0D A0 5F 90 58: mov dword ptr [0x58905fa0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 98 5F 90 58: mov edx, dword ptr [0x58905f98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 E3 FE FF FF: call 0x587bdaf0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x587bdc2b
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        push 588be1dch
        push 588be1e8h
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 7ch
        push 0
        lea eax, [ebp - 90h]
        push eax
        ; Exact mapped bytes E8 D5 F1 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 90h], 7ch
        mov dword ptr [ebp - 8ch], 21h
        mov dword ptr [ebp - 7ch], 2
        mov dword ptr [ebp - 28h], 218h
        push 0
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx + 50h]
        add edx, 4
        push edx
        lea eax, [ebp - 90h]
        push eax
        ; Exact mapped bytes 8B 0D 28 5F 96 58: mov ecx, dword ptr [0x58965f28]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes A1 28 5F 96 58: mov eax, dword ptr [0x58965f28]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 59: je 0x587bdcf1
        __asm _emit 0x74
        __asm _emit 0x59
        mov dword ptr [ebp - 28h], 0a18h
        push 0
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 50h]
        add eax, 4
        push eax
        lea ecx, [ebp - 90h]
        push ecx
        ; Exact mapped bytes 8B 15 28 5F 96 58: mov edx, dword ptr [0x58965f28]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 28 5F 96 58: mov ecx, dword ptr [0x58965f28]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 19: je 0x587bdcf1
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 588be1dch
        push 588be208h
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes A1 90 5F 90 58: mov eax, dword ptr [0x58905f90]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [edx + 1ch], eax
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes A1 94 5F 90 58: mov eax, dword ptr [0x58905f94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [edx + 20h], eax
        mov ecx, dword ptr [ebp - 94h]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 8F F8 FF FF: call 0x587bd5b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push 10h
        push 0
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 E2 F0 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], 4
        lea eax, [ebp - 0a4h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 75 71: jne 0x587bdde3
        __asm _emit 0x75
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 94h]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 75 0E: jne 0x587bdd8c
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes E8 ED 74 00 00: call 0x587c5270
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ecx + 6ch], eax
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 6ch]
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 8B 0D 90 5F 90 58: mov ecx, dword ptr [0x58905f90]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 8B 0D 94 5F 90 58: mov ecx, dword ptr [0x58905f94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [eax + 20h], ecx
        mov edx, dword ptr [ebp - 94h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 E0 F7 FF FF: call 0x587bd5b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 B0 A4 00 00: call 0x587c8290
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0D: jmp 0x587bddf0
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 94h]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 4B: je 0x587bde47
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 9ch], ecx
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 1C: je 0x587bde30
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587bde3a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [eax + 68h], 0
        push 840h
        ; Exact mapped bytes 8B 0D 94 5F 90 58: mov ecx, dword ptr [0x58905f94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 90 5F 90 58: mov edx, dword ptr [0x58905f90]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 51 72 00 00: call 0x587c50b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ecx + 68h], eax
        push 0
        mov edx, dword ptr [ebp - 94h]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 15 A4 00 00: call 0x587c8290
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 78 5F 96 58 00: cmp dword ptr [0x58965f78], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 39: je 0x587bdebe
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 5F 96 58: mov ecx, dword ptr [0x58965f78]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 00 00 00: call 0x587bded0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 90 5F 90 58: mov edx, dword ptr [0x58905f90]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 78 5F 96 58: mov ecx, dword ptr [0x58965f78]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 8F CF FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x8f
        __asm _emit 0xcf
        __asm _emit 0xff
        ; Exact mapped bytes A1 94 5F 90 58: mov eax, dword ptr [0x58905f94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 78 5F 96 58: mov ecx, dword ptr [0x58965f78]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 8F CF FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8f
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 88 31 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
