// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587059A0 .. +0xCCB bytes.
extern "C" __declspec(naked) void FUN_587059a0_587059A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888d95dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1d0h
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
        ; Exact mapped bytes E8 84 C8 D7 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3e20h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 15 D4 07 96 58: mov edx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 60h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58705a1a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 0C 01 00 00: jge 0x58705b30
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D9 B5 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb5
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 38: je 0x58705a73
        __asm _emit 0x74
        __asm _emit 0x38
        push 195h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 F0 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf0
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B2 C8 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc8
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58705a7a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ecx + eax*4 + 64h], edx
        push 54h
        ; Exact mapped bytes E8 66 B5 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb5
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 38: je 0x58705ae6
        __asm _emit 0x74
        __asm _emit 0x38
        push 196h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 F0 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf0
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3F C8 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc8
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58705aed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0c4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [eax + edx*4 + 78h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 0c8h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 86 FA 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E1 FE FF FF: jmp 0x58705a11
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 CD B4 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 44: je 0x58705b8b
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0cch], eax
        push 197h
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 BD EF D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xef
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9A C7 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58705b92
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0d4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 8ch], ecx
        push 54h
        ; Exact mapped bytes E8 4F B4 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 44: je 0x58705c09
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0d8h], eax
        push 198h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 3F EF D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xef
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1C C7 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58705c10
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0e0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0e0h]
        mov dword ptr [eax + 90h], ecx
        push 54h
        ; Exact mapped bytes E8 D1 B3 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb3
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 44: je 0x58705c87
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0e4h], eax
        push 199h
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 C1 EE D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9E C6 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58705c8e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0ech], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [eax + 94h], ecx
        push 54h
        ; Exact mapped bytes E8 53 B3 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb3
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 44: je 0x58705d05
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0f0h], eax
        push 19ah
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 43 EE D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 20 C6 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58705d0c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [eax + 98h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 0fch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 69 F8 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 100h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 4A F8 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf8
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 96 B2 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb2
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 44: je 0x58705dc2
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 104h], ecx
        push 197h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 86 ED D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xed
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 63 C5 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc5
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58705dc9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [ecx + 0b8h], edx
        push 54h
        ; Exact mapped bytes E8 18 B2 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb2
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 44: je 0x58705e40
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 110h], ecx
        push 198h
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 08 ED D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xed
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E5 C4 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x58705e47
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [ecx + 0bch], edx
        push 54h
        ; Exact mapped bytes E8 9A B1 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 44: je 0x58705ebe
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 11ch], ecx
        push 199h
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 8A EC D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xec
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 67 C4 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58705ec5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 0c0h], edx
        push 54h
        ; Exact mapped bytes E8 1C B1 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 44: je 0x58705f3c
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 128h], ecx
        push 19ah
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 0C EC D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xec
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 E9 C3 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58705f43
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ecx + 0c4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 134h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 32 F6 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 138h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 13 F6 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf6
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 5C B0 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 62: je 0x5870601a
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 13ch], edx
        push 4dh
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 FF EA D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xea
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 148h], ecx
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov edx, dword ptr [ebp - 148h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 CB 5C DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58706021
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14ch]
        mov dword ptr [ecx + 0c8h], edx
        push 0ach
        ; Exact mapped bytes E8 BD AF 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xaf
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 62: je 0x587060b9
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 150h], ecx
        push 4eh
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 60 EA D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xea
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 158h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 15ch], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 158h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 2C 5C DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x5c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x587060c0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 160h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 160h]
        mov dword ptr [eax + 0cch], ecx
        push 0ach
        ; Exact mapped bytes E8 1E AF 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xaf
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 63: je 0x58706159
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 164h], eax
        push 4fh
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 C1 E9 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 16ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 170h], edx
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 168h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov eax, dword ptr [ebp - 170h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 8C 5B DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x5b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58706160
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 174h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 174h]
        mov dword ptr [edx + 0d0h], eax
        push 0ach
        ; Exact mapped bytes E8 7E AE 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xae
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 65: je 0x587061fb
        __asm _emit 0x74
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 178h], edx
        push 52h
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 21 E9 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 184h], ecx
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 17ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 180h]
        push ecx
        mov edx, dword ptr [ebp - 184h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 ED 5A DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x5a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58706205
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 188h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 188h]
        mov dword ptr [ecx + 0d4h], edx
        push 0ach
        ; Exact mapped bytes E8 D6 AD 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xad
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 68: je 0x587062ac
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 18ch], ecx
        push 50h
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 73 E8 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 194h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 198h], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 190h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 194h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 3C 5A DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x5a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587062b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 19ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 19ch]
        mov dword ptr [eax + 0d8h], ecx
        push 0ach
        ; Exact mapped bytes E8 25 AD 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xad
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 69: je 0x5870635e
        __asm _emit 0x74
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 1a0h], eax
        push 51h
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 C2 E7 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ach], edx
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 1a4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1a8h]
        push edx
        mov eax, dword ptr [ebp - 1ach]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 8A 59 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x59
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58706368
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 1b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1b0h]
        mov dword ptr [edx + 0dch], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58706399
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D 0C 02 00 00: jge 0x587065af
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 5A AC 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 3E: je 0x587063fe
        __asm _emit 0x74
        __asm _emit 0x3e
        push 195h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 E7 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1b4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 2A BF D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xbf
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58706408
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 1b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1b8h]
        mov dword ptr [edx + ecx*4 + 9ch], eax
        push 54h
        ; Exact mapped bytes E8 D2 AB 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xab
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 3E: je 0x58706486
        __asm _emit 0x74
        __asm _emit 0x3e
        push 196h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 E6 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1bch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 A2 BE D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xbe
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58706490
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 1c0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1c0h]
        mov dword ptr [ecx + eax*4 + 0a8h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0a8h]
        mov dword ptr [ebp - 1c4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 DA F0 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf0
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 26 AB 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xab
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 3F: je 0x58706533
        __asm _emit 0x74
        __asm _emit 0x3f
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 78h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 85 BE D7 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5870653d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 1c8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1c8h]
        mov dword ptr [edx + ecx*4 + 128h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 128h]
        mov dword ptr [ebp - 1cch], eax
        push 0
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 10 FA D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 128h]
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 3e8h
        push ecx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 D7 F8 D7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E1 FD FF FF: jmp 0x58706390
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 4E AA 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xaa
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 3E: je 0x5870660a
        __asm _emit 0x74
        __asm _emit 0x3e
        push 1a7h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 E5 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1d4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 1E BD D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xbd
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58706614
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 1d8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1d8h]
        mov dword ptr [ecx + 0b4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 1dch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 91 F8 D7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
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
