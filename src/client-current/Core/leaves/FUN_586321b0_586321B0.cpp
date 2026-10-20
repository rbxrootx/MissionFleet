// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586321B0 .. +0x1FC7 bytes.
extern "C" __declspec(naked) void FUN_586321b0_586321B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58887c08h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 3a8h
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
        ; Exact mapped bytes E8 74 00 E5 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588aeeb4h
        push 198h
        ; Exact mapped bytes E8 EE ED 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xed
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x5863223c
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588aed08h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 79 E1 14 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xe1
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58632243
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 170h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 170h]
        mov dword ptr [edx + 60h], eax
        push 54h
        ; Exact mapped bytes E8 A1 ED 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xed
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 44: je 0x586322b7
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 174h], edx
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 94 28 E5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 178h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6E 00 E5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586322be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 17ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 17ch]
        mov dword ptr [eax + 64h], ecx
        push 54h
        ; Exact mapped bytes E8 26 ED 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xed
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 44: je 0x58632332
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 180h], eax
        push 1
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 19 28 E5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F3 FF E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58632339
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 188h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 188h]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 18ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 42 32 18 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x32
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 190h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 26 32 18 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x32
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5863239d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 6F 02 00 00: jge 0x58632616
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 53 EC 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 7B: je 0x5863243c
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 194h], eax
        push 4
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 F6 26 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x26
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 19ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a0h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        imul ecx, dword ptr [ebp - 14h], 0fh
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 92h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 166h
        push ecx
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        push ecx
        mov edx, dword ptr [ebp - 1a0h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A9 98 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x98
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58632443
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 1a4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1a4h]
        mov dword ptr [edx + ecx*4 + 6ch], eax
        push 0ach
        ; Exact mapped bytes E8 9A EB 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xeb
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 79: je 0x586324f3
        __asm _emit 0x74
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1a8h], edx
        push 3
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 3D 26 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x26
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b4h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        imul eax, dword ptr [ebp - 14h], 0fh
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 92h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 166h
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1b0h]
        push eax
        mov ecx, dword ptr [ebp - 1b4h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F2 97 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x97
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586324fa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 1b8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b8h]
        mov dword ptr [ecx + eax*4 + 80h], edx
        push 54h
        ; Exact mapped bytes E8 E3 EA 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xea
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 52: je 0x58632583
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1bch], ecx
        push 2
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 D6 25 E5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x25
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        imul eax, dword ptr [ebp - 14h], 0fh
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 92h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 5eh
        push eax
        mov ecx, dword ptr [ebp - 1c0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A2 FD E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863258a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 1c4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [edx + ecx*4 + 124h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 124h]
        mov dword ptr [ebp - 1c8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 E3 2F 18 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2f
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 124h]
        mov dword ptr [ebp - 1cch], eax
        push 0c8h
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 50 2F 18 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2f
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 124h]
        mov dword ptr [ebp - 1d0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 D0 38 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x38
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7E FD FF FF: jmp 0x58632394
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58632628
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D 0F 06 00 00: jge 0x58632c41
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 C8 E9 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 7B: je 0x586326c7
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 1d4h], eax
        push 4
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 6B 24 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x24
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1dch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e0h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        imul ecx, dword ptr [ebp - 14h], 0fh
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 108h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 10eh
        push ecx
        mov edx, dword ptr [ebp - 1d8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1dch]
        push ecx
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 1E 96 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x96
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586326ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 1e4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e4h]
        mov dword ptr [edx + ecx*4 + 94h], eax
        push 0ach
        ; Exact mapped bytes E8 0C E9 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 79: je 0x58632781
        __asm _emit 0x74
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1e8h], edx
        push 3
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 AF 23 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x23
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
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
        movzx edx, word ptr [ebp + 1ch]
        push edx
        imul eax, dword ptr [ebp - 14h], 0fh
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 108h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 10eh
        push eax
        mov ecx, dword ptr [ebp - 1ech]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1f0h]
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 64 95 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x95
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x58632788
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 1f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f8h]
        mov dword ptr [ecx + eax*4 + 0a0h], edx
        push 0ach
        ; Exact mapped bytes E8 52 E8 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 70: je 0x58632832
        __asm _emit 0x74
        __asm _emit 0x70
        push 0adh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 22 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x22
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 204h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        imul eax, dword ptr [ebp - 14h], 0fh
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 109h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 15ch
        push eax
        mov ecx, dword ptr [ebp - 1fch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 200h]
        push eax
        mov ecx, dword ptr [ebp - 204h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 B3 94 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x94
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58632839
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 208h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + eax*4 + 0c4h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 94h]
        mov dword ptr [ebp - 20ch], edx
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 17 37 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x37
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0a0h]
        mov dword ptr [ebp - 210h], edx
        push 0
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 F7 36 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x36
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0c4h]
        mov dword ptr [ebp - 214h], edx
        push 0
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 D7 36 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x36
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 40 E7 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe7
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 7A: je 0x5863294e
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 218h], ecx
        push 4
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 E3 21 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x21
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 220h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 224h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        imul edx, dword ptr [ebp - 14h], 0fh
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 108h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 10eh
        push edx
        mov eax, dword ptr [ebp - 21ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 220h]
        push edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 97 93 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x93
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58632955
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 228h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 228h]
        mov dword ptr [eax + edx*4 + 0ach], ecx
        push 0ach
        ; Exact mapped bytes E8 85 E6 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 7B: je 0x58632a0a
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 22ch], eax
        push 3
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 28 21 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x21
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 234h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 238h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        imul ecx, dword ptr [ebp - 14h], 0fh
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 108h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 10eh
        push ecx
        mov edx, dword ptr [ebp - 230h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 234h]
        push ecx
        mov edx, dword ptr [ebp - 238h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 DB 92 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x92
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58632a11
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 23ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 23ch]
        mov dword ptr [edx + ecx*4 + 0b8h], eax
        push 0ach
        ; Exact mapped bytes E8 C9 E5 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe5
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 72: je 0x58632abd
        __asm _emit 0x74
        __asm _emit 0x72
        push 0adh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 20 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x20
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 244h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 248h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        imul ecx, dword ptr [ebp - 14h], 0fh
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 109h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 15ch
        push ecx
        mov edx, dword ptr [ebp - 240h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 244h]
        push ecx
        mov edx, dword ptr [ebp - 248h]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 28 92 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x92
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58632ac4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 24ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 24ch]
        mov dword ptr [edx + ecx*4 + 0d0h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0ach]
        mov dword ptr [ebp - 250h], eax
        push 0
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 8C 34 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0b8h]
        mov dword ptr [ebp - 254h], eax
        push 0
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 6C 34 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0d0h]
        mov dword ptr [ebp - 258h], eax
        push 0
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 4C 34 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 B8 E4 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe4
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 52: je 0x58632bae
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 25ch], edx
        push 2
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 AB 1F E5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x1f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        imul ecx, dword ptr [ebp - 14h], 0fh
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 107h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 5eh
        push ecx
        mov edx, dword ptr [ebp - 260h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 77 F7 E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf7
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58632bb5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 264h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 264h]
        mov dword ptr [eax + edx*4 + 138h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 138h]
        mov dword ptr [ebp - 268h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 B8 29 18 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x29
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 138h]
        mov dword ptr [ebp - 26ch], ecx
        push 0c8h
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 25 29 18 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x29
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 138h]
        mov dword ptr [ebp - 270h], ecx
        push 0
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 A5 32 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x32
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DE F9 FF FF: jmp 0x5863261f
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 B9 E3 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe3
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 79: je 0x58632cd4
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 274h], eax
        push 1
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 5C 1E E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x1e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 27ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 280h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0e5h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18eh
        push edx
        mov eax, dword ptr [ebp - 278h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov eax, dword ptr [ebp - 280h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 14 90 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x90
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58632cde
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 284h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 284h]
        mov dword ptr [edx + 0dch], eax
        push 0ach
        ; Exact mapped bytes E8 FD E2 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe2
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 7A: je 0x58632d97
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 288h], edx
        push 0
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 9A 1D E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x1d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 290h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 294h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0e5h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1c6h
        push ecx
        mov edx, dword ptr [ebp - 28ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 290h]
        push ecx
        mov edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 51 8F E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x8f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58632da1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 298h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 298h]
        mov dword ptr [ecx + 0e0h], edx
        push 0ach
        ; Exact mapped bytes E8 3A E2 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xe2
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 7A: je 0x58632e5a
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 29ch], ecx
        push 2
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 D7 1C E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2a4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2a8h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 14fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1bbh
        push eax
        mov ecx, dword ptr [ebp - 2a0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2a4h]
        push eax
        mov ecx, dword ptr [ebp - 2a8h]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 8E 8E E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x8e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58632e64
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 2ach], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ach]
        mov dword ptr [eax + 0e4h], ecx
        push 0ach
        ; Exact mapped bytes E8 77 E1 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe1
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 78: je 0x58632f1b
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 2b0h], eax
        push 5
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 14 1C E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x1c
        __asm _emit 0xe5
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
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 94h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e1h
        push ecx
        mov edx, dword ptr [ebp - 2b4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2b8h]
        push ecx
        mov edx, dword ptr [ebp - 2bch]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 CD 8D E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58632f25
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 2c0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2c0h]
        mov dword ptr [ecx + 0e8h], edx
        push 0ach
        ; Exact mapped bytes E8 B6 E0 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe0
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 78: je 0x58632fdc
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2c4h], ecx
        push 6
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 53 1B E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1b
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2cch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2d0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d9h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e1h
        push edx
        mov eax, dword ptr [ebp - 2c8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2cch]
        push edx
        mov eax, dword ptr [ebp - 2d0h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 0C 8D E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58632fe6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 2d4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2d4h]
        mov dword ptr [edx + 0ech], eax
        push 0ach
        ; Exact mapped bytes E8 F5 DF 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xdf
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 77: je 0x5863309c
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2d8h], edx
        push 5
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 92 1A E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1a
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e4h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 108h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1e1h
        push eax
        mov ecx, dword ptr [ebp - 2dch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2e0h]
        push eax
        mov ecx, dword ptr [ebp - 2e4h]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 4C 8C E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x586330a6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 2e8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2e8h]
        mov dword ptr [eax + 0f0h], ecx
        push 0ach
        ; Exact mapped bytes E8 35 DF 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xdf
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 78: je 0x5863315d
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 2ech], eax
        push 6
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 D2 19 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x19
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f8h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 12fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e1h
        push ecx
        mov edx, dword ptr [ebp - 2f0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2f4h]
        push ecx
        mov edx, dword ptr [ebp - 2f8h]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 8B 8B E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633167
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 2fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2fch]
        mov dword ptr [ecx + 0f4h], edx
        push 0ach
        ; Exact mapped bytes E8 74 DE 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xde
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 78: je 0x5863321e
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 300h], ecx
        push 5
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 11 19 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x19
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 308h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 30ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14bh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1b2h
        push edx
        mov eax, dword ptr [ebp - 304h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 308h]
        push edx
        mov eax, dword ptr [ebp - 30ch]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 CA 8A E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x8a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633228
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 310h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 310h]
        mov dword ptr [edx + 0f8h], eax
        push 0ach
        ; Exact mapped bytes E8 B3 DD 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xdd
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 77: je 0x586332de
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 314h], edx
        push 6
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 50 18 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x18
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 31ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 320h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 157h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1b2h
        push eax
        mov ecx, dword ptr [ebp - 318h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 31ch]
        push eax
        mov ecx, dword ptr [ebp - 320h]
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 0A 8A E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586332e8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 324h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [eax + 0fch], ecx
        push 0fch
        ; Exact mapped bytes E8 F3 DC 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xdc
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 43: je 0x5863336a
        __asm _emit 0x74
        __asm _emit 0x43
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 17 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x17
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 328h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 74h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0c3h
        push eax
        push 3
        mov ecx, dword ptr [ebp - 328h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 0E 76 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x76
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633374
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 32ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 32ch]
        mov dword ptr [ecx + 144h], edx
        push 0fch
        ; Exact mapped bytes E8 67 DC 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xdc
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 44: je 0x586333f7
        __asm _emit 0x74
        __asm _emit 0x44
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 17 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x17
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 330h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 74h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0eah
        push ecx
        push 3
        mov edx, dword ptr [ebp - 330h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 81 75 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x75
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633401
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 334h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 334h]
        mov dword ptr [edx + 148h], eax
        push 0fch
        ; Exact mapped bytes E8 DA DB 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xdb
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 47: je 0x58633487
        __asm _emit 0x74
        __asm _emit 0x47
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 16 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 338h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0e6h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0cfh
        push edx
        push 3
        mov eax, dword ptr [ebp - 338h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 F1 74 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x74
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633491
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 33ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 33ch]
        mov dword ptr [eax + 14ch], ecx
        push 0fch
        ; Exact mapped bytes E8 4A DB 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 46: je 0x58633516
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 15 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x15
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 340h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e6h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0ech
        push eax
        push 3
        mov ecx, dword ptr [ebp - 340h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 62 74 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x74
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633520
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 344h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 344h]
        mov dword ptr [ecx + 150h], edx
        push 0fch
        ; Exact mapped bytes E8 BB DA 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xda
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 46: je 0x586335a5
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 15 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x15
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 348h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0e6h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 14ah
        push ecx
        push 3
        mov edx, dword ptr [ebp - 348h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 D3 73 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x73
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x586335af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 34ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 34ch]
        mov dword ptr [edx + 154h], eax
        push 0fch
        ; Exact mapped bytes E8 2C DA 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xda
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 47: je 0x58633635
        __asm _emit 0x74
        __asm _emit 0x47
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 14 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x14
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0e6h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 165h
        push edx
        push 3
        mov eax, dword ptr [ebp - 350h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 43 73 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x73
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863363f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 354h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 354h]
        mov dword ptr [eax + 158h], ecx
        push 0fch
        ; Exact mapped bytes E8 9C D9 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd9
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 46: je 0x586336c4
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 14 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 358h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 14dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0eeh
        push eax
        push 3
        mov ecx, dword ptr [ebp - 358h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 B4 72 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x72
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586336ce
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 35ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 35ch]
        mov dword ptr [ecx + 15ch], edx
        push 0fch
        ; Exact mapped bytes E8 0D D9 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd9
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 46: je 0x58633753
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 13 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x13
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 14dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 153h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 360h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 25 72 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x72
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863375d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 364h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 364h]
        mov dword ptr [edx + 160h], eax
        push 0fch
        ; Exact mapped bytes E8 7E D8 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd8
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 47: je 0x586337e3
        __asm _emit 0x74
        __asm _emit 0x47
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 13 E5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x13
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18ah
        push edx
        push 3
        mov eax, dword ptr [ebp - 368h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 95 71 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x71
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586337ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 36ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 36ch]
        mov dword ptr [eax + 164h], ecx
        push 94h
        ; Exact mapped bytes E8 EE D7 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd7
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 48: je 0x58633874
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0dfh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 72h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 93h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 5dh
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
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 64 CA 18 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xca
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863387e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 370h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 370h]
        mov dword ptr [eax + 100h], ecx
        push 94h
        ; Exact mapped bytes E8 5D D7 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd7
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 4A: je 0x58633907
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0dfh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0fah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 93h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 76h
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
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 D1 C9 18 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc9
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633911
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov edx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 374h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 374h]
        mov dword ptr [eax + 104h], ecx
        push 94h
        ; Exact mapped bytes E8 CA D6 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd6
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 4D: je 0x5863399d
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0dfh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 128h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 93h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0feh
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
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 3B C9 18 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc9
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586339a7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 378h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 378h]
        mov dword ptr [eax + 108h], ecx
        push 94h
        ; Exact mapped bytes E8 34 D6 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xd6
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 48: je 0x58633a2e
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 135h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 70h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 107h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 5ch
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
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 AA C8 18 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc8
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633a38
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 37ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 37ch]
        mov dword ptr [eax + 10ch], ecx
        push 94h
        ; Exact mapped bytes E8 A3 D5 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd5
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 48: je 0x58633abf
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 135h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 70h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 107h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 5ch
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
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 19 C8 18 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc8
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633ac9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 380h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 380h]
        mov dword ptr [eax + 110h], ecx
        push 94h
        ; Exact mapped bytes E8 12 D5 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd5
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 4A: je 0x58633b52
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 135h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0fah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 108h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 76h
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
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 86 C7 18 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc7
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633b5c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 384h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 384h]
        mov dword ptr [eax + 114h], ecx
        push 94h
        ; Exact mapped bytes E8 7F D4 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd4
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 4A: je 0x58633be5
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 135h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0fah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 108h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 76h
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
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 F3 C6 18 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc6
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633bef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 388h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [eax + 118h], ecx
        push 94h
        ; Exact mapped bytes E8 EC D3 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd3
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 4D: je 0x58633c7b
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 135h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1dbh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 107h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 16fh
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
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 5D C6 18 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc6
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633c85
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov edx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 38ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 38ch]
        mov dword ptr [eax + 11ch], ecx
        push 94h
        ; Exact mapped bytes E8 56 D3 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd3
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 4D: je 0x58633d11
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 135h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1dbh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 107h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 16fh
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
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 C7 C5 18 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc5
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633d1b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 390h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 390h]
        mov dword ptr [eax + 120h], ecx
        push 70h
        ; Exact mapped bytes E8 C3 D2 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd2
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 4F: je 0x58633da6
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 15ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0ech
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 92h
        push edx
        ; Exact mapped bytes A1 30 20 96 58: mov eax, dword ptr [0x58962030]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 12 E6 E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe6
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633db0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov edx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 394h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 394h]
        mov dword ptr [eax + 168h], ecx
        push 70h
        ; Exact mapped bytes E8 2E D2 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd2
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 4F: je 0x58633e3b
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 15eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 14eh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 122h
        push edx
        ; Exact mapped bytes A1 30 20 96 58: mov eax, dword ptr [0x58962030]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 7D E5 E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe5
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633e45
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov edx, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 398h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 398h]
        mov dword ptr [eax + 16ch], ecx
        push 304h
        ; Exact mapped bytes E8 96 D1 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd1
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 27: je 0x58633eab
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 0fffffe70h
        push 0e3h
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 8D 7D F0 FF: call 0x5853bc30
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58633eb5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov eax, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 39ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 39ch]
        mov dword ptr [ecx + 174h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 3a4h], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 C4 E7 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 3a0h], eax
        mov edx, dword ptr [ebp - 3a0h]
        push edx
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 0A 20 E5 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x20
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 188h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 189h], 1
        push 1
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 F4 E8 FF: call 0x584c3390
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, 14h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 06 D1 1F 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd1
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3a8h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3a8h]
        mov dword ptr [edx + 178h], eax
        push 5
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F F4 E8 FF: call 0x584c3390
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, 14h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 CC D0 1F 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd0
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ach], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3ach]
        mov dword ptr [eax + 17ch], ecx
        push 5
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 F3 E8 FF: call 0x584c3390
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, 14h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 92 D0 1F 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3b0h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3b0h]
        mov dword ptr [edx + 180h], eax
        push 0bh
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB F3 E8 FF: call 0x584c3390
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, 14h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 58 D0 1F 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd0
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3b4h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3b4h]
        mov dword ptr [eax + 184h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 18ah], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 18bh], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 18ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 18dh], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 8E 01 00 00: mov word ptr [ecx + 0x18e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 170h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 75 29 E5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x29
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 5dh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 190h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 51 80 E5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x80
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 92h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 194h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4B 29 E5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x29
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 1e9h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 198h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 25 80 E5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x80
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 0ddh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 19ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1F 29 E5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x29
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 5dh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1a0h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FB 7F E5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x7f
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 108h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1a4h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 28 E5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 1e9h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1a8h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CF 7F E5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7f
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 134h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1ach], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 28 E5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 18ah
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1b0h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A3 7F E5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x7f
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 14dh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9D 28 E5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 1afh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1b8h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 7F E5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7f
        __asm _emit 0xe5
        __asm _emit 0xff
        add eax, 15eh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1bch], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3F 1E E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x1e
        __asm _emit 0xe5
        __asm _emit 0xff
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 05 1C E5 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0xe5
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
