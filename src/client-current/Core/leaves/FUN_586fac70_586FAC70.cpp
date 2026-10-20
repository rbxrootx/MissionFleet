// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FAC70 .. +0xA1C bytes.
extern "C" __declspec(naked) void FUN_586fac70_586FAC70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888d389h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 17ch
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
        ; Exact mapped bytes E8 B4 75 D8 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3a7ch
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
        ; Exact mapped bytes EB 09: jmp 0x586facea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 0F 8D 06 01 00 00: jge 0x586fadfa
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 09 63 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x63
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 44: je 0x586fad4f
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 90h], edx
        push 155h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 F9 9D D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x9d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D6 75 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x75
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fad56
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 98h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [eax + edx*4 + 64h], ecx
        push 54h
        ; Exact mapped bytes E8 8A 62 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x62
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 44: je 0x586fadce
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 9ch], eax
        push 156h
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 7A 9D D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 57 75 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x75
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fadd5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ecx + eax*4 + 80h], edx
        ; Exact mapped bytes E9 E7 FE FF FF: jmp 0x586face1
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 03 62 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x62
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 44: je 0x586fae55
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0a8h], ecx
        push 157h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 F3 9C D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D0 74 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x74
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fae5c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ecx + 9ch], edx
        push 54h
        ; Exact mapped bytes E8 85 61 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 44: je 0x586faed3
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0b4h], ecx
        push 158h
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 75 9C D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 52 74 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x74
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x586faeda
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ecx + 0a0h], edx
        push 54h
        ; Exact mapped bytes E8 07 61 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x61
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 44: je 0x586faf51
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0c0h], ecx
        push 159h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 F7 9B D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x9b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D4 73 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x73
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586faf58
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ecx + 0a4h], edx
        push 54h
        ; Exact mapped bytes E8 89 60 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 44: je 0x586fafcf
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0cch], ecx
        push 15ah
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 79 9B D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 56 73 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x73
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fafd6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 0a8h], edx
        push 0ach
        ; Exact mapped bytes E8 08 60 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 62: je 0x586fb06e
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0d8h], ecx
        push 3eh
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 AB 9A D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x9a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 77 0C DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fb075
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0e8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [eax + 0ach], ecx
        push 0ach
        ; Exact mapped bytes E8 69 5F 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5f
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 63: je 0x586fb10e
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0ech], eax
        push 3fh
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 0C 9A D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f8h], edx
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0f4h]
        push edx
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D7 0B DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0b
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fb115
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0fch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [edx + 0b0h], eax
        push 0ach
        ; Exact mapped bytes E8 C9 5E 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5e
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 62: je 0x586fb1ad
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 100h], edx
        push 40h
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 6C 99 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x99
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10ch], ecx
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 38 0B DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fb1b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ecx + 0b4h], edx
        push 0ach
        ; Exact mapped bytes E8 2A 5E 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 62: je 0x586fb24c
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 114h], ecx
        push 41h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 CD 98 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x98
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 11ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 120h], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 99 0A DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x0a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fb253
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 124h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [eax + 0b8h], ecx
        push 0ach
        ; Exact mapped bytes E8 8B 5D 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 63: je 0x586fb2ec
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 128h], eax
        push 42h
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 2E 98 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x98
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 130h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 134h], edx
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 130h]
        push edx
        mov eax, dword ptr [ebp - 134h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 F9 09 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x09
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fb2f3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 138h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [edx + 0bch], eax
        push 0ach
        ; Exact mapped bytes E8 EB 5C 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5c
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 62: je 0x586fb38b
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 13ch], edx
        push 43h
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 8E 97 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x97
        __asm _emit 0xd8
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
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 5A 09 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fb392
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14ch]
        mov dword ptr [ecx + 0c0h], edx
        push 0ach
        ; Exact mapped bytes E8 4C 5C 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x5c
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 62: je 0x586fb42a
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 150h], ecx
        push 44h
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 EF 96 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x96
        __asm _emit 0xd8
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
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 BB 08 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fb431
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 160h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 160h]
        mov dword ptr [eax + 0c4h], ecx
        push 0ach
        ; Exact mapped bytes E8 AD 5B 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x5b
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 66: je 0x586fb4cd
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 164h], eax
        push 45h
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 50 96 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x96
        __asm _emit 0xd8
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
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 1B 08 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x08
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fb4d7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 174h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 174h]
        mov dword ptr [edx + 0c8h], eax
        push 78h
        ; Exact mapped bytes E8 07 5B 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x5b
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 21: je 0x586fb534
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 F4 75 F5 FF: call 0x58652b20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x75
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fb53e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 178h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [eax + 0cch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 17ch], eax
        push 1f4h
        push 258h
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 9F A0 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa0
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586fb594
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 7D 26: jge 0x586fb5c0
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 80h]
        mov dword ptr [ebp - 180h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 F3 9F 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CB: jmp 0x586fb58b
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 184h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 D1 9F 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 188h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 B2 9F 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0d8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0dch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0e0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0e4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0e8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ech], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 20 A9 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa9
        __asm _emit 0xd8
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
