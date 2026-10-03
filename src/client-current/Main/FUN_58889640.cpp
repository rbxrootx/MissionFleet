// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 4605 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58889640 .. +0x11FD bytes.
extern "C" __declspec(naked) void FUN_58889640_segment_00() {
    __asm {
        push -1
        push 58986df2h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 120h
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 134h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 130h], esi
        mov eax, dword ptr [esp + 158h]
        mov ecx, dword ptr [esp + 154h]
        mov edx, dword ptr [esp + 150h]
        mov ebx, dword ptr [esp + 14ch]
        mov ebp, dword ptr [esp + 148h]
        push eax
        mov eax, dword ptr [esp + 148h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F3 9A 07 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor eax, eax
        or edi, 0ffffffffh
        mov dword ptr [esp + 13ch], eax
        mov dword ptr [esi], 5899fb0ch
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esp + 6ch], edi
        mov dword ptr [esp + 70h], eax
        mov dword ptr [esp + 74h], eax
        mov dword ptr [esp + 78h], eax
        mov dword ptr [esp + 7ch], eax
        mov dword ptr [esp + 80h], eax
        mov dword ptr [esp + 84h], eax
        mov dword ptr [esp + 50h], edi
        mov dword ptr [esp + 54h], eax
        mov dword ptr [esp + 58h], eax
        mov dword ptr [esp + 5ch], eax
        mov dword ptr [esp + 60h], eax
        mov dword ptr [esp + 64h], eax
        mov dword ptr [esp + 68h], eax
        mov dword ptr [esp + 0dch], edi
        mov dword ptr [esp + 0e0h], eax
        mov dword ptr [esp + 0e4h], eax
        mov dword ptr [esp + 0e8h], eax
        mov dword ptr [esp + 0ech], eax
        mov dword ptr [esp + 0f0h], eax
        mov dword ptr [esp + 0f4h], eax
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 0c0h], edi
        mov dword ptr [esp + 0c4h], eax
        mov dword ptr [esp + 0c8h], eax
        mov dword ptr [esp + 0cch], eax
        mov dword ptr [esp + 0d0h], eax
        mov dword ptr [esp + 0d4h], eax
        mov dword ptr [esp + 0d8h], eax
        mov dword ptr [esp + 0a4h], edi
        mov dword ptr [esp + 0a8h], eax
        mov dword ptr [esp + 0ach], eax
        mov dword ptr [esp + 0b0h], eax
        mov dword ptr [esp + 0b4h], eax
        mov dword ptr [esp + 0b8h], eax
        mov dword ptr [esp + 0bch], eax
        mov dword ptr [esp + 34h], edi
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 48h], eax
        mov dword ptr [esp + 4ch], eax
        mov dword ptr [esp + 88h], edi
        mov dword ptr [esp + 8ch], eax
        mov dword ptr [esp + 90h], eax
        mov dword ptr [esp + 94h], eax
        mov dword ptr [esp + 98h], eax
        mov dword ptr [esp + 9ch], eax
        mov dword ptr [esp + 0a0h], eax
        push 198h
        mov dword ptr [esp + 0fch], edi
        mov dword ptr [esp + 100h], eax
        mov dword ptr [esp + 104h], eax
        mov dword ptr [esp + 108h], eax
        mov dword ptr [esp + 10ch], eax
        mov dword ptr [esp + 110h], eax
        mov dword ptr [esp + 114h], eax
        mov dword ptr [esp + 118h], edi
        mov dword ptr [esp + 11ch], eax
        mov dword ptr [esp + 120h], eax
        mov dword ptr [esp + 124h], eax
        mov dword ptr [esp + 128h], eax
        mov dword ptr [esp + 12ch], eax
        mov dword ptr [esp + 130h], eax
        ; Exact mapped bytes E8 CE 33 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x588898a5
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        push 0
        push 5899fbc0h
        mov ecx, eax
        ; Exact mapped bytes E8 CD A4 06 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588898a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 95 33 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 2
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x588898fa
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 0
        ; Exact mapped bytes 7E 0E: jle 0x588898e6
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x588898e6
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x588898e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 1f4h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 68 83 EA FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588898fc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 64h], eax
        mov ecx, dword ptr [eax + 14h]
        add eax, 14h
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        push 74h
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes E8 25 33 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 3
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x5888996e
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x58889957
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x58889957
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x58889959
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 320h
        push ebx
        lea edx, [ebp + 5]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 74 D0 F2 FF: call 0x587b69e0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd0
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58889970
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 6ch
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 CC 32 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x32
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 4
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x588899ae
        __asm _emit 0x74
        __asm _emit 0x19
        push 1f9h
        push ebx
        add ebp, 122h
        push ebp
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 44 A6 F0 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xa6
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588899b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 8C 32 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 5
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x58889a19
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [esi + 70h]
        mov ebp, dword ptr [esi + 60h]
        cmp dword ptr [ebp + 160h], 4
        mov ecx, dword ptr [edx + 8]
        mov edx, dword ptr [edx + 4]
        ; Exact mapped bytes 7E 12: jle 0x588899fc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [ebp + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x588899fc
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 100h
        ; Exact mapped bytes EB 02: jmp 0x588899fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 1feh
        add ecx, 15h
        push ecx
        add edx, 84h
        push edx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 19 B0 EA FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb0
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58889a1b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fffbh
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 70h
        mov byte ptr [esp + 140h], 0
        ; Exact mapped bytes E8 18 32 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x32
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 6
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x58889a86
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [esi + 70h]
        mov ebp, dword ptr [edx + 8]
        mov edx, dword ptr [edx + 4]
        push 0
        push 0
        push 0ffffffh
        lea ecx, [ebp + 24h]
        push ecx
        lea ecx, [edx + 12dh]
        push ecx
        add ebp, 16h
        push ebp
        add edx, 84h
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FE 97 EA FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x97
        __asm _emit 0xea
        __asm _emit 0xff
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x58889a88
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [esi + 7ch], ebp
        mov ecx, dword ptr [ebp + 40h]
        mov eax, 200h
        mov byte ptr [esp + 13ch], 0
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58889aa9
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 A7 94 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58889ab6
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 2A 94 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 7ch]
        push 0ach
        mov dword ptr [eax + 54h], 6
        ; Exact mapped bytes E8 78 31 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x31
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 7
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x58889b36
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x58889b04
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x58889b04
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x58889b06
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 148h]
        push 2bch
        lea edx, [ebx + 2]
        push edx
        lea edx, [ebp + 396h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 6C 42 ED FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x42
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x58889b3f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ebp, dword ptr [esp + 148h]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 F7 30 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 8
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x58889bb0
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 0F: jle 0x58889b85
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x58889b85
        __asm _emit 0x74
        __asm _emit 0x05
        sub ecx, -80h
        ; Exact mapped bytes EB 02: jmp 0x58889b87
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 2bch
        lea edx, [ebx + 2]
        push edx
        lea edx, [ebp + 3c7h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F2 41 ED FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x41
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58889bb2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 84 30 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 9
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x58889c26
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 11h
        ; Exact mapped bytes 7E 12: jle 0x58889bfb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58889bfb
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 440h
        ; Exact mapped bytes EB 02: jmp 0x58889bfd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 2bch
        lea edx, [ebx + 2]
        push edx
        lea edx, [ebp + 303h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 7C 41 ED FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x41
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58889c28
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 0E 30 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 0ah
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x58889c9c
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4ch
        ; Exact mapped bytes 7E 12: jle 0x58889c71
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58889c71
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1300h
        ; Exact mapped bytes EB 02: jmp 0x58889c73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 2bch
        lea edx, [ebx + 2]
        push edx
        lea edx, [ebp + 334h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 06 41 ED FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x41
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58889c9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 98 2F 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 0bh
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x58889d12
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 20h
        ; Exact mapped bytes 7E 12: jle 0x58889ce7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58889ce7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 800h
        ; Exact mapped bytes EB 02: jmp 0x58889ce9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 2bch
        add ebx, 2
        push ebx
        add ebp, 365h
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 90 40 ED FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58889d14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 13ch], 0
        mov dword ptr [esi + 90h], eax
        lea ebp, [esi + 98h]
        mov ebx, 5
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 14 2F 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 0ch
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x58889d7c
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [esp + 14ch]
        mov edx, dword ptr [esp + 148h]
        push 2bch
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 26 40 ED FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58889d7e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        sub ebx, 1
        mov byte ptr [esp + 13ch], 0
        ; Exact mapped bytes 75 9F: jne 0x58889d30
        __asm _emit 0x75
        __asm _emit 0x9f
        push 0ach
        ; Exact mapped bytes E8 B3 2E 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 0dh
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x58889e03
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 12h
        ; Exact mapped bytes 7E 12: jle 0x58889dcc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58889dcc
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 480h]
        ; Exact mapped bytes EB 02: jmp 0x58889dce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 14ch]
        push 2bch
        inc ecx
        push ecx
        mov ecx, dword ptr [esp + 150h]
        add ecx, 14dh
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 94 47 A2 58: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 9F 3F ED FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x3f
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58889e05
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 31 2E 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x2e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 0eh
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x58889e7b
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [esi + 70h]
        ; Exact mapped bytes 8B 0D 94 46 A2 58: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0bh
        mov ebp, dword ptr [edx + 8]
        mov ebx, dword ptr [edx + 4]
        ; Exact mapped bytes 7E 17: jle 0x58889e5f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58889e5f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x58889e61
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add ebp, 35h
        push ebp
        add ebx, 82h
        push ebx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 89 D2 07 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd2
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x58889e7d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [esi + 0b0h], ebp
        mov ecx, dword ptr [ebp + 40h]
        mov edx, 258h
        mov byte ptr [esp + 13ch], 0
        ; Exact mapped bytes 66 89 55 26: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58889ea1
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 AF 90 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58889eae
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 32 90 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 96 2D 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2d
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 0fh
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x58889f13
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [esi + 70h]
        mov ebp, dword ptr [edx + 8]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 8B 15 94 46 A2 58: mov edx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 160h], 0bh
        ; Exact mapped bytes 7E 17: jle 0x58889efa
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [edx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58889efa
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [edx + 190h]
        add edx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x58889efc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add ebp, 35h
        push ebp
        add ecx, 4bh
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F1 D1 07 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd1
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x58889f15
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [esi + 0b4h], ebp
        mov ecx, dword ptr [ebp + 40h]
        mov eax, 258h
        mov byte ptr [esp + 13ch], 0
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58889f39
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 17 90 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58889f46
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 9A 8F 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 FE 2C 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 10h
        mov ebx, 18h
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x58889f88
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [esp + 158h]
        dec ecx
        push ecx
        push 300h
        push 400h
        push ebx
        push 70h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FA 01 02 00: call 0x588aa180
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58889f8a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 0f0h], eax
        ; Exact mapped bytes E8 AC 2C 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 11h
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x5888a00a
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 13h
        ; Exact mapped bytes 7E 12: jle 0x58889fd3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58889fd3
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 4c0h
        ; Exact mapped bytes EB 02: jmp 0x58889fd5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 14ch]
        push 2bch
        inc edx
        push edx
        mov edx, dword ptr [esp + 150h]
        add edx, 2afh
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 98 3D ED FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888a00c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0f4h], eax
        push 230h
        mov byte ptr [esp + 140h], 0
        mov dword ptr [eax + 50h], 5
        ; Exact mapped bytes E8 23 2C 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 12h
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x5888a060
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [esp + 148h]
        push 40h
        push 0
        push 0
        push 0fffffee4h
        add ecx, 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B4 0F 00 00: call 0x5888b010
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x5888a062
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [esi + 78h], ebp
        mov ecx, dword ptr [ebp + 40h]
        mov edx, 1f4h
        mov byte ptr [esp + 13ch], 0
        ; Exact mapped bytes 66 89 55 26: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5888a083
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 CD 8E 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5888a090
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 50 8E 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 78h]
        mov edx, 0dfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        xor ebp, ebp
        mov eax, 0ch
        xor ecx, ecx
        push 0e8h
        mov dword ptr [esi + 0bch], 1
        mov dword ptr [esi + 0c0h], ebp
        ; Exact mapped bytes 66 89 86 D0 00 00 00: mov word ptr [esi + 0xd0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E D2 00 00 00: mov word ptr [esi + 0xd2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0c4h], ebp
        ; Exact mapped bytes E8 6F 2B 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x2b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 13h
        cmp eax, ebp
        ; Exact mapped bytes 74 49: je 0x5888a13b
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 158h]
        push edx
        mov edx, dword ptr [esp + 158h]
        dec ecx
        push ecx
        mov ecx, dword ptr [esp + 158h]
        add edx, 0ffffff38h
        push edx
        mov edx, dword ptr [esp + 158h]
        push ecx
        mov ecx, dword ptr [esp + 158h]
        add edx, 0ffffff38h
        push edx
        add ecx, 24eh
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 27 D6 FF FF: call 0x58887760
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888a13d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 1
        mov ecx, eax
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 5C D2 FF FF: call 0x588873b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0e8h
        ; Exact mapped bytes E8 F0 2A 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov ebp, 14h
        mov byte ptr [esp + 13ch], 14h
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x5888a1bf
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 158h]
        push edx
        mov edx, dword ptr [esp + 158h]
        dec ecx
        push ecx
        mov ecx, dword ptr [esp + 158h]
        add edx, 0ffffff38h
        push edx
        mov edx, dword ptr [esp + 158h]
        push ecx
        mov ecx, dword ptr [esp + 158h]
        add edx, 0ffffff38h
        push edx
        add ecx, 32eh
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A3 D5 FF FF: call 0x58887760
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888a1c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 2
        mov ecx, eax
        mov byte ptr [esp + 140h], 0
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 D8 D1 FF FF: call 0x588873b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 17h
        mov dword ptr [esp + 70h], eax
        mov dword ptr [esp + 80h], eax
        mov eax, 2ch
        mov dword ptr [esp + 0ach], eax
        mov dword ptr [esp + 0b0h], eax
        mov eax, 2dh
        mov dword ptr [esp + 0b4h], eax
        mov dword ptr [esp + 0bch], eax
        mov eax, 1ah
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 2ch], eax
        mov eax, 2fh
        mov dword ptr [esp + 100h], eax
        mov dword ptr [esp + 104h], eax
        mov ecx, 19h
        mov dword ptr [esp + 7ch], ecx
        mov dword ptr [esp + 84h], ecx
        mov eax, 30h
        mov dword ptr [esp + 108h], eax
        mov dword ptr [esp + 110h], eax
        mov ecx, 2bh
        mov dword ptr [esp + 0a8h], ecx
        mov dword ptr [esp + 0b8h], ecx
        mov eax, 16h
        mov dword ptr [esp + 60h], eax
        mov dword ptr [esp + 68h], eax
        mov ecx, 1bh
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 24h], ecx
        mov eax, 29h
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 40h], eax
        mov ecx, 1ch
        mov eax, 2ah
        mov dword ptr [esp + 28h], ecx
        mov dword ptr [esp + 30h], ecx
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 4ch], eax
        mov ecx, 2eh
        mov eax, 1eh
        mov dword ptr [esp + 0fch], ecx
        mov dword ptr [esp + 10ch], ecx
        mov dword ptr [esp + 0e4h], eax
        mov dword ptr [esp + 0e8h], eax
        mov ecx, 28h
        mov eax, 1fh
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 48h], ecx
        mov ecx, 1dh
        mov dword ptr [esp + 0ech], eax
        mov dword ptr [esp + 0f4h], eax
        mov eax, 32h
        mov dword ptr [esp + 74h], ebx
        mov dword ptr [esp + 78h], ebx
        mov ebx, 15h
        mov dword ptr [esp + 0e0h], ecx
        mov dword ptr [esp + 0f0h], ecx
        mov dword ptr [esp + 90h], eax
        mov dword ptr [esp + 94h], eax
        mov ecx, 31h
        mov eax, 33h
        mov dword ptr [esp + 6ch], edi
        mov dword ptr [esp + 0a4h], edi
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 0f8h], edi
        mov dword ptr [esp + 50h], edi
        mov dword ptr [esp + 54h], ebp
        mov dword ptr [esp + 58h], ebx
        mov dword ptr [esp + 5ch], ebx
        mov dword ptr [esp + 64h], ebp
        mov dword ptr [esp + 34h], edi
        mov dword ptr [esp + 0dch], edi
        mov dword ptr [esp + 88h], edi
        mov dword ptr [esp + 8ch], ecx
        mov dword ptr [esp + 98h], eax
        mov dword ptr [esp + 0a0h], eax
        mov eax, 3dh
        mov dword ptr [esp + 0c8h], eax
        mov dword ptr [esp + 0cch], eax
        mov eax, 3eh
        mov dword ptr [esp + 9ch], ecx
        mov dword ptr [esp + 0d0h], eax
        mov dword ptr [esp + 0d8h], eax
        mov ecx, 3ch
        mov eax, 44h
        mov dword ptr [esp + 0c4h], ecx
        mov dword ptr [esp + 0d4h], ecx
        mov ecx, 43h
        mov dword ptr [esp + 11ch], eax
        mov dword ptr [esp + 120h], eax
        mov eax, 45h
        push 0b8h
        mov dword ptr [esp + 0c4h], edi
        mov dword ptr [esp + 118h], edi
        mov dword ptr [esp + 11ch], ecx
        mov dword ptr [esp + 128h], eax
        mov dword ptr [esp + 12ch], ecx
        mov dword ptr [esp + 130h], eax
        ; Exact mapped bytes E8 44 28 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov edi, dword ptr [esp + 158h]
        mov ebp, dword ptr [esp + 14ch]
        mov byte ptr [esp + 13ch], bl
        mov ebx, dword ptr [esp + 154h]
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x5888a46c
        __asm _emit 0x74
        __asm _emit 0x3b
        lea edx, [edi + 2bch]
        push edx
        mov edx, dword ptr [esp + 154h]
        lea ecx, [ebx + 15bh]
        push ecx
        add edx, 135h
        push edx
        mov edx, dword ptr [esp + 154h]
        lea ecx, [ebp + 0f7h]
        push ecx
        add edx, 0d1h
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A6 5B EC FF: call 0x58750010
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5b
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888a46e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [esp + 0a4h]
        push ecx
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [esp + 70h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 60h]
        push edx
        push ecx
        mov ecx, eax
        mov byte ptr [esp + 150h], 0
        ; Exact mapped bytes E8 FE 5C EC FF: call 0x587501a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5c
        __asm _emit 0xec
        __asm _emit 0xff
        push 0b8h
        ; Exact mapped bytes E8 A2 27 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x27
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 16h
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x5888a4fa
        __asm _emit 0x74
        __asm _emit 0x3b
        lea edx, [edi + 2bch]
        push edx
        mov edx, dword ptr [esp + 154h]
        lea ecx, [ebx + 208h]
        push ecx
        add edx, 334h
        push edx
        mov edx, dword ptr [esp + 154h]
        lea ecx, [ebp + 1a4h]
        push ecx
        add edx, 2d0h
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 18 5B EC FF: call 0x58750010
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x5b
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888a4fc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [esp + 0f8h]
        push ecx
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 60h]
        push edx
        push ecx
        mov ecx, eax
        mov byte ptr [esp + 150h], 0
        ; Exact mapped bytes E8 70 5C EC FF: call 0x587501a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5c
        __asm _emit 0xec
        __asm _emit 0xff
        push 0b8h
        ; Exact mapped bytes E8 14 27 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 17h
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x5888a588
        __asm _emit 0x74
        __asm _emit 0x3b
        lea edx, [edi + 2bch]
        push edx
        mov edx, dword ptr [esp + 154h]
        lea ecx, [ebx + 21ah]
        push ecx
        add edx, 162h
        push edx
        mov edx, dword ptr [esp + 154h]
        lea ecx, [ebp + 1b6h]
        push ecx
        add edx, 0feh
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8A 5A EC FF: call 0x58750010
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x5a
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888a58a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [esp + 34h]
        push ecx
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [esp + 54h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 60h]
        push edx
        push ecx
        mov ecx, eax
        mov byte ptr [esp + 150h], 0
        ; Exact mapped bytes E8 E5 5B EC FF: call 0x587501a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x5b
        __asm _emit 0xec
        __asm _emit 0xff
        push 0b8h
        ; Exact mapped bytes E8 89 26 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x26
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 18h
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x5888a613
        __asm _emit 0x74
        __asm _emit 0x3b
        lea edx, [edi + 2bch]
        push edx
        mov edx, dword ptr [esp + 154h]
        lea ecx, [ebx + 145h]
        push ecx
        add edx, 303h
        push edx
        mov edx, dword ptr [esp + 154h]
        lea ecx, [ebp + 0e1h]
        push ecx
        add edx, 29fh
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FF 59 EC FF: call 0x58750010
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x59
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888a615
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [esp + 88h]
        push ecx
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [esp + 0e0h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 60h]
        push edx
        push ecx
        mov ecx, eax
        mov byte ptr [esp + 150h], 0
        ; Exact mapped bytes E8 54 5B EC FF: call 0x587501a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5b
        __asm _emit 0xec
        __asm _emit 0xff
        push 0b8h
        ; Exact mapped bytes E8 F8 25 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 19h
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x5888a6a4
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [esp + 150h]
        add edi, 2bch
        push edi
        add ebx, 0c6h
        push ebx
        add edx, 1feh
        push edx
        mov edx, dword ptr [esp + 154h]
        lea ecx, [ebp + 85h]
        push ecx
        add edx, 1b3h
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6E 59 EC FF: call 0x58750010
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x59
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888a6a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [esp + 114h]
        push ecx
        mov dword ptr [esi + 0ech], eax
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [esp + 0c4h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 60h]
        push edx
        push ecx
        mov ecx, eax
        mov byte ptr [esp + 150h], 0
        ; Exact mapped bytes E8 C3 5A EC FF: call 0x587501a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x5a
        __asm _emit 0xec
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 6A 25 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        mov byte ptr [esp + 13ch], 1ah
        test edi, edi
        ; Exact mapped bytes 74 78: je 0x5888a771
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 1d9h
        ; Exact mapped bytes 7E 12: jle 0x5888a71a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x5888a71a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 764h]
        ; Exact mapped bytes EB 02: jmp 0x5888a71c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 148h]
        push 1f4h
        push 0
        push 0
        push ebp
        add edx, 10ah
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 64 8A 07 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x8a
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x5888a773
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x5888a773
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0f8h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 13ch], 0
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5888a78e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D2 89 07 00: call 0x58903160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        push 40h
        lea ecx, [esi + 100h]
        push 0
        push ecx
        ; Exact mapped bytes E8 AA 24 0F 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x24
        __asm _emit 0x0f
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 A9 24 0F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x24
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 13ch], 1bh
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x5888a802
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edx, dword ptr [esp + 154h]
        mov ecx, dword ptr [esp + 150h]
        push 0
        push 0
        push 0ffffffh
        add edx, 0fh
        push edx
        mov edx, dword ptr [esp + 158h]
        add ecx, 144h
        push ecx
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebp, 2
        push ebp
        add edx, 11fh
        push edx
        push ecx
        push 5898c922h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 80 8A EA FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x8a
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888a804
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0fch], eax
        mov ecx, dword ptr [eax + 40h]
        mov byte ptr [esp + 13ch], 0
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5888a81f
        __asm _emit 0x74
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 41 89 07 00: call 0x58903160
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, esi
        mov ecx, dword ptr [esp + 134h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 12ch
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
