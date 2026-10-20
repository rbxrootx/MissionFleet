// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58687360 .. +0x18F2 bytes.
extern "C" __declspec(naked) void FUN_58687360_58687360() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888a22ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2d4h
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
        ; Exact mapped bytes E8 84 88 FF FF: call 0x5867fc30
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b00d4h
        push 54h
        ; Exact mapped bytes E8 41 9C 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x9c
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 43: je 0x58687416
        __asm _emit 0x74
        __asm _emit 0x43
        push 0
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 D7 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xd7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 7d0h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0bah
        push eax
        mov ecx, dword ptr [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0F AF DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868741d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [eax + edx + 0a8h], ecx
        push 54h
        ; Exact mapped bytes E8 BB 9B 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9b
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 44: je 0x5868749d
        __asm _emit 0x74
        __asm _emit 0x44
        push 1
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA D6 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 7d0h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0bah
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 88 AE DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xae
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x586874a4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 110h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [eax + edx + 0a8h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0a8h]
        mov dword ptr [ebp - 114h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 BF E0 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a8h]
        mov dword ptr [ebp - 118h], eax
        push 96h
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 27 E0 12 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a8h]
        mov dword ptr [ebp - 11ch], eax
        push 96h
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 FF DF 12 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xdf
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 BB 9A 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9a
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 3E: je 0x58687597
        __asm _emit 0x74
        __asm _emit 0x3e
        push 2
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA D5 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0bb8h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8E AD DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xad
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868759e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [eax + edx + 0b0h], ecx
        push 54h
        ; Exact mapped bytes E8 3A 9A 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9a
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 3E: je 0x58687618
        __asm _emit 0x74
        __asm _emit 0x3e
        push 3
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 D5 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0bb8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 128h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0D AD DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xad
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868761f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 12ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [eax + edx + 0b0h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0b0h]
        mov dword ptr [ebp - 130h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 44 DF 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xdf
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 90 99 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x99
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 43: je 0x586876c7
        __asm _emit 0x74
        __asm _emit 0x43
        push 0fh
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F D4 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd4
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c1ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 37h
        push edx
        mov eax, dword ptr [ebp - 134h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 4E F1 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf1
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586876ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 138h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [edx + ecx + 0b8h], eax
        push 58h
        ; Exact mapped bytes E8 0A 99 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x99
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 44: je 0x5868774e
        __asm _emit 0x74
        __asm _emit 0x44
        push 0eh
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 D3 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd3
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0c1ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 37h
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C7 F0 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58687755
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 140h]
        mov dword ptr [edx + ecx + 0b8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 144h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 0E DE 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xde
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 148h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 E6 DD 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xdd
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 14ch], edx
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 61 7D E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x7d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 150h], edx
        push 0
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 3C 7D E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x7d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 154h], eax
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 A7 E6 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xe6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 158h], eax
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 82 E6 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe6
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 9E 97 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x97
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 44: je 0x586878ba
        __asm _emit 0x74
        __asm _emit 0x44
        push 0dh
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D D2 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd2
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0c1ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 37h
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 5B EF DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xef
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586878c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 160h]
        mov dword ptr [eax + edx + 0c0h], ecx
        push 58h
        ; Exact mapped bytes E8 17 97 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x97
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 44: je 0x58687941
        __asm _emit 0x74
        __asm _emit 0x44
        push 0ch
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 D1 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd1
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0c1ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 37h
        push ecx
        mov edx, dword ptr [ebp - 164h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 D4 EE DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xee
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58687948
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
        mov dword ptr [eax + edx + 0c0h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 16ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 1B DC 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 170h], edx
        push 101h
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 F3 DB 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xdb
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0c0h]
        mov dword ptr [ebp - 174h], eax
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 6E 7B E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0c0h]
        mov dword ptr [ebp - 178h], eax
        push 0
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 49 7B E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7b
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 F5 95 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x95
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 44: je 0x58687a63
        __asm _emit 0x74
        __asm _emit 0x44
        push 13h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 D0 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0c1ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 37h
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B2 ED DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xed
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58687a6a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 180h]
        mov dword ptr [eax + edx + 0c8h], ecx
        push 58h
        ; Exact mapped bytes E8 6E 95 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x95
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 44: je 0x58687aea
        __asm _emit 0x74
        __asm _emit 0x44
        push 12h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D D0 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0c1ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 37h
        push ecx
        mov edx, dword ptr [ebp - 184h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 2B ED DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xed
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58687af1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 188h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 188h]
        mov dword ptr [eax + edx + 0c8h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0c8h]
        mov dword ptr [ebp - 18ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 72 DA 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xda
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0c8h]
        mov dword ptr [ebp - 190h], edx
        push 101h
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 4A DA 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xda
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0c8h]
        mov dword ptr [ebp - 194h], eax
        push 0
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 C5 79 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x79
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0c8h]
        mov dword ptr [ebp - 198h], eax
        push 0
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 A0 79 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x79
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0c8h]
        mov dword ptr [ebp - 19ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 0B E3 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe3
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0c8h]
        mov dword ptr [ebp - 1a0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 E6 E2 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe2
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 02 94 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 44: je 0x58687c56
        __asm _emit 0x74
        __asm _emit 0x44
        push 11h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 CE DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xce
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0c1ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 37h
        push ecx
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 BF EB DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xeb
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58687c5d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 1a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1a8h]
        mov dword ptr [ecx + eax + 0d0h], edx
        push 58h
        ; Exact mapped bytes E8 7B 93 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x93
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 43: je 0x58687cdc
        __asm _emit 0x74
        __asm _emit 0x43
        push 10h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A CE DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xce
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c1ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 37h
        push edx
        mov eax, dword ptr [ebp - 1ach]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 39 EB DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xeb
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x58687ce3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 1b0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b0h]
        mov dword ptr [ecx + eax + 0d0h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 1b4h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 80 D8 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 1b8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 58 D8 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 1bch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 D3 77 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x77
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 1c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 AE 77 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x77
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 5A 92 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x92
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 47: je 0x58687e01
        __asm _emit 0x74
        __asm _emit 0x47
        push 15h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 CD DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xcd
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0c1ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0c8h
        push ecx
        mov edx, dword ptr [ebp - 1c4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 14 EA DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x58687e08
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 1c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1c8h]
        mov dword ptr [ecx + eax + 0d8h], edx
        push 58h
        ; Exact mapped bytes E8 D0 91 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x91
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 46: je 0x58687e8a
        __asm _emit 0x74
        __asm _emit 0x46
        push 14h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F CC DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xcc
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c1ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp - 1cch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 8B E9 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58687e91
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 1d0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1d0h]
        mov dword ptr [ecx + eax + 0d8h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0d8h]
        mov dword ptr [ebp - 1d4h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 D2 D6 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd6
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0d8h]
        mov dword ptr [ebp - 1d8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 AA D6 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd6
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0d8h]
        mov dword ptr [ebp - 1dch], ecx
        push 96h
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 12 D6 12 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd6
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0d8h]
        mov dword ptr [ebp - 1e0h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 EA D5 12 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd5
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0d8h]
        mov dword ptr [ebp - 1e4h], edx
        push 0
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 D5 75 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x75
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0d8h]
        mov dword ptr [ebp - 1e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 B0 75 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x75
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 5C 90 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 4C: je 0x5868800a
        __asm _emit 0x74
        __asm _emit 0x4c
        push 17h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 CB DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xcb
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c1ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0cdh
        push edx
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 0E E8 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58688014
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 1f0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1f0h]
        mov dword ptr [edx + ecx + 0e0h], eax
        push 58h
        ; Exact mapped bytes E8 C1 8F 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8f
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 4C: je 0x586880a5
        __asm _emit 0x74
        __asm _emit 0x4c
        push 16h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A CA DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xca
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0c1ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 7
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0cdh
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 73 E7 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586880af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 1f8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1f8h]
        mov dword ptr [edx + ecx + 0e0h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0e0h]
        mov dword ptr [ebp - 1fch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 B1 D4 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd4
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0e0h]
        mov dword ptr [ebp - 200h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 89 D4 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd4
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 204h], edx
        push 96h
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 F1 D3 12 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd3
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 208h], edx
        push 96h
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 C9 D3 12 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd3
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 20ch], eax
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 B4 73 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x73
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 210h], eax
        push 0
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 8F 73 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x73
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 3B 8E 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 4C: je 0x5868822b
        __asm _emit 0x74
        __asm _emit 0x4c
        push 19h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 C8 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0c1ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 59h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0cdh
        push eax
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 ED E5 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58688235
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 218h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 218h]
        mov dword ptr [ecx + 0e8h], edx
        push 58h
        ; Exact mapped bytes E8 A9 8D 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x8d
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 4C: je 0x586882bd
        __asm _emit 0x74
        __asm _emit 0x4c
        push 18h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 C8 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c1ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 59h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0cdh
        push edx
        mov eax, dword ptr [ebp - 21ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 5B E5 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586882c7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 220h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 220h]
        mov dword ptr [eax + 0ech], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 224h], eax
        push 0
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 4E 72 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x72
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 228h], edx
        push 0
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 32 72 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x72
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 DE 8C 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8c
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 4C: je 0x58688388
        __asm _emit 0x74
        __asm _emit 0x4c
        push 19h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 C7 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c1ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 59h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0f4h
        push edx
        mov eax, dword ptr [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 90 E4 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58688392
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 230h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 230h]
        mov dword ptr [eax + 0f0h], ecx
        push 58h
        ; Exact mapped bytes E8 4C 8C 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8c
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 4D: je 0x5868841b
        __asm _emit 0x74
        __asm _emit 0x4d
        push 18h
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 C6 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0c1ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 59h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0f4h
        push ecx
        mov edx, dword ptr [ebp - 234h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 FD E3 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe3
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58688425
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 238h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 238h]
        mov dword ptr [edx + 0f4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 23ch], edx
        push 0
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 F0 70 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x70
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 240h], ecx
        push 0
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 D4 70 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x70
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 80 8B 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x8b
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 70: je 0x5868850a
        __asm _emit 0x74
        __asm _emit 0x70
        push 1
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 C6 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 248h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0fa0h
        push ecx
        push 30ch
        mov edx, dword ptr [ebp + 0ch]
        add edx, 134h
        push edx
        mov eax, dword ptr [ebp - 244h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 248h]
        push edx
        mov eax, dword ptr [ebp - 24ch]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 EE 7D E1 FF: call 0x584a02f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x7d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58688514
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 250h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 250h]
        mov dword ptr [edx + 0f8h], eax
        push 0ach
        ; Exact mapped bytes E8 C7 8A 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8a
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 6F: je 0x586885c2
        __asm _emit 0x74
        __asm _emit 0x6f
        push 3
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 C5 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 258h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 25ch], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0dach
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1dh
        push edx
        mov eax, dword ptr [ebp - 254h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 258h]
        push edx
        mov eax, dword ptr [ebp - 25ch]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 A6 2F E4 FF: call 0x584cb560
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586885cc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov ecx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 260h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 260h]
        mov dword ptr [edx + 0fch], eax
        push 0ach
        ; Exact mapped bytes E8 0F 8A 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x8a
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 72: je 0x5868867d
        __asm _emit 0x74
        __asm _emit 0x72
        push 4
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 C4 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc4
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
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
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0dach
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8fh
        push edx
        mov eax, dword ptr [ebp - 264h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 268h]
        push edx
        mov eax, dword ptr [ebp - 26ch]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 EB 2E E4 FF: call 0x584cb560
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x2e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58688687
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 270h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 270h]
        mov dword ptr [edx + 100h], eax
        push 0ach
        ; Exact mapped bytes E8 54 89 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x89
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 6F: je 0x58688735
        __asm _emit 0x74
        __asm _emit 0x6f
        push 5
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD C3 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc3
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 278h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 27ch], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0dach
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 75h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 39h
        push edx
        mov eax, dword ptr [ebp - 274h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 278h]
        push edx
        mov eax, dword ptr [ebp - 27ch]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 33 2E E4 FF: call 0x584cb560
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x2e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868873f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 280h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 280h]
        mov dword ptr [edx + 104h], eax
        push 0ach
        ; Exact mapped bytes E8 9C 88 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 6F: je 0x586887ed
        __asm _emit 0x74
        __asm _emit 0x6f
        push 6
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 C3 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc3
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 288h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28ch], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0dach
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 76h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 6eh
        push edx
        mov eax, dword ptr [ebp - 284h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        push edx
        mov eax, dword ptr [ebp - 28ch]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 7B 2D E4 FF: call 0x584cb560
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2d
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586887f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov ecx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 290h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 290h]
        mov dword ptr [edx + 108h], eax
        push 0ach
        ; Exact mapped bytes E8 E4 87 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 72: je 0x586888a8
        __asm _emit 0x74
        __asm _emit 0x72
        push 0ah
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D C2 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc2
        __asm _emit 0xdf
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
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0dach
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 50h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 114h
        push edx
        mov eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 298h]
        push edx
        mov eax, dword ptr [ebp - 29ch]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 C0 2C E4 FF: call 0x584cb560
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586888b2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov ecx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 2a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2a0h]
        mov dword ptr [edx + 10ch], eax
        push 0ach
        ; Exact mapped bytes E8 29 87 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 72: je 0x58688963
        __asm _emit 0x74
        __asm _emit 0x72
        push 0bh
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 C1 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc1
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2a8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2ach], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0dach
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 74h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 114h
        push edx
        mov eax, dword ptr [ebp - 2a4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2a8h]
        push edx
        mov eax, dword ptr [ebp - 2ach]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 05 2C E4 FF: call 0x584cb560
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868896d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 2b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2b0h]
        mov dword ptr [edx + 110h], eax
        push 0ach
        ; Exact mapped bytes E8 6E 86 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x86
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 75: je 0x58688a21
        __asm _emit 0x74
        __asm _emit 0x75
        push 7
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 C1 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc1
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2b8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2bch], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0dach
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 8ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0cch
        push edx
        mov eax, dword ptr [ebp - 2b4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2b8h]
        push edx
        mov eax, dword ptr [ebp - 2bch]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 47 2B E4 FF: call 0x584cb560
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2b
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58688a2b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 2c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2c0h]
        mov dword ptr [edx + 114h], eax
        push 0ach
        ; Exact mapped bytes E8 B0 85 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 72: je 0x58688adc
        __asm _emit 0x74
        __asm _emit 0x72
        push 8
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 C0 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2c4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2c8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2cch], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0dach
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 39h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0cah
        push edx
        mov eax, dword ptr [ebp - 2c4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2c8h]
        push edx
        mov eax, dword ptr [ebp - 2cch]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 8C 2A E4 FF: call 0x584cb560
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58688ae6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 2d0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2d0h]
        mov dword ptr [edx + 118h], eax
        push 0ach
        ; Exact mapped bytes E8 F5 84 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 72: je 0x58688b97
        __asm _emit 0x74
        __asm _emit 0x72
        push 9
        ; Exact mapped bytes 8B 0D 90 07 96 58: mov ecx, dword ptr [0x58960790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E BF DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xbf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2d8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2dch], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0dach
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 39h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0f0h
        push edx
        mov eax, dword ptr [ebp - 2d4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2d8h]
        push edx
        mov eax, dword ptr [ebp - 2dch]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 D1 29 E4 FF: call 0x584cb560
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x29
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58688ba1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 2e0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2e0h]
        mov dword ptr [edx + 11ch], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C6 D3 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd3
        __asm _emit 0xdf
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffdh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 120h], 1
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
