// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58738350 .. +0x2FBE bytes.
extern "C" __declspec(naked) void FUN_58738350_58738350() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f1c6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 58ch
        push esi
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
        ; Exact mapped bytes E8 D3 9E D4 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b4884h
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
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BB DB D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xdb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2b4h], 1
        push 54h
        ; Exact mapped bytes E8 1E 8C 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x8c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 35: je 0x5873842b
        __asm _emit 0x74
        __asm _emit 0x35
        push 0dh
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D C7 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc7
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 250h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FA 9E D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58738432
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 254h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 254h]
        mov dword ptr [ecx + 1b8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1b8h]
        mov dword ptr [ebp - 258h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 43 D1 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd1
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 8F 8B 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x8b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 35: je 0x587384ba
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E C6 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc6
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 25ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6B 9E D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x587384c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 260h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 260h]
        mov dword ptr [ecx + 1bch], edx
        push 54h
        ; Exact mapped bytes E8 20 8B 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 35: je 0x58738529
        __asm _emit 0x74
        __asm _emit 0x35
        push 1
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F C6 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc6
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 264h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 FC 9D D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58738530
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 268h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 268h]
        mov dword ptr [edx + 1c4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1c4h]
        mov dword ptr [ebp - 26ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 45 D0 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 91 8A 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x8a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 35: je 0x587385b8
        __asm _emit 0x74
        __asm _emit 0x35
        push 2
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 C5 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc5
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 270h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6D 9D D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x9d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x587385bf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 274h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 274h]
        mov dword ptr [edx + 1c0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1c0h]
        mov dword ptr [ebp - 278h], edx
        push 101h
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 B6 CF 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xcf
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 FF 89 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x89
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 3E: je 0x58738653
        __asm _emit 0x74
        __asm _emit 0x3e
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE C4 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc4
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 27ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 2dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 218h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 22 23 08 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5873865a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 280h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 280h]
        mov dword ptr [ecx + eax + 1c8h], edx
        push 0fch
        ; Exact mapped bytes E8 7B 89 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x89
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 3E: je 0x587386d7
        __asm _emit 0x74
        __asm _emit 0x3e
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A C4 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc4
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 2dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 263h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 284h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 9E 22 08 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x587386de
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 288h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 288h]
        mov dword ptr [eax + edx + 1c8h], ecx
        push 10ch
        ; Exact mapped bytes E8 F7 88 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x88
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 46: je 0x58738763
        __asm _emit 0x74
        __asm _emit 0x46
        push 1e1e1eh
        push 0
        push 0c8c8c8h
        mov edx, dword ptr [ebp + 10h]
        add edx, 5fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 165h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 54h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c3h
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
        ; Exact mapped bytes E8 32 76 D9 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x76
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5873876a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 28ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 28ch]
        mov dword ptr [eax + 1d0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1d0h]
        mov dword ptr [ebp - 290h], eax
        push 2ch
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 4E 39 D7 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x39
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 57 88 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x88
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 66: je 0x58738823
        __asm _emit 0x74
        __asm _emit 0x66
        push 2
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 C3 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc3
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 298h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 29ch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 1b3h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1d1h
        push ecx
        mov edx, dword ptr [ebp - 294h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 298h]
        push ecx
        mov edx, dword ptr [ebp - 29ch]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 C2 34 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x34
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x5873882a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 2a0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2a0h]
        mov dword ptr [ecx + 2ach], edx
        push 0ach
        ; Exact mapped bytes E8 B4 87 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x87
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 65: je 0x587388c5
        __asm _emit 0x74
        __asm _emit 0x65
        push 3
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 C2 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc2
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2a8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2ach], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 1b3h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 226h
        push eax
        mov ecx, dword ptr [ebp - 2a4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2a8h]
        push eax
        mov ecx, dword ptr [ebp - 2ach]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 20 34 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x34
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x587388cc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 2b0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2b0h]
        mov dword ptr [eax + 2b0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2ach]
        mov dword ptr [ebp - 2b4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 A9 CC 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2b0h]
        mov dword ptr [ebp - 2b8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 8A CC 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 D3 86 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x86
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 3E: je 0x5873897f
        __asm _emit 0x74
        __asm _emit 0x3e
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 C1 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 6bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 106h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 2bch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 F6 1F 08 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x1f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58738986
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 2c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2c0h]
        mov dword ptr [ecx + eax + 1f4h], edx
        push 0fch
        ; Exact mapped bytes E8 4F 86 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x86
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 40: je 0x58738a05
        __asm _emit 0x74
        __asm _emit 0x40
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE C0 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 2c4h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 84h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 106h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 2c4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 70 1F 08 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x1f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x58738a0c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 2c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2c8h]
        mov dword ptr [eax + edx + 1f4h], ecx
        push 0fch
        ; Exact mapped bytes E8 C9 85 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 3D: je 0x58738a88
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
        ; Exact mapped bytes E8 78 C0 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 57h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 21ch
        push eax
        push 3
        mov ecx, dword ptr [ebp - 2cch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 ED 1E 08 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x58738a8f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 2d0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2d0h]
        mov dword ptr [edx + ecx + 1f4h], eax
        push 0fch
        ; Exact mapped bytes E8 47 85 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 3E: je 0x58738b0b
        __asm _emit 0x74
        __asm _emit 0x3e
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 BF D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xbf
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 6eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 21ch
        push edx
        push 3
        mov eax, dword ptr [ebp - 2d4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 6A 1E 08 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58738b12
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 2d8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2d8h]
        mov dword ptr [edx + ecx + 1f4h], eax
        push 0ach
        ; Exact mapped bytes E8 C3 84 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 6A: je 0x58738bc1
        __asm _emit 0x74
        __asm _emit 0x6a
        push 0
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C BF D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xbf
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e4h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 69h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 155h
        push ecx
        mov edx, dword ptr [ebp - 2dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2e0h]
        push ecx
        mov edx, dword ptr [ebp - 2e4h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 27 31 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x31
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58738bcb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 2e8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2e8h]
        mov dword ptr [eax + edx + 1d4h], ecx
        push 0ach
        ; Exact mapped bytes E8 07 84 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 69: je 0x58738c7c
        __asm _emit 0x74
        __asm _emit 0x69
        push 1
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 BE D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ech], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 71h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 155h
        push edx
        mov eax, dword ptr [ebp - 2ech]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2f0h]
        push edx
        mov eax, dword ptr [ebp - 2f4h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 6C 30 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x30
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58738c86
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 2f8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2f8h]
        mov dword ptr [ecx + eax + 1e4h], edx
        push 0ach
        ; Exact mapped bytes E8 4C 83 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 6B: je 0x58738d39
        __asm _emit 0x74
        __asm _emit 0x6b
        push 0
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 BD D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xbd
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 300h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 304h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 81h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 155h
        push eax
        mov ecx, dword ptr [ebp - 2fch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 300h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 AF 2F D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58738d43
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 308h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 308h]
        mov dword ptr [ecx + eax + 1d4h], edx
        push 0ach
        ; Exact mapped bytes E8 8F 82 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x82
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 6B: je 0x58738df6
        __asm _emit 0x74
        __asm _emit 0x6b
        push 1
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 BD D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbd
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 30ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 310h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 314h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 89h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 155h
        push eax
        mov ecx, dword ptr [ebp - 30ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 310h]
        push eax
        mov ecx, dword ptr [ebp - 314h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 F2 2E D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x2e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58738e00
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 318h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 318h]
        mov dword ptr [ecx + eax + 1e4h], edx
        push 0ach
        ; Exact mapped bytes E8 D2 81 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 68: je 0x58738eb0
        __asm _emit 0x74
        __asm _emit 0x68
        push 0
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B BC D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbc
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 320h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 324h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 55h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 247h
        push eax
        mov ecx, dword ptr [ebp - 31ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 320h]
        push eax
        mov ecx, dword ptr [ebp - 324h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 38 2E D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58738eba
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 328h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 328h]
        mov dword ptr [ecx + eax + 1d4h], edx
        push 0ach
        ; Exact mapped bytes E8 19 81 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 68: je 0x58738f69
        __asm _emit 0x74
        __asm _emit 0x68
        push 1
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 BB D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 330h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 334h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 5dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 247h
        push eax
        mov ecx, dword ptr [ebp - 32ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 330h]
        push eax
        mov ecx, dword ptr [ebp - 334h]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 7F 2D D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x2d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58738f73
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 338h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [ecx + eax + 1e4h], edx
        push 0ach
        ; Exact mapped bytes E8 60 80 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x80
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 68: je 0x58739022
        __asm _emit 0x74
        __asm _emit 0x68
        push 0
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 BB D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xbb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 340h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 344h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 6eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 247h
        push eax
        mov ecx, dword ptr [ebp - 33ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 340h]
        push eax
        mov ecx, dword ptr [ebp - 344h]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 C6 2C D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873902c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 348h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 348h]
        mov dword ptr [edx + ecx + 1d4h], eax
        push 0ach
        ; Exact mapped bytes E8 A6 7F 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 6A: je 0x587390de
        __asm _emit 0x74
        __asm _emit 0x6a
        push 1
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F BA D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xba
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 350h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 354h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 76h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 247h
        push ecx
        mov edx, dword ptr [ebp - 34ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 350h]
        push ecx
        mov edx, dword ptr [ebp - 354h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 0A 2C D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x2c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587390e8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 358h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 358h]
        mov dword ptr [eax + edx + 1e4h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58739122
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 6C: jge 0x58739194
        __asm _emit 0x7d
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 1f4h]
        mov dword ptr [ebp - 35ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 65 C4 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 1d4h]
        mov dword ptr [ebp - 360h], edx
        push 101h
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 42 C4 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 1e4h]
        mov dword ptr [ebp - 364h], edx
        push 101h
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 1F C4 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 85: jmp 0x58739119
        __asm _emit 0xeb
        __asm _emit 0x85
        push 54h
        ; Exact mapped bytes E8 69 7E 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x7e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 44: je 0x587391f5
        __asm _emit 0x74
        __asm _emit 0x44
        push 21h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 B9 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb9
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 51h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0bdh
        push ecx
        mov edx, dword ptr [ebp - 368h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 33 91 D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x91
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587391ff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 36ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 36ch]
        mov dword ptr [ecx + eax + 204h], edx
        push 54h
        ; Exact mapped bytes E8 D6 7D 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7d
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 44: je 0x58739288
        __asm _emit 0x74
        __asm _emit 0x44
        push 20h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF B8 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 370h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 68h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0bdh
        push ecx
        mov edx, dword ptr [ebp - 370h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 A0 90 D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x90
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58739292
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 374h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 374h]
        mov dword ptr [eax + edx + 204h], ecx
        push 54h
        ; Exact mapped bytes E8 43 7D 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7d
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 46: je 0x5873931d
        __asm _emit 0x74
        __asm _emit 0x46
        push 20h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C B8 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 378h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 80h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0bdh
        push eax
        mov ecx, dword ptr [ebp - 378h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 0B 90 D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x90
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58739327
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 37ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 37ch]
        mov dword ptr [edx + ecx + 204h], eax
        push 54h
        ; Exact mapped bytes E8 AF 7C 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 44: je 0x587393af
        __asm _emit 0x74
        __asm _emit 0x44
        push 22h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 B7 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb7
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 380h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 53h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 201h
        push edx
        mov eax, dword ptr [ebp - 380h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 79 8F D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x8f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587393b9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 384h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 384h]
        mov dword ptr [edx + ecx + 204h], eax
        push 54h
        ; Exact mapped bytes E8 1C 7C 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x7c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 44: je 0x58739442
        __asm _emit 0x74
        __asm _emit 0x44
        push 22h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 B7 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb7
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 6bh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 201h
        push edx
        mov eax, dword ptr [ebp - 388h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 E6 8E D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873944c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 38ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 38ch]
        mov dword ptr [ecx + eax + 204h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58739486
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 7D 23: jge 0x587394af
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 204h]
        mov dword ptr [ebp - 390h], eax
        push 0
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 34 CA D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xca
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5873947d
        __asm _emit 0xeb
        __asm _emit 0xce
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x587394c1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D DC 00 00 00: jge 0x587395a7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 32 7B 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x7b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 2B: je 0x58739513
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 7dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 173h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 15 8E D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873951d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 394h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 394h]
        mov dword ptr [ecx + eax*4 + 218h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 218h]
        mov dword ptr [ebp - 398h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 0C: jne 0x58739565
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0f4h], 0fffffeffh
        ; Exact mapped bytes EB 0A: jmp 0x5873956f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 101h
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 2F C0 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 218h]
        mov dword ptr [ebp - 39ch], eax
        push 0
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 3F C9 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc9
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 11 FF FF FF: jmp 0x587394b8
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 53 7A 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 6C: je 0x58739633
        __asm _emit 0x74
        __asm _emit 0x6c
        push 0fh
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC B4 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb4
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 3a0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3a4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3a8h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 86h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 208h
        push ecx
        mov edx, dword ptr [ebp - 3a0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3a4h]
        push ecx
        mov edx, dword ptr [ebp - 3a8h]
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 B5 26 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x26
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873963d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 3ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3ach]
        mov dword ptr [ecx + 224h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 224h]
        mov dword ptr [ebp - 3b0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 35 BF 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xbf
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 224h]
        mov dword ptr [ebp - 3b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 A9 61 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x61
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 62 79 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x79
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 6C: je 0x58739724
        __asm _emit 0x74
        __asm _emit 0x6c
        push 0eh
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B B4 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb4
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 3b8h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3bch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3c0h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 86h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1d2h
        push ecx
        mov edx, dword ptr [ebp - 3b8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3bch]
        push ecx
        mov edx, dword ptr [ebp - 3c0h]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 C4 25 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x25
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873972e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 3c4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3c4h]
        mov dword ptr [ecx + 220h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 3c8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 44 BE 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xbe
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 220h]
        mov dword ptr [ebp - 3cch], eax
        push 0
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 B8 60 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 71 78 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x78
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 6C: je 0x58739815
        __asm _emit 0x74
        __asm _emit 0x6c
        push 10h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A B3 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb3
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 3d0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3d4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3d8h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 86h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 23eh
        push ecx
        mov edx, dword ptr [ebp - 3d0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3d4h]
        push ecx
        mov edx, dword ptr [ebp - 3d8h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 D3 24 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x24
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873981f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 3dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3dch]
        mov dword ptr [ecx + 238h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 238h]
        mov dword ptr [ebp - 3e0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 53 BD 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 238h]
        mov dword ptr [ebp - 3e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 C7 5F D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x5f
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5873988c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 99 00 00 00: jge 0x5873992f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 67 77 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x77
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 4A: je 0x587398fd
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edx, 67h
        sub edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 B2 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb2
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0bdh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2ch
        push ecx
        mov edx, dword ptr [ebp - 3e8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 2B 8A D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x8a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58739907
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 3ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3ech]
        mov dword ptr [eax + edx*4 + 264h], ecx
        ; Exact mapped bytes E9 54 FF FF FF: jmp 0x58739883
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 0c4h
        push 0ach
        ; Exact mapped bytes E8 C4 76 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 69: je 0x587399bf
        __asm _emit 0x74
        __asm _emit 0x69
        push 14h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D B1 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 3f0h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3f4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3f8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0a6h
        push edx
        mov eax, dword ptr [ebp - 3f0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 3f4h]
        push edx
        mov eax, dword ptr [ebp - 3f8h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 29 23 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x23
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587399c9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 3fch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3fch]
        mov dword ptr [ecx + eax + 26ch], edx
        push 0ach
        ; Exact mapped bytes E8 09 76 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 68: je 0x58739a79
        __asm _emit 0x74
        __asm _emit 0x68
        push 15h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 B0 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 400h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 404h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 408h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0a6h
        push eax
        mov ecx, dword ptr [ebp - 400h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 404h]
        push eax
        mov ecx, dword ptr [ebp - 408h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 6F 22 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x22
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58739a83
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 40ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 40ch]
        mov dword ptr [ecx + eax + 26ch], edx
        mov dword ptr [ebp - 18h], 0d2h
        push 0ach
        ; Exact mapped bytes E8 48 75 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x75
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 68: je 0x58739b3a
        __asm _emit 0x74
        __asm _emit 0x68
        push 16h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 AF D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xaf
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 410h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 414h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 418h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0a6h
        push eax
        mov ecx, dword ptr [ebp - 410h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 414h]
        push eax
        mov ecx, dword ptr [ebp - 418h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 AE 21 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x21
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58739b44
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 41ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 41ch]
        mov dword ptr [ecx + eax + 26ch], edx
        push 0ach
        ; Exact mapped bytes E8 8F 74 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x74
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 68: je 0x58739bf3
        __asm _emit 0x74
        __asm _emit 0x68
        push 17h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 AF D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xaf
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 420h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 424h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 428h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0e6h
        push eax
        mov ecx, dword ptr [ebp - 420h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 424h]
        push eax
        mov ecx, dword ptr [ebp - 428h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 F5 20 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x20
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58739bfd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 42ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 42ch]
        mov dword ptr [edx + ecx + 26ch], eax
        push 0ach
        ; Exact mapped bytes E8 D5 73 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x73
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 6A: je 0x58739caf
        __asm _emit 0x74
        __asm _emit 0x6a
        push 0
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E AE D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xae
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 430h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 434h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 438h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 126h
        push ecx
        mov edx, dword ptr [ebp - 430h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 434h]
        push ecx
        mov edx, dword ptr [ebp - 438h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 39 20 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x20
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58739cb9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 43ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 43ch]
        mov dword ptr [edx + ecx + 26ch], eax
        push 0ach
        ; Exact mapped bytes E8 19 73 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x73
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 6A: je 0x58739d6b
        __asm _emit 0x74
        __asm _emit 0x6a
        push 0
        ; Exact mapped bytes 8B 0D B0 07 96 58: mov ecx, dword ptr [0x589607b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 AD D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xad
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 440h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 444h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 448h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 166h
        push ecx
        mov edx, dword ptr [ebp - 440h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 444h]
        push ecx
        mov edx, dword ptr [ebp - 448h]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 7D 1F D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58739d75
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 44ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 44ch]
        mov dword ptr [eax + edx + 26ch], ecx
        push 0ach
        ; Exact mapped bytes E8 5D 72 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x72
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 69: je 0x58739e26
        __asm _emit 0x74
        __asm _emit 0x69
        push 0
        ; Exact mapped bytes 8B 0D B4 07 96 58: mov ecx, dword ptr [0x589607b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 AD D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xad
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 450h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 454h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 458h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1a6h
        push edx
        mov eax, dword ptr [ebp - 450h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 454h]
        push edx
        mov eax, dword ptr [ebp - 458h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 C2 1E D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x1e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58739e30
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 45ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 45ch]
        mov dword ptr [ecx + eax + 26ch], edx
        push 0ach
        ; Exact mapped bytes E8 A2 71 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x71
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 68: je 0x58739ee0
        __asm _emit 0x74
        __asm _emit 0x68
        push 1
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B AC D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xac
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 460h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 464h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 468h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1e6h
        push eax
        mov ecx, dword ptr [ebp - 460h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 464h]
        push eax
        mov ecx, dword ptr [ebp - 468h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 08 1E D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58739eea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 46ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 46ch]
        mov dword ptr [edx + ecx + 26ch], eax
        push 0ach
        ; Exact mapped bytes E8 E8 70 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 6A: je 0x58739f9c
        __asm _emit 0x74
        __asm _emit 0x6a
        push 18h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 AB D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xab
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 470h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 474h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 478h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 226h
        push ecx
        mov edx, dword ptr [ebp - 470h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 474h]
        push ecx
        mov edx, dword ptr [ebp - 478h]
        push edx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 4C 1D D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58739fa6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov eax, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 47ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 47ch]
        mov dword ptr [edx + ecx + 26ch], eax
        push 0ach
        ; Exact mapped bytes E8 2C 70 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x70
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 3A: je 0x5873a028
        __asm _emit 0x74
        __asm _emit 0x3a
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0a6h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
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
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 C0 1C D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x1c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a032
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov eax, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 480h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 480h]
        mov dword ptr [eax + edx + 26ch], ecx
        mov dword ptr [ebp - 18h], 0beh
        push 0ach
        ; Exact mapped bytes E8 99 6F 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x6f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 69: je 0x5873a0ea
        __asm _emit 0x74
        __asm _emit 0x69
        push 0
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 AA D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xaa
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 484h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 488h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 48ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0a6h
        push edx
        mov eax, dword ptr [ebp - 484h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 488h]
        push edx
        mov eax, dword ptr [ebp - 48ch]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 FE 1B D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x1b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a0f4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov ecx, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 490h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 490h]
        mov dword ptr [ecx + eax + 26ch], edx
        push 0ach
        ; Exact mapped bytes E8 DE 6E 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 170h], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 170h], 0
        ; Exact mapped bytes 74 68: je 0x5873a1a4
        __asm _emit 0x74
        __asm _emit 0x68
        push 0
        ; Exact mapped bytes 8B 0D C0 07 96 58: mov ecx, dword ptr [0x589607c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 A9 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa9
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 494h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 498h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 49ch], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0e6h
        push eax
        mov ecx, dword ptr [ebp - 494h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 498h]
        push eax
        mov ecx, dword ptr [ebp - 49ch]
        push ecx
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 44 1B D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a1ae
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov edx, dword ptr [ebp - 174h]
        mov dword ptr [ebp - 4a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4a0h]
        mov dword ptr [edx + ecx + 26ch], eax
        push 0ach
        ; Exact mapped bytes E8 24 6E 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 74 6A: je 0x5873a260
        __asm _emit 0x74
        __asm _emit 0x6a
        push 0
        ; Exact mapped bytes 8B 0D C4 07 96 58: mov ecx, dword ptr [0x589607c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD A8 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa8
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4a4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4a8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4ach], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 126h
        push ecx
        mov edx, dword ptr [ebp - 4a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4a8h]
        push ecx
        mov edx, dword ptr [ebp - 4ach]
        push edx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 88 1A D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a26a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov eax, dword ptr [ebp - 17ch]
        mov dword ptr [ebp - 4b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4b0h]
        mov dword ptr [eax + edx + 26ch], ecx
        push 0ach
        ; Exact mapped bytes E8 68 6D 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x6d
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 74 69: je 0x5873a31b
        __asm _emit 0x74
        __asm _emit 0x69
        push 0
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 A8 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xa8
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4b4h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4b8h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4bch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 166h
        push edx
        mov eax, dword ptr [ebp - 4b4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4b8h]
        push edx
        mov eax, dword ptr [ebp - 4bch]
        push eax
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 CD 19 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x19
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a325
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 184h], 0
        mov ecx, dword ptr [ebp - 184h]
        mov dword ptr [ebp - 4c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4c0h]
        mov dword ptr [ecx + eax + 26ch], edx
        push 0ach
        ; Exact mapped bytes E8 AD 6C 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x6c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 188h], eax
        mov byte ptr [ebp - 4], 2eh
        cmp dword ptr [ebp - 188h], 0
        ; Exact mapped bytes 74 68: je 0x5873a3d5
        __asm _emit 0x74
        __asm _emit 0x68
        push 0
        ; Exact mapped bytes 8B 0D D0 07 96 58: mov ecx, dword ptr [0x589607d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 A7 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa7
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4c4h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4c8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4cch], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1a6h
        push eax
        mov ecx, dword ptr [ebp - 4c4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 4c8h]
        push eax
        mov ecx, dword ptr [ebp - 4cch]
        push ecx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 13 19 D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x19
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a3df
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 18ch], 0
        mov edx, dword ptr [ebp - 18ch]
        mov dword ptr [ebp - 4d0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0eh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4d0h]
        mov dword ptr [edx + ecx + 26ch], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5873a419
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0fh
        ; Exact mapped bytes 7D 46: jge 0x5873a465
        __asm _emit 0x7d
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 26ch]
        mov dword ptr [ebp - 4d4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 4d4h]
        ; Exact mapped bytes E8 6E B1 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb1
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 26ch]
        mov dword ptr [ebp - 4d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4d8h]
        ; Exact mapped bytes E8 2E BB D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xbb
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AB: jmp 0x5873a410
        __asm _emit 0xeb
        __asm _emit 0xab
        push 70h
        ; Exact mapped bytes E8 98 6B 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 190h], eax
        mov byte ptr [ebp - 4], 2fh
        cmp dword ptr [ebp - 190h], 0
        ; Exact mapped bytes 74 30: je 0x5873a4b2
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 10h]
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 68h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 56 5E 00 00: call 0x58740300
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a4bc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 194h], 0
        mov ecx, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 4dch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4dch]
        mov dword ptr [eax + edx + 17ch], ecx
        push 70h
        ; Exact mapped bytes E8 1A 6B 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 198h], eax
        mov byte ptr [ebp - 4], 30h
        cmp dword ptr [ebp - 198h], 0
        ; Exact mapped bytes 74 30: je 0x5873a530
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 10h]
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 68h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 A8 65 00 00: call 0x58740ad0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a53a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov ecx, dword ptr [ebp - 19ch]
        mov dword ptr [ebp - 4e0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4e0h]
        mov dword ptr [ecx + eax + 17ch], edx
        push 0a4h
        ; Exact mapped bytes E8 98 6A 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a0h], eax
        mov byte ptr [ebp - 4], 31h
        cmp dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes 74 2F: je 0x5873a5b1
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 10h]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 68h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 F7 7B 00 00: call 0x587421a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a5bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov edx, dword ptr [ebp - 1a4h]
        mov dword ptr [ebp - 4e4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4e4h]
        mov dword ptr [edx + ecx + 17ch], eax
        push 74h
        ; Exact mapped bytes E8 1A 6A 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a8h], eax
        mov byte ptr [ebp - 4], 32h
        cmp dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes 74 30: je 0x5873a630
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 68h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 C8 9F 00 00: call 0x587445f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a63a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov eax, dword ptr [ebp - 1ach]
        mov dword ptr [ebp - 4e8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4e8h]
        mov dword ptr [edx + ecx + 17ch], eax
        push 70h
        ; Exact mapped bytes E8 9B 69 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x69
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b0h], eax
        mov byte ptr [ebp - 4], 33h
        cmp dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes 74 30: je 0x5873a6af
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 68h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 E9 99 00 00: call 0x58744090
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a6b9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov eax, dword ptr [ebp - 1b4h]
        mov dword ptr [ebp - 4ech], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4ech]
        mov dword ptr [eax + edx + 17ch], ecx
        push 70h
        ; Exact mapped bytes E8 1C 69 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x69
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b8h], eax
        mov byte ptr [ebp - 4], 34h
        cmp dword ptr [ebp - 1b8h], 0
        ; Exact mapped bytes 74 30: je 0x5873a72e
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 10h]
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 68h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 BA 41 00 00: call 0x5873e8e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a738
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [ebp - 4f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4f0h]
        mov dword ptr [ecx + eax + 17ch], edx
        push 70h
        ; Exact mapped bytes E8 9D 68 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x68
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov byte ptr [ebp - 4], 35h
        cmp dword ptr [ebp - 1c0h], 0
        ; Exact mapped bytes 74 2F: je 0x5873a7ac
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 10h]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 68h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 1C D9 00 00: call 0x587480c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a7b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov edx, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 4f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4f4h]
        mov dword ptr [ecx + eax + 17ch], edx
        push 88h
        ; Exact mapped bytes E8 1C 68 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x68
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov byte ptr [ebp - 4], 36h
        cmp dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes 74 2F: je 0x5873a82d
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 10h]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 68h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 7B C0 00 00: call 0x587468a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a837
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov edx, dword ptr [ebp - 1cch]
        mov dword ptr [ebp - 4f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4f8h]
        mov dword ptr [ecx + eax + 17ch], edx
        push 8ch
        ; Exact mapped bytes E8 9B 67 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x67
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d0h], eax
        mov byte ptr [ebp - 4], 37h
        cmp dword ptr [ebp - 1d0h], 0
        ; Exact mapped bytes 74 2F: je 0x5873a8ae
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 10h]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 68h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 5A 4A 00 00: call 0x5873f300
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a8b8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d4h], 0
        mov edx, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 4fch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4fch]
        mov dword ptr [edx + ecx + 17ch], eax
        push 70h
        ; Exact mapped bytes E8 1D 67 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x67
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov byte ptr [ebp - 4], 38h
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 74 30: je 0x5873a92d
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 68h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 6B 74 00 00: call 0x58741d90
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a937
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1dch], 0
        mov eax, dword ptr [ebp - 1dch]
        mov dword ptr [ebp - 500h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 500h]
        mov dword ptr [eax + edx + 17ch], ecx
        push 7ch
        ; Exact mapped bytes E8 9E 66 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e0h], eax
        mov byte ptr [ebp - 4], 39h
        cmp dword ptr [ebp - 1e0h], 0
        ; Exact mapped bytes 74 30: je 0x5873a9ac
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 10h]
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 68h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 3C 66 00 00: call 0x58740fe0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873a9b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e4h], 0
        mov ecx, dword ptr [ebp - 1e4h]
        mov dword ptr [ebp - 504h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 504h]
        mov dword ptr [ecx + eax + 17ch], edx
        push 70h
        ; Exact mapped bytes E8 1F 66 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e8h], eax
        mov byte ptr [ebp - 4], 3ah
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 74 2F: je 0x5873aa2a
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 10h]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 68h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 9E DA 00 00: call 0x587484c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873aa34
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ech], 0
        mov edx, dword ptr [ebp - 1ech]
        mov dword ptr [ebp - 508h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 508h]
        mov dword ptr [edx + ecx + 17ch], eax
        push 70h
        ; Exact mapped bytes E8 A1 65 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x65
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f0h], eax
        mov byte ptr [ebp - 4], 3bh
        cmp dword ptr [ebp - 1f0h], 0
        ; Exact mapped bytes 74 30: je 0x5873aaa9
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 68h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 AF D0 00 00: call 0x58747b50
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873aab3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f4h], 0
        mov eax, dword ptr [ebp - 1f4h]
        mov dword ptr [ebp - 50ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 50ch]
        mov dword ptr [eax + edx + 17ch], ecx
        push 9ch
        ; Exact mapped bytes E8 1F 65 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x65
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f8h], eax
        mov byte ptr [ebp - 4], 3ch
        cmp dword ptr [ebp - 1f8h], 0
        ; Exact mapped bytes 74 30: je 0x5873ab2b
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 10h]
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 68h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 FD AD 00 00: call 0x58745920
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873ab35
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1fch], 0
        mov ecx, dword ptr [ebp - 1fch]
        mov dword ptr [ebp - 510h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 510h]
        mov dword ptr [ecx + eax + 17ch], edx
        push 70h
        ; Exact mapped bytes E8 A0 64 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x64
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 200h], eax
        mov byte ptr [ebp - 4], 3dh
        cmp dword ptr [ebp - 200h], 0
        ; Exact mapped bytes 74 2F: je 0x5873aba9
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 10h]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 68h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 5F 39 00 00: call 0x5873e500
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873abb3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 204h], 0
        mov edx, dword ptr [ebp - 204h]
        mov dword ptr [ebp - 514h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0eh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 514h]
        mov dword ptr [edx + ecx + 17ch], eax
        push 70h
        ; Exact mapped bytes E8 22 64 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x64
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 208h], eax
        mov byte ptr [ebp - 4], 3eh
        cmp dword ptr [ebp - 208h], 0
        ; Exact mapped bytes 74 50: je 0x5873ac48
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 120h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 9ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0bfh
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
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 70 77 D4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x77
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873ac52
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20ch], 0
        mov ecx, dword ptr [ebp - 20ch]
        mov dword ptr [ebp - 518h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 518h]
        mov dword ptr [edx + 23ch], eax
        push 0ach
        ; Exact mapped bytes E8 89 63 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x63
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 210h], eax
        mov byte ptr [ebp - 4], 3fh
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 74 6C: je 0x5873acfd
        __asm _emit 0x74
        __asm _emit 0x6c
        push 13h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 9E D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 51ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 520h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 524h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 97h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 125h
        push ecx
        mov edx, dword ptr [ebp - 51ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 520h]
        push ecx
        mov edx, dword ptr [ebp - 524h]
        push edx
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 EB 0F D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x0f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873ad07
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 214h], 0
        mov eax, dword ptr [ebp - 214h]
        mov dword ptr [ebp - 528h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 528h]
        mov dword ptr [ecx + 240h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 240h]
        mov dword ptr [ebp - 52ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 52ch]
        ; Exact mapped bytes E8 FE 4A D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4a
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 248h], eax
        push 0ach
        ; Exact mapped bytes E8 AC 62 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 218h], eax
        mov byte ptr [ebp - 4], 40h
        cmp dword ptr [ebp - 218h], 0
        ; Exact mapped bytes 74 6C: je 0x5873adda
        __asm _emit 0x74
        __asm _emit 0x6c
        push 0
        ; Exact mapped bytes 8B 0D 98 07 96 58: mov ecx, dword ptr [0x58960798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 9D D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x9d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 530h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 534h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 538h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a2h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 125h
        push ecx
        mov edx, dword ptr [ebp - 530h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 534h]
        push ecx
        mov edx, dword ptr [ebp - 538h]
        push edx
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 0E 0F D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873ade4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 21ch], 0
        mov eax, dword ptr [ebp - 21ch]
        mov dword ptr [ebp - 53ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 53ch]
        mov dword ptr [ecx + 244h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 244h]
        mov dword ptr [ebp - 540h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 540h]
        ; Exact mapped bytes E8 8E A7 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 DA 61 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x61
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 220h], eax
        mov byte ptr [ebp - 4], 41h
        cmp dword ptr [ebp - 220h], 0
        ; Exact mapped bytes 74 4F: je 0x5873ae8f
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0afh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 191h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a0h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 133h
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
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 29 75 D4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x75
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873ae99
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 224h], 0
        mov edx, dword ptr [ebp - 224h]
        mov dword ptr [ebp - 544h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 544h]
        mov dword ptr [eax + 24ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 54ch], eax
        push 588b4834h
        ; Exact mapped bytes E8 1F 71 DE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x71
        __asm _emit 0xde
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 548h], eax
        mov ecx, dword ptr [ebp - 548h]
        push ecx
        mov ecx, dword ptr [ebp - 54ch]
        ; Exact mapped bytes E8 B4 B1 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb1
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        push 5ch
        ; Exact mapped bytes E8 10 61 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x61
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 228h], eax
        mov byte ptr [ebp - 4], 42h
        cmp dword ptr [ebp - 228h], 0
        ; Exact mapped bytes 74 21: je 0x5873af2b
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 4D 8A D8 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873af35
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 22ch], 0
        mov eax, dword ptr [ebp - 22ch]
        mov dword ptr [ebp - 550h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 550h]
        mov dword ptr [ecx + 250h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 250h]
        mov dword ptr [ebp - 554h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 554h]
        ; Exact mapped bytes E8 FE 8A D8 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 250h]
        mov dword ptr [ebp - 558h], ecx
        push 0
        mov ecx, dword ptr [ebp - 558h]
        ; Exact mapped bytes E8 02 B0 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb0
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 6E 60 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x60
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 230h], eax
        mov byte ptr [ebp - 4], 43h
        cmp dword ptr [ebp - 230h], 0
        ; Exact mapped bytes 74 5C: je 0x5873b008
        __asm _emit 0x74
        __asm _emit 0x5c
        push 0c8h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 9B D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x9b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 55ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 560h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a9h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0beh
        push edx
        mov eax, dword ptr [ebp - 55ch]
        push eax
        mov ecx, dword ptr [ebp - 560h]
        push ecx
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 20 73 D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x73
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873b012
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 234h], 0
        mov edx, dword ptr [ebp - 234h]
        mov dword ptr [ebp - 564h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 564h]
        mov dword ptr [eax + 254h], ecx
        push 94h
        ; Exact mapped bytes E8 C9 5F 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 238h], eax
        mov byte ptr [ebp - 4], 44h
        cmp dword ptr [ebp - 238h], 0
        ; Exact mapped bytes 74 53: je 0x5873b0a4
        __asm _emit 0x74
        __asm _emit 0x53
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 14ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 11eh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0adh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c0h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 250h]
        push edx
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 34 52 08 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 23ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873b0ae
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 23ch], 0
        mov eax, dword ptr [ebp - 23ch]
        mov dword ptr [ebp - 568h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 568h]
        mov dword ptr [ecx + 258h], edx
        push 0ach
        ; Exact mapped bytes E8 2D 5F 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x5f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 240h], eax
        mov byte ptr [ebp - 4], 45h
        cmp dword ptr [ebp - 240h], 0
        ; Exact mapped bytes 74 7E: je 0x5873b16b
        __asm _emit 0x74
        __asm _emit 0x7e
        push 0
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 99 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x99
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 56ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 250h]
        mov dword ptr [ebp - 570h], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 574h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 578h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0aah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 118h
        push edx
        mov eax, dword ptr [ebp - 56ch]
        push eax
        mov ecx, dword ptr [ebp - 570h]
        push ecx
        mov edx, dword ptr [ebp - 574h]
        push edx
        mov eax, dword ptr [ebp - 578h]
        push eax
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 7D 0B D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x0b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873b175
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 244h], 0
        mov ecx, dword ptr [ebp - 244h]
        mov dword ptr [ebp - 57ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 57ch]
        mov dword ptr [edx + 25ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 25ch]
        mov dword ptr [ebp - 580h], edx
        push 101h
        mov ecx, dword ptr [ebp - 580h]
        ; Exact mapped bytes E8 FD A3 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 46 5E 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x5e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 248h], eax
        mov byte ptr [ebp - 4], 46h
        cmp dword ptr [ebp - 248h], 0
        ; Exact mapped bytes 74 7E: je 0x5873b252
        __asm _emit 0x74
        __asm _emit 0x7e
        push 1
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 98 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x98
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 584h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 250h]
        mov dword ptr [ebp - 588h], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 58ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 590h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 146h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 118h
        push edx
        mov eax, dword ptr [ebp - 584h]
        push eax
        mov ecx, dword ptr [ebp - 588h]
        push ecx
        mov edx, dword ptr [ebp - 58ch]
        push edx
        mov eax, dword ptr [ebp - 590h]
        push eax
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 96 0A D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x0a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873b25c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 24ch], 0
        mov ecx, dword ptr [ebp - 24ch]
        mov dword ptr [ebp - 594h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 594h]
        mov dword ptr [edx + 260h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 260h]
        mov dword ptr [ebp - 598h], edx
        push 101h
        mov ecx, dword ptr [ebp - 598h]
        ; Exact mapped bytes E8 16 A3 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 220h]
        ; Exact mapped bytes E8 58 97 D4 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x97
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, 8
        imul eax, eax, 0
        mov esi, dword ptr [ebp - 10h]
        mov dword ptr [esi + eax + 228h], ecx
        mov dword ptr [esi + eax + 22ch], edx
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 224h]
        ; Exact mapped bytes E8 2C 97 D4 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x97
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, 8
        shl ecx, 0
        mov esi, dword ptr [ebp - 10h]
        mov dword ptr [esi + ecx + 228h], edx
        mov dword ptr [esi + ecx + 22ch], eax
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
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
