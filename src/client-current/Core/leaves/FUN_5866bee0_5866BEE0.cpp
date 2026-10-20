// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866BEE0 .. +0x6CC bytes.
extern "C" __declspec(naked) void FUN_5866bee0_5866BEE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889626h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0dch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A4 63 E1 FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588afd4ch
        push 54h
        ; Exact mapped bytes E8 C1 50 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x50
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2F: je 0x5866bf82
        __asm _emit 0x74
        __asm _emit 0x2f
        push 4ah
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 8B E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A3 63 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x63
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866bf89
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 60h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [eax + 50h], ecx
        push 54h
        ; Exact mapped bytes E8 61 50 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x50
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2F: je 0x5866bfe2
        __asm _emit 0x74
        __asm _emit 0x2f
        push 49h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 8B E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 43 63 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x63
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866bfe9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 54h], edx
        push 54h
        ; Exact mapped bytes E8 01 50 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x50
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 2F: je 0x5866c042
        __asm _emit 0x74
        __asm _emit 0x2f
        push 4bh
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 8B E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E3 62 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x62
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866c049
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 70h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [edx + 58h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 74h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 3E 95 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 78h], ecx
        push 0dch
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 B8 94 14 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 7ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 12 95 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        push 10ch
        ; Exact mapped bytes E8 5B 4F 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x4f
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 45: je 0x5866c0fe
        __asm _emit 0x74
        __asm _emit 0x45
        push 646464h
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 2fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0a5h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 23h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 97 3C E6 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x3c
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866c105
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 80h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [edx + 6ch], eax
        push 10ch
        ; Exact mapped bytes E8 E2 4E 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4e
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 45: je 0x5866c177
        __asm _emit 0x74
        __asm _emit 0x45
        push 646464h
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 3ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 1E 3C E6 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x3c
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866c17e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 84h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 88h], edx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 30 9C E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x9c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 8ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 17 9C E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x9c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 90h], eax
        push 0dh
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 0E FF E3 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 94h], edx
        push 18h
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 65 05 E8 FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 98h], ecx
        push 48h
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 DC FE E3 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 E5 4D 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x4d
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 63: je 0x5866c292
        __asm _emit 0x74
        __asm _emit 0x63
        push 10h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 88 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x88
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0abh
        push edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 53 FA E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfa
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866c299
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [edx + 5ch], eax
        push 0ach
        ; Exact mapped bytes E8 48 4D 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x4d
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 64: je 0x5866c330
        __asm _emit 0x74
        __asm _emit 0x64
        push 0dh
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 87 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 85h
        push ecx
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 B5 F9 E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf9
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866c337
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ecx + 60h], edx
        push 0ach
        ; Exact mapped bytes E8 AA 4C 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 62: je 0x5866c3cc
        __asm _emit 0x74
        __asm _emit 0x62
        push 0ch
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 87 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c4h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 22h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0abh
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 19 F9 E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf9
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866c3d3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0c8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [eax + 64h], ecx
        push 0ach
        ; Exact mapped bytes E8 0E 4C 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 63: je 0x5866c469
        __asm _emit 0x74
        __asm _emit 0x63
        push 0fh
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD 86 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x86
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 22h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0abh
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 7C F8 E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866c470
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0d8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 0dch], edx
        push 101h
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 0B 91 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0e0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 EF 90 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 0e4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 D3 90 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0e8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 B7 90 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x00
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 85 E1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], eax
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + eax + 78h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 94h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a0h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A A4 00 00 00: mov word ptr [edx + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1D 9A E1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x9a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
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
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
