// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861DDF0 .. +0x91B bytes.
extern "C" __declspec(naked) void FUN_5861ddf0_5861DDF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588870d8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 104h
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
        ; Exact mapped bytes E8 34 44 E6 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x44
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588ae790h
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861de5e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 80h
        ; Exact mapped bytes 7D 19: jge 0x5861de80
        __asm _emit 0x7d
        __asm _emit 0x19
        imul edx, dword ptr [ebp - 14h], 18h
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 64h]
        mov edx, 1
        imul eax, edx, 0
        mov byte ptr [ecx + eax], 0
        ; Exact mapped bytes EB D5: jmp 0x5861de55
        __asm _emit 0xeb
        __asm _emit 0xd5
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 98 0C 00 00: mov word ptr [edx + 0xc98], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 9A 0C 00 00: mov word ptr [ecx + 0xc9a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861deb4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 70: jge 0x5861df2a
        __asm _emit 0x7d
        __asm _emit 0x70
        push 54h
        ; Exact mapped bytes E8 43 31 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x31
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 36: je 0x5861df07
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, 4
        sub ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 6C E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x6c
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1E 44 E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x44
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861df0e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [edx + ecx*4 + 0c64h], eax
        ; Exact mapped bytes EB 81: jmp 0x5861deab
        __asm _emit 0xeb
        __asm _emit 0x81
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861df3c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 6E: jge 0x5861dfb0
        __asm _emit 0x7d
        __asm _emit 0x6e
        push 54h
        ; Exact mapped bytes E8 BB 30 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x30
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 34: je 0x5861df8d
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 14h]
        add edx, 5
        push edx
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 6B E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x6b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 98 43 E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x43
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861df94
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 7ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [eax + edx*4 + 0c6ch], ecx
        ; Exact mapped bytes EB 83: jmp 0x5861df33
        __asm _emit 0xeb
        __asm _emit 0x83
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0c64h]
        mov dword ptr [ebp - 80h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 DE 75 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x75
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0c6ch]
        mov dword ptr [ebp - 84h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 B6 75 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x75
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        push 10ch
        ; Exact mapped bytes E8 FF 2F 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x2f
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 4A: je 0x5861e05f
        __asm _emit 0x74
        __asm _emit 0x4a
        push 646464h
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0cah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 187h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0b9h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1fh
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
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 36 1D EB FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e066
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 88h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [edx + 0c74h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c74h]
        mov dword ptr [ebp - 8ch], edx
        push 3ch
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 52 E0 E8 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe0
        __asm _emit 0xe8
        __asm _emit 0xff
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 69 E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x69
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c78h], eax
        push 94h
        ; Exact mapped bytes E8 46 2F 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2f
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 41: je 0x5861e10f
        __asm _emit 0x74
        __asm _emit 0x41
        push 0
        push 0
        push 0ffd997h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0b4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8eh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 2dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1ch
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
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C6 21 1A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x21
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e116
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 90h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [eax + 0c7ch], ecx
        push 94h
        ; Exact mapped bytes E8 C8 2E 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 41: je 0x5861e18d
        __asm _emit 0x74
        __asm _emit 0x41
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0b4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1dah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 2dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 78h
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
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 48 21 1A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x21
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e194
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 94h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [eax + 0c80h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c7ch]
        mov dword ptr [ebp - 98h], eax
        push 0dh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 24 12 E8 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c7ch]
        mov dword ptr [ebp - 9ch], edx
        push 87h
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 65 8C E9 FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c7ch]
        mov dword ptr [ebp - 0a0h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0E 75 E7 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x75
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 64h
        ; Exact mapped bytes 66 89 55 E6: mov word ptr [ebp - 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe6
        movzx eax, word ptr [ebp - 1ah]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 64 7C E6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7c
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c7ch]
        mov dword ptr [ebp - 0a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 A8 7B E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x7b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c80h]
        mov dword ptr [ebp - 0a8h], ecx
        push 0dh
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 9C 11 E8 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c80h]
        mov dword ptr [ebp - 0ach], eax
        push 87h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 DD 8B E9 FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x8b
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c80h]
        mov dword ptr [ebp - 0b0h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 86 74 E7 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 64h
        ; Exact mapped bytes 66 89 45 E4: mov word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        movzx ecx, word ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 DC 7B E6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x7b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c80h]
        mov dword ptr [ebp - 0b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 20 7B E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7b
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 39 2D 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 66: je 0x5861e341
        __asm _emit 0x74
        __asm _emit 0x66
        push 0
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 67 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0bch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c0h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c6h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 19dh
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A4 D9 EA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd9
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e348
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ecx + 0c84h], edx
        push 0ach
        ; Exact mapped bytes E8 96 2C 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2c
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 62: je 0x5861e3e0
        __asm _emit 0x74
        __asm _emit 0x62
        push 11h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 67 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x67
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 19dh
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 05 D9 EA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd9
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e3e7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0d4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 0c88h], ecx
        push 0ach
        ; Exact mapped bytes E8 F7 2B 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x2b
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 68: je 0x5861e485
        __asm _emit 0x74
        __asm _emit 0x68
        push 12h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 66 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x66
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0dch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 29h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1d6h
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 60 D8 EA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e48c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0e4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [eax + 0c8ch], ecx
        push 0ach
        ; Exact mapped bytes E8 52 2B 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2b
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 6B: je 0x5861e52d
        __asm _emit 0x74
        __asm _emit 0x6b
        push 13h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 66 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x66
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ech], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0b2h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1d6h
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 B8 D7 EA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd7
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e534
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f4h]
        mov dword ptr [eax + 0c90h], ecx
        push 58h
        ; Exact mapped bytes E8 AD 2A 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x2a
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 43: je 0x5861e5aa
        __asm _emit 0x74
        __asm _emit 0x43
        push 20h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 65 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x65
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        push 583h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a3h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1d6h
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 6B 82 E6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x82
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e5b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0fch]
        mov dword ptr [ecx + 0c94h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c94h]
        mov dword ptr [ebp - 100h], ecx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 67 0F E8 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c94h]
        mov dword ptr [ebp - 104h], eax
        push 101h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 A8 6F 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6f
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c94h]
        mov dword ptr [ebp - 108h], edx
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 1C 78 E6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x78
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 A0 0C 00 00: mov word ptr [ecx + 0xca0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c88h]
        mov dword ptr [ebp - 10ch], eax
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 41 79 E6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x79
        __asm _emit 0xe6
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
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 19 79 E6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x79
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c9ch], 0
        mov edx, 1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 A0 0C 00 00: mov word ptr [eax + 0xca0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 95 5E F6 FF: call 0x58584530
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5e
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 110h], edx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x5861e6f0
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [edx + ecx + 0c64h]
        ; Exact mapped bytes 74 0B: je 0x5861e6d4
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CD 76 E6 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x76
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 34 6F E7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x6f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 110h]
        ; Exact mapped bytes 75 02: jne 0x5861e6ee
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x5861e6f0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B9: jmp 0x5861e6a9
        __asm _emit 0xeb
        __asm _emit 0xb9
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
