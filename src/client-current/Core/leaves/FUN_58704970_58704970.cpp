// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58704970 .. +0x711 bytes.
extern "C" __declspec(naked) void FUN_58704970_58704970() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888d7d1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0e0h
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
        ; Exact mapped bytes E8 44 6D E6 FF: call 0x5856b700
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x6d
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3d20h
        push 198h
        ; Exact mapped bytes E8 2E C6 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc6
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 16: je 0x587049fc
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b3cfch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B9 B9 07 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb9
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58704a03
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 54h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [edx + 84h], eax
        push 54h
        ; Exact mapped bytes E8 E4 C5 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc5
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3B: je 0x58704a6b
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 58h], edx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 DA 00 D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BA D8 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd8
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58704a72
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 60h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [edx + ecx + 88h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 88h]
        mov dword ptr [ebp - 64h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 FD 0A 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 68h], edx
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 6E 13 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x13
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 88h]
        mov dword ptr [ebp - 6ch], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 4C 0A 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 08 C5 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 3B: je 0x58704b47
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 FE FF D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DE D7 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58704b4e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 78h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + eax + 88h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 7ch], edx
        push 8ch
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 B1 09 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 80h], edx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 F2 11 D8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x11
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 4E C4 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc4
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 47: je 0x58704c0d
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 84h], ecx
        push 2
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 3E FF D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 18 D7 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58704c14
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ecx + eax + 90h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 90h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 4F 09 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x09
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 90h]
        mov dword ptr [ebp - 94h], ecx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 BA 11 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x11
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 98h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 92 08 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 4E C3 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc3
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 47: je 0x58704d0d
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 9ch], ecx
        push 3
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 3E FE D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 18 D6 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58704d14
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [eax + edx + 90h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 90h]
        mov dword ptr [ebp - 0a8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 4F 08 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x08
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 90h]
        mov dword ptr [ebp - 0ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 BA 10 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 90h]
        mov dword ptr [ebp - 0b0h], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 92 07 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x07
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 4B C2 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc2
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 68: je 0x58704e31
        __asm _emit 0x74
        __asm _emit 0x68
        push 1eh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA FC D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b8h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0bch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a0h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 277h
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 B4 6E DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x6e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58704e38
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0c0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0c0h]
        mov dword ptr [eax + 98h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 0c4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 3D 07 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 0c8h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 AE 06 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 67 C1 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc1
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 68: je 0x58704f15
        __asm _emit 0x74
        __asm _emit 0x68
        push 1fh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 FC D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d4h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1c9h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 277h
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D0 6D DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58704f1c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d8h]
        mov dword ptr [ecx + 9ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 0dch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 59 06 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 0e0h], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 CA 05 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        push 10ch
        ; Exact mapped bytes E8 83 C0 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 59: je 0x58704fea
        __asm _emit 0x74
        __asm _emit 0x59
        push 0
        push 0
        push 0ffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1d9h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 265h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0ach
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0adh
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
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 90h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 AB AD DC FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xad
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58704ff1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0e4h]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 0e8h], ecx
        push 47h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 37 77 DE FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x77
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 0ech], eax
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 9B 0D D8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
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
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2B 0F D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0f
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
