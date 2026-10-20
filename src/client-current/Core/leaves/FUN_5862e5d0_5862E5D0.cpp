// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862E5D0 .. +0xCF2 bytes.
extern "C" __declspec(naked) void FUN_5862e5d0_5862E5D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888788ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 184h
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
        ; Exact mapped bytes E8 54 3C E5 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588aecech
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 63 E5 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x63
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 64h], eax
        push 5ch
        ; Exact mapped bytes E8 C0 29 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1B: je 0x5862e66f
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 06 53 E9 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x53
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5862e676
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 C6 53 E9 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x53
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        push 5ch
        ; Exact mapped bytes E8 52 29 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1B: je 0x5862e6dd
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 98 52 E9 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x52
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5862e6e4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0ach], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 58 53 E9 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x53
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5862e72b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 95 00 00 00: jge 0x5862e7ca
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 C8 28 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 55: je 0x5862e7a1
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 6ah
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 B6 63 E5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x63
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0b8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 84 3B E5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5862e7a8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ecx + eax*4 + 70h], edx
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x5862e722
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 10ch
        ; Exact mapped bytes E8 30 28 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 49: je 0x5862e82d
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 81h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 108h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 72h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 93h
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
        mov eax, dword ptr [edx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 68 15 EA FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x15
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5862e834
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [edx + 78h], eax
        push 10ch
        ; Exact mapped bytes E8 AD 27 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x27
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 4D: je 0x5862e8b4
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 95h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 108h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 86h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 93h
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
        mov ecx, dword ptr [eax + 68h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E1 14 EA FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5862e8bb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0c4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [eax + 7ch], ecx
        push 9ch
        ; Exact mapped bytes E8 26 27 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x27
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 4A: je 0x5862e938
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0bdh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 108h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0aeh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 93h
        push edx
        ; Exact mapped bytes A1 3C 20 96 58: mov eax, dword ptr [0x5896203c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 CD 44 19 00: call 0x587c2e00
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x44
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5862e93f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ecx + 80h], edx
        push 9ch
        ; Exact mapped bytes E8 9F 26 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 4A: je 0x5862e9bf
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0d1h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 108h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0c2h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 93h
        push eax
        ; Exact mapped bytes 8B 0D 3C 20 96 58: mov ecx, dword ptr [0x5896203c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 46 44 19 00: call 0x587c2e00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x44
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5862e9c6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0cch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [edx + 84h], eax
        push 10ch
        ; Exact mapped bytes E8 18 26 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 4A: je 0x5862ea46
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 117h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0f0h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4ch
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
        mov ecx, dword ptr [eax + 68h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 4F 13 EA FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x13
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5862ea4d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0d0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [eax + 88h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 70h]
        mov dword ptr [ebp - 0d4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 22 6B 18 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6b
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 70h]
        mov dword ptr [ebp - 0d8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 FD 6A 18 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6a
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 0dch], ecx
        push 11h
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 24 D6 E7 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0e0h], eax
        push 8
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 0B D6 E7 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 0e4h], edx
        push 17h
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 9F 4D F0 FF: call 0x585338a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x4d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 0e8h], ecx
        push 17h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 83 4D F0 FF: call 0x585338a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 0ech], eax
        push 7ffh
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 B4 D5 E7 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 0f0h], edx
        push 20h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 08 DC EB FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xdc
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 A1 24 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5862ebf8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 0f4h], ecx
        push 15h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 40 5F E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 100h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 104h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 157h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0c8h
        push ecx
        mov edx, dword ptr [ebp - 0f8h]
        push edx
        mov eax, dword ptr [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 ED D0 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xd0
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5862ebff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ecx + 8ch], edx
        push 0ach
        ; Exact mapped bytes E8 DF 23 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x23
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5862ecba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 10ch], ecx
        push 16h
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 7E 5E E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 118h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 11ch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 157h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0f9h
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 2B D0 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd0
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5862ecc1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 120h]
        mov dword ptr [ecx + 90h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5862ecef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 98 00 00 00: jge 0x5862ed91
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 04 23 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x23
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 55: je 0x5862ed65
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 6ch
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 F2 5D E5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 12ch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 128h]
        push edx
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 C0 35 E5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x35
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5862ed6c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 130h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [eax + edx*4 + 94h], ecx
        ; Exact mapped bytes E9 55 FF FF FF: jmp 0x5862ece6
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 10ch
        ; Exact mapped bytes E8 69 22 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x22
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 49: je 0x5862edf4
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 81h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 212h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 72h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 19dh
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
        mov edx, dword ptr [ecx + 6ch]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 A1 0F EA FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x0f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5862edfb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + 9ch], edx
        push 9ch
        ; Exact mapped bytes E8 E3 21 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x21
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 4A: je 0x5862ee7b
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0bdh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 208h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0aeh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 19dh
        push eax
        ; Exact mapped bytes 8B 0D 3C 20 96 58: mov ecx, dword ptr [0x5896203c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 8A 3F 19 00: call 0x587c2e00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x3f
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5862ee82
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 138h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [edx + 0a0h], eax
        push 9ch
        ; Exact mapped bytes E8 5C 21 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x21
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 4E: je 0x5862ef06
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d1h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 208h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c2h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 19dh
        push ecx
        ; Exact mapped bytes 8B 15 3C 20 96 58: mov edx, dword ptr [0x5896203c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 02 3F 19 00: call 0x587c2e00
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3f
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862ef10
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 13ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [eax + 0a4h], ecx
        push 10ch
        ; Exact mapped bytes E8 CB 20 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 52: je 0x5862efa1
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 14dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 221h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0f0h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 156h
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
        mov edx, dword ptr [ecx + 6ch]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 F7 0D EA FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0d
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862efab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 94h]
        mov dword ptr [ebp - 144h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 BE 65 18 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x65
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 94h]
        mov dword ptr [ebp - 148h], eax
        push 101h
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 96 65 18 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x65
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 14ch], edx
        push 11h
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 BA D0 E7 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 150h], ecx
        push 17h
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 4E 48 F0 FF: call 0x585338a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 154h], eax
        push 17h
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 32 48 F0 FF: call 0x585338a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 158h], edx
        push 7ffh
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 63 D0 E7 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 15ch], ecx
        push 20h
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 B7 D6 EB FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd6
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 50 1F 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x1f
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x5862f154
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 160h], eax
        push 15h
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 E9 59 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 168h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 170h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 157h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1d2h
        push eax
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov edx, dword ptr [ebp - 168h]
        push edx
        mov eax, dword ptr [ebp - 16ch]
        push eax
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 94 CB E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xcb
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862f15e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 174h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 174h]
        mov dword ptr [eax + 0ach], ecx
        push 0ach
        ; Exact mapped bytes E8 7D 1E 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1e
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x5862f227
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 178h], eax
        push 16h
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 16 59 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x59
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 180h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 188h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 157h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 203h
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        push ecx
        mov edx, dword ptr [ebp - 180h]
        push edx
        mov eax, dword ptr [ebp - 184h]
        push eax
        mov ecx, dword ptr [ebp - 188h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 C1 CA E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xca
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862f231
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 18ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18ch]
        mov dword ptr [eax + 0b0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 60h], 1
        push 800h
        ; Exact mapped bytes E8 E1 1D 20 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 190h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 190h]
        mov dword ptr [eax + 0b4h], ecx
        push 800h
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        push eax
        ; Exact mapped bytes E8 81 DB 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xdb
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C4 6A E5 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6a
        __asm _emit 0xe5
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EA 6C E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x6c
        __asm _emit 0xe5
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
