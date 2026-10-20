// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866A3F0 .. +0x54D bytes.
extern "C" __declspec(naked) void FUN_5866a3f0_5866A3F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889554h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0b0h
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
        ; Exact mapped bytes E8 34 7E E1 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588afd04h
        push 54h
        ; Exact mapped bytes E8 B1 6B 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x6b
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 32: je 0x5866a495
        __asm _emit 0x74
        __asm _emit 0x32
        push 191h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD A6 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 90 7E E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x7e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866a49c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 58h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [eax + 60h], ecx
        push 54h
        ; Exact mapped bytes E8 4E 6B 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x6b
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 32: je 0x5866a4f8
        __asm _emit 0x74
        __asm _emit 0x32
        push 18fh
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A A6 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2D 7E E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866a4ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 64h], edx
        push 54h
        ; Exact mapped bytes E8 EB 6A 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6a
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 32: je 0x5866a55b
        __asm _emit 0x74
        __asm _emit 0x32
        push 190h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 A5 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa5
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CA 7D E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866a562
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 68h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 6ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 25 B0 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb0
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 70h], ecx
        push 0dch
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 9F AF 14 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xaf
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 74h], eax
        push 101h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 F9 AF 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xaf
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 42 6A 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6a
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 52: je 0x5866a624
        __asm _emit 0x74
        __asm _emit 0x52
        push 10h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 A4 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa4
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 80h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 12ch
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C1 16 E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x16
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866a62b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ecx + 6ch], edx
        push 0ach
        ; Exact mapped bytes E8 B6 69 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x69
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 62: je 0x5866a6c0
        __asm _emit 0x74
        __asm _emit 0x62
        push 0dh
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 A4 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa4
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 104h
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 25 16 E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x16
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866a6c7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 94h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [eax + 70h], ecx
        push 10ch
        ; Exact mapped bytes E8 1A 69 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x69
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 43: je 0x5866a73d
        __asm _emit 0x74
        __asm _emit 0x43
        push 646464h
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 4ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 154h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2dh
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
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 58 56 E6 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x56
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866a744
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 98h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [eax + 74h], ecx
        push 10ch
        ; Exact mapped bytes E8 9D 68 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 46: je 0x5866a7bd
        __asm _emit 0x74
        __asm _emit 0x46
        push 646464h
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 154h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 56h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2dh
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
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D8 55 E6 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x55
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866a7c4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 9ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [eax + 78h], ecx
        push 10ch
        ; Exact mapped bytes E8 1D 68 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 43: je 0x5866a83a
        __asm _emit 0x74
        __asm _emit 0x43
        push 646464h
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 32h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 154h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 25h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2dh
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
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 5B 55 E6 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x55
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866a841
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 6D B5 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb5
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0a8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 54 B5 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb5
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 0ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 3B B5 E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb5
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0b0h], eax
        push 28h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 32 18 E4 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x18
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0b4h], edx
        push 28h
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 89 1E E8 FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 0b8h], ecx
        push 0c8h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 FD 17 E4 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x17
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0bch], eax
        push 28h
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 E4 17 E4 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x17
        __asm _emit 0xe4
        __asm _emit 0xff
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 A1 E1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa1
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 80h], eax
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
