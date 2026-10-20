// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FC38D .. +0x5B4 bytes.
extern "C" __declspec(naked) void FUN_004fc38d_004FC38D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a0h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0a0h], ecx
        push 56bh
        push 674fe8h
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        ; Exact mapped bytes E8 AB DE FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0a0h]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 7E 0C: jle 0x4fc3cd
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 0a0h]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 7F 14: jg 0x4fc3e1
        __asm _emit 0x7f
        __asm _emit 0x14
        push 56ch
        push 674fe8h
        ; Exact mapped bytes E8 64 C9 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fc3e1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CE: jne 0x4fc3b5
        __asm _emit 0x75
        __asm _emit 0xce
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D8 5D 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 CB 5F 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 58 F7 02 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 64h]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax + 60h]
        neg ecx
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 CB 60 03 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 9C 5D 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 92 08 01 00 00: call dword ptr [edx + 0x108]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5B 5E 03 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 78h]
        push edx
        ; Exact mapped bytes E8 AF F9 FF FF: call 0x4fbe1e
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 45 5E 03 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        ; Exact mapped bytes E8 83 F9 FF FF: call 0x4fbe1e
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 68h]
        add eax, 1
        imul ecx, eax
        add ecx, 1
        push ecx
        ; Exact mapped bytes FF 15 A8 BE 68 00: call dword ptr [0x68bea8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 2B 0D 10 6E 68 00: sub ecx, dword ptr [0x686e10]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 1ch]
        sub edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 2B 15 10 6E 68 00: sub edx, dword ptr [0x686e10]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0a0h]
        cmp dword ptr [eax + 70h], 0
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x4fc5a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a0h]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x4fc5a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ea20h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 60 98 FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 14: jne 0x4fc52e
        __asm _emit 0x75
        __asm _emit 0x14
        push 587h
        push 674fe8h
        ; Exact mapped bytes E8 17 C8 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fc52e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4fc514
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 4C FD FF FF: call 0x4fc28b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        neg eax
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov eax, dword ptr [ebp - 4ch]
        neg eax
        sbb eax, eax
        and eax, 8
        add eax, 8
        push eax
        push 18h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 FA 9D FD FF: call 0x4d635c
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4fc570
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 3F FA 02 00: call 0x52bfaf
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 1D A3 FD FF: call 0x4d6899
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 03 0D 10 6E 68 00: add ecx, dword ptr [0x686e10]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 03 15 10 6E 68 00: add edx, dword ptr [0x686e10]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 62 FB FF FF: call 0x4fc109
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0a0h]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x4fc6b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes 03 0D 10 6E 68 00: add ecx, dword ptr [0x686e10]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 03 05 10 6E 68 00: add eax, dword ptr [0x686e10]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 09: jmp 0x4fc5ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 1
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [ebp - 54h]
        cmp eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 0F 8D B2 00 00 00: jge 0x4fc6b1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 0ea00h
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 5D 97 FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 75 14: jne 0x4fc631
        __asm _emit 0x75
        __asm _emit 0x14
        push 5a0h
        push 674fe8h
        ; Exact mapped bytes E8 14 C7 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fc631
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4fc617
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 54h]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [edx + eax + 8]
        mov dword ptr [ebp - 68h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 75 26: jne 0x4fc679
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [ecx + 6ch]
        cmp eax, dword ptr [edx + 44h]
        ; Exact mapped bytes 7D 12: jge 0x4fc679
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 68h]
        sub edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 68h], edx
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        lea edx, [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 71 FA FF FF: call 0x4fc109
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [ebp - 68h]
        add ecx, dword ptr [eax + 58h]
        mov edx, dword ptr [ebp - 5ch]
        add edx, ecx
        mov dword ptr [ebp - 5ch], edx
        ; Exact mapped bytes E9 33 FF FF FF: jmp 0x4fc5e4
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0a0h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x4fc7bb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 4ch]
        ; Exact mapped bytes 03 15 10 6E 68 00: add edx, dword ptr [0x686e10]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 03 05 10 6E 68 00: add eax, dword ptr [0x686e10]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 74h], ecx
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4fc6f7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 6ch]
        add edx, 1
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [ebp - 6ch]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 0F 8D B2 00 00 00: jge 0x4fc7bb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6ch]
        add edx, 0ea10h
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 53 96 FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 75 14: jne 0x4fc73b
        __asm _emit 0x75
        __asm _emit 0x14
        push 5b1h
        push 674fe8h
        ; Exact mapped bytes E8 0A C6 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fc73b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fc721
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 6ch]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 7ch]
        mov ecx, dword ptr [eax + ecx + 8]
        mov dword ptr [ebp - 80h], ecx
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 75 26: jne 0x4fc783
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [edx + 68h]
        cmp ecx, dword ptr [eax + 40h]
        ; Exact mapped bytes 7D 12: jge 0x4fc783
        __asm _emit 0x7d
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 74h]
        add edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 80h]
        sub eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 80h], eax
        push 1
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        lea eax, [ebp - 48h]
        push eax
        ; Exact mapped bytes E8 67 F9 FF FF: call 0x4fc109
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ebp - 80h]
        add edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ebp - 74h]
        add eax, edx
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes E9 33 FF FF FF: jmp 0x4fc6ee
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 88h], ecx
        mov dword ptr [ebp - 84h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4fc7df
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 84h]
        add edx, 1
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [ebp - 84h]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 0F 8D 02 01 00 00: jge 0x4fc8f6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 84h]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ecx + edx + 8]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 90h], eax
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x4fc834
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [ebp - 8ch]
        cmp eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 0F 8D 8B 00 00 00: jge 0x4fc8d4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8ch]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 7ch]
        mov ecx, dword ptr [eax + ecx + 8]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 CE D0 FF FF: call 0x4f994c
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        lea eax, [ebp - 48h]
        push eax
        ; Exact mapped bytes E8 57 F8 FF FF: call 0x4fc109
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ebp - 9ch]
        add edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ebp - 90h]
        add eax, edx
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x4fc825
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ebp - 94h]
        add edx, dword ptr [ecx + 58h]
        mov eax, dword ptr [ebp - 88h]
        add eax, edx
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes E9 DA FE FF FF: jmp 0x4fc7d0
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 0E: je 0x4fc90a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes FF 15 B0 BE 68 00: call dword ptr [0x68beb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4fc91c
        __asm _emit 0x75
        __asm _emit 0x12
        push 6752b4h
        push 6752ech
        ; Exact mapped bytes E8 FC 3C FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 92 18 01 00 00: call dword ptr [edx + 0x118]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
