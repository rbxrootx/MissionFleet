// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853BC30 .. +0x1DEF bytes.
extern "C" __declspec(naked) void FUN_5853bc30_5853BC30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58882f98h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 350h
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
        ; Exact mapped bytes E8 F4 65 F4 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x65
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a7e84h
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
        mov ecx, 3e8h
        ; Exact mapped bytes 66 89 4D E4: mov word ptr [ebp - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        mov edx, 320h
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        push 54h
        ; Exact mapped bytes E8 41 53 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x53
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x5853bcf3
        __asm _emit 0x74
        __asm _emit 0x20
        push 1f4h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 32 66 F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x66
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853bcfa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 130h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 81 98 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 134h], eax
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 F8 A0 F4 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa0
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 B4 52 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x52
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 3B: je 0x5853bd9b
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0c4h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 8D F4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        push 1feh
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8A 65 F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x65
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853bda2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 13ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 140h], eax
        push 0e6h
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 69 97 27 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x97
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 144h], edx
        push 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 B0 9F F4 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x9f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 148h], ecx
        push 0
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 37 A0 F4 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa0
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 F3 51 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x51
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x5853be41
        __asm _emit 0x74
        __asm _emit 0x20
        push 208h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E4 64 F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x64
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853be48
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 14ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 150h], eax
        push 101h
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 33 97 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x97
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 154h], edx
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 AA 9F F4 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9f
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 66 51 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x51
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 3B: je 0x5853bee9
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0c5h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 8C F4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        push 208h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 158h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 3C 64 F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x64
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853bef0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 15ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 15ch]
        mov dword ptr [edx + 70h], eax
        push 84h
        ; Exact mapped bytes E8 F1 50 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x50
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 22: je 0x5853bf45
        __asm _emit 0x74
        __asm _emit 0x22
        push 212h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 20h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 10 B9 FA FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853bf4c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 160h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 160h]
        mov dword ptr [ecx + eax + 80h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 164h], eax
        push 101h
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 17 96 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x96
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        push 84h
        ; Exact mapped bytes E8 60 50 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x50
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 22: je 0x5853bfd6
        __asm _emit 0x74
        __asm _emit 0x22
        push 211h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 20h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 7F B8 FA FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb8
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853bfdd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 168h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 168h]
        mov dword ptr [eax + edx + 80h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 16ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 86 95 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x95
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 170h], ecx
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 F1 9D F4 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 174h], ecx
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 2C 9D F4 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x9d
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 88 4F 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4f
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 41: je 0x5853c0cd
        __asm _emit 0x74
        __asm _emit 0x41
        push 11bh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 8A F4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0ddh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 26h
        push eax
        mov ecx, dword ptr [ebp - 178h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 58 62 F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853c0d4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 17ch]
        mov dword ptr [ecx + 1c4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1c4h]
        mov dword ptr [ebp - 180h], ecx
        push 0c8h
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 31 94 27 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x94
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1c4h]
        mov dword ptr [ebp - 184h], eax
        push 0
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 75 9C F4 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x9c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1c4h]
        mov dword ptr [ebp - 188h], edx
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 F9 9C F4 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x9c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1c4h]
        mov dword ptr [ebp - 18ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 2D 9E F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1c4h]
        mov dword ptr [ebp - 190h], eax
        push 226h
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 FE 9C F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9c
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 7A 4E 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x4e
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 41: je 0x5853c1db
        __asm _emit 0x74
        __asm _emit 0x41
        push 11ah
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 89 F4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ddh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 26h
        push edx
        mov eax, dword ptr [ebp - 194h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 4A 61 F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853c1e2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 198h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 198h]
        mov dword ptr [eax + 1c8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1c8h]
        mov dword ptr [ebp - 19ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 93 93 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x93
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1c8h]
        mov dword ptr [ebp - 1a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 67 9B F4 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1c8h]
        mov dword ptr [ebp - 1a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 EB 9B F4 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x9b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1c8h]
        mov dword ptr [ebp - 1a8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 1F 9D F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x9d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1c8h]
        mov dword ptr [ebp - 1ach], edx
        push 60fh
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 F0 9B F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9b
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 69 4D 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x4d
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 63: je 0x5853c30e
        __asm _emit 0x74
        __asm _emit 0x63
        push 4
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 88 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x88
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b8h], ecx
        movzx edx, word ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 226h
        push ecx
        mov edx, dword ptr [ebp - 1b0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1b4h]
        push ecx
        mov edx, dword ptr [ebp - 1b8h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D7 F9 F8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853c315
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 1bch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1bch]
        mov dword ptr [ecx + 90h], edx
        push 0ach
        ; Exact mapped bytes E8 C9 4C 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x4c
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 68: je 0x5853c3b3
        __asm _emit 0x74
        __asm _emit 0x68
        push 26h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 87 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c8h], ecx
        movzx edx, word ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 159h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 186h
        push ecx
        mov edx, dword ptr [ebp - 1c0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        push ecx
        mov edx, dword ptr [ebp - 1c8h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 32 F9 F8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853c3ba
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 1cch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1cch]
        mov dword ptr [ecx + 88h], edx
        push 0ach
        ; Exact mapped bytes E8 24 4C 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 68: je 0x5853c458
        __asm _emit 0x74
        __asm _emit 0x68
        push 25h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 86 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d8h], ecx
        movzx edx, word ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 159h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e0h
        push ecx
        mov edx, dword ptr [ebp - 1d0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1d4h]
        push ecx
        mov edx, dword ptr [ebp - 1d8h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 8D F8 F8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853c45f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 1dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1dch]
        mov dword ptr [ecx + 8ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 1e0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 16 91 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x91
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 1e4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 F7 90 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x90
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 40 4B 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x4b
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 67: je 0x5853c53b
        __asm _emit 0x74
        __asm _emit 0x67
        push 1eh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 85 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ech], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f0h], edx
        movzx eax, word ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ddh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp - 1e8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1ech]
        push edx
        mov eax, dword ptr [ebp - 1f0h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 AA F7 F8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853c542
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 1f4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1f4h]
        mov dword ptr [edx + 94h], eax
        push 0ach
        ; Exact mapped bytes E8 9C 4A 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x4a
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 6D: je 0x5853c5eb
        __asm _emit 0x74
        __asm _emit 0x6d
        push 1fh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 85 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1fch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 200h], edx
        movzx eax, word ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 13bh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp - 1f8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1fch]
        push edx
        mov eax, dword ptr [ebp - 200h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 FD F6 F8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853c5f5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 204h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 204h]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 208h], edx
        push 101h
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 7D 8F 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8f
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 20ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 5E 8F 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x8f
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 210h], eax
        push 0
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 D2 97 F4 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x97
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 214h], edx
        push 0
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 B6 97 F4 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x97
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 6F 49 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x49
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 6B: je 0x5853c716
        __asm _emit 0x74
        __asm _emit 0x6b
        push 20h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 84 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 220h], ecx
        movzx edx, word ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0e9h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 15h
        push ecx
        mov edx, dword ptr [ebp - 218h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 21ch]
        push ecx
        mov edx, dword ptr [ebp - 220h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 D2 F5 F8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853c720
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 224h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 224h]
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 228h], ecx
        push 0
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 FB 2D F6 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2d
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 22ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 3F 8E 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8e
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 230h], edx
        push 0
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 B6 96 F4 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 9ch], 0
        push 78h
        ; Exact mapped bytes E8 59 48 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x48
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 1F: je 0x5853c7e0
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 18 08 01 00: call 0x5854cff0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853c7ea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 234h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 234h]
        mov dword ptr [eax + 2e8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 300h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2b8h], 0ffffh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2b4h], 0ffffh
        mov edx, 0ffffh
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 9C 02 00 00: mov word ptr [eax + 0x29c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2c0h], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2bch], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2ach], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2a8h], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2a4h], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2a0h], 0ffffffffh
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A B2 02 00 00: mov word ptr [edx + 0x2b2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 B0 02 00 00: mov word ptr [ecx + 0x2b0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ffffh
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 C6 02 00 00: mov word ptr [eax + 0x2c6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ffffh
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A C4 02 00 00: mov word ptr [edx + 0x2c4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 270h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2f4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2f8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2f0h], 0
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x5853c909
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 3
        ; Exact mapped bytes 0F 8D D0 00 00 00: jge 0x5853c9e3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 EA 46 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x46
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 5D: je 0x5853c98d
        __asm _emit 0x74
        __asm _emit 0x5d
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        imul edx, dword ptr [ebp - 20h], 0ch
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 0a9h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 258h
        push edx
        imul eax, dword ptr [ebp - 20h], 0ch
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 9dh]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 15eh
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
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 2B 5A F4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853c997
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 238h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 238h]
        mov dword ptr [edx + ecx*4 + 1ach], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 1ach]
        mov dword ptr [ebp - 23ch], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 A3 94 F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x5853c900
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 94h
        ; Exact mapped bytes E8 17 46 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x46
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 4A: je 0x5853ca4d
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 148h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0ddh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0e1h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 28h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 8B 38 28 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853ca57
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 240h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 240h]
        mov dword ptr [eax + 0b0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 244h], eax
        push 0dh
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 5E 29 F6 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x29
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 24ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 01 80 FF FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        shl eax, 3
        mov dword ptr [ebp - 248h], eax
        mov ecx, dword ptr [ebp - 248h]
        push ecx
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 86 A3 F7 FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa3
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 250h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 97 93 F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x93
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 254h], eax
        push 0
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 DB 92 F4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5853cb18
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 7
        ; Exact mapped bytes 0F 8D 43 01 00 00: jge 0x5853cc65
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 D8 44 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 4D: je 0x5853cb8f
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 148h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 25dh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0e1h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0e2h
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 49 37 28 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x37
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853cb99
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 258h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 258h]
        mov dword ptr [ecx + eax*4 + 0b4h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 25ch], edx
        push 0dh
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 14 28 F6 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x28
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 264h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4 + 0b4h]
        ; Exact mapped bytes E8 AF 7E FF FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        shl eax, 3
        mov dword ptr [ebp - 260h], eax
        mov edx, dword ptr [ebp - 260h]
        push edx
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 34 A2 F7 FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa2
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 268h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 41 92 F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 26ch], eax
        push 0
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 81 91 F4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AA FE FF FF: jmp 0x5853cb0f
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 98 43 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x43
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 48: je 0x5853ccca
        __asm _emit 0x74
        __asm _emit 0x48
        push 1
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 6eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1f4h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes 8B 15 38 20 96 58: mov edx, dword ptr [0x58962038]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 EE 56 F4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x56
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853ccd4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 270h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 270h]
        mov dword ptr [edx + 0d4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 274h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 6E 91 F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5853cd25
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 30h
        ; Exact mapped bytes 0F 8D EA 00 00 00: jge 0x5853ce19
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 184h
        ; Exact mapped bytes E8 CB 42 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x42
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 54: je 0x5853cda3
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        push 0
        push 0ffffffh
        imul edx, dword ptr [ebp - 18h], 9
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 3ah]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 258h
        push edx
        imul eax, dword ptr [ebp - 18h], 9
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 2ah]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1bdh
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 65 12 F9 FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853cdad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 278h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 278h]
        mov dword ptr [edx + ecx*4 + 0dch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0dch]
        mov dword ptr [ebp - 27ch], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 8D 90 F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        mov dword ptr [ebp - 280h], ecx
        push 10h
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 DD 25 F6 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x25
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 03 FF FF FF: jmp 0x5853cd1c
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 2ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 284h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 52h
        push ecx
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 D6 87 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x87
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 2dh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 288h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 77h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 52h
        push ecx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 A5 87 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x87
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 2eh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 28ch], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 8eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 52h
        push ecx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 72 87 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x87
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 2fh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 290h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 9ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 52h
        push ecx
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 3F 87 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x87
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        push 184h
        ; Exact mapped bytes E8 18 41 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x41
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 49: je 0x5853cf4b
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0dcdcdch
        mov edx, dword ptr [ebp + 10h]
        add edx, 8fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0edh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 67h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 3ch
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
        push ecx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 BD 10 F9 FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x10
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853cf55
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 294h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 294h]
        mov dword ptr [eax + 19ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 19ch]
        mov dword ptr [ebp - 298h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 ED 8E F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 19ch]
        mov dword ptr [ebp - 29ch], eax
        push 1eh
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 41 24 F6 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x24
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 4D 40 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x40
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 4D: je 0x5853d01a
        __asm _emit 0x74
        __asm _emit 0x4d
        push 1
        push 0
        push 0dcdcdch
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 172h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1b8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 165h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ah
        push ecx
        ; Exact mapped bytes 8B 15 30 20 96 58: mov edx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 9E 53 F4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x53
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d024
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 2a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2a0h]
        mov dword ptr [edx + 1a8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1a8h]
        mov dword ptr [ebp - 2a4h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 1E 8E F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1a8h]
        mov dword ptr [ebp - 2a8h], edx
        push 14h
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 72 23 F6 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 7E 3F 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x3f
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 4C: je 0x5853d0e8
        __asm _emit 0x74
        __asm _emit 0x4c
        push 1
        push 0
        push 0dcdcdch
        mov eax, dword ptr [ebp + 10h]
        add eax, 96h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 240h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 75h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1ach
        push eax
        ; Exact mapped bytes 8B 0D 30 20 96 58: mov ecx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 D0 52 F4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x52
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d0f2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 2ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2ach]
        mov dword ptr [ecx + 0d8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 2b0h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 50 8D F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 2b4h], ecx
        push 14h
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 A4 22 F6 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        push 90h
        ; Exact mapped bytes E8 AD 3E 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x3e
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 48: je 0x5853d1b5
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 82h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 226h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 61h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1c6h
        push edx
        ; Exact mapped bytes A1 30 20 96 58: mov eax, dword ptr [0x58962030]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 83 6D 28 00: call 0x587c3f30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x6d
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d1bf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 2b8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2b8h]
        mov dword ptr [eax + 1a0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1a0h]
        mov dword ptr [ebp - 2c4h], eax
        push 0c9h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 78 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x78
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        push 0c8h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD 78 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x78
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        mov ecx, dword ptr [ebp - 2bch]
        push ecx
        mov edx, dword ptr [ebp - 2c0h]
        push edx
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 8E 76 28 00: call 0x587c48c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x76
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 2c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 E2 75 28 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x75
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1a0h]
        mov dword ptr [ebp - 2cch], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 93 F3 FA FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1a0h]
        mov dword ptr [ebp - 2d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 37 F9 00 00: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 2d4h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 D8 8B F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x8b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 2d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 CC 8C F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x8c
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 20h
        ; Exact mapped bytes E8 38 3D 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x3d
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 2D: je 0x5853d30f
        __asm _emit 0x74
        __asm _emit 0x2d
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 77 F4 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x77
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        mov edx, dword ptr [ebp - 2dch]
        push edx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 89 E1 27 00: call 0x587bb490
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe1
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d319
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 2e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2e0h]
        mov dword ptr [ecx + 64h], edx
        push 54h
        ; Exact mapped bytes E8 C8 3C 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 41: je 0x5853d393
        __asm _emit 0x74
        __asm _emit 0x41
        push 0ffh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 77 F4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x77
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2e4h], eax
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 2e4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 95 4F F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d39d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 2e8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2e8h]
        mov dword ptr [edx + ecx + 1b8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 1b8h]
        mov dword ptr [ebp - 2ech], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 C3 81 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x81
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 0F 3C 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 41: je 0x5853d44c
        __asm _emit 0x74
        __asm _emit 0x41
        push 0feh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 77 F4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x77
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 2f0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 DC 4E F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x4e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d456
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 2f4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2f4h]
        mov dword ptr [eax + edx + 1b8h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 1b8h]
        mov dword ptr [ebp - 2f8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 0A 81 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x81
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 56 3B 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3b
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 41: je 0x5853d505
        __asm _emit 0x74
        __asm _emit 0x41
        push 128h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 76 F4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x76
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 2fch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 23 4E F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x4e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d50f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 300h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 300h]
        mov dword ptr [eax + edx + 1b8h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 1b8h]
        mov dword ptr [ebp - 304h], edx
        push 0
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 85 89 F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 1b8h]
        mov dword ptr [ebp - 308h], edx
        push 0
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 60 89 F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 1b8h]
        mov dword ptr [ebp - 30ch], edx
        push 0
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 3C 89 F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0xff
        push 35h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 75 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x75
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 310h], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5853d5c9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes 0F 8D FB 00 00 00: jge 0x5853d6ce
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 2A 3A 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x3a
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 48: je 0x5853d638
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 91 8B 00 00: call 0x58546190
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 314h], eax
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0aah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp - 314h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 F0 4C F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x4c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d642
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 318h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 318h]
        mov dword ptr [eax + edx*4 + 1d0h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1d0h]
        mov dword ptr [ebp - 31ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 28 7F 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7f
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1d0h]
        mov dword ptr [ebp - 320h], ecx
        push 0
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 98 87 F4 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1d0h]
        mov dword ptr [ebp - 324h], ecx
        push 0
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 C8 88 F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x88
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F2 FE FF FF: jmp 0x5853d5c0
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 2F 39 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x39
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 49: je 0x5853d734
        __asm _emit 0x74
        __asm _emit 0x49
        push 9ch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 74 F4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x74
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 328h], eax
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0aah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 52h
        push ecx
        mov edx, dword ptr [ebp - 328h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 F4 4B F4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x4b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d73e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 32ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 32ch]
        mov dword ptr [edx + 0a4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 330h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 34 7E 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7e
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 334h], ecx
        push 0
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 F8 87 F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 64 38 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x38
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 46: je 0x5853d7fc
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 73 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x73
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 338h], eax
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0aah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 52h
        push ecx
        mov edx, dword ptr [ebp - 338h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 1C 90 F4 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d806
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov ecx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 33ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 33ch]
        mov dword ptr [edx + 0a8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 340h], edx
        push 0
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 4F 87 F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 B8 37 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x37
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 46: je 0x5853d8a8
        __asm _emit 0x74
        __asm _emit 0x46
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 72 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x72
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0b8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 55h
        push ecx
        push 4
        mov edx, dword ptr [ebp - 344h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 D0 D0 27 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd0
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d8b2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov ecx, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 348h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 348h]
        mov dword ptr [edx + 0d0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 34ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 C0 7C 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7c
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 350h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 71 85 F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 78 02 00 00: mov word ptr [ecx + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 2084h
        ; Exact mapped bytes E8 DF 36 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x36
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 29: je 0x5853d964
        __asm _emit 0x74
        __asm _emit 0x29
        push 0
        push 40h
        push 0
        push 0
        push 1aeh
        push 44ch
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 C4 AA 1C 00: call 0x58708420
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xaa
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853d96e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov eax, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 354h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 354h]
        mov dword ptr [ecx + 1cch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1cch]
        mov dword ptr [ebp - 358h], ecx
        push 3ec0h
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 D4 84 F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1cch]
        mov dword ptr [ebp - 35ch], eax
        push 0
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 C8 85 F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 260h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 2d8h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2d4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2d0h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8D 85 F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xf4
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
