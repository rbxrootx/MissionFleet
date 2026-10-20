// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58616C20 .. +0xCEA bytes.
extern "C" __declspec(naked) void FUN_58616c20_58616C20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58886e3ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 178h
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
        push 40h
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 07 B6 E6 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb6
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588ae560h
        push 54h
        ; Exact mapped bytes E8 84 A3 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 38: je 0x58616cc8
        __asm _emit 0x74
        __asm _emit 0x38
        push 8
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 DE E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        push 61a8h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5D B6 E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb6
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58616ccf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 94h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [edx + 60h], eax
        push 54h
        ; Exact mapped bytes E8 15 A3 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa3
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 38: je 0x58616d37
        __asm _emit 0x74
        __asm _emit 0x38
        push 9
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 DE E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xde
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        push 61a8h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EE B5 E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xb5
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58616d3e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 9ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 0a0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 3D E8 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 0a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 B4 F0 E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 184h
        ; Exact mapped bytes E8 6D A2 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa2
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 44: je 0x58616deb
        __asm _emit 0x74
        __asm _emit 0x44
        push 505050h
        push 0
        push 0dcdcdch
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1b8h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 3ah
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
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1A 72 EB FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x72
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58616df2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + edx + 98h], ecx
        push 184h
        ; Exact mapped bytes E8 E3 A1 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa1
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 43: je 0x58616e74
        __asm _emit 0x74
        __asm _emit 0x43
        push 505050h
        push 0
        push 0dcdcdch
        mov edx, dword ptr [ebp + 10h]
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1b8h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 91 71 EB FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x71
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58616e7b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0ach], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ecx + eax + 98h], edx
        push 184h
        ; Exact mapped bytes E8 5A A1 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa1
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 47: je 0x58616f01
        __asm _emit 0x74
        __asm _emit 0x47
        push 505050h
        push 0
        push 0dcdcdch
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1b8h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 8ah
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
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 04 71 EB FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x71
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58616f08
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [edx + ecx + 98h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58616f3e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x58616fe9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 98h]
        mov dword ptr [ebp - 0b4h], ecx
        push 61bch
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 15 EF E6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xef
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 98h]
        mov dword ptr [ebp - 0b8h], ecx
        push 14h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 65 84 E8 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 98h]
        mov dword ptr [ebp - 0bch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 65 EF E6 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xef
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 98h]
        mov dword ptr [ebp - 0c4h], ecx
        push 0
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 DA E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xda
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 CD 74 EB FF: call 0x584ce4b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x74
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x58616f35
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 14 A0 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa0
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 3B: je 0x5861703b
        __asm _emit 0x74
        __asm _emit 0x3b
        push 9dbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 DB E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xdb
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        push 61b7h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 EA B2 E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58617042
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0cch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 6C EE E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 88 9F 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9f
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 3B: je 0x586170c7
        __asm _emit 0x74
        __asm _emit 0x3b
        push 9dah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 DA E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        push 61b7h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 5E B2 E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586170ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0d8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [edx + 7ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 0dch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 AD E4 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe4
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 0e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 24 ED E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xed
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 AB ED E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xed
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 198h
        ; Exact mapped bytes E8 C4 9E 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x9e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 14: je 0x58617164
        __asm _emit 0x74
        __asm _emit 0x14
        push 0
        push 588ae3bch
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 F1 F5 19 00: call 0x587b6750
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861716b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0e8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [edx + 68h], eax
        push 100h
        ; Exact mapped bytes E8 76 9E 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x9e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 51: je 0x586171ef
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0ech], edx
        push 11h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 19 D9 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        push 55555555h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0edh
        push ecx
        push 4
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 F6 73 EB FF: call 0x584ce5e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x73
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586171f6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0f4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0f4h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0f8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 85 E3 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 9C EC E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xec
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 100h], eax
        push 61bch
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 20 EC E6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xec
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 99 9D 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9d
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 4C: je 0x586172c7
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 104h], edx
        push 12h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 3C D8 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0edh
        push ecx
        push 4
        mov edx, dword ptr [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 AE 36 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x36
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586172ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 10ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 110h], edx
        push 101h
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 AD E2 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe2
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 114h], ecx
        push 0c8h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 21 E2 19 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe2
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 118h], eax
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 A8 EB E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xeb
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 11ch], edx
        push 61bch
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 2C EB E6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xeb
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 10ch
        ; Exact mapped bytes E8 A5 9C 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x9c
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 49: je 0x586173b8
        __asm _emit 0x74
        __asm _emit 0x49
        push 646464h
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 190h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 76h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 15eh
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
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 DD 89 EB FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x89
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586173bf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 120h]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 124h], ecx
        push 5
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 FF 4C E9 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 128h], eax
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 D6 EA E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xea
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 12ch], edx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 BD E9 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 130h], ecx
        push 61bch
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 41 EA E6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xea
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 BD 9B 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9b
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 43: je 0x5861749a
        __asm _emit 0x74
        __asm _emit 0x43
        push 505050h
        push 0
        push 0ffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1b8h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 76h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 1B AF E6 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xaf
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x586174a1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 134h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 138h], eax
        push 61bch
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 A4 E9 E6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 13ch], edx
        push 14h
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 F8 7E E8 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 140h], ecx
        push 1
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 FC E9 E6 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 E8 9A 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 40: je 0x5861756c
        __asm _emit 0x74
        __asm _emit 0x40
        push 53h
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 D5 E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd5
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        push 61bch
        mov edx, dword ptr [ebp + 10h]
        add edx, 75h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 17ch
        push eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 B9 AD E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xad
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58617573
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 148h]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 14ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 02 E0 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 150h], eax
        push 0
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 76 E8 E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 154h], edx
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 FA E8 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
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
        push 0ach
        ; Exact mapped bytes E8 B4 99 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x99
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 37: je 0x58617697
        __asm _emit 0x74
        __asm _emit 0x37
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 6ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 64h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 51 46 EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x46
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586176a1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 158h]
        mov dword ptr [eax + edx + 0a4h], ecx
        push 0ach
        ; Exact mapped bytes E8 31 99 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x99
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 3C: je 0x58617725
        __asm _emit 0x74
        __asm _emit 0x3c
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0c8h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 C3 45 EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x45
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5861772f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 15ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 15ch]
        mov dword ptr [ecx + eax + 0a4h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 160h], eax
        push 620ch
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 01 E7 E6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe7
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 164h], eax
        push 620ch
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 D9 E6 E6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe6
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 168h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 E1 DD 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xdd
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 16ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 B9 DD 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xdd
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 174h], edx
        push 3
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 D2 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd2
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        mov eax, dword ptr [ebp - 170h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 2C F4 E6 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf4
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 17ch], eax
        push 5
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 D2 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd2
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        mov ecx, dword ptr [ebp - 178h]
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 EF F3 E6 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 180h], edx
        push 1
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 4A E5 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe5
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 184h], edx
        push 1
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 25 E5 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe5
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b4h], 177h
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
