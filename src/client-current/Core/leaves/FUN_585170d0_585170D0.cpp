// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585170D0 .. +0x53A bytes.
extern "C" __declspec(naked) void FUN_585170d0_585170D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588811a5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0a0h
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
        movzx eax, word ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6E D8 29 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd8
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a3ee8h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [eax + 5ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 28h]
        mov dword ptr [edx + 0e4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 0f0h], 0
        push 58h
        ; Exact mapped bytes E8 A3 9E 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x9e
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x58517191
        __asm _emit 0x74
        __asm _emit 0x20
        movzx edx, word ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 84 F6 F6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58517198
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 5ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 EF E3 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe3
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585171d4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 57: jge 0x58517231
        __asm _emit 0x7d
        __asm _emit 0x57
        push 58h
        ; Exact mapped bytes E8 23 9E 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9e
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x58517211
        __asm _emit 0x74
        __asm _emit 0x20
        movzx eax, word ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 04 F6 F6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf6
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58517218
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 60h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [eax + edx*4 + 70h], ecx
        ; Exact mapped bytes EB 9A: jmp 0x585171cb
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 70h]
        mov dword ptr [ebp - 64h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 60 E3 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe3
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58517263
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D D5 00 00 00: jge 0x58517342
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 90 9D 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9d
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 46: je 0x585172ca
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 E4 F7 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe4
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1A 4E F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 2B D8 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd8
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        movzx edx, word ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 4B F5 F6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585172d1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 70h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [eax + edx*4 + 0bch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 74h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 A8 E2 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe2
        __asm _emit 0x29
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 78h], ecx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 BE EB F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xeb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 7ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 14 89 FE FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 18 FF FF FF: jmp 0x5851725a
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58517354
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D B3 00 00 00: jge 0x58517411
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 9F 9C 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x9c
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 4F: je 0x585173c4
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 E3 F7 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe3
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 29 4D F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 14h]
        add eax, 3
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 37 D7 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd7
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        movzx ecx, word ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 51 F4 F6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x585173cb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [edx + ecx*4 + 0c8h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0c8h]
        mov dword ptr [ebp - 8ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 D5 EA F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3A FF FF FF: jmp 0x5851734b
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 EC 9B 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9b
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 38: je 0x58517460
        __asm _emit 0x74
        __asm _emit 0x38
        push 2
        ; Exact mapped bytes 8B 0D 4C 07 96 58: mov ecx, dword ptr [0x5896074c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B D6 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd6
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        movzx ecx, word ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B5 F3 F6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58517467
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ecx + 0d0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 41 EA F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 9ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 F2 E0 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe0
        __asm _emit 0x29
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], 0
        push 20h
        ; Exact mapped bytes E8 35 9B 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9b
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 0F: je 0x585174ee
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 37 65 05 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x585174f5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [eax + 0f8h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58517523
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 7D 5C: jge 0x58517585
        __asm _emit 0x7d
        __asm _emit 0x5c
        push 20h
        ; Exact mapped bytes E8 D4 9A 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9a
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 0F: je 0x5851754f
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D6 64 05 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58517556
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [edx + ecx*4 + 0fch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 14h]
        mov byte ptr [ecx + 10ch], 0
        ; Exact mapped bytes EB 95: jmp 0x5851751a
        __asm _emit 0xeb
        __asm _emit 0x95
        push 20h
        ; Exact mapped bytes E8 78 9A 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x9a
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 27: je 0x585175c3
        __asm _emit 0x74
        __asm _emit 0x27
        push 0fh
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 D4 F6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 62 64 05 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x585175ca
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ecx + 108h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E2 1B 00 00: call 0x585191d0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
