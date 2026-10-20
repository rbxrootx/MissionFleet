// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58597C90 .. +0x94D bytes.
extern "C" __declspec(naked) void FUN_58597c90_58597C90() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588846c1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 108h
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
        mov dword ptr [ebp - 14h], ecx
        push 24h
        ; Exact mapped bytes E8 80 93 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x93
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [eax + 7f4h], ecx
        push 24h
        ; Exact mapped bytes E8 67 93 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x93
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [edx + 7f8h], eax
        push 24h
        ; Exact mapped bytes E8 4E 93 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x93
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 7fch], edx
        push 24h
        ; Exact mapped bytes E8 35 93 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x93
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [eax + 800h], ecx
        push 24h
        ; Exact mapped bytes E8 1C 93 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x93
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [edx + 804h], eax
        push 24h
        ; Exact mapped bytes E8 03 93 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x93
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ecx + 808h], edx
        push 24h
        ; Exact mapped bytes E8 EA 92 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x92
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [eax + 80ch], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58597d7c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 9
        ; Exact mapped bytes 0F 8D A8 00 00 00: jge 0x58597e2e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes E8 B5 92 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x92
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 804h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ecx + edx*4], eax
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58597dbd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 4
        ; Exact mapped bytes 7D 66: jge 0x58597e29
        __asm _emit 0x7d
        __asm _emit 0x66
        push 8
        ; Exact mapped bytes E8 78 92 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x92
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 804h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [edx + eax*4], ecx
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58597e00
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 21: jge 0x58597e27
        __asm _emit 0x7d
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 804h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes EB D0: jmp 0x58597df7
        __asm _emit 0xeb
        __asm _emit 0xd0
        ; Exact mapped bytes EB 8B: jmp 0x58597db4
        __asm _emit 0xeb
        __asm _emit 0x8b
        ; Exact mapped bytes E9 45 FF FF FF: jmp 0x58597d73
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58597e40
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 9
        ; Exact mapped bytes 0F 8D 84 07 00 00: jge 0x585985ce
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 10h], 0e84h
        cmp dword ptr [edx + 588f4f74h], 0
        ; Exact mapped bytes 0F 84 CC 06 00 00: je 0x5859852a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 9C 91 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x91
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x58597f15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 10h], 0e84h
        mov ecx, dword ptr [eax + 588f4fc4h]
        mov dword ptr [ebp - 8ch], ecx
        imul edx, dword ptr [ebp - 10h], 0e84h
        mov eax, dword ptr [edx + 588f4fc0h]
        mov dword ptr [ebp - 90h], eax
        imul ecx, dword ptr [ebp - 10h], 0e84h
        movzx edx, word ptr [ecx + 588f4fb6h]
        push edx
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 CC EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 9ch], ecx
        push 0e10h
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D0 3D F3 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x3d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58597f1c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0a0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7f4h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ecx + edx*4], eax
        push 54h
        ; Exact mapped bytes E8 BC 90 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x90
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 71: je 0x58597fcc
        __asm _emit 0x74
        __asm _emit 0x71
        imul ecx, dword ptr [ebp - 10h], 0e84h
        mov edx, dword ptr [ecx + 588f4fc4h]
        mov dword ptr [ebp - 0a4h], edx
        imul eax, dword ptr [ebp - 10h], 0e84h
        mov ecx, dword ptr [eax + 588f4fc0h]
        mov dword ptr [ebp - 0a8h], ecx
        imul edx, dword ptr [ebp - 10h], 0e84h
        movzx eax, word ptr [edx + 588f4fb8h]
        push eax
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 CB EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        push 0e10h
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 59 A3 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa3
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58597fd3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0b0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7f8h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [ecx + edx*4], eax
        push 58h
        ; Exact mapped bytes E8 05 90 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 71: je 0x58598083
        __asm _emit 0x74
        __asm _emit 0x71
        imul ecx, dword ptr [ebp - 10h], 0e84h
        mov edx, dword ptr [ecx + 588f4fcch]
        mov dword ptr [ebp - 0b4h], edx
        imul eax, dword ptr [ebp - 10h], 0e84h
        mov ecx, dword ptr [eax + 588f4fc8h]
        mov dword ptr [ebp - 0b8h], ecx
        imul edx, dword ptr [ebp - 10h], 0e84h
        movzx eax, word ptr [edx + 588f4fbah]
        push eax
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E CA EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xca
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        push 0e10h
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 92 E7 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe7
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5859808a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0c0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7fch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ecx + edx*4], eax
        push 54h
        ; Exact mapped bytes E8 4E 8F 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x8f
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 71: je 0x5859813a
        __asm _emit 0x74
        __asm _emit 0x71
        imul ecx, dword ptr [ebp - 10h], 0e84h
        mov edx, dword ptr [ecx + 588f4fcch]
        mov dword ptr [ebp - 0c4h], edx
        imul eax, dword ptr [ebp - 10h], 0e84h
        mov ecx, dword ptr [eax + 588f4fc8h]
        mov dword ptr [ebp - 0c8h], ecx
        imul edx, dword ptr [ebp - 10h], 0e84h
        movzx eax, word ptr [edx + 588f4fbch]
        push eax
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 CA EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xca
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        push 0e10h
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 EB A1 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58598141
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0d0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 800h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ecx + edx*4], eax
        push 54h
        ; Exact mapped bytes E8 97 8E 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x8e
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3A: je 0x585981ba
        __asm _emit 0x74
        __asm _emit 0x3a
        push 0e10h
        imul ecx, dword ptr [ebp - 10h], 0e84h
        mov edx, dword ptr [ecx + 588f4fc4h]
        add edx, 4
        push edx
        imul eax, dword ptr [ebp - 10h], 0e84h
        mov ecx, dword ptr [eax + 588f4fc0h]
        add ecx, 6
        push ecx
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 6B A1 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x585981c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0d4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 808h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [edx + eax*4], ecx
        push 54h
        ; Exact mapped bytes E8 17 8E 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8e
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 3D: je 0x5859823d
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0e10h
        imul edx, dword ptr [ebp - 10h], 0e84h
        mov eax, dword ptr [edx + 588f4fc4h]
        add eax, 4
        push eax
        imul ecx, dword ptr [ebp - 10h], 0e84h
        mov edx, dword ptr [ecx + 588f4fc0h]
        add edx, 0d2h
        push edx
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 E8 A0 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58598244
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0d8h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 80ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d8h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7f4h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0dch], eax
        push 101h
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 22 D3 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd3
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 7f4h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 E0 DC EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xdc
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 7f8h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0e4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 DB D2 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd2
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7f8h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 99 DC EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xdc
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 7fch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0ech], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 94 D2 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd2
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 7fch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0f0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 52 DC EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xdc
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 800h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0f4h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 4D D2 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd2
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 800h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0f8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 0B DC EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58598398
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 0F 8D 83 01 00 00: jge 0x58598525
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585983b4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 0F 8D F5 00 00 00: jge 0x585984b3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 3F 8C 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8c
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 6
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 6F: je 0x58598447
        __asm _emit 0x74
        __asm _emit 0x6f
        imul ecx, dword ptr [ebp - 10h], 0e84h
        mov edx, dword ptr [ecx + 588f4fc4h]
        sub edx, 8
        mov dword ptr [ebp - 0fch], edx
        imul eax, dword ptr [ebp - 10h], 0e84h
        mov ecx, dword ptr [eax + 588f4fc0h]
        mov dword ptr [ebp - 100h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [eax + edx*2]
        push ecx
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A C7 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc7
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        push 0e10h
        mov edx, dword ptr [ebp - 0fch]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 DE 9E EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9e
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5859844e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 108h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 804h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 804h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 10ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 E3 DA EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xda
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F8 FE FF FF: jmp 0x585983ab
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 804h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [edx + eax*4]
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 110h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 C7 D0 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd0
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 804h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax*4]
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 114h], edx
        push 101h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 91 D0 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6A FE FF FF: jmp 0x5859838f
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x585985c9
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7f4h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx*4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7f8h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx*4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7fch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx*4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 800h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx*4], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x58598588
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 4
        ; Exact mapped bytes 7D 3B: jge 0x585985c9
        __asm _emit 0x7d
        __asm _emit 0x3b
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585985a0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 2
        ; Exact mapped bytes 7D 21: jge 0x585985c7
        __asm _emit 0x7d
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 804h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes EB D0: jmp 0x58598597
        __asm _emit 0xeb
        __asm _emit 0xd0
        ; Exact mapped bytes EB B6: jmp 0x5859857f
        __asm _emit 0xeb
        __asm _emit 0xb6
        ; Exact mapped bytes E9 69 F8 FF FF: jmp 0x58597e37
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
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
        ret
    }
}
