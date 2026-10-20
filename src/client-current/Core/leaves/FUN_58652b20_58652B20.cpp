// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58652B20 .. +0x425 bytes.
extern "C" __declspec(naked) void FUN_58652b20_58652B20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58888a61h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 90h
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
        ; Exact mapped bytes E8 64 F7 E2 FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588af58ch
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 1E E3 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58652b9f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 71: jge 0x58652c16
        __asm _emit 0x7d
        __asm _emit 0x71
        push 54h
        ; Exact mapped bytes E8 58 E4 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe4
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 3A: je 0x58652bf6
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 78h
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 4C 1F E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2F F7 E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58652bfd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 48h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [eax + edx*4 + 54h], ecx
        ; Exact mapped bytes EB 80: jmp 0x58652b96
        __asm _emit 0xeb
        __asm _emit 0x80
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58652c28
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 71: jge 0x58652c9f
        __asm _emit 0x7d
        __asm _emit 0x71
        push 54h
        ; Exact mapped bytes E8 CF E3 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe3
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3A: je 0x58652c7f
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 7ah
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C3 1E E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x1e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A6 F6 E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58652c86
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 54h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [eax + edx*4 + 5ch], ecx
        ; Exact mapped bytes EB 80: jmp 0x58652c1f
        __asm _emit 0xeb
        __asm _emit 0x80
        push 9ch
        ; Exact mapped bytes E8 5B E3 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe3
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 3E: je 0x58652cf7
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 47h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0aeh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 35h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 23h
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
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0E 01 17 00: call 0x587c2e00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58652cfe
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 58h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [eax + 64h], ecx
        push 0ach
        ; Exact mapped bytes E8 E9 E2 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 58: je 0x58652d83
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 5ch], eax
        push 18h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 92 1D E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 64h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 68h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 82h
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 62 8F E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58652d8a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ecx + 68h], edx
        push 0ach
        ; Exact mapped bytes E8 5D E2 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe2
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 57: je 0x58652e0e
        __asm _emit 0x74
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 70h], ecx
        push 17h
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 06 1D E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x1d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 78h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 50h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0afh
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D7 8E E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58652e15
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 80h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 54h]
        mov dword ptr [ebp - 84h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 63 27 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 5ch]
        mov dword ptr [ebp - 88h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 3E 27 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 54h]
        mov dword ptr [ebp - 8ch], edx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 1C 27 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 5ch]
        mov dword ptr [ebp - 90h], edx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 FA 26 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x26
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 94h], ecx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 E1 26 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x26
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 98h], eax
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 C8 26 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x26
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 9ch], edx
        push 17h
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 9F 09 EE FF: call 0x585338a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x09
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], 0
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 41 2E E3 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x2e
        __asm _emit 0xe3
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 30 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x30
        __asm _emit 0xe3
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
