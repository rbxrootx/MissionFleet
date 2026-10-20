// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586537E0 .. +0x1B2E bytes.
extern "C" __declspec(naked) void FUN_586537e0_586537E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58888d22h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 340h
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
        ; Exact mapped bytes E8 44 EA E2 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588af614h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 15 D4 07 96 58: mov edx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 60h], edx
        push 5ch
        ; Exact mapped bytes E8 B5 D7 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd7
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1B: je 0x5865387a
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FB 00 E7 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58653881
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 12ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [edx + 0cch], eax
        push 5ch
        ; Exact mapped bytes E8 60 D7 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd7
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1B: je 0x586538cf
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A6 00 E7 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586538d6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 130h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [eax + 0d0h], ecx
        push 5ch
        ; Exact mapped bytes E8 0B D7 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd7
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 1B: je 0x58653924
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 51 00 E7 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5865392b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + 0d4h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58653959
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9A 00 00 00: jge 0x586539fd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 9A D6 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd6
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 5A: je 0x586539d4
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 138h], edx
        mov eax, 173h
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 86 11 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x11
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 140h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 51 E9 E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586539db
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 144h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [eax + edx*4 + 64h], ecx
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x58653950
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58653a0f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9A 00 00 00: jge 0x58653ab3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E4 D5 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd5
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 5A: je 0x58653a8a
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 148h], ecx
        mov edx, 177h
        sub edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 D0 10 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x10
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 150h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov edx, dword ptr [ebp - 150h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9B E8 E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58653a91
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 154h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 154h]
        mov dword ptr [edx + ecx*4 + 6ch], eax
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x58653a06
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58653ac5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9A 00 00 00: jge 0x58653b69
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 2E D5 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd5
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 5A: je 0x58653b40
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 158h], eax
        mov ecx, 175h
        sub ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 1A 10 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 160h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 15ch]
        push eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E5 E7 E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58653b47
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 164h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 164h]
        mov dword ptr [ecx + eax*4 + 74h], edx
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x58653abc
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 64h]
        mov dword ptr [ebp - 168h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 22 1A 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x1a
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 64h]
        mov dword ptr [ebp - 16ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 FD 19 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x19
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 170h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 D8 19 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x19
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 174h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 B3 19 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x19
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 74h]
        mov dword ptr [ebp - 178h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 8E 19 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x19
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 74h]
        mov dword ptr [ebp - 17ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 69 19 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x19
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 B2 D3 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd3
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 6F: je 0x58653cd1
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 180h], ecx
        push 48h
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 55 0E E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 188h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 41h
        push edx
        mov eax, dword ptr [ebp - 184h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 188h]
        push edx
        mov eax, dword ptr [ebp - 18ch]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 14 80 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x80
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58653cd8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 190h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 190h]
        mov dword ptr [edx + 7ch], eax
        push 0ach
        ; Exact mapped bytes E8 09 D3 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xd3
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 71: je 0x58653d7c
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 194h], edx
        push 49h
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 AC 0D E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 14ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 69 7F E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x7f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58653d83
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 1a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1a4h]
        mov dword ptr [eax + 80h], ecx
        push 0ach
        ; Exact mapped bytes E8 5B D2 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd2
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 6D: je 0x58653e26
        __asm _emit 0x74
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 1a8h], eax
        push 47h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 FE 0C E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b4h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 46h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 43h
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        push ecx
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 BF 7E E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58653e2d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 1b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b8h]
        mov dword ptr [ecx + 84h], edx
        push 0ach
        ; Exact mapped bytes E8 B1 D1 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd1
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 6F: je 0x58653ed2
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1bch], ecx
        push 46h
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 54 0C E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 46h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0b4h
        push edx
        mov eax, dword ptr [ebp - 1c0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1c4h]
        push edx
        mov eax, dword ptr [ebp - 1c8h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 13 7E E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58653ed9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 1cch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1cch]
        mov dword ptr [edx + 88h], eax
        push 0ach
        ; Exact mapped bytes E8 05 D1 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd1
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 6E: je 0x58653f7d
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1d0h], edx
        push 3dh
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 A8 0B E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
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
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 69h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 82h
        push eax
        mov ecx, dword ptr [ebp - 1d4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1d8h]
        push eax
        mov ecx, dword ptr [ebp - 1dch]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 68 7D E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x7d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x58653f84
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 1e0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e0h]
        mov dword ptr [edx + ecx + 8ch], eax
        push 0ach
        ; Exact mapped bytes E8 51 D0 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd0
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 6E: je 0x58654031
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1e4h], edx
        push 3dh
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 F4 0A E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 69h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 12ah
        push eax
        mov ecx, dword ptr [ebp - 1e8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 1f0h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 B4 7C E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x58654038
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 1f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f4h]
        mov dword ptr [ecx + eax + 8ch], edx
        push 0ach
        ; Exact mapped bytes E8 9D CF 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xcf
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 6F: je 0x586540e6
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1f8h], ecx
        push 3dh
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 40 0A E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 200h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 204h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 69h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1f0h
        push edx
        mov eax, dword ptr [ebp - 1fch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 200h]
        push edx
        mov eax, dword ptr [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 FF 7B E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x7b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x586540ed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 208h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [eax + edx + 8ch], ecx
        push 0ach
        ; Exact mapped bytes E8 E9 CE 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 78: je 0x586541a9
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 20ch], eax
        push 4ah
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 86 09 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x09
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 214h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 218h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 14ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0c8h
        push ecx
        mov edx, dword ptr [ebp - 210h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 218h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 3F 7B E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x7b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586541b3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 21ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 21ch]
        mov dword ptr [ecx + 98h], edx
        push 0ach
        ; Exact mapped bytes E8 28 CE 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xce
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 78: je 0x5865426a
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 220h], ecx
        push 4bh
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 C5 08 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 228h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 22ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0e6h
        push edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov eax, dword ptr [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 7E 7A E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654274
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 230h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 230h]
        mov dword ptr [edx + 9ch], eax
        push 0ach
        ; Exact mapped bytes E8 67 CD 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xcd
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 77: je 0x5865432a
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 234h], edx
        push 54h
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 04 08 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 23ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 240h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 14ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1d1h
        push eax
        mov ecx, dword ptr [ebp - 238h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 240h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 BE 79 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x79
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654334
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 244h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 244h]
        mov dword ptr [eax + 100h], ecx
        push 0ach
        ; Exact mapped bytes E8 A7 CC 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xcc
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 78: je 0x586543eb
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 248h], eax
        push 53h
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 44 07 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
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
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 14ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1f4h
        push ecx
        mov edx, dword ptr [ebp - 24ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 250h]
        push ecx
        mov edx, dword ptr [ebp - 254h]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 FD 78 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x78
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586543f5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 258h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 258h]
        mov dword ptr [ecx + 0fch], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58654426
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D C8 00 00 00: jge 0x586544f8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 CD CB 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xcb
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 58: je 0x586544a5
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 25ch], edx
        push 55h
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 6A 06 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x06
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 14fh
        push eax
        imul ecx, dword ptr [ebp - 14h], 0ah
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1edh
        sub edx, ecx
        push edx
        mov eax, dword ptr [ebp - 260h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 73 23 E3 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x23
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586544af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 264h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 264h]
        mov dword ptr [ecx + eax*4 + 104h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 104h]
        mov dword ptr [ebp - 268h], edx
        push 0
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 5E B0 E4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb0
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 25 FF FF FF: jmp 0x5865441d
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 26ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 9C 10 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 270h], eax
        push 101h
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 7D 10 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 274h], edx
        push 101h
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 5E 10 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x10
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 278h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 3F 10 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x10
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 27ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 17 10 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x10
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 280h], edx
        push 101h
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 EF 0F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 284h], edx
        push 101h
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 C8 0F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 288h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 A9 0F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 28ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 8A 0F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [ebp - 290h], edx
        push 101h
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 6B 0F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 294h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 4C 0F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        push 94h
        ; Exact mapped bytes E8 95 C9 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc9
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 47: je 0x586546cc
        __asm _emit 0x74
        __asm _emit 0x47
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 140h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 9bh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 48h
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
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 DC F9 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586546d6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 298h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 298h]
        mov dword ptr [edx + ecx + 0a0h], eax
        push 94h
        ; Exact mapped bytes E8 FC C8 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc8
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 4C: je 0x5865476a
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 140h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 181h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0aah
        push ecx
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
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 3E F9 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654774
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 29ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 29ch]
        mov dword ptr [eax + edx + 0a0h], ecx
        push 94h
        ; Exact mapped bytes E8 5E C8 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc8
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 4A: je 0x58654806
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 140h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 212h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18ah
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
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 A2 F8 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654810
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov edx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 2a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2a0h]
        mov dword ptr [ecx + eax + 0a0h], edx
        push 94h
        ; Exact mapped bytes E8 C3 C7 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc7
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 48: je 0x5865489f
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 96h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 9bh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 7eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 48h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 09 F8 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf8
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586548a9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov eax, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 2a4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a4h]
        mov dword ptr [eax + edx + 0ach], ecx
        push 94h
        ; Exact mapped bytes E8 29 C7 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc7
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 4A: je 0x5865493b
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 96h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 181h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0aah
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
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 6D F7 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf7
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654945
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 2a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2a8h]
        mov dword ptr [ecx + eax + 0ach], edx
        push 94h
        ; Exact mapped bytes E8 8D C6 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc6
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 4A: je 0x586549d7
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 96h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 212h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 7eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18ah
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 D1 F6 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf6
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586549e1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 2ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ach]
        mov dword ptr [edx + ecx + 0ach], eax
        push 94h
        ; Exact mapped bytes E8 F2 C5 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc5
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 49: je 0x58654a71
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 140h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 9bh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 48h
        push ecx
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
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 37 F6 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf6
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654a7b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov ecx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 2b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2b0h]
        mov dword ptr [ecx + eax + 0b8h], edx
        push 94h
        ; Exact mapped bytes E8 57 C5 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc5
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 4A: je 0x58654b0d
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 140h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 181h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 7eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0aah
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 9B F5 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654b17
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 2b4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2b4h]
        mov dword ptr [edx + ecx + 0b8h], eax
        push 94h
        ; Exact mapped bytes E8 BB C4 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc4
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 4C: je 0x58654bab
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 140h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 212h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18ah
        push ecx
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
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 FD F4 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf4
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654bb5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 2b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2b8h]
        mov dword ptr [eax + edx + 0b8h], ecx
        push 94h
        ; Exact mapped bytes E8 1E C4 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc4
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 4A: je 0x58654c46
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 140h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 212h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9bh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 48h
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
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 62 F4 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654c50
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov edx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 2bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2bch]
        mov dword ptr [eax + 0c4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 2c0h], eax
        push 14h
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 65 A7 E4 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa7
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 2c8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c4h]
        ; Exact mapped bytes E8 08 FE ED FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xed
        __asm _emit 0xff
        shl eax, 3
        mov dword ptr [ebp - 2c4h], eax
        mov ecx, dword ptr [ebp - 2c4h]
        push ecx
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 8D 21 E6 FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 2cch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 9E 11 E3 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x11
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 2d0h], eax
        push 999999h
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 BF 7E EF FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7e
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58654d14
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 7D 63: jge 0x58654d7d
        __asm _emit 0x7d
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0a0h]
        mov dword ptr [ebp - 2d4h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 56 12 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x12
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 2d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 36 12 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x12
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0b8h]
        mov dword ptr [ebp - 2dch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 16 12 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x12
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8E: jmp 0x58654d0b
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 2e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 F7 11 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x11
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 63 C2 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc2
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 4F: je 0x58654e06
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2e4h], edx
        push 40h
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 50 FD E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 2e8h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 45h
        push ecx
        mov edx, dword ptr [ebp - 2e8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 22 D5 E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd5
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654e10
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 2ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ech]
        mov dword ptr [edx + 0c8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 2f0h], edx
        push 0a0h
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 F2 06 16 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 2f4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 76 10 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x10
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        push 84h
        ; Exact mapped bytes E8 8F C1 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc1
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 2B: je 0x58654eb6
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        add edx, 32h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 42 55 01 00: call 0x5866a3f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654ec0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 2f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2f8h]
        mov dword ptr [eax + 0d8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 2fch], eax
        push 0
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 95 10 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        push 14h
        ; Exact mapped bytes E8 01 C1 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc1
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 13: je 0x58654f2c
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 9C E7 EC FF: call 0x585236c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xe7
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654f36
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 300h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 300h]
        mov dword ptr [edx + 0dch], eax
        push 0ach
        ; Exact mapped bytes E8 A5 C0 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc0
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 4D: je 0x58654fc2
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0ch
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E FB E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfb
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 96h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 216h
        push eax
        mov ecx, dword ptr [ebp - 304h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 26 6D E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58654fcc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 308h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 308h]
        mov dword ptr [ecx + 0e4h], edx
        push 0ach
        ; Exact mapped bytes E8 0F C0 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc0
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 4E: je 0x58655059
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0dh
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 FA E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 30ch], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 138h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 216h
        push edx
        mov eax, dword ptr [ebp - 30ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 8F 6C E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58655063
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov edx, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 310h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 310h]
        mov dword ptr [eax + 0e8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e4h]
        mov dword ptr [ebp - 314h], eax
        push 101h
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 0F 05 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 318h], edx
        push 101h
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 F0 04 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 31ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 64 0D E3 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 320h], eax
        push 0
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 48 0D E3 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 324h], edx
        push 0
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 CC 0D E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 328h], ecx
        push 0
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 B0 0D E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 CC BE 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xbe
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 49: je 0x58655197
        __asm _emit 0x74
        __asm _emit 0x49
        push 0bh
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 F9 E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a2h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 216h
        push ecx
        mov edx, dword ptr [ebp - 32ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 81 16 E3 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586551a1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov ecx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 330h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 330h]
        mov dword ptr [edx + 0ech], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 334h], edx
        push 0
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 74 A3 E4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 338h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 B5 03 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 33ch], eax
        push 0
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 29 0C E3 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 340h], edx
        push 0
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 5D 0D E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0f0h], 1
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
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 344h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 16 0D E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 348h], ecx
        push 0
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 FA 0C E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 34ch], eax
        push 0
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 DE 0C E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0f4h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0f8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10ch], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 110h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 114h], 0
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
