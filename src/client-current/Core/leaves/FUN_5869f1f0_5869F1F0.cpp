// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869F1F0 .. +0x2E2F bytes.
extern "C" __declspec(naked) void FUN_5869f1f0_5869F1F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888af5ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 560h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], ecx
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
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C1 C4 EC FF: call 0x5856b700
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc4
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 588b0a48h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 338h], 0
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 34h], 13h
        mov dword ptr [ebp - 5ch], 10h
        mov dword ptr [ebp - 38h], 10h
        mov dword ptr [ebp - 2ch], 7
        mov dword ptr [ebp - 30h], 7
        push 54h
        ; Exact mapped bytes E8 5B 1D 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x1d
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 74 3B: je 0x5869f2fa
        __asm _emit 0x74
        __asm _emit 0x3b
        push 1b4h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 58 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x58
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 41ch], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 41ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 2B 30 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x30
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869f301
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 1fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 1fch]
        mov dword ptr [ecx + 90h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 200h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 74 62 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x62
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 204h], eax
        push 0
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 48 6A DE FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6a
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 A4 1C 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x1c
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 38: je 0x5869f3a8
        __asm _emit 0x74
        __asm _emit 0x38
        push 1b3h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 57 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 208h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 7D 2F DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869f3af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 20ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20ch]
        mov dword ptr [eax + 8ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 210h], eax
        push 0c8h
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 56 61 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x61
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 214h], edx
        push 0
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 9A 69 DE FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x69
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 F6 1B 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x1b
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 23: je 0x5869f441
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ch
        push ecx
        push 0
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 E4 2E DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869f448
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 218h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 218h]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 21ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 2D 61 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x61
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 220h], eax
        push 0
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 B1 00 E0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 5D 1B 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x1b
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 3F: je 0x5869f4f6
        __asm _emit 0x74
        __asm _emit 0x3f
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 33h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 6eh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 22h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2ch
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
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 BF 2E DE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x2e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869f4fd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 224h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 224h]
        mov dword ptr [edx + 0ach], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 228h], edx
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 32h
        push ecx
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 42 69 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x69
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 BB 1A 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1a
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 42: je 0x5869f59b
        __asm _emit 0x74
        __asm _emit 0x42
        push 7
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 55 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x55
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 10h
        push edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 87h]
        push edx
        push 3
        mov eax, dword ptr [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 DA B3 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb3
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869f5a2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 230h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 230h]
        mov dword ptr [edx + ecx + 108h], eax
        push 50h
        ; Exact mapped bytes E8 36 1A 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1a
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 1F: je 0x5869f5fd
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 98 53 11 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x53
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869f604
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 234h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 234h]
        mov dword ptr [edx + 94h], eax
        push 54h
        ; Exact mapped bytes E8 DD 19 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x19
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 4A: je 0x5869f681
        __asm _emit 0x74
        __asm _emit 0x4a
        push 148h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 54 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 23ch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 238h]
        push edx
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 A4 2C DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869f688
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 240h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 240h]
        mov dword ptr [edx + 9ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 244h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 ED 5E 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x5e
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 248h], ecx
        push 0
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 61 67 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x67
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 1D 19 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x19
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 4A: je 0x5869f741
        __asm _emit 0x74
        __asm _emit 0x4a
        push 149h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 54 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x54
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 250h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 24ch]
        push eax
        mov ecx, dword ptr [ebp - 250h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 E4 2B DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2b
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869f748
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 254h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 254h]
        mov dword ptr [eax + 98h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 258h], eax
        push 101h
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 2D 5E 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x5e
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 25ch], edx
        push 0
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 A1 66 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x66
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 5D 18 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x18
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 4D: je 0x5869f804
        __asm _emit 0x74
        __asm _emit 0x4d
        push 148h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 53 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x53
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 264h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 260h]
        push ecx
        mov edx, dword ptr [ebp - 264h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 24 2B DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2b
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869f80e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 268h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 268h]
        mov dword ptr [ecx + 0a4h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 26ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 64 5D 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x5d
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 270h], eax
        push 0
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 D8 65 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x65
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 94 17 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x17
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 50: je 0x5869f8d6
        __asm _emit 0x74
        __asm _emit 0x50
        push 149h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 52 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x52
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 278h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 274h]
        push edx
        mov eax, dword ptr [ebp - 278h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 52 2A DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2a
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869f8e0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 27ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 27ch]
        mov dword ptr [edx + 0a0h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 280h], edx
        push 101h
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 92 5C 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5c
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 284h], ecx
        push 0
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 06 65 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x65
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 C2 16 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x16
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 50: je 0x5869f9a8
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0ach
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0ch
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 94h]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 10 2A DE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x2a
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869f9b2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 288h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [ecx + 0b0h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 28ch], ecx
        mov edx, dword ptr [ebp - 20h]
        movzx eax, word ptr [edx + 26h]
        push eax
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 8D 64 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 09 16 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x16
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 56: je 0x5869fa67
        __asm _emit 0x74
        __asm _emit 0x56
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0abh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0b8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 9bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 9ah
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 51 29 DE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x29
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869fa71
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 290h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 290h]
        mov dword ptr [eax + 0d4h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 294h], eax
        mov ecx, dword ptr [ebp - 20h]
        movzx edx, word ptr [ecx + 26h]
        push edx
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 CE 63 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x63
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 47 15 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x15
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 5D: je 0x5869fb30
        __asm _emit 0x74
        __asm _emit 0x5d
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 4F DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 29ch], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0f3h
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax - 4]
        push edx
        push 8
        mov eax, dword ptr [ebp - 298h]
        push eax
        mov ecx, dword ptr [ebp - 29ch]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 48 AE 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xae
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869fb3a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 2a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 2a0h]
        mov dword ptr [edx + ecx + 0f8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 2a4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 26 5A 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 2a8h], edx
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 32h
        push ecx
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 C8 62 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x62
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 41 14 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 5D: je 0x5869fc36
        __asm _emit 0x74
        __asm _emit 0x5d
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 4E DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 2b0h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0f3h
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 1fh]
        push ecx
        push 8
        mov edx, dword ptr [ebp - 2ach]
        push edx
        mov eax, dword ptr [ebp - 2b0h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 42 AD 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xad
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869fc40
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 2b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 2b4h]
        mov dword ptr [eax + edx + 0f8h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 2b8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 20 59 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 2bch], ecx
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 C2 61 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x61
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 3B 13 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x13
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 5C: je 0x5869fd3b
        __asm _emit 0x74
        __asm _emit 0x5c
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 4D DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4d
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 2c4h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0f3h
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 42h]
        push eax
        push 8
        mov ecx, dword ptr [ebp - 2c0h]
        push ecx
        mov edx, dword ptr [ebp - 2c4h]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 3D AC 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869fd45
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 2c8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 2c8h]
        mov dword ptr [edx + ecx + 0f8h], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 0f8h]
        mov dword ptr [ebp - 2cch], eax
        push 101h
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 1D 58 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x58
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 0f8h]
        mov dword ptr [ebp - 2d0h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 32h
        push edx
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 C0 60 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x60
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 39 12 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x12
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 5A: je 0x5869fe3b
        __asm _emit 0x74
        __asm _emit 0x5a
        push 7
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 4C DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 2d8h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0fah
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 5ah]
        push edx
        push 8
        mov eax, dword ptr [ebp - 2d4h]
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 3D AB 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xab
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869fe45
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 2dch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 2dch]
        mov dword ptr [edx + ecx + 0f8h], eax
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 2e0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 1B 57 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x57
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 2e4h], edx
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 32h
        push ecx
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 BD 5F DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5f
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 39 11 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x11
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 66: je 0x5869ff47
        __asm _emit 0x74
        __asm _emit 0x66
        push 388h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 4C DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2e8h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 2ech], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 10bh
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 0eh]
        push ecx
        mov edx, dword ptr [ebp - 2e8h]
        push edx
        mov eax, dword ptr [ebp - 2ech]
        push eax
        push 0
        push 3e8h
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 11 3B E6 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x3b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869ff51
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 2f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 2f0h]
        mov dword ptr [eax + edx + 1a8h], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 1a8h]
        mov dword ptr [ebp - 2f4h], ecx
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 96h
        push eax
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 D9 5E DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x5e
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 55 10 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x10
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 65: je 0x586a002a
        __asm _emit 0x74
        __asm _emit 0x65
        push 386h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 4B DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4b
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2f8h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 2fch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 10bh
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 0eh]
        push eax
        mov ecx, dword ptr [ebp - 2f8h]
        push ecx
        mov edx, dword ptr [ebp - 2fch]
        push edx
        push 0
        push 3e8h
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 2E 3A E6 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3a
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a0034
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 300h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 300h]
        mov dword ptr [edx + ecx + 1a8h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 1a8h]
        mov dword ptr [ebp - 304h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 96h
        push edx
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 F3 5D DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x5d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 6F 0F 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0f
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 66: je 0x586a0111
        __asm _emit 0x74
        __asm _emit 0x66
        push 387h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 4A DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x4a
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 30ch], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 10bh
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 0eh]
        push edx
        mov eax, dword ptr [ebp - 308h]
        push eax
        mov ecx, dword ptr [ebp - 30ch]
        push ecx
        push 0
        push 3e8h
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 47 39 E6 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x39
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a011b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 310h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 310h]
        mov dword ptr [edx + ecx + 1a8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 1a8h]
        mov dword ptr [ebp - 314h], ecx
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 96h
        push eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 0D 5D DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 86 0E 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0e
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 55: je 0x586a01e9
        __asm _emit 0x74
        __asm _emit 0x55
        push 7
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 49 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x49
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 31ch], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 11fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 14h
        push ecx
        push 8
        mov edx, dword ptr [ebp - 318h]
        push edx
        mov eax, dword ptr [ebp - 31ch]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 8F A7 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa7
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a01f3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov ecx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 320h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 320h]
        mov dword ptr [eax + edx + 108h], ecx
        push 0fch
        ; Exact mapped bytes E8 DF 0D 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0d
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 5A: je 0x586a0295
        __asm _emit 0x74
        __asm _emit 0x5a
        push 7
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 48 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 324h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 328h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 11fh
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 5ah]
        push ecx
        push 8
        mov edx, dword ptr [ebp - 324h]
        push edx
        mov eax, dword ptr [ebp - 328h]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 E3 A6 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa6
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a029f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 32ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 32ch]
        mov dword ptr [eax + edx + 108h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 108h]
        mov dword ptr [ebp - 330h], edx
        push 101h
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 C2 52 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x52
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 108h]
        mov dword ptr [ebp - 334h], edx
        push 101h
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 9A 52 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x52
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 108h]
        mov dword ptr [ebp - 338h], edx
        push 101h
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 73 52 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x52
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x586a0350
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 3
        ; Exact mapped bytes 7D 2C: jge 0x586a0382
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx*4 + 108h]
        mov dword ptr [ebp - 33ch], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 32h
        push edx
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 01 5B DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5b
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C5: jmp 0x586a0347
        __asm _emit 0xeb
        __asm _emit 0xc5
        push 74h
        ; Exact mapped bytes E8 7B 0C 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 63: je 0x586a0402
        __asm _emit 0x74
        __asm _emit 0x63
        push 2dh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 47 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x47
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 340h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 344h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 12eh
        push edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 0eh]
        push edx
        mov eax, dword ptr [ebp - 340h]
        push eax
        mov ecx, dword ptr [ebp - 344h]
        push ecx
        push 0
        push 3b9aca00h
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 56 36 E6 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x36
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a040c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov edx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 348h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 348h]
        mov dword ptr [eax + 1b4h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 1b4h]
        mov dword ptr [ebp - 34ch], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 96h
        push edx
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 2D 5A DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x5a
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 A9 0B 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0b
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 60: je 0x586a04d1
        __asm _emit 0x74
        __asm _emit 0x60
        push 2dh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 46 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x46
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 354h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 48h
        push edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 0eh]
        push edx
        mov eax, dword ptr [ebp - 350h]
        push eax
        mov ecx, dword ptr [ebp - 354h]
        push ecx
        push 0
        push 3e8h
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 87 35 E6 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x35
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a04db
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 358h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 358h]
        mov dword ptr [eax + 1a4h], ecx
        mov dword ptr [ebp - 1ch], 3eh
        mov dword ptr [ebp - 18h], 44h
        mov dword ptr [ebp - 14h], 4ah
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x586a0521
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0bh
        ; Exact mapped bytes 0F 8D A4 05 00 00: jge 0x586a0acf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 D2 0A 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 74: je 0x586a05bc
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 24h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + eax*4 - 1ch]
        imul edx, dword ptr [ebp - 24h], 0eh
        lea eax, [ecx + edx + 2]
        mov dword ptr [ebp - 35ch], eax
        push 6
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 45 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 364h], edx
        push 40h
        mov eax, dword ptr [ebp - 35ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 15h
        push ecx
        mov edx, dword ptr [ebp - 360h]
        push edx
        mov eax, dword ptr [ebp - 364h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 5C 62 DE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x62
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a05c6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 368h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 368h]
        mov dword ptr [eax + edx*4 + 16ch], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 16ch]
        mov dword ptr [ebp - 36ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 47 EF DF FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xef
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 16ch]
        mov dword ptr [ebp - 370h], ecx
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 4E 58 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x58
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 C7 09 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 78: je 0x586a06cb
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 24h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + eax*4 - 1ch]
        imul edx, dword ptr [ebp - 24h], 0eh
        lea eax, [ecx + edx + 2]
        mov dword ptr [ebp - 374h], eax
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 44 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x44
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 378h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 37ch], edx
        mov eax, dword ptr [ebp - 374h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 15h]
        push eax
        push 3
        mov ecx, dword ptr [ebp - 378h]
        push ecx
        mov edx, dword ptr [ebp - 37ch]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 AD A2 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa2
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a06d5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 380h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        lea eax, [edx + ecx*8 + 114h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 380h]
        mov dword ptr [eax + ecx], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax*8 + 114h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 384h], ecx
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 49 57 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x57
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        lea eax, [edx + ecx*8 + 114h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 388h], edx
        push 101h
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 4B 4E 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4e
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 94 08 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 74: je 0x586a07fa
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 24h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + eax*4 - 1ch]
        imul edx, dword ptr [ebp - 24h], 0eh
        lea eax, [ecx + edx + 2]
        mov dword ptr [ebp - 38ch], eax
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 43 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x43
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 390h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 394h], edx
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 54h
        push ecx
        push 4
        mov edx, dword ptr [ebp - 390h]
        push edx
        mov eax, dword ptr [ebp - 394h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 7E A1 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa1
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a0804
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 398h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 398h]
        mov dword ptr [ecx + eax], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax*8 + 114h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 39ch], edx
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 32h
        push ecx
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 1A 56 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x56
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 3a0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 1C 4D 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x4d
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 74h
        ; Exact mapped bytes E8 68 07 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x586a0937
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp + eax*4 - 1ch]
        imul eax, dword ptr [ebp - 24h], 0eh
        lea ecx, [edx + eax + 6]
        mov dword ptr [ebp - 3a4h], ecx
        push 2ch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 42 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x42
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 3a8h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 3ach], eax
        push 40h
        mov ecx, dword ptr [ebp - 3a4h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 74h]
        push ecx
        mov edx, dword ptr [ebp - 3a8h]
        push edx
        mov eax, dword ptr [ebp - 3ach]
        push eax
        push 0
        push 9c4h
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 21 31 E6 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x31
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a0941
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 3b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 3b0h]
        mov dword ptr [eax + edx*4 + 1e4h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 1e4h]
        mov dword ptr [ebp - 3b4h], ecx
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 33h
        push eax
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 F3 54 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x54
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 6F 06 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x06
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x586a0a30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + eax*4 - 1ch]
        imul edx, dword ptr [ebp - 24h], 0eh
        lea eax, [ecx + edx + 6]
        mov dword ptr [ebp - 3b8h], eax
        push 2ch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 41 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x41
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 3bch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 3c0h], edx
        push 40h
        mov eax, dword ptr [ebp - 3b8h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 74h]
        push eax
        mov ecx, dword ptr [ebp - 3bch]
        push ecx
        mov edx, dword ptr [ebp - 3c0h]
        push edx
        push 0
        push 9c4h
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 28 30 E6 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x30
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a0a3a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov eax, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 3c4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 3c4h]
        mov dword ptr [edx + ecx*4 + 1b8h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx*4 + 1b8h]
        mov dword ptr [ebp - 3c8h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 32h
        push edx
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 FA 53 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x53
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 1b8h]
        mov dword ptr [ebp - 3cch], edx
        push 80h
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 97 4A 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x4a
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 1b8h]
        mov dword ptr [ebp - 3d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 D7 52 DE FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x52
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 49 FA FF FF: jmp 0x586a0518
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 2B 05 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 57: je 0x586a0b46
        __asm _emit 0x74
        __asm _emit 0x57
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 3F DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x3f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 3d4h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 3d8h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 2ch
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 76h]
        push edx
        push 3
        mov eax, dword ptr [ebp - 3d4h]
        push eax
        mov ecx, dword ptr [ebp - 3d8h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 32 9E 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x9e
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a0b50
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 3dch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 3dch]
        mov dword ptr [edx + ecx + 198h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 198h]
        mov dword ptr [ebp - 3e0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 10 4A 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4a
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 198h]
        mov dword ptr [ebp - 3e4h], edx
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 32h
        push ecx
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 B2 52 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x52
        __asm _emit 0xde
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B8 53 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x53
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
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
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x586a0c08
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 8
        ; Exact mapped bytes 0F 8D AF 01 00 00: jge 0x586a0dc1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 EB 03 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 5D: je 0x586a0c8c
        __asm _emit 0x74
        __asm _emit 0x5d
        push 0
        push 0
        push 707070h
        imul eax, dword ptr [ebp - 24h], 0ch
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 0c6h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0c8h
        push eax
        imul ecx, dword ptr [ebp - 24h], 0ch
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 0b6h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0eh
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 2C 17 DE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x17
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a0c96
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 3e8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 3e8h]
        mov dword ptr [ecx + eax*4 + 0b4h], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 3ech], edx
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 96h
        push ecx
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 9B 51 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x51
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 17 03 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 60: je 0x586a0d63
        __asm _emit 0x74
        __asm _emit 0x60
        push 0
        push 0
        push 707070h
        imul edx, dword ptr [ebp - 24h], 0ch
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 0c6h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0b8h
        push edx
        imul eax, dword ptr [ebp - 24h], 0ch
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 0b6h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 9ah
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 94h]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 55 16 DE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x16
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a0d6d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 3f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 3f0h]
        mov dword ptr [eax + edx*4 + 0d8h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0d8h]
        mov dword ptr [ebp - 3f4h], ecx
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 96h
        push eax
        mov ecx, dword ptr [ebp - 3f4h]
        ; Exact mapped bytes E8 C5 50 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x50
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3E FE FF FF: jmp 0x586a0bff
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 3C 02 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 5F: je 0x586a0e3d
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 0ch
        mov dword ptr [ebp - 3f8h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 32h
        mov dword ptr [ebp - 3fch], ecx
        push 3dh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 3D DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x3d
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 400h], eax
        push 40h
        mov edx, dword ptr [ebp - 3f8h]
        push edx
        mov eax, dword ptr [ebp - 3fch]
        push eax
        mov ecx, dword ptr [ebp - 400h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 EB 14 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a0e47
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 404h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 404h]
        mov dword ptr [ecx + 328h], edx
        push 54h
        ; Exact mapped bytes E8 97 01 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 5F: je 0x586a0ee2
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 0ch
        mov dword ptr [ebp - 408h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        add eax, 32h
        mov dword ptr [ebp - 40ch], eax
        push 3ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 3C DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 410h], eax
        push 40h
        mov ecx, dword ptr [ebp - 408h]
        push ecx
        mov edx, dword ptr [ebp - 40ch]
        push edx
        mov eax, dword ptr [ebp - 410h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 46 14 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a0eec
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 414h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 414h]
        mov dword ptr [eax + 32ch], ecx
        push 54h
        ; Exact mapped bytes E8 F2 00 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 5F: je 0x586a0f87
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 8]
        sub eax, 0ch
        mov dword ptr [ebp - 418h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        add edx, 3eh
        mov dword ptr [ebp - 4c4h], edx
        push 3fh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 3B DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3b
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 420h], eax
        push 40h
        mov eax, dword ptr [ebp - 418h]
        push eax
        mov ecx, dword ptr [ebp - 4c4h]
        push ecx
        mov edx, dword ptr [ebp - 420h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 A1 13 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x13
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a0f91
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 424h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 424h]
        mov dword ptr [edx + 330h], eax
        push 54h
        ; Exact mapped bytes E8 4D 00 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 5F: je 0x586a102c
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 0ch
        mov dword ptr [ebp - 428h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 3eh
        mov dword ptr [ebp - 42ch], ecx
        push 3eh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 3B DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x3b
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 430h], eax
        push 40h
        mov edx, dword ptr [ebp - 428h]
        push edx
        mov eax, dword ptr [ebp - 42ch]
        push eax
        mov ecx, dword ptr [ebp - 430h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 FC 12 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1036
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov eax, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 434h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 434h]
        mov dword ptr [ecx + 334h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 32ch]
        mov dword ptr [ebp - 438h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 438h]
        ; Exact mapped bytes E8 3C 45 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 334h]
        mov dword ptr [ebp - 43ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 43ch]
        ; Exact mapped bytes E8 1D 45 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x45
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 50h
        ; Exact mapped bytes E8 69 FF 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 25: je 0x586a10d6
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 C2 38 11 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a10e0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov ecx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 440h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 440h]
        mov dword ptr [edx + 218h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 218h]
        mov dword ptr [ebp - 444h], edx
        push 0
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 75 4E DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4e
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 E1 FE 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 50: je 0x586a1189
        __asm _emit 0x74
        __asm _emit 0x50
        push 38fh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 39 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x39
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 448h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 218h]
        mov dword ptr [ebp - 44ch], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 448h]
        push ecx
        mov edx, dword ptr [ebp - 44ch]
        push edx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 9F 11 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x11
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1193
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov eax, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 450h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 450h]
        mov dword ptr [ecx + 220h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 454h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 DF 43 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x43
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 2B FE 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 50: je 0x586a123f
        __asm _emit 0x74
        __asm _emit 0x50
        push 38eh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 39 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x39
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 458h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 218h]
        mov dword ptr [ebp - 45ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 458h]
        push eax
        mov ecx, dword ptr [ebp - 45ch]
        push ecx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 E9 10 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1249
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov edx, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 460h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 460h]
        mov dword ptr [eax + 21ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 21ch]
        mov dword ptr [ebp - 464h], eax
        push 101h
        mov ecx, dword ptr [ebp - 464h]
        ; Exact mapped bytes E8 29 43 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x43
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x586a129a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 20h
        ; Exact mapped bytes 0F 8D 67 01 00 00: jge 0x586a140b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 1fh
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x586a134f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 4F FD 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 170h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 170h], 0
        ; Exact mapped bytes 74 55: je 0x586a1320
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 24h]
        add edx, 390h
        push edx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 38 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x38
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 468h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 218h]
        mov dword ptr [ebp - 46ch], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 468h]
        push ecx
        mov edx, dword ptr [ebp - 46ch]
        push edx
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 08 10 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a132a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov eax, dword ptr [ebp - 174h]
        mov dword ptr [ebp - 470h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 470h]
        mov dword ptr [edx + ecx*4 + 224h], eax
        ; Exact mapped bytes EB 73: jmp 0x586a13c2
        __asm _emit 0xeb
        __asm _emit 0x73
        push 54h
        ; Exact mapped bytes E8 AE FC 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 74 29: je 0x586a1395
        __asm _emit 0x74
        __asm _emit 0x29
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 218h]
        push ecx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 93 0F DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a139f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov edx, dword ptr [ebp - 17ch]
        mov dword ptr [ebp - 474h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 474h]
        mov dword ptr [ecx + eax*4 + 224h], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 224h]
        mov dword ptr [ebp - 478h], edx
        push 101h
        mov ecx, dword ptr [ebp - 478h]
        ; Exact mapped bytes E8 CB 41 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x41
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 224h]
        mov dword ptr [ebp - 47ch], edx
        push 1
        mov ecx, dword ptr [ebp - 47ch]
        ; Exact mapped bytes E8 8B 4B DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 86 FE FF FF: jmp 0x586a1291
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 1eh
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 224h]
        mov dword ptr [ebp - 480h], eax
        push 0
        mov ecx, dword ptr [ebp - 480h]
        ; Exact mapped bytes E8 00 4B DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x4b
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 1fh
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 224h]
        mov dword ptr [ebp - 488h], ecx
        push 409h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 36 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x36
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 484h], eax
        mov edx, dword ptr [ebp - 484h]
        push edx
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 C0 4A DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x4a
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 89 FB 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfb
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1bch], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 1bch], 0
        ; Exact mapped bytes 74 57: je 0x586a14e8
        __asm _emit 0x74
        __asm _emit 0x57
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 36 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x36
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 48ch], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 218h]
        mov dword ptr [ebp - 490h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 2ch
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 76h]
        push edx
        push 3
        mov eax, dword ptr [ebp - 48ch]
        push eax
        mov ecx, dword ptr [ebp - 490h]
        push ecx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 90 94 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a14f2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 184h], 0
        mov edx, dword ptr [ebp - 184h]
        mov dword ptr [ebp - 494h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 494h]
        mov dword ptr [ecx + eax + 198h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 198h]
        mov dword ptr [ebp - 498h], edx
        push 101h
        mov ecx, dword ptr [ebp - 498h]
        ; Exact mapped bytes E8 6E 40 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 198h]
        mov dword ptr [ebp - 49ch], edx
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 32h
        push ecx
        mov ecx, dword ptr [ebp - 49ch]
        ; Exact mapped bytes E8 10 49 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x49
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 50h
        ; Exact mapped bytes E8 8C FA 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 188h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 188h], 0
        ; Exact mapped bytes 74 25: je 0x586a15b3
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 E5 33 11 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x33
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a15bd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 18ch], 0
        mov edx, dword ptr [ebp - 18ch]
        mov dword ptr [ebp - 4a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4a0h]
        mov dword ptr [eax + 2a4h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2a4h]
        mov dword ptr [ebp - 4a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes E8 98 49 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x49
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 04 FA 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfa
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 190h], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 190h], 0
        ; Exact mapped bytes 74 50: je 0x586a1666
        __asm _emit 0x74
        __asm _emit 0x50
        push 226h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 34 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x34
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4a8h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 2a4h]
        mov dword ptr [ebp - 4ach], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4a8h]
        push edx
        mov eax, dword ptr [ebp - 4ach]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 C2 0C DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1670
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 194h], 0
        mov ecx, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 4b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4b0h]
        mov dword ptr [edx + 2ach], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 2ach]
        mov dword ptr [ebp - 4b4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 4b4h]
        ; Exact mapped bytes E8 02 3F 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3f
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 4E F9 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 198h], eax
        mov byte ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 198h], 0
        ; Exact mapped bytes 74 50: je 0x586a171c
        __asm _emit 0x74
        __asm _emit 0x50
        push 227h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 34 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4b8h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 2a4h]
        mov dword ptr [ebp - 4bch], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4b8h]
        push ecx
        mov edx, dword ptr [ebp - 4bch]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 0C 0C DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1726
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov eax, dword ptr [ebp - 19ch]
        mov dword ptr [ebp - 4c0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4c0h]
        mov dword ptr [ecx + 2a8h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 2a8h]
        mov dword ptr [ebp - 56ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 56ch]
        ; Exact mapped bytes E8 4C 3E 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3e
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 95 F8 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a0h], eax
        mov byte ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes 74 53: je 0x586a17d8
        __asm _emit 0x74
        __asm _emit 0x53
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 33 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x33
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4c8h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2a4h]
        mov dword ptr [ebp - 4cch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 50h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 20h
        push edx
        push 9
        mov eax, dword ptr [ebp - 4c8h]
        push eax
        mov ecx, dword ptr [ebp - 4cch]
        push ecx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 A0 91 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x91
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a17e2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov edx, dword ptr [ebp - 1a4h]
        mov dword ptr [ebp - 4d0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4d0h]
        mov dword ptr [eax + 2dch], ecx
        push 0fch
        ; Exact mapped bytes E8 F9 F7 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf7
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a8h], eax
        mov byte ptr [ebp - 4], 2eh
        cmp dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes 74 53: je 0x586a1874
        __asm _emit 0x74
        __asm _emit 0x53
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 32 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x32
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4d4h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2a4h]
        mov dword ptr [ebp - 4d8h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 50h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 70h
        push edx
        push 5
        mov eax, dword ptr [ebp - 4d4h]
        push eax
        mov ecx, dword ptr [ebp - 4d8h]
        push ecx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 04 91 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x91
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a187e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov edx, dword ptr [ebp - 1ach]
        mov dword ptr [ebp - 4dch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4dch]
        mov dword ptr [eax + 2e0h], ecx
        push 58h
        ; Exact mapped bytes E8 60 F7 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b0h], eax
        mov byte ptr [ebp - 4], 2fh
        cmp dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes 74 53: je 0x586a190d
        __asm _emit 0x74
        __asm _emit 0x53
        push 1
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 32 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x32
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4e0h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2a4h]
        mov dword ptr [ebp - 4e4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 51h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 62h
        push edx
        mov eax, dword ptr [ebp - 4e0h]
        push eax
        mov ecx, dword ptr [ebp - 4e4h]
        push ecx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 0B 4F DE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x4f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1917
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov edx, dword ptr [ebp - 1b4h]
        mov dword ptr [ebp - 4e8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4e8h]
        mov dword ptr [edx + ecx + 2b0h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 2b0h]
        mov dword ptr [ebp - 4ech], ecx
        push 0
        mov ecx, dword ptr [ebp - 4ech]
        ; Exact mapped bytes E8 EC DB DF FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xdb
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 2b0h]
        mov dword ptr [ebp - 4f0h], edx
        mov eax, dword ptr [ebp - 20h]
        movzx ecx, word ptr [eax + 26h]
        push ecx
        mov ecx, dword ptr [ebp - 4f0h]
        ; Exact mapped bytes E8 F1 44 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x44
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 6A F6 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf6
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b8h], eax
        mov byte ptr [ebp - 4], 30h
        cmp dword ptr [ebp - 1b8h], 0
        ; Exact mapped bytes 74 53: je 0x586a1a03
        __asm _emit 0x74
        __asm _emit 0x53
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 31 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x31
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4f4h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2a4h]
        mov dword ptr [ebp - 4f8h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 21h
        push edx
        push 9
        mov eax, dword ptr [ebp - 4f4h]
        push eax
        mov ecx, dword ptr [ebp - 4f8h]
        push ecx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 75 8F 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x8f
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1a0d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f8h], 0
        mov edx, dword ptr [ebp - 1f8h]
        mov dword ptr [ebp - 4fch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4fch]
        mov dword ptr [eax + 2d8h], ecx
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x586a1a3e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 7
        ; Exact mapped bytes 0F 8D 5E 02 00 00: jge 0x586a1ca6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0bah
        push 0fch
        ; Exact mapped bytes E8 AB F5 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf5
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov byte ptr [ebp - 4], 31h
        cmp dword ptr [ebp - 1c0h], 0
        ; Exact mapped bytes 74 5C: je 0x586a1acb
        __asm _emit 0x74
        __asm _emit 0x5c
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 30 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x30
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 500h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 2a4h]
        mov dword ptr [ebp - 504h], ecx
        imul edx, dword ptr [ebp - 28h], 0eh
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 3ch]
        add eax, edx
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 35h
        push ecx
        push 9
        mov edx, dword ptr [ebp - 500h]
        push edx
        mov eax, dword ptr [ebp - 504h]
        push eax
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 AD 8E 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x8e
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1ad5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov ecx, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 508h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx*8 + 2e4h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 508h]
        mov dword ptr [ecx + edx], eax
        push 0fch
        ; Exact mapped bytes E8 F7 F4 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf4
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov byte ptr [ebp - 4], 32h
        cmp dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes 74 5C: je 0x586a1b7f
        __asm _emit 0x74
        __asm _emit 0x5c
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 2F DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 50ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 2a4h]
        mov dword ptr [ebp - 510h], edx
        imul eax, dword ptr [ebp - 28h], 0eh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 3ch]
        add ecx, eax
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 7ch
        push edx
        push 5
        mov eax, dword ptr [ebp - 50ch]
        push eax
        mov ecx, dword ptr [ebp - 510h]
        push ecx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 F9 8D 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8d
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1b89
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov edx, dword ptr [ebp - 1cch]
        mov dword ptr [ebp - 514h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax*8 + 2e4h]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 514h]
        mov dword ptr [edx + ecx], eax
        push 58h
        ; Exact mapped bytes E8 46 F4 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf4
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d0h], eax
        mov byte ptr [ebp - 4], 33h
        cmp dword ptr [ebp - 1d0h], 0
        ; Exact mapped bytes 74 59: je 0x586a1c2d
        __asm _emit 0x74
        __asm _emit 0x59
        push 0
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 2E DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x2e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 2a4h]
        mov dword ptr [ebp - 51ch], edx
        push 40h
        imul eax, dword ptr [ebp - 28h], 0eh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 3ch]
        add ecx, eax
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 6bh
        push edx
        mov eax, dword ptr [ebp - 518h]
        push eax
        mov ecx, dword ptr [ebp - 51ch]
        push ecx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 EB 4B DE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x4b
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1c37
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d4h], 0
        mov edx, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 520h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 520h]
        mov dword ptr [ecx + eax*4 + 2b8h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 2b8h]
        mov dword ptr [ebp - 524h], edx
        push 0
        mov ecx, dword ptr [ebp - 524h]
        ; Exact mapped bytes E8 D6 D8 DF FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 2b8h]
        mov dword ptr [ebp - 528h], edx
        mov eax, dword ptr [ebp - 20h]
        movzx ecx, word ptr [eax + 26h]
        push ecx
        mov ecx, dword ptr [ebp - 528h]
        ; Exact mapped bytes E8 E0 41 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x41
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8F FD FF FF: jmp 0x586a1a35
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 54 F3 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf3
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov byte ptr [ebp - 4], 34h
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 74 59: je 0x586a1d1f
        __asm _emit 0x74
        __asm _emit 0x59
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 2D DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x2d
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 52ch], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2a4h]
        mov dword ptr [ebp - 530h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 125h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 35h
        push edx
        push 9
        mov eax, dword ptr [ebp - 52ch]
        push eax
        mov ecx, dword ptr [ebp - 530h]
        push ecx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 59 8C 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1d29
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1dch], 0
        mov edx, dword ptr [ebp - 1dch]
        mov dword ptr [ebp - 534h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 534h]
        mov dword ptr [eax + 31ch], ecx
        push 0fch
        ; Exact mapped bytes E8 B2 F2 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf2
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e0h], eax
        mov byte ptr [ebp - 4], 35h
        cmp dword ptr [ebp - 1e0h], 0
        ; Exact mapped bytes 74 59: je 0x586a1dc1
        __asm _emit 0x74
        __asm _emit 0x59
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 2D DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 538h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2a4h]
        mov dword ptr [ebp - 53ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 125h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 7ch
        push edx
        push 5
        mov eax, dword ptr [ebp - 538h]
        push eax
        mov ecx, dword ptr [ebp - 53ch]
        push ecx
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 B7 8B 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8b
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1dcb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e4h], 0
        mov edx, dword ptr [ebp - 1e4h]
        mov dword ptr [ebp - 540h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 540h]
        mov dword ptr [eax + 320h], ecx
        push 58h
        ; Exact mapped bytes E8 13 F2 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf2
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e8h], eax
        mov byte ptr [ebp - 4], 36h
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 74 56: je 0x586a1e5d
        __asm _emit 0x74
        __asm _emit 0x56
        push 0
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 2C DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 544h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2a4h]
        mov dword ptr [ebp - 548h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 120h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 6bh
        push edx
        mov eax, dword ptr [ebp - 544h]
        push eax
        mov ecx, dword ptr [ebp - 548h]
        push ecx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 BB 49 DE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x49
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1e67
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ech], 0
        mov edx, dword ptr [ebp - 1ech]
        mov dword ptr [ebp - 54ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 54ch]
        mov dword ptr [edx + ecx + 2b8h], eax
        mov ecx, 4
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 2b8h]
        mov dword ptr [ebp - 550h], ecx
        push 0
        mov ecx, dword ptr [ebp - 550h]
        ; Exact mapped bytes E8 9C D6 DF FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 2b8h]
        mov dword ptr [ebp - 554h], edx
        mov eax, dword ptr [ebp - 20h]
        movzx ecx, word ptr [eax + 26h]
        push ecx
        mov ecx, dword ptr [ebp - 554h]
        ; Exact mapped bytes E8 A1 3F DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3f
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 1A F1 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf1
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f0h], eax
        mov byte ptr [ebp - 4], 37h
        cmp dword ptr [ebp - 1f0h], 0
        ; Exact mapped bytes 74 57: je 0x586a1f57
        __asm _emit 0x74
        __asm _emit 0x57
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 2B DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2b
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 558h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2a4h]
        mov dword ptr [ebp - 55ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 2ch
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 76h]
        push ecx
        push 3
        mov edx, dword ptr [ebp - 558h]
        push edx
        mov eax, dword ptr [ebp - 55ch]
        push eax
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 21 8A 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8a
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a1f61
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f4h], 0
        mov ecx, dword ptr [ebp - 1f4h]
        mov dword ptr [ebp - 560h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 560h]
        mov dword ptr [eax + edx + 198h], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 198h]
        mov dword ptr [ebp - 564h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 564h]
        ; Exact mapped bytes E8 01 36 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x36
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 198h]
        mov dword ptr [ebp - 568h], ecx
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 568h]
        ; Exact mapped bytes E8 A4 3E DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3e
        __asm _emit 0xde
        __asm _emit 0xff
        xor ecx, ecx
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 89 8A 24 03 00 00: mov word ptr [edx + 0x324], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [eax + 88h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 37 F0 18 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf0
        __asm _emit 0x18
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
