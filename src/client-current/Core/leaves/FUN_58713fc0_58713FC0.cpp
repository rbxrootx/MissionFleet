// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58713FC0 .. +0x656 bytes.
extern "C" __declspec(naked) void FUN_58713fc0_58713FC0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888dddeh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0d0h
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
        ; Exact mapped bytes E8 F4 76 E5 FF: call 0x5856b700
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x76
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3f9ch
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6A 1F D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x1f
        __asm _emit 0xd7
        __asm _emit 0xff
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
        push 54h
        ; Exact mapped bytes E8 B9 CF 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 35: je 0x58714090
        __asm _emit 0x74
        __asm _emit 0x35
        push 77h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 0A D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 5
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 95 E2 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe2
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58714097
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 84h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 64h], ecx
        push 0c8h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 7A 14 0A 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 68h], eax
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 C4 1C D7 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1c
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 20 CF 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcf
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 35: je 0x58714129
        __asm _emit 0x74
        __asm _emit 0x35
        push 79h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 0A D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 FC E1 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe1
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58714130
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 8ch], edx
        push 54h
        ; Exact mapped bytes E8 B7 CE 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xce
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 32: je 0x5871418f
        __asm _emit 0x74
        __asm _emit 0x32
        push 78h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 09 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 96 E1 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe1
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58714196
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 78h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax + 88h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 7ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 EB 13 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 80h], edx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 C5 1B D7 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1b
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 1E CE 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xce
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 3E: je 0x58714234
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 3e8h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 41h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0edh
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B1 7A DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x7a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5871423b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 84h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [edx + 0a0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 88h], edx
        push 101h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 3A 13 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 8ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 AE 1B D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1b
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 67 CD 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xcd
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 77: je 0x58714324
        __asm _emit 0x74
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 3e8h
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        push 19h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 08 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 98h], edx
        movzx eax, word ptr [ebp - 12h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 41h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 89h
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C1 79 DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x79
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5871432b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 9ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [edx + 98h], eax
        push 0ach
        ; Exact mapped bytes E8 B3 CC 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xcc
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 77: je 0x587143d8
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        push 1ah
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 07 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a8h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 41h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0b9h
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 0D 79 DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x79
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x587143df
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ecx + 9ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 0b0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 96 11 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 0b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 0A 1A D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x1a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 0b8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 5B 11 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 0bch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 CF 19 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x19
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 8B CB 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xcb
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 48: je 0x587144d1
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 3e9h
        ; Exact mapped bytes 66 89 45 EA: mov word ptr [ebp - 0x16], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xea
        push 7ah
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 06 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        movzx ecx, word ptr [ebp - 16h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 54 DE D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xde
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x587144d8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ecx + 90h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 0c8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 9D 10 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 0cch], eax
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 11 19 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x19
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 CD CA 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xca
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 49: je 0x58714590
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        push 7bh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 05 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 95 DD D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xdd
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58714597
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0d4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 94h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 0d8h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 DE 0F 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 0dch], edx
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 52 18 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x18
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a4h], 0
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
