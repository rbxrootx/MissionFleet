// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878D250 .. +0x749 bytes.
extern "C" __declspec(naked) void FUN_5878d250_5878D250() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891061h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0d4h
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
        ; Exact mapped bytes E8 D4 4F CF FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x4f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b69bch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 1
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 94 00 00 00: mov word ptr [ecx + 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 98h], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 9ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 0a4h], 0
        push 198h
        ; Exact mapped bytes E8 F7 3C 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 16: je 0x5878d333
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b6968h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 82 30 FF FF: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d33a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ecx + 60h], edx
        push 70h
        ; Exact mapped bytes E8 B0 3C 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 26: je 0x5878d38a
        __asm _emit 0x74
        __asm _emit 0x26
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
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6B 4B 00 00: call 0x58791ef0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d391
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ecx + 64h], edx
        push 8ch
        ; Exact mapped bytes E8 56 3C 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 44: je 0x5878d402
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1b9h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1cbh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 6dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 21h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D3 50 00 00: call 0x587924d0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d409
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 84h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [eax + 68h], ecx
        push 108h
        ; Exact mapped bytes E8 D8 3B 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 38: je 0x5878d474
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0efh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 40h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 68h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A1 99 FF FF: call 0x58786e10
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d47b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 88h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 B1 3A DC FF: call 0x58550f60
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x3a
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 108h
        ; Exact mapped bytes E8 4A 3B 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 38: je 0x5878d502
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 66h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0efh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 56h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 68h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F3 4D 00 00: call 0x587922f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d509
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 90h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 23 3A DC FF: call 0x58550f60
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3a
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 0ch
        ; Exact mapped bytes E8 BF 3A 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 0D: je 0x5878d562
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 13 71 FF FF: call 0x58784670
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d569
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 98h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 9ch], eax
        push 78h
        push 8
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 33 63 D2 FF: call 0x584b38d0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x63
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 0a8h
        ; Exact mapped bytes E8 5C 3A 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 3D: je 0x5878d5f5
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 258h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1c0h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1cbh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 40h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 35h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 40 65 00 00: call 0x58793b30
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d5fc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [edx + 70h], eax
        push 0c4h
        ; Exact mapped bytes E8 E5 39 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 34: je 0x5878d663
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1e5h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 163h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 72 35 00 00: call 0x58790bd0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d66a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [edx + 74h], eax
        push 964h
        ; Exact mapped bytes E8 77 39 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 0D: je 0x5878d6aa
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 EB 44 00 00: call 0x58791b90
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d6b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [edx + 80h], eax
        push 13b8h
        ; Exact mapped bytes E8 2D 39 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 2C: je 0x5878d713
        __asm _emit 0x74
        __asm _emit 0x2c
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 74h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 30h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 42 53 F9 FF: call 0x58722a50
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d71a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 0b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 6E 30 00 00: call 0x587907c0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 258h
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 09 87 CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x87
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 3e4h
        ; Exact mapped bytes E8 82 38 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 2C: je 0x5878d7be
        __asm _emit 0x74
        __asm _emit 0x2c
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        add edx, 74h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 30h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 A7 78 F9 FF: call 0x58725060
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x78
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d7c5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 0b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [edx + 0ach], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 0bch], edx
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 F3 EC D8 FF: call 0x5851c4f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xec
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 0c0h], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 258h
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 5E 86 CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x86
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 D7 37 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 66: je 0x5878d8a3
        __asm _emit 0x74
        __asm _emit 0x66
        push 5
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 72 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0xcf
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
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 4ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 186h
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 42 E4 D3 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe4
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d8aa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ecx + 0b0h], edx
        push 0ach
        ; Exact mapped bytes E8 34 37 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 66: je 0x5878d946
        __asm _emit 0x74
        __asm _emit 0x66
        push 5
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 71 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x71
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0dch], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 10h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1b4h
        push ecx
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 9F E3 D3 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe3
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d94d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ecx + 0b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1D 86 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x86
        __asm _emit 0xcf
        __asm _emit 0xff
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E3 83 CF FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x83
        __asm _emit 0xcf
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
