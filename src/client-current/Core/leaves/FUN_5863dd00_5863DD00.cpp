// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5863DD00 .. +0xD38 bytes.
extern "C" __declspec(naked) void FUN_5863dd00_5863DD00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888806bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 180h
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
        ; Exact mapped bytes E8 24 45 E4 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588af1d8h
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 6C E4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5863dd7f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 86 00 00 00: jge 0x5863de0f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 74 32 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x32
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 46: je 0x5863dde6
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 66h
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 62 6D E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x6d
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 9ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3F 45 E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5863dded
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [eax + edx*4 + 64h], ecx
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x5863dd76
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5863de21
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 95 00 00 00: jge 0x5863dec0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 CF 31 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x31
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 52: je 0x5863de97
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0afh
        push eax
        imul ecx, dword ptr [ebp - 14h], 88h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 9ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 83h
        push ecx
        imul edx, dword ptr [ebp - 14h], 51h
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 4fh]
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0E 62 EE FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x62
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863de9e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [eax + edx*4 + 6ch], ecx
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x5863de18
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 10ch
        ; Exact mapped bytes E8 3A 31 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x31
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 46: je 0x5863df20
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 118h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d0h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 53h
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
        ; Exact mapped bytes E8 75 1E E9 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x1e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5863df27
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 78h], ecx
        push 70h
        ; Exact mapped bytes E8 BD 30 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x30
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 46: je 0x5863df9d
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 142h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0c5h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 133h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4ch
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
        ; Exact mapped bytes E8 18 44 E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x44
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863dfa4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0ach], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [eax + 7ch], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5863dfcf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9D 00 00 00: jge 0x5863e076
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 24 30 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 5A: je 0x5863e04a
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0b0h], ecx
        imul edx, dword ptr [ebp - 14h], 5
        add edx, 96h
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 0E 6B E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x6b
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 157h
        push eax
        imul ecx, dword ptr [ebp - 14h], 23h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 0d6h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 DB 42 E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x42
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5863e051
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [edx + ecx*4 + 80h], eax
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x5863dfc6
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 84 2F 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 71: je 0x5863e101
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0bch], edx
        push 15h
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 27 6A E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c8h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 157h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E4 DB E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xdb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863e108
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [eax + 88h], ecx
        push 0ach
        ; Exact mapped bytes E8 D6 2E 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x2e
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 72: je 0x5863e1b0
        __asm _emit 0x74
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0d0h], eax
        push 16h
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 79 69 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x69
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0dch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 157h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0f9h
        push ecx
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 35 DB E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xdb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5863e1b7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ecx + 8ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 0e4h], ecx
        push 20h
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 74 E5 EA FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5863e1ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 89 00 00 00: jge 0x5863e292
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 F4 2D 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x2d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 46: je 0x5863e266
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0e8h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 68h
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 E2 68 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 BF 40 E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863e26d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [eax + edx*4 + 90h], ecx
        ; Exact mapped bytes E9 64 FF FF FF: jmp 0x5863e1f6
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5863e2a4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x5863e349
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 4C 2D 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x2d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 55: je 0x5863e31d
        __asm _emit 0x74
        __asm _emit 0x55
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0afh
        push eax
        imul ecx, dword ptr [ebp - 14h], 91h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 19dh]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 83h
        push ecx
        imul edx, dword ptr [ebp - 14h], 50h
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 155h]
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 88 5D EE FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5863e324
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0f4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f4h]
        mov dword ptr [eax + edx*4 + 98h], ecx
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x5863e29b
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 10ch
        ; Exact mapped bytes E8 B1 2C 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x2c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 49: je 0x5863e3ac
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 21eh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d0h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 159h
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
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 E9 19 E9 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863e3b3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [eax + 0a4h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5863e3e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 7D 13: jge 0x5863e3fa
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 0a8h], 0
        ; Exact mapped bytes EB DE: jmp 0x5863e3d8
        __asm _emit 0xeb
        __asm _emit 0xde
        push 70h
        ; Exact mapped bytes E8 03 2C 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x2c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 49: je 0x5863e45a
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 142h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1cbh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 133h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 152h
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
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 5B 3F E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5863e461
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0fch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [eax + 0b4h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5863e48f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9D 00 00 00: jge 0x5863e536
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 64 2B 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x2b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 5A: je 0x5863e50a
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 100h], ecx
        imul edx, dword ptr [ebp - 14h], 5
        add edx, 96h
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 4E 66 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x66
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 157h
        push eax
        imul ecx, dword ptr [ebp - 14h], 23h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 1dch]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 1B 3E E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863e511
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 108h]
        mov dword ptr [edx + ecx*4 + 0b8h], eax
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x5863e486
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 C4 2A 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 71: je 0x5863e5c1
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 10ch], edx
        push 15h
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 67 65 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x65
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 118h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 157h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1ceh
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 24 D7 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5863e5c8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 11ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [eax + 0c0h], ecx
        push 0ach
        ; Exact mapped bytes E8 16 2A 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 75: je 0x5863e673
        __asm _emit 0x74
        __asm _emit 0x75
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 120h], eax
        push 16h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 B9 64 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 128h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 12ch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 157h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1ffh
        push ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 75 D6 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd6
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863e67d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ecx + 0c4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 134h], ecx
        push 20h
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 A8 E0 EA FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe0
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 64h]
        mov dword ptr [ebp - 138h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 D3 6E 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x6e
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 13ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 AB 6E 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x6e
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 140h], edx
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 C2 76 E4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x76
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 144h], ecx
        push 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 A6 76 E4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x76
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5863e74d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 49: jge 0x5863e79c
        __asm _emit 0x7d
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 80h]
        mov dword ptr [ebp - 148h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 3A 6E 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6e
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0b8h]
        mov dword ptr [ebp - 14ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 17 6E 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x6e
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A8: jmp 0x5863e744
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 150h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 F5 6D 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6d
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 154h], eax
        push 101h
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 D6 6D 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6d
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 158h], edx
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 4A 10 E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x10
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 15ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 2E 10 E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x10
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 160h], eax
        push 101h
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 7F 6D 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x6d
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 164h], edx
        push 101h
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 60 6D 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x6d
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 168h], ecx
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 D4 0F E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0f
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 16ch], eax
        push 0
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 B8 0F E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x0f
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0cch], 0
        push 54h
        ; Exact mapped bytes E8 5B 27 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x27
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 53: je 0x5863e912
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 170h], ecx
        push 146h
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 45 62 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x62
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 80h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4dh
        push eax
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 16 3A E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863e91c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 178h]
        mov dword ptr [ecx + 74h], edx
        push 54h
        ; Exact mapped bytes E8 C5 26 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x26
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 55: je 0x5863e9aa
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 17ch], ecx
        push 146h
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 AF 61 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x61
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 80h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 151h
        push eax
        mov ecx, dword ptr [ebp - 180h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 7E 39 E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x39
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863e9b4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 184h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 184h]
        mov dword ptr [ecx + 0a0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 188h], ecx
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 A4 75 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x75
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 18ch], eax
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 88 75 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0xe4
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7E 75 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x75
        __asm _emit 0xe4
        __asm _emit 0xff
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 73 E4 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x73
        __asm _emit 0xe4
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
