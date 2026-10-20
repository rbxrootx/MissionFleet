// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58722A50 .. +0x6D1 bytes.
extern "C" __declspec(naked) void FUN_58722a50_58722A50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888e5a5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0f4h
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
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D4 F7 D5 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b40cch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 13b4h], 0ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 60h], eax
        push 54h
        ; Exact mapped bytes E8 3B E5 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe5
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 38: je 0x58722b11
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 64h], edx
        push 31h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 34 20 D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 14 F8 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58722b18
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 6ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [eax + 70h], ecx
        push 54h
        ; Exact mapped bytes E8 D2 E4 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe4
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 38: je 0x58722b7a
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 70h], eax
        push 30h
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 CB 1F D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x1f
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        movzx ecx, word ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AB F7 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58722b81
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 6ch], edx
        push 54h
        ; Exact mapped bytes E8 69 E4 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe4
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 38: je 0x58722be3
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 7ch], ecx
        push 2fh
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 62 1F D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1f
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        movzx edx, word ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 42 F7 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58722bea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 84h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [edx + 68h], eax
        push 54h
        ; Exact mapped bytes E8 FA E3 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe3
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 44: je 0x58722c5e
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 88h], edx
        push 2eh
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 ED 1E D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x1e
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C7 F6 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58722c65
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 90h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 94h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 16 29 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 98h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 FA 28 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 9ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 DE 28 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 27 E3 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe3
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 3D: je 0x58722d2a
        __asm _emit 0x74
        __asm _emit 0x3d
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 1D D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp + 14h]
        add edx, 0ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 13dh
        push eax
        push 8
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 4B 7C 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58722d31
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ecx + 88h], edx
        push 0ach
        ; Exact mapped bytes E8 AD E2 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe2
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 72: je 0x58722dd9
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0a8h], ecx
        push 0ah
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 50 1D D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 9fh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 111h
        push edx
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0b0h]
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 0C 8F DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58722de0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [edx + 8ch], eax
        push 0ach
        ; Exact mapped bytes E8 FE E1 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe1
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 71: je 0x58722e87
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0bch], edx
        push 0bh
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 A1 1C D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xd6
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
        mov edx, dword ptr [ebp + 14h]
        add edx, 9fh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 141h
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 5E 8E DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x8e
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58722e8e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [eax + 90h], ecx
        push 0ach
        ; Exact mapped bytes E8 50 E1 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe1
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 63: je 0x58722f27
        __asm _emit 0x74
        __asm _emit 0x63
        push 6
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 1B D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1b
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 107h
        push edx
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BE 8D DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58722f2e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0dch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [edx + 94h], eax
        push 0ach
        ; Exact mapped bytes E8 B0 E0 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe0
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 64: je 0x58722fc8
        __asm _emit 0x74
        __asm _emit 0x64
        push 7
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 1B D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x1b
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e8h], edx
        push 40h
        mov eax, dword ptr [ebp + 14h]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 141h
        push ecx
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 1D 8D DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58722fcf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ech]
        mov dword ptr [ecx + 98h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 0f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 89 2F D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2f
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 0f4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 6D 2F D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2f
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        push 33ch
        ; Exact mapped bytes E8 D6 DF 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xdf
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 1E: je 0x5872305c
        __asm _emit 0x74
        __asm _emit 0x1e
        push 40h
        push 0
        push 0
        push 1eh
        push 338h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 99 C1 F7 FF: call 0x5869f1f0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58723063
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [eax + 13a8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 13a8h]
        mov dword ptr [ebp - 0fch], eax
        push 44ch
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 E2 2D D6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 13a8h]
        mov dword ptr [ebp - 100h], edx
        push 2
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 46 25 FA FF: call 0x586c5600
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x25
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC 2E D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2e
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 0a0h], 0
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
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 9ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 13b0h], 1
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
