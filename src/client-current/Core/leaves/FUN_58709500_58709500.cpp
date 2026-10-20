// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58709500 .. +0x443 bytes.
extern "C" __declspec(naked) void FUN_58709500_58709500() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888da53h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 88h
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
        ; Exact mapped bytes E8 84 8D D7 FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3e88h
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5870956e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 6B: jge 0x587095df
        __asm _emit 0x7d
        __asm _emit 0x6b
        push 54h
        ; Exact mapped bytes E8 89 7A 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x7a
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 34: je 0x587095bf
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 14h]
        add edx, 4
        push edx
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 B5 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb5
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 66 8D D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x8d
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587095c6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [eax + edx*4 + 50h], ecx
        ; Exact mapped bytes EB 86: jmp 0x58709565
        __asm _emit 0xeb
        __asm _emit 0x86
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x587095f1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 6B: jge 0x58709662
        __asm _emit 0x7d
        __asm _emit 0x6b
        push 54h
        ; Exact mapped bytes E8 06 7A 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7a
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 34: je 0x58709642
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 14h]
        add eax, 6
        push eax
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 B5 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb5
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E3 8C D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58709649
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 54h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ecx + eax*4 + 58h], edx
        ; Exact mapped bytes EB 86: jmp 0x587095e8
        __asm _emit 0xeb
        __asm _emit 0x86
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 34 C7 D7 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 50h]
        mov dword ptr [ebp - 58h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 25 BF 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 50h]
        mov dword ptr [ebp - 5ch], eax
        push 0b4h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 96 BE 0A 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 58h]
        mov dword ptr [ebp - 60h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 E7 BE 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 58h]
        mov dword ptr [ebp - 64h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 C8 BE 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 10ch
        ; Exact mapped bytes E8 11 79 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x79
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 43: je 0x58709746
        __asm _emit 0x74
        __asm _emit 0x43
        push 646464h
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 32h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 9ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 25h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 20h
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
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 4F 66 DC FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x66
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5870974d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 68h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [eax + 60h], ecx
        push 0fch
        ; Exact mapped bytes E8 9A 78 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 35: je 0x587097af
        __asm _emit 0x74
        __asm _emit 0x35
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 B3 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb3
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 3eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 49h
        push eax
        push 8
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C6 11 0B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x11
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x587097b6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 64h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 74h], ecx
        push 10h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 14 29 DA FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x29
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 1D 78 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 4E: je 0x58709845
        __asm _emit 0x74
        __asm _emit 0x4e
        push 2
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC B2 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb2
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 80h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4fh
        push edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A0 24 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5870984c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 84h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [edx + 68h], eax
        push 0ach
        ; Exact mapped bytes E8 95 77 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x77
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 61: je 0x587098e0
        __asm _emit 0x74
        __asm _emit 0x61
        push 1
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 B2 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb2
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 4eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 7bh
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 05 24 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x587098e7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ecx + 6ch], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 86 C6 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc6
        __asm _emit 0xd7
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
