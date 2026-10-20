// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A97F0 .. +0x1767 bytes.
extern "C" __declspec(naked) void FUN_586a97f0_586A97F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b35bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2c0h
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
        ; Exact mapped bytes E8 C4 1E EC FF: call 0x5856b700
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1e
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b0b04h
        push 54h
        ; Exact mapped bytes E8 B1 77 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x77
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 3B: je 0x586a989e
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 B2 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
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
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 87 8A DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x8a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a98a5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 120h]
        mov dword ptr [ecx + 0a0h], edx
        push 54h
        ; Exact mapped bytes E8 3C 77 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x77
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 3B: je 0x586a9913
        __asm _emit 0x74
        __asm _emit 0x3b
        push 1
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B B2 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 12 8A DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a991a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 128h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 128h]
        mov dword ptr [eax + 0a4h], ecx
        push 54h
        ; Exact mapped bytes E8 C7 76 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x76
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 38: je 0x586a9985
        __asm _emit 0x74
        __asm _emit 0x38
        push 2
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 B1 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xb1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A0 89 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x89
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a998c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 130h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [edx + 0a8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 134h], edx
        push 0c8h
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 79 BB 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbb
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 138h], ecx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 BD C3 DD FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xc3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 13ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 AE BB 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xbb
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 140h], edx
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 22 C4 DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc4
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 DE 75 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x75
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 29: je 0x586a9a5f
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0fh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a1h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C6 88 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x88
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a9a66
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 144h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ecx + eax + 0ach], edx
        push 54h
        ; Exact mapped bytes E8 72 75 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x75
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 3B: je 0x586a9add
        __asm _emit 0x74
        __asm _emit 0x3b
        push 4
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 B0 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0fh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 48 88 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x88
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a9ae4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 14ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14ch]
        mov dword ptr [ecx + eax + 0ach], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 150h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 7F BA 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 154h], eax
        push 101h
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 57 BA 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 158h], ecx
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 C2 C2 DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 15ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 9D C2 DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc2
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 33ch
        ; Exact mapped bytes E8 56 74 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x74
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 1E: je 0x586a9bdc
        __asm _emit 0x74
        __asm _emit 0x1e
        push 40h
        push 0
        push 0
        push 1eh
        push 36ah
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 19 56 FF FF: call 0x5869f1f0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a9be3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 160h]
        mov dword ptr [ecx + 0b4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 164h], ecx
        push 0
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 35 60 E5 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x60
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 9c4h
        push edx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 3D C2 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc2
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 1f48h
        ; Exact mapped bytes E8 B6 73 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x73
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 1B: je 0x586a9c79
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 5C 95 FE FF: call 0x586931d0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a9c80
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 16ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 16ch]
        mov dword ptr [edx + 0b8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 170h], edx
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 98 5F E5 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 174h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 0bb8h
        push eax
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 A1 C1 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 17ch], edx
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 AD DD FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        mov eax, dword ptr [ebp - 178h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 FB 20 EC FF: call 0x5856be10
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x20
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 247ch
        ; Exact mapped bytes E8 E4 72 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x72
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 1B: je 0x586a9d4b
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 54h
        push 70h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 CA 0B 06 00: call 0x5870a910
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a9d52
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 180h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 180h]
        mov dword ptr [eax + 0bch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 184h], eax
        push 0
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 C6 5E E5 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x5e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 188h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 0bb8h
        push ecx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 CE C0 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc0
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 294h
        ; Exact mapped bytes E8 47 72 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x72
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 21: je 0x586a9dee
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0a4h
        push 190h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 47 37 FF FF: call 0x5869d530
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a9df5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 18ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18ch]
        mov dword ptr [ecx + 0c0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 190h], ecx
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 23 5E E5 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 194h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 0bb8h
        push edx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 2B C0 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc0
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 2d4h
        ; Exact mapped bytes E8 A4 71 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x71
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 1E: je 0x586a9e8e
        __asm _emit 0x74
        __asm _emit 0x1e
        push 40h
        push 0
        push 0
        push 50h
        push 12ch
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 F7 FB FE FF: call 0x58699a80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a9e95
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 198h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 198h]
        mov dword ptr [edx + 0c4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 19ch], edx
        push 0
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 83 5D E5 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x5d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 1a0h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 0bb8h
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 8C BF DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xbf
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 05 71 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x71
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 79: je 0x586a9f88
        __asm _emit 0x74
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 EA: mov word ptr [ebp - 0x16], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xea
        push 0eh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 AB DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xab
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ach], ecx
        movzx edx, word ptr [ebp - 16h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 9eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 159h
        push ecx
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 5D 1D E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x1d
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a9f8f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 1b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b0h]
        mov dword ptr [ecx + 0d8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 1b4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 E6 B5 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xb5
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 1b8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 5A BE DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xbe
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 13 70 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x70
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 7F: je 0x586aa086
        __asm _emit 0x74
        __asm _emit 0x7f
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
        push 0fh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB AA DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xaa
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c4h], ecx
        movzx edx, word ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a4h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 189h
        push ecx
        mov edx, dword ptr [ebp - 1bch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1c0h]
        push ecx
        mov edx, dword ptr [ebp - 1c4h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 62 1C E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1c
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aa090
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 1c8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1c8h]
        mov dword ptr [ecx + 0d0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 1cch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 E2 B4 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb4
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 1d0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 56 BD DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xbd
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 0F 6F 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 7F: je 0x586aa18a
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 E6: mov word ptr [ebp - 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe6
        push 10h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 A9 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1dch], ecx
        movzx edx, word ptr [ebp - 1ah]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a4h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1bbh
        push ecx
        mov edx, dword ptr [ebp - 1d4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        mov edx, dword ptr [ebp - 1dch]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 5E 1B E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1b
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aa194
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 1e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1e0h]
        mov dword ptr [ecx + 0d4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 1e4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 DE B3 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb3
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 1e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 52 BC DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xbc
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 0B 6E 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6e
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 7F: je 0x586aa28e
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 E4: mov word ptr [ebp - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe4
        push 33h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 A8 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f4h], ecx
        movzx edx, word ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a6h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0cdh
        push ecx
        mov edx, dword ptr [ebp - 1ech]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1f0h]
        push ecx
        mov edx, dword ptr [ebp - 1f4h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 5A 1A E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x1a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aa298
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 1f8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f8h]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 1fch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 DA B2 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb2
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 200h], eax
        push 0
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 4E BB DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbb
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 07 6D 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6d
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 7F: je 0x586aa392
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 E2: mov word ptr [ebp - 0x1e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe2
        push 31h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F A7 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 208h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20ch], ecx
        movzx edx, word ptr [ebp - 1eh]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a6h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ebh
        push ecx
        mov edx, dword ptr [ebp - 204h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov edx, dword ptr [ebp - 20ch]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 56 19 E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x19
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aa39c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 210h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 210h]
        mov dword ptr [ecx + 8ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 214h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 D6 B1 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb1
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 218h], eax
        push 0
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 4A BA DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xba
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 03 6C 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x6c
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 7F: je 0x586aa496
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 E0: mov word ptr [ebp - 0x20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        push 32h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B A6 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 220h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 224h], ecx
        movzx edx, word ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a6h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 109h
        push ecx
        mov edx, dword ptr [ebp - 21ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        push ecx
        mov edx, dword ptr [ebp - 224h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 52 18 E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x18
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aa4a0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 228h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 228h]
        mov dword ptr [ecx + 90h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 22ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 D2 B0 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb0
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 230h], eax
        push 0
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 46 B9 DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb9
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 FF 6A 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x6a
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 7F: je 0x586aa59a
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 DE: mov word ptr [ebp - 0x22], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xde
        push 30h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 A5 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 23ch], ecx
        movzx edx, word ptr [ebp - 22h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a6h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 127h
        push ecx
        mov edx, dword ptr [ebp - 234h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 238h]
        push ecx
        mov edx, dword ptr [ebp - 23ch]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 4E 17 E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x17
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aa5a4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 240h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 240h]
        mov dword ptr [ecx + 94h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 244h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 CE AF 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xaf
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 248h], eax
        push 0
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 42 B8 DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 84h], 0
        push 0ach
        ; Exact mapped bytes E8 EF 69 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x69
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 7A: je 0x586aa6a5
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 3e8h
        ; Exact mapped bytes 66 89 45 DC: mov word ptr [ebp - 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        push 34h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 A4 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 250h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 254h], edx
        movzx eax, word ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 3
        push edx
        mov eax, dword ptr [ebp - 24ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 250h]
        push edx
        mov eax, dword ptr [ebp - 254h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 43 16 E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x16
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aa6af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 258h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 258h]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 25ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 C3 AE 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xae
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 260h], ecx
        push 0
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 37 B7 DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb7
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 F0 68 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 7D: je 0x586aa7a7
        __asm _emit 0x74
        __asm _emit 0x7d
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 3e8h
        ; Exact mapped bytes 66 89 45 DA: mov word ptr [ebp - 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xda
        push 4
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 A3 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 268h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 26ch], edx
        movzx eax, word ptr [ebp - 26h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 25h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1cbh
        push edx
        mov eax, dword ptr [ebp - 264h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 268h]
        push edx
        mov eax, dword ptr [ebp - 26ch]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 41 15 E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x15
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aa7b1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov ecx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 270h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 270h]
        mov dword ptr [edx + 0dch], eax
        push 0fch
        ; Exact mapped bytes E8 2A 68 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 47: je 0x586aa837
        __asm _emit 0x74
        __asm _emit 0x47
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 A2 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 33h
        push edx
        push 2
        mov eax, dword ptr [ebp - 274h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 41 01 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aa841
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 278h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 278h]
        mov dword ptr [edx + ecx + 0e4h], eax
        push 0fch
        ; Exact mapped bytes E8 91 67 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x67
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 47: je 0x586aa8d0
        __asm _emit 0x74
        __asm _emit 0x47
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 A2 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 27ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 57h
        push edx
        push 2
        mov eax, dword ptr [ebp - 27ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 A8 00 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aa8da
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 280h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 280h]
        mov dword ptr [ecx + eax + 0e4h], edx
        push 0fch
        ; Exact mapped bytes E8 F8 66 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x66
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 49: je 0x586aa96b
        __asm _emit 0x74
        __asm _emit 0x49
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E A1 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 96h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 284h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 0D 00 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aa975
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov ecx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 288h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 288h]
        mov dword ptr [edx + 0ech], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 28ch], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 BE B4 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 290h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 64h
        push edx
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 90 B4 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 294h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 6B B4 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 7ch
        ; Exact mapped bytes E8 E7 65 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x65
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 24: je 0x586aaa57
        __asm _emit 0x74
        __asm _emit 0x24
        push 40h
        push 0
        push 0
        push 64h
        push 0fah
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 51 45 FF FF: call 0x5869efa0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aaa61
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 298h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 298h]
        mov dword ptr [eax + 0e0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 29ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 0bb8h
        push edx
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 D8 B3 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb3
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 50h
        ; Exact mapped bytes E8 54 65 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x65
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 21: je 0x586aaae7
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 B1 9E 10 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aaaf1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 2a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2a0h]
        mov dword ptr [edx + 0f4h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586aab22
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D A8 00 00 00: jge 0x586aabd4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 D1 64 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x64
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 38: je 0x586aab81
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 1f4h
        push eax
        push 0fffffda8h
        push 0fffffce0h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 37 4D E5 FF: call 0x584ff8b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aab8b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 2a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a4h]
        mov dword ptr [eax + edx*4 + 0f8h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0f8h]
        mov dword ptr [ebp - 2a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 C2 B3 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb3
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 45 FF FF FF: jmp 0x586aab19
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x586aabdf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D BF 00 00 00: jge 0x586aaca8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 14 64 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x64
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 4F: je 0x586aac55
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 1f4h
        push ecx
        mov edx, dword ptr [ebp - 14h]
        sub edx, 5
        imul eax, edx, 0eh
        mov ecx, 0fah
        sub ecx, eax
        push ecx
        mov edx, dword ptr [ebp - 14h]
        sub edx, 5
        imul eax, edx, 28h
        add eax, 122h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 63 4C E5 FF: call 0x584ff8b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x4c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aac5f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 2ach], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ach]
        mov dword ptr [eax + edx*4 + 0f8h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0f8h]
        mov dword ptr [ebp - 2b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 EE B2 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xb2
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2E FF FF FF: jmp 0x586aabd6
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 86 01 00 00: mov word ptr [eax + 0x186], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 88 01 00 00: mov word ptr [edx + 0x188], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 178h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 179h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 180h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 190h], 0
        push 5
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 17ah
        push ecx
        ; Exact mapped bytes E8 0F 21 1A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x21
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 82 B2 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 9ch], 0
        push 20h
        ; Exact mapped bytes E8 C4 62 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x62
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 2D: je 0x586aad83
        __asm _emit 0x74
        __asm _emit 0x2d
        push 9
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 9D DD FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x9d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        mov eax, dword ptr [ebp - 2b4h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 A5 2C EC FF: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x2c
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aad8d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 2b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes 89 15 D4 70 94 58: mov dword ptr [0x589470d4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        push 60h
        ; Exact mapped bytes E8 54 62 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x62
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 1D: je 0x586aade3
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        push -0ah
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 85 48 E5 FF: call 0x584ff660
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aaded
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov eax, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 2bch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes 89 0D D0 70 94 58: mov dword ptr [0x589470d0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        push 7ch
        ; Exact mapped bytes E8 F4 61 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x61
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 27: je 0x586aae4d
        __asm _emit 0x74
        __asm _emit 0x27
        push 2328h
        push 0
        push 0
        push 50h
        push 12ch
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 9B 13 08 00: call 0x5872c1e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x13
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aae57
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 2c0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2c0h]
        mov dword ptr [ecx + 194h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 2c4h], ecx
        push 2710h
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 EB AF DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 7ch
        ; Exact mapped bytes E8 67 61 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x61
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 27: je 0x586aaeda
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 0fah
        push 186h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 4E 29 00 00: call 0x586ad820
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aaee4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 2c8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2c8h]
        mov dword ptr [ecx + 0c8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 2cch], ecx
        push 2710h
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 5E AF DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 198h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 19ch], 0
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
