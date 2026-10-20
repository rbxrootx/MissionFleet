// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AE530 .. +0x33B bytes.
extern "C" __declspec(naked) void FUN_586ae530_586AE530() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b4a1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 6ch
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
        ; Exact mapped bytes E8 57 3D DD FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x3d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b0b64h
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ae59b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D A9 00 00 00: jge 0x586ae64e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 58 2A 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2a
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1D: je 0x586ae5d9
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4C 3D DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ae5e0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 40h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + eax*4 + 50h], edx
        push 54h
        ; Exact mapped bytes E8 06 2A 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2a
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1D: je 0x586ae62b
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FA 3C DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3c
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ae632
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [edx + ecx*4 + 58h], eax
        ; Exact mapped bytes E9 44 FF FF FF: jmp 0x586ae592
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 AC 29 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x29
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 38: je 0x586ae6a0
        __asm _emit 0x74
        __asm _emit 0x38
        push 29h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 64 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x64
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 43h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0cfh
        push edx
        push 8
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D5 C2 10 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ae6a7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 4ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [eax + 60h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 50h]
        mov dword ptr [ebp - 50h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D7 6E 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6e
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 58h]
        mov dword ptr [ebp - 54h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B8 6E 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6e
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 58h]
        mov dword ptr [ebp - 58h], eax
        push 101h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 99 6E 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x6e
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 E2 28 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x28
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 54: je 0x586ae786
        __asm _emit 0x74
        __asm _emit 0x54
        push 9
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 63 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x63
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 60h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 64h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0dch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0a0h
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5F D5 E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd5
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ae78d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 64h], edx
        push 0ach
        ; Exact mapped bytes E8 5A 28 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x28
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 53: je 0x586ae80d
        __asm _emit 0x74
        __asm _emit 0x53
        push 0bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 63 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x63
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 74h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0dch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0f4h
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D8 D4 E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd4
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ae814
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 78h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 41 77 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x77
        __asm _emit 0xdd
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
