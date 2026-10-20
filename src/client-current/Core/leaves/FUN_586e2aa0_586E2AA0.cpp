// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E2AA0 .. +0x723 bytes.
extern "C" __declspec(naked) void FUN_586e2aa0_586E2AA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c789h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ech
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
        ; Exact mapped bytes E8 84 F7 D9 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3014h
        push 54h
        ; Exact mapped bytes E8 01 E5 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe5
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 35: je 0x586e2b48
        __asm _emit 0x74
        __asm _emit 0x35
        push 21ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 1F DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x1f
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 2710h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DD F7 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf7
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e2b4f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 68h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [eax + 60h], ecx
        push 54h
        ; Exact mapped bytes E8 9B E4 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe4
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 35: je 0x586e2bae
        __asm _emit 0x74
        __asm _emit 0x35
        push 21bh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 1F DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x1f
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 2328h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 77 F7 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf7
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e2bb5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 64h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 74h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 D2 29 0D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x29
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 4F 32 DA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x32
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 0B E4 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe4
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 3B: je 0x586e2c44
        __asm _emit 0x74
        __asm _emit 0x3b
        push 21eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 1F DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1f
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        push 2711h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 10h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 7eh
        push edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E1 F6 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf6
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e2c4b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 80h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [edx + ecx + 68h], eax
        push 54h
        ; Exact mapped bytes E8 96 E3 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe3
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 41: je 0x586e2cbf
        __asm _emit 0x74
        __asm _emit 0x41
        push 21fh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 1E DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1e
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        push 2711h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 21h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 7eh
        push edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 66 F6 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf6
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e2cc6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 88h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + eax + 68h], edx
        push 54h
        ; Exact mapped bytes E8 15 E3 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe3
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 41: je 0x586e2d40
        __asm _emit 0x74
        __asm _emit 0x41
        push 21dh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 1E DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1e
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 271ah
        mov eax, dword ptr [ebp + 10h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 65h
        push ecx
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E5 F5 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf5
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e2d47
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 90h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [edx + 7ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 37 28 0D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 AE 30 DA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x30
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 67 E2 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe2
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 3E: je 0x586e2deb
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0afh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 1D DA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 0bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 7ah
        push eax
        push 6
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 8A 7B 0D 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x7b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e2df2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ecx + 80h], edx
        push 0fch
        ; Exact mapped bytes E8 EC E1 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe1
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 41: je 0x586e2e69
        __asm _emit 0x74
        __asm _emit 0x41
        push 0afh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 1C DA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1c
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0cbh
        push ecx
        push 6
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 0C 7B 0D 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e2e70
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [edx + 84h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 0ach], edx
        push 271bh
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 D5 2F DA FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x2f
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 0b0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 E6 26 0D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x26
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 0b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 5A 2F DA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x2f
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 0b8h], edx
        push 271bh
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 7B 2F DA FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2f
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 0bch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 8C 26 0D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x26
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 0c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 00 2F DA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x2f
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 BC E0 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe0
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 4A: je 0x586e2fa2
        __asm _emit 0x74
        __asm _emit 0x4a
        push 21ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 1B DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1b
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        push 3a98h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 7eh
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        push 2710h
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B3 0A E2 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e2fa9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0c8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0cch], eax
        push 101h
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 D2 25 0D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x25
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 0d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 49 2E DA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x2e
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 05 E0 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 68: je 0x586e3077
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 29h
        mov dword ptr [ebp - 0d4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 7eh
        mov dword ptr [ebp - 0d8h], eax
        push 218h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 1A DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x1a
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        push 3a98h
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        push 2710h
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 DE 09 E2 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e307e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0e0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0e0h]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0e4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 FD 24 0D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x24
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 74 2D DA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x2d
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a8h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffdh
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
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b4h], 0
        push 74h
        ; Exact mapped bytes E8 F4 DE 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xde
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 68: je 0x586e3188
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 1fh
        mov dword ptr [ebp - 0ech], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 7eh
        mov dword ptr [ebp - 0f0h], ecx
        push 219h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 19 DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x19
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        push 3a99h
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 CD 08 E2 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e318f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0f8h]
        mov dword ptr [ecx + 74h], edx
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
