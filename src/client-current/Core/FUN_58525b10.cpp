// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58525B10 .. +0x1583 bytes.
extern "C" __declspec(naked) void FUN_58525b10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58881cb5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 23ch
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
        ; Exact mapped bytes E8 14 C7 F5 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc7
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        ; Exact mapped bytes E8 B8 15 00 00: call 0x58527130
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a6fd8h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 588a7018h
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 64h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11e68h
        ; Exact mapped bytes E8 60 FD 05 00: call 0x58585900
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 200h
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 11a68h
        push edx
        ; Exact mapped bytes E8 56 72 32 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x72
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        add eax, 12164h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 58533d50h
        push 0
        push 0
        ; Exact mapped bytes E8 95 23 33 00: call 0x58857f6f
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x23
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 12158h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 24ch], 0ffffffffh
        push 100h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 148h
        push ecx
        ; Exact mapped bytes E8 07 72 32 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x72
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 2710h
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 03 F6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 DD B3 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb3
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 1F: je 0x58525c56
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        sub eax, 0fh
        push eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 CF C6 F5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc6
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58525c5d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0e8h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [eax + 121b8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 121b8h]
        mov dword ptr [ebp - 0ech], eax
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 4B 02 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0xf6
        __asm _emit 0xff
        push 178h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11f9ch
        push ecx
        ; Exact mapped bytes E8 65 71 32 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x71
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        push 198h
        ; Exact mapped bytes E8 4C B3 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb3
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 16: je 0x58525cde
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a6388h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D7 A6 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa6
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58525ce5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0f0h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [eax + 78h], ecx
        push 0
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 FB CB 30 00: call 0x58832907
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcb
        __asm _emit 0x30
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12140h], eax
        push 198h
        ; Exact mapped bytes E8 E5 B2 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb2
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 14: je 0x58525d43
        __asm _emit 0x74
        __asm _emit 0x14
        push 0
        push 588a6398h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 12 0A 29 00: call 0x587b6750
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58525d4a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0f4h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f4h]
        mov dword ptr [eax + 7ch], ecx
        push 198h
        ; Exact mapped bytes E8 97 B2 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb2
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 14: je 0x58525d91
        __asm _emit 0x74
        __asm _emit 0x14
        push 0
        push 588a63ach
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C4 09 29 00: call 0x587b6750
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58525d98
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0f8h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [eax + 80h], ecx
        push 6ch
        ; Exact mapped bytes E8 49 B2 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb2
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 1C: je 0x58525de7
        __asm _emit 0x74
        __asm _emit 0x1c
        movzx edx, word ptr [ebp + 1ch]
        push edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 1E EB 00 00: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58525dee
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0fch], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [edx + 0b0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 100h], edx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 7A FF F5 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 D6 B1 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb1
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 1C: je 0x58525e5a
        __asm _emit 0x74
        __asm _emit 0x1c
        movzx eax, word ptr [ebp + 1ch]
        push eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 CB C4 F5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x58525e61
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 104h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [eax + 0b4h], ecx
        push 54h
        ; Exact mapped bytes E8 80 B1 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb1
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 1F: je 0x58525eb3
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        sub edx, 5
        push edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 72 C4 F5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58525eba
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 108h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 108h]
        mov dword ptr [edx + 0b8h], eax
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58525ee8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 62: jge 0x58525f50
        __asm _emit 0x7d
        __asm _emit 0x62
        push 54h
        ; Exact mapped bytes E8 0F B1 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 22: je 0x58525f27
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        sub edx, 0ah
        push edx
        push 69h
        push 0a5h
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 FE C3 F5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58525f2e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 10ch], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [eax + edx*4 + 0c4h], ecx
        ; Exact mapped bytes EB 8F: jmp 0x58525edf
        __asm _emit 0xeb
        __asm _emit 0x8f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 110h], eax
        push 101h
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 41 F6 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf6
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 114h], edx
        push 0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 B5 F5 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf5
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 118h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 06 F6 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf6
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 11ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 DE F5 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf5
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 120h], edx
        push 101h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 B6 F5 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf5
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 124h], ecx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 2A F5 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf5
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 128h], eax
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 0E FE F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 12ch], edx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 F2 FD F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58526061
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 23: jge 0x5852608a
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0c4h]
        mov dword ptr [ebp - 130h], eax
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 B9 FD F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58526058
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1211ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 12120h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 12124h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1212ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 12128h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0B FE F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 12124h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 98h], 40000000h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 94h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12118h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 12144h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 12148h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], 0
        push 54h
        ; Exact mapped bytes E8 8F AE 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xae
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 1C: je 0x585261a1
        __asm _emit 0x74
        __asm _emit 0x1c
        movzx eax, word ptr [ebp - 18h]
        push eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 84 C1 F5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585261a8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 134h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [edx + ecx + 0d0h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 138h], ecx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 EE FC F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 0A AE 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xae
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 1C: je 0x58526226
        __asm _emit 0x74
        __asm _emit 0x1c
        movzx edx, word ptr [ebp - 18h]
        push edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 FF C0 F5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852622d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 13ch], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [eax + edx + 0d0h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 140h], ecx
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 69 FC F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 10ch
        ; Exact mapped bytes E8 82 AD 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xad
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 3A: je 0x585262cc
        __asm _emit 0x74
        __asm _emit 0x3a
        push 10101h
        push 0
        push 0ffffffh
        push 260h
        push 221h
        push 254h
        push 154h
        ; Exact mapped bytes 8B 15 3C 20 96 58: mov edx, dword ptr [0x5896203c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 C9 9A FA FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585262d3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 144h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [edx + 12134h], eax
        push 9ch
        ; Exact mapped bytes E8 0B AD 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xad
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 38: je 0x58526341
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        push 0ffffffh
        push 260h
        push 271h
        push 254h
        push 200h
        ; Exact mapped bytes 8B 0D 3C 20 96 58: mov ecx, dword ptr [0x5896203c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 C7 CA 29 00: call 0x587c2e00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xca
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852634b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 148h]
        mov dword ptr [ecx + 12138h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12138h]
        mov dword ptr [ebp - 14ch], ecx
        push 10101h
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 87 FB F5 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12134h]
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 2710h
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 D2 FA F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfa
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12138h]
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 2710h
        push ecx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 AD FA F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xfa
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12134h]
        mov dword ptr [ebp - 158h], eax
        push 18h
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 01 5D F8 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12138h]
        mov dword ptr [ebp - 15ch], edx
        push 1eh
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 95 D4 00 00: call 0x585338a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12134h]
        mov dword ptr [ebp - 160h], ecx
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 B9 F9 F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12138h]
        mov dword ptr [ebp - 164h], eax
        push 0
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 9D F9 F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12134h]
        mov dword ptr [ebp - 168h], edx
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 81 FA F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12138h]
        mov dword ptr [ebp - 16ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 65 FA F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 184h
        ; Exact mapped bytes E8 7E AB 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xab
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 3D: je 0x585264d9
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0
        push 0
        push 0dcdcdch
        push 21ch
        push 320h
        push 1f8h
        push 122h
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
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 2F 7B FA FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585264e3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 170h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 170h]
        mov dword ptr [edx + 1213ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1213ch]
        mov dword ptr [ebp - 174h], edx
        push 2710h
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 5F F9 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1213ch]
        mov dword ptr [ebp - 178h], ecx
        push 32h
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 43 7F FA FF: call 0x584ce480
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 BC AA 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xaa
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 3B: je 0x58526599
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0
        push 0
        push 0ffffffh
        push 245h
        push 2deh
        push 1f9h
        push 123h
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 3F 9D 29 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x9d
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585265a3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 17ch], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 17ch]
        mov dword ptr [edx + 12150h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12150h]
        mov dword ptr [ebp - 180h], edx
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 B2 F9 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12150h]
        mov dword ptr [ebp - 184h], ecx
        push 10101h
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 13 F9 F5 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12150h]
        mov dword ptr [ebp - 188h], eax
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 C7 F7 F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12150h]
        mov dword ptr [ebp - 18ch], edx
        push 2710h
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 48 F8 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x5852664b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 20h
        ; Exact mapped bytes 0F 8D DB 00 00 00: jge 0x58526730
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 A8 A9 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa9
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 25: je 0x58526697
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 1
        push ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 91 BC F5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xbc
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585266a1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 190h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 190h]
        mov dword ptr [edx + ecx*4 + 11f1ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11f1ch]
        mov dword ptr [ebp - 194h], eax
        push 0
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 FC F7 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf7
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11f1ch]
        mov dword ptr [ebp - 198h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 A9 EE 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xee
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11f1ch]
        mov dword ptr [ebp - 19ch], eax
        push 80h
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 16 EE 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xee
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 12 FF FF FF: jmp 0x58526642
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58526742
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 80h
        ; Exact mapped bytes 7D 24: jge 0x5852676f
        __asm _emit 0x7d
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 11c68h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 11a68h], 0
        ; Exact mapped bytes EB CA: jmp 0x58526739
        __asm _emit 0xeb
        __asm _emit 0xca
        push 198h
        ; Exact mapped bytes E8 8B A8 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 1C: je 0x585267ab
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a63c0h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 0D 9C 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585267b5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 1a0h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes 89 0D 6C 75 94 58: mov dword ptr [0x5894756c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 29 A8 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa8
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852680d
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a63d4h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 AB 9B 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x9b
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x58526817
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 1a4h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1a4h]
        mov dword ptr [eax + 121bch], ecx
        mov dword ptr [ebp - 1b0h], 1
        push 90h
        ; Exact mapped bytes E8 BA A7 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa7
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 42: je 0x585268a2
        __asm _emit 0x74
        __asm _emit 0x42
        push 0abh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 E2 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe2
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        push 40h
        push 2bch
        push 1e3h
        mov edx, dword ptr [ebp - 1a8h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 20h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 76 08 FC FF: call 0x584e7110
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585268ac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 1ach], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ach]
        mov dword ptr [edx + 12130h], eax
        cmp dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes 0F 84 4B 02 00 00: je 0x58526b23
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 25 A7 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa7
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 4F: je 0x58526944
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 121bch]
        mov dword ptr [ebp - 1b4h], edx
        push 7
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 BF E1 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        sub eax, 0bh
        push eax
        push 0fch
        push 50h
        mov ecx, dword ptr [ebp - 1b8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 D4 FE F5 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852694e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 1bch], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [eax + edx + 121c0h], ecx
        push 58h
        ; Exact mapped bytes E8 87 A6 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 4F: je 0x585269e2
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 121bch]
        mov dword ptr [ebp - 1c0h], eax
        push 6
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 21 E1 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        sub ecx, 0bh
        push ecx
        push 0fch
        push 50h
        mov edx, dword ptr [ebp - 1c4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 36 FE F5 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585269ec
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 1c8h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1c8h]
        mov dword ptr [eax + edx + 121c0h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 121c0h]
        mov dword ptr [ebp - 1cch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 74 EB 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xeb
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 121c0h]
        mov dword ptr [ebp - 1d0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 4C EB 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 121c0h]
        mov dword ptr [ebp - 1d4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 B7 EA 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 121c0h]
        mov dword ptr [ebp - 1d8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 92 EA 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xea
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 121c0h]
        mov dword ptr [ebp - 1dch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 7D 8A F7 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 121c0h]
        mov dword ptr [ebp - 1e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 E8 F3 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 121c0h]
        mov dword ptr [ebp - 1e4h], edx
        push 0
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 C3 F3 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf3
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 40 02 00 00: jmp 0x58526d63
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 DA A4 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa4
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 4C: je 0x58526b8c
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 121bch]
        mov dword ptr [ebp - 1e8h], ecx
        push 7
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 74 DF F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xdf
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        sub edx, 0bh
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 8C FC F5 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58526b96
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 1f0h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1f0h]
        mov dword ptr [edx + ecx + 121c0h], eax
        push 58h
        ; Exact mapped bytes E8 3F A4 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa4
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 4C: je 0x58526c27
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 121bch]
        mov dword ptr [ebp - 1f4h], edx
        push 6
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 D9 DE F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xde
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        sub eax, 0bh
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1f8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 F1 FB F5 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58526c31
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 1fch], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1fch]
        mov dword ptr [edx + ecx + 121c0h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 121c0h]
        mov dword ptr [ebp - 200h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 2F E9 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 121c0h]
        mov dword ptr [ebp - 204h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 07 E9 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 121c0h]
        mov dword ptr [ebp - 208h], edx
        push 0
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 72 E8 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 121c0h]
        mov dword ptr [ebp - 20ch], edx
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 4D E8 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 121c0h]
        mov dword ptr [ebp - 210h], edx
        push 1
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 38 88 F7 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x88
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 121c0h]
        mov dword ptr [ebp - 214h], eax
        push 0
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 A3 F1 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 121c0h]
        mov dword ptr [ebp - 218h], eax
        push 0
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 7E F1 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12130h]
        mov dword ptr [ebp - 21ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 2E E8 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12130h]
        mov dword ptr [ebp - 220h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 6F 7F F9 FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12130h]
        mov dword ptr [ebp - 224h], eax
        push 0
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 83 F0 F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12130h]
        mov dword ptr [ebp - 228h], edx
        push 0
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 67 E7 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe7
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12130h]
        mov dword ptr [ebp - 22ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 6B B2 00 00: call 0x58532060
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12130h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 12130h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12ch], 4bh
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E8 CA D8 F9 FF: call 0x584c46f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd8
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 24 01 00 00: mov word ptr [ecx + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58526e42
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 124h]
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 0F 8D FB 00 00 00: jge 0x58526f50
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 A8 A1 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 4B: je 0x58526ebd
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 230h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 93 DC F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xdc
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 1
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 234h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 6B B4 F5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58526ec7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 238h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 238h]
        mov dword ptr [ecx + eax*4 + 0e4h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e4h]
        mov dword ptr [ebp - 23ch], edx
        push 0
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 96 EE F5 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e4h]
        mov dword ptr [ebp - 240h], edx
        push 0
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 16 E6 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe6
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e4h]
        mov dword ptr [ebp - 244h], edx
        push 0
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 96 EF F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xef
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E9 FE FF FF: jmp 0x58526e39
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 124h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 09: jmp 0x58526f68
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 10h
        ; Exact mapped bytes 7D 13: jge 0x58526f81
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 0e4h], 0
        ; Exact mapped bytes EB DE: jmp 0x58526f5f
        __asm _emit 0xeb
        __asm _emit 0xde
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 128h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 121a8h], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 AC 21 01 00: mov word ptr [ecx + 0x121ac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 138h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 144h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 140h], 0
        ; Exact mapped bytes 83 3D C4 79 94 58 00: cmp dword ptr [0x589479c4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 55: jne 0x58527040
        __asm _emit 0x75
        __asm _emit 0x55
        push 34h
        ; Exact mapped bytes E8 12 A0 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa0
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 13: je 0x5852701b
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 5D F1 F9 FF: call 0x584c6170
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58527025
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov edx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 248h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 248h]
        ; Exact mapped bytes A3 C4 79 94 58: mov dword ptr [0x589479c4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 13ch], 0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x5852705f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 13: jge 0x58527078
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 11a60h], 0
        ; Exact mapped bytes EB DE: jmp 0x58527056
        __asm _emit 0xeb
        __asm _emit 0xde
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
        ret 18h
    }
}
