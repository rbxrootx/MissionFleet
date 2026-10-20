// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58622900 .. +0x9D9 bytes.
extern "C" __declspec(naked) void FUN_58622900_58622900() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588871d6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 140h
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
        ; Exact mapped bytes E8 24 F9 E5 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf9
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588ae934h
        push 54h
        ; Exact mapped bytes E8 A1 E6 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe6
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2F: je 0x586229a2
        __asm _emit 0x74
        __asm _emit 0x2f
        push 3
        ; Exact mapped bytes 8B 0D D8 07 96 58: mov ecx, dword ptr [0x589607d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 21 E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 83 F9 E5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586229a9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 7ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [edx + ecx + 60h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 80h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 CC 2B 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2b
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 84h], edx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 3A 34 E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x34
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 F6 E5 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe5
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 35: je 0x58622a53
        __asm _emit 0x74
        __asm _emit 0x35
        push 4
        ; Exact mapped bytes 8B 0D D8 07 96 58: mov ecx, dword ptr [0x589607d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 20 E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x20
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D2 F8 E5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf8
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58622a5a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + edx + 60h], ecx
        push 54h
        ; Exact mapped bytes E8 81 E5 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe5
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 35: je 0x58622ac8
        __asm _emit 0x74
        __asm _emit 0x35
        push 5
        ; Exact mapped bytes 8B 0D D8 07 96 58: mov ecx, dword ptr [0x589607d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 20 E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5D F8 E5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58622acf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [eax + edx + 68h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 68h]
        mov dword ptr [ebp - 98h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 9A 2A 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2a
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 68h]
        mov dword ptr [ebp - 9ch], eax
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 08 33 E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x33
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 C4 E4 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe4
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 35: je 0x58622b85
        __asm _emit 0x74
        __asm _emit 0x35
        push 6
        ; Exact mapped bytes 8B 0D D8 07 96 58: mov ecx, dword ptr [0x589607d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 1F E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x1f
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A0 F7 E5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf7
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58622b8c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ecx + eax + 68h], edx
        push 10ch
        ; Exact mapped bytes E8 4C E4 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe4
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 4A: je 0x58622c12
        __asm _emit 0x74
        __asm _emit 0x4a
        push 646464h
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 9dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 17eh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 8ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 14h
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
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 83 D1 EA FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd1
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58622c19
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0ach], ecx
        push 200h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 A2 94 E8 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x94
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 AB E3 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe3
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 3E: je 0x58622ca7
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 7dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1aah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 22h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 13h
        push edx
        ; Exact mapped bytes A1 2C 20 96 58: mov eax, dword ptr [0x5896202c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 2E D6 19 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd6
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58622cae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0b0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0b4h], eax
        push 0dh
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 10 C7 E7 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0b8h], edx
        push 5bh
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 57 41 E9 FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x41
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 0bch], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 03 2A E7 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x2a
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 64h
        ; Exact mapped bytes 66 89 55 EE: mov word ptr [ebp - 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xee
        movzx eax, word ptr [ebp - 12h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 59 31 E6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x31
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 A0 30 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x30
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 B9 E2 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe2
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 65: je 0x58622dc0
        __asm _emit 0x74
        __asm _emit 0x65
        push 1
        ; Exact mapped bytes 8B 0D D8 07 96 58: mov ecx, dword ptr [0x589607d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 1D E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1d
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0cch], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 95h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18ah
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 25 8F EA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x8f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58622dc7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0d0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0d4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 B4 27 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0d8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 2B 30 E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x30
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 E4 E1 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe1
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 65: je 0x58622e95
        __asm _emit 0x74
        __asm _emit 0x65
        push 2
        ; Exact mapped bytes 8B 0D D8 07 96 58: mov ecx, dword ptr [0x589607d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 1C E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 85h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18ah
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 50 8E EA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x58622e9c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0e8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0ech], eax
        push 101h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 DF 26 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x26
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 0f0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 56 2F E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x2f
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 0F E1 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe1
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 62: je 0x58622f67
        __asm _emit 0x74
        __asm _emit 0x62
        push 3
        ; Exact mapped bytes 8B 0D D8 07 96 58: mov ecx, dword ptr [0x589607d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 1B E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0fch], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1aah
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 7E 8D EA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8d
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58622f6e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 100h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 104h], eax
        push 101h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 07 26 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x26
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 108h], edx
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 7B 2E E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2e
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 37 E0 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe0
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 41: je 0x5862301e
        __asm _emit 0x74
        __asm _emit 0x41
        push 20h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 1A E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1a
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        push 3e8h
        mov eax, dword ptr [ebp + 10h]
        add eax, 25h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1b6h
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 F7 37 E6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x37
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58623025
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 110h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 114h], edx
        push 0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 F3 C4 E7 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 118h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 34 25 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x25
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 11ch], eax
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 A8 2D E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2d
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 61 DF 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xdf
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 67: je 0x5862311a
        __asm _emit 0x74
        __asm _emit 0x67
        push 0ch
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 1A E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x1a
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 124h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 128h], edx
        push 640h
        mov eax, dword ptr [ebp + 10h]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1b5h
        push ecx
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov edx, dword ptr [ebp - 128h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 CB 8B EA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58623121
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ecx + 9ch], edx
        push 0ach
        ; Exact mapped bytes E8 BD DE 20 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xde
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 65: je 0x586231bc
        __asm _emit 0x74
        __asm _emit 0x65
        push 0bh
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 19 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x19
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 138h], ecx
        push 640h
        mov edx, dword ptr [ebp + 10h]
        add edx, 75h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1b5h
        push eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 134h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 29 8B EA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x586231c3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 13ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [eax + 0a0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 140h], eax
        push 101h
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 B2 23 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x23
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 144h], edx
        push 101h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 93 23 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x23
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 148h], ecx
        push 0
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 07 2C E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2c
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 14ch], eax
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 EB 2B E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x2b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 94h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F0 2C E6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2c
        __asm _emit 0xe6
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
