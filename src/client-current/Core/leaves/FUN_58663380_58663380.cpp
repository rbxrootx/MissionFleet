// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58663380 .. +0x890 bytes.
extern "C" __declspec(naked) void FUN_58663380_58663380() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889285h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0e4h
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
        ; Exact mapped bytes E8 A4 EE E1 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xee
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588afc34h
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586633f5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 7C: jge 0x58663477
        __asm _emit 0x7d
        __asm _emit 0x7c
        push 54h
        ; Exact mapped bytes E8 02 DC 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xdc
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3C: je 0x5866344e
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, 17h
        sub edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 16 E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x16
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D7 EE E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xee
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663455
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 90h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [eax + edx*4 + 60h], ecx
        ; Exact mapped bytes E9 75 FF FF FF: jmp 0x586633ec
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58663489
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 7C: jge 0x5866350b
        __asm _emit 0x7d
        __asm _emit 0x7c
        push 54h
        ; Exact mapped bytes E8 6E DB 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xdb
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 3C: je 0x586634e2
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, 15h
        sub eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 16 E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x16
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 43 EE E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586634e9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 98h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ecx + eax*4 + 68h], edx
        ; Exact mapped bytes E9 75 FF FF FF: jmp 0x58663480
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 9ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 80 20 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 68h]
        mov dword ptr [ebp - 0a0h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 5B 20 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x20
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 68h]
        mov dword ptr [ebp - 0a4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 36 20 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x20
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 82 DA 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 40: je 0x586635d2
        __asm _emit 0x74
        __asm _emit 0x40
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 48h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 10ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 39h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 55h
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E3 ED E1 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xed
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586635d9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 70h], ecx
        push 70h
        ; Exact mapped bytes E8 0B DA 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xda
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 40: je 0x58663649
        __asm _emit 0x74
        __asm _emit 0x40
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 58h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 10ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 49h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 55h
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6C ED E1 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663650
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0ach], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [eax + 74h], ecx
        push 70h
        ; Exact mapped bytes E8 94 D9 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 40: je 0x586636c0
        __asm _emit 0x74
        __asm _emit 0x40
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 68h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 132h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 59h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 55h
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F5 EC E1 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xec
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x586636c7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0b0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [eax + 78h], ecx
        push 70h
        ; Exact mapped bytes E8 1D D9 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 40: je 0x58663737
        __asm _emit 0x74
        __asm _emit 0x40
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 7bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 10ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 6ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 55h
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 7E EC E1 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xec
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866373e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0b4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [eax + 7ch], ecx
        push 70h
        ; Exact mapped bytes E8 A6 D8 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd8
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 43: je 0x586637b1
        __asm _emit 0x74
        __asm _emit 0x43
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 8bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 10ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 55h
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 04 EC E1 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xec
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x586637b8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0b8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [eax + 80h], ecx
        push 58h
        ; Exact mapped bytes E8 29 D8 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd8
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 3E: je 0x58663829
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 12 E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 8ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 EC 2F E2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2f
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663830
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c0h]
        mov dword ptr [ecx + 84h], edx
        push 70h
        ; Exact mapped bytes E8 B1 D7 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd7
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 47: je 0x586638aa
        __asm _emit 0x74
        __asm _emit 0x47
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 9bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 10ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 8ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6fh
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 0B EB E1 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xeb
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x586638b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ecx + 88h], edx
        push 54h
        ; Exact mapped bytes E8 30 D7 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd7
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 25: je 0x58663909
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 9dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 55h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 1C EA E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xea
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663910
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ecx + 8ch], edx
        push 54h
        ; Exact mapped bytes E8 D1 D6 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xd6
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 25: je 0x58663968
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 9dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 55h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 BD E9 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866396f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ecx + 90h], edx
        push 70h
        ; Exact mapped bytes E8 72 D6 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd6
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 47: je 0x586639e9
        __asm _emit 0x74
        __asm _emit 0x47
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0aeh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 10ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 9fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6fh
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 CC E9 E1 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x586639f0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ecx + 94h], edx
        push 70h
        ; Exact mapped bytes E8 F1 D5 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd5
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 47: je 0x58663a6a
        __asm _emit 0x74
        __asm _emit 0x47
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0bdh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 10ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0aeh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 55h
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 4B E9 E1 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663a71
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 98h], edx
        push 0ach
        ; Exact mapped bytes E8 6D D5 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd5
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 6B: je 0x58663b18
        __asm _emit 0x74
        __asm _emit 0x6b
        push 0
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 10 E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x10
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0cah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0f0h
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 D0 81 E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58663b22
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 0e4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [eax + 9ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 0e8h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 50 1A 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x1a
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 0ech], edx
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 D4 B9 E3 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AC 09 F2 FF: call 0x58584530
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0f0h], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 3B: je 0x58663bd6
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ecx + eax + 60h]
        ; Exact mapped bytes 74 0B: je 0x58663bba
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E7 21 E2 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x21
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4E 1A E3 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes 75 02: jne 0x58663bd4
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58663bd6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BC: jmp 0x58663b92
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 0a0h], 1
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A6 23 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x23
        __asm _emit 0xe2
        __asm _emit 0xff
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6C 21 E2 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x21
        __asm _emit 0xe2
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
