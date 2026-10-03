// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 5235 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D1F0 .. +0x1473 bytes.
extern "C" __declspec(naked) void FUN_5882d1f0_segment_00() {
    __asm {
        push -1
        push 58983e41h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov ebx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push ebx
        push eax
        push ecx
        push ebp
        push edi
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 60 5F 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x5f
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor eax, eax
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        push 198h
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esi], 5899def8h
        ; Exact mapped bytes E8 DD F9 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf9
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x5882d293
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        push 0
        push 5899dfa0h
        mov ecx, eax
        ; Exact mapped bytes E8 DF 6A 0C 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6a
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882d295
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 AA F9 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 2
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x5882d2ea
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 0
        ; Exact mapped bytes 7E 1A: jle 0x5882d2da
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x5882d2da
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ecx]
        push ebx
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 88 49 F0 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x49
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x5882d2ec
        __asm _emit 0xeb
        __asm _emit 0x12
        push ebx
        push ebp
        xor ecx, ecx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 78 49 F0 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x49
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882d2ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 53 F9 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 3
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x5882d342
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 1
        ; Exact mapped bytes 7E 1B: jle 0x5882d332
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5882d332
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 4]
        push ebx
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 30 49 F0 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x49
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x5882d344
        __asm _emit 0xeb
        __asm _emit 0x12
        push ebx
        push ebp
        xor ecx, ecx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 20 49 F0 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x49
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882d344
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 64h]
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 C7 59 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 0fffffeffh
        ; Exact mapped bytes E8 BA 59 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x00
        add ebp, 92h
        lea ebx, [esi + 124h]
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 34h], 5
        ; Exact mapped bytes EB 04: jmp 0x5882d384
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 2ch]
        push 0ach
        ; Exact mapped bytes E8 C0 F8 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 4
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5882d3e4
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x5882d3bc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882d3bc
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 100h]
        ; Exact mapped bytes EB 02: jmp 0x5882d3be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 3ch]
        push ecx
        push ebp
        lea ecx, [edi + 166h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 BE 09 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882d3e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx - 0b8h], eax
        ; Exact mapped bytes E8 53 F8 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 5
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5882d451
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x5882d429
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882d429
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x5882d42b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        add edi, 166h
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 51 09 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882d453
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx - 0a4h], eax
        ; Exact mapped bytes E8 E9 F7 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        mov byte ptr [esp + 20h], 6
        test edi, edi
        ; Exact mapped bytes 74 74: je 0x5882d4eb
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x5882d492
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5882d492
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x5882d494
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 2ch]
        push eax
        push 0
        push 0
        push ecx
        add edx, 5eh
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EE 5C 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x5882d4e5
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        mov ebp, dword ptr [esp + 38h]
        ; Exact mapped bytes EB 02: jmp 0x5882d4ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx], edi
        ; Exact mapped bytes E8 20 58 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push 0c8h
        ; Exact mapped bytes E8 D4 57 0D 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add ebp, 0fh
        add ebx, 4
        sub dword ptr [esp + 34h], 1
        mov dword ptr [esp + 38h], ebp
        ; Exact mapped bytes 0F 85 54 FE FF FF: jne 0x5882d380
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 30h]
        add eax, 108h
        mov ebx, eax
        mov dword ptr [esp + 38h], ebx
        lea edi, [esi + 0a0h]
        mov dword ptr [esp + 34h], 3
        push 0ach
        ; Exact mapped bytes E8 FB F6 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf6
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 7
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x5882d5ad
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x5882d581
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882d581
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 100h]
        ; Exact mapped bytes EB 02: jmp 0x5882d583
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebp, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 2ch]
        push ebp
        push ebx
        add ecx, 10eh
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 F5 07 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x07
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5882d5b3
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 3ch]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi - 0ch], eax
        ; Exact mapped bytes E8 89 F6 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf6
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 8
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5882d61b
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x5882d5f3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882d5f3
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x5882d5f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push ebp
        push ebx
        add edx, 10eh
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 87 07 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882d61d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 20 F6 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf6
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 9
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x5882d692
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0adh
        ; Exact mapped bytes 7E 17: jle 0x5882d667
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5882d667
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 2b40h
        ; Exact mapped bytes EB 02: jmp 0x5882d669
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push ebp
        lea ecx, [ebx + 1]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, 15ch
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 10 07 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882d694
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 24h], eax
        mov eax, dword ptr [edi - 0ch]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 24h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0ach
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 8D F5 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf5
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 0ah
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5882d717
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x5882d6ef
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882d6ef
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x5882d6f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push ebp
        push ebx
        add edx, 10eh
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 8B 06 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882d719
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 0ch], eax
        ; Exact mapped bytes E8 23 F5 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf5
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 0bh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5882d781
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x5882d759
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882d759
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x5882d75b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push ebp
        push ebx
        add edx, 10eh
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 21 06 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882d783
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 18h], eax
        ; Exact mapped bytes E8 B9 F4 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 0ch
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x5882d7f9
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0adh
        ; Exact mapped bytes 7E 17: jle 0x5882d7ce
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5882d7ce
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 2b40h
        ; Exact mapped bytes EB 02: jmp 0x5882d7d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push ebp
        lea ecx, [ebx + 1]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, 15ch
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A9 05 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882d7fb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 30h], eax
        mov eax, dword ptr [edi + 0ch]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [edi + 18h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 30h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 28 F4 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf4
        __asm _emit 0x14
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 28h], ebp
        mov byte ptr [esp + 20h], 0dh
        test ebp, ebp
        ; Exact mapped bytes 74 76: je 0x5882d8ae
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x5882d853
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5882d853
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x5882d855
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 2ch]
        push eax
        push 0
        push 0
        dec ecx
        push ecx
        add edx, 5eh
        push edx
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 2C 59 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x5882d8a8
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [ebp + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], eax
        mov ebx, dword ptr [esp + 38h]
        ; Exact mapped bytes EB 02: jmp 0x5882d8b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 101h
        mov ecx, ebp
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 98h], ebp
        ; Exact mapped bytes E8 59 54 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 98h]
        push 0c8h
        ; Exact mapped bytes E8 09 54 0D 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [edi + 98h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add ebx, 0fh
        add edi, 4
        sub dword ptr [esp + 34h], 1
        mov dword ptr [esp + 38h], ebx
        ; Exact mapped bytes 0F 85 4E FC FF FF: jne 0x5882d549
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 49 F3 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf3
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0eh
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x5882d966
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [esi + 60h]
        cmp dword ptr [edx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x5882d930
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x5882d930
        __asm _emit 0x74
        __asm _emit 0x05
        add edx, 40h
        ; Exact mapped bytes EB 02: jmp 0x5882d932
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [esp + 3ch]
        mov edi, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        push ebx
        lea ecx, [edi + 0e5h]
        push ecx
        lea ecx, [ebp + 18eh]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 3C 04 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x5882d974
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ebp, dword ptr [esp + 2ch]
        mov edi, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 3ch]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 C5 F2 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf2
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x5882d9d9
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x5882d9af
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x5882d9b1
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push ebx
        lea edx, [edi + 0e5h]
        push edx
        lea edx, [ebp + 1c6h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 C9 03 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882d9db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes E8 5E F2 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf2
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 10h
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x5882da45
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 0F: jle 0x5882da1b
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5882da1b
        __asm _emit 0x74
        __asm _emit 0x05
        sub ecx, -80h
        ; Exact mapped bytes EB 02: jmp 0x5882da1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push ebx
        lea edx, [edi + 14fh]
        push edx
        lea edx, [ebp + 1bbh]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 5D 03 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882da47
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 F2 F1 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf1
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 11h
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x5882dab5
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x5882da8a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882da8a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x5882da8c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 94h]
        push edx
        lea edx, [ebp + 1e1h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 ED 02 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882dab7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes E8 82 F1 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf1
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 12h
        mov ebx, 6
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x5882db29
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x5882dafe
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882dafe
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x5882db00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 0d9h]
        push edx
        lea edx, [ebp + 1e1h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 79 02 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882db2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0ech], eax
        ; Exact mapped bytes E8 0E F1 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf1
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 13h
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x5882db99
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x5882db6e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882db6e
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x5882db70
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 108h]
        push edx
        lea edx, [ebp + 1e1h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 09 02 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882db9b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f0h], eax
        ; Exact mapped bytes E8 9E F0 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 14h
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x5882dc08
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x5882dbdd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882dbdd
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x5882dbdf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 12fh]
        push edx
        lea edx, [ebp + 1e1h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 9A 01 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882dc0a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f4h], eax
        ; Exact mapped bytes E8 2F F0 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf0
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 15h
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x5882dc78
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x5882dc4d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882dc4d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x5882dc4f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 14bh]
        push edx
        lea edx, [ebp + 1b2h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 2A 01 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882dc7a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f8h], eax
        ; Exact mapped bytes E8 BF EF 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xef
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 16h
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x5882dce7
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x5882dcbc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5882dcbc
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x5882dcbe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 157h]
        push edx
        lea edx, [ebp + 1b2h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 BB 00 F3 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882dce9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0fch], eax
        ; Exact mapped bytes E8 50 EF 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xef
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 17h
        mov ebx, 23h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5882dd52
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5882dd38
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5882dd38
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5882dd3a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 74h]
        push ecx
        lea ecx, [ebp + 0c3h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B0 93 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882dd54
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 144h], eax
        ; Exact mapped bytes E8 E5 EE 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xee
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 18h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5882ddb8
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5882dd9e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5882dd9e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5882dda0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 74h]
        push ecx
        lea ecx, [ebp + 0eah]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4A 93 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882ddba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 148h], eax
        ; Exact mapped bytes E8 7F EE 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xee
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 19h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5882de21
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5882de04
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5882de04
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5882de06
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0e6h]
        push ecx
        lea ecx, [ebp + 0cfh]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E1 92 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x92
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882de23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 14ch], eax
        ; Exact mapped bytes E8 16 EE 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xee
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 1ah
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5882de8a
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5882de6d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5882de6d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5882de6f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0e6h]
        push ecx
        lea ecx, [ebp + 0ech]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 78 92 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x92
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882de8c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 150h], eax
        ; Exact mapped bytes E8 AD ED 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xed
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5882def3
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5882ded6
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5882ded6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5882ded8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0e6h]
        push ecx
        lea ecx, [ebp + 14ah]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0F 92 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x92
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882def5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 154h], eax
        ; Exact mapped bytes E8 44 ED 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xed
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5882df5c
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5882df3f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5882df3f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5882df41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0e6h]
        push ecx
        lea ecx, [ebp + 165h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A6 91 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x91
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882df5e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 158h], eax
        ; Exact mapped bytes E8 DB EC 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xec
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 1dh
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5882dfc5
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5882dfa8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5882dfa8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5882dfaa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 14dh]
        push ecx
        lea ecx, [ebp + 0eeh]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3D 91 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x91
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882dfc7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 15ch], eax
        ; Exact mapped bytes E8 72 EC 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xec
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 1eh
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5882e02e
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5882e011
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5882e011
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5882e013
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 14dh]
        push ecx
        lea ecx, [ebp + 153h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D4 90 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882e030
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 160h], eax
        ; Exact mapped bytes E8 09 EC 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xec
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 1fh
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5882e097
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5882e07a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5882e07a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5882e07c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 14dh]
        push ecx
        lea ecx, [ebp + 18ah]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6B 90 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882e099
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 164h], eax
        ; Exact mapped bytes E8 A0 EB 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 20h
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x5882e0ee
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        push 0
        push 0ffffffh
        lea edx, [edi + 0dfh]
        push edx
        lea ecx, [ebp + 72h]
        push ecx
        lea edx, [edi + 93h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 5dh]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E4 9E 0D 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9e
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882e0f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 100h], eax
        ; Exact mapped bytes E8 49 EB 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 21h
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5882e148
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 0dfh]
        push ecx
        lea edx, [ebp + 0fah]
        push edx
        lea ecx, [edi + 93h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 76h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8A 9E 0D 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x9e
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882e14a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 104h], eax
        ; Exact mapped bytes E8 EF EA 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xea
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 22h
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x5882e1a5
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        push 0ffffffh
        lea edx, [edi + 0dfh]
        push edx
        lea ecx, [ebp + 128h]
        push ecx
        lea edx, [edi + 93h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 0feh]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2D 9E 0D 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9e
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882e1a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 108h], eax
        ; Exact mapped bytes E8 92 EA 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xea
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], bl
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x5882e1fb
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 135h]
        push ecx
        lea edx, [ebp + 70h]
        push edx
        lea ecx, [edi + 107h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 5ch]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D7 9D 0D 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882e1fd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 10ch], eax
        ; Exact mapped bytes E8 3C EA 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xea
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 24h
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x5882e252
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        push 0
        push 0ffffffh
        lea edx, [edi + 135h]
        push edx
        lea ecx, [ebp + 70h]
        push ecx
        lea edx, [edi + 107h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 5ch]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 80 9D 0D 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882e254
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 110h], eax
        ; Exact mapped bytes E8 E5 E9 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 25h
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5882e2ac
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 135h]
        push ecx
        lea edx, [ebp + 0fah]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [edi + 108h]
        push ecx
        lea ecx, [ebp + 76h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 26 9D 0D 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882e2ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 114h], eax
        ; Exact mapped bytes E8 8B E9 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 26h
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5882e306
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 135h]
        push ecx
        lea edx, [ebp + 0fah]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [edi + 108h]
        push ecx
        lea ecx, [ebp + 76h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CC 9C 0D 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882e308
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 118h], eax
        ; Exact mapped bytes E8 31 E9 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 27h
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x5882e363
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 135h]
        push ecx
        lea edx, [ebp + 1dbh]
        push edx
        lea ecx, [edi + 107h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 16fh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6F 9C 0D 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882e365
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 11ch], eax
        ; Exact mapped bytes E8 D4 E8 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 28h
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x5882e3c0
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        push 0ffffffh
        lea edx, [edi + 135h]
        push edx
        lea ecx, [ebp + 1dbh]
        push ecx
        lea edx, [edi + 107h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 16fh]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 12 9C 0D 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5882e3c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 120h], eax
        ; Exact mapped bytes E8 7A E8 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 29h
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x5882e41c
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 15ch]
        push ecx
        lea edx, [ebp + 0ech]
        push edx
        lea ecx, [edi + 14dh]
        push ecx
        ; Exact mapped bytes 8B 0D 3C 45 A2 58: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 92h]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 66 4E F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4e
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882e41e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 168h], eax
        ; Exact mapped bytes E8 1E E8 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 2ah
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x5882e478
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        push 0
        push 0ffffffh
        lea edx, [edi + 15eh]
        push edx
        ; Exact mapped bytes 8B 15 3C 45 A2 58: mov edx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 14eh]
        push ecx
        add edi, 14dh
        push edi
        add ebp, 122h
        push ebp
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0A 4E F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x4e
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882e47a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 304h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 16ch], eax
        ; Exact mapped bytes E8 BF E7 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe7
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 2bh
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x5882e4b9
        __asm _emit 0x74
        __asm _emit 0x1a
        push 40h
        push 0
        push 0
        push 0fffffe70h
        push 0e3h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F9 B9 F6 FF: call 0x58799eb0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb9
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5882e4bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 174h], eax
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [eax + 68h], edx
        mov byte ptr [esi + 188h], 1
        mov byte ptr [esi + 189h], 1
        ; Exact mapped bytes A1 1C 48 A2 58: mov eax, dword ptr [0x58a2481c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 1ch]
        xor ecx, ecx
        mov edx, 14h
        mul edx
        seto cl
        mov byte ptr [esp + 20h], 0
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 2D 30 14 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [esi + 178h], eax
        ; Exact mapped bytes A1 1C 48 A2 58: mov eax, dword ptr [0x58a2481c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 6ch]
        xor ecx, ecx
        mov edx, 14h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 09 30 14 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [esi + 17ch], eax
        ; Exact mapped bytes A1 1C 48 A2 58: mov eax, dword ptr [0x58a2481c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 6ch]
        xor ecx, ecx
        mov edx, 14h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 E5 2F 14 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x2f
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [esi + 180h], eax
        ; Exact mapped bytes A1 1C 48 A2 58: mov eax, dword ptr [0x58a2481c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0e4h]
        xor ecx, ecx
        mov edx, 14h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 BE 2F 14 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x2f
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esi + 184h], eax
        xor eax, eax
        lea edx, [ecx + 5dh]
        mov dword ptr [esi + 190h], edx
        mov dword ptr [esi + 1a0h], edx
        ; Exact mapped bytes 66 89 86 8E 01 00 00: mov word ptr [esi + 0x18e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 170h], eax
        mov eax, dword ptr [esi + 8]
        lea edx, [eax + 108h]
        mov dword ptr [esi + 1a4h], edx
        lea edx, [eax + 134h]
        lea edi, [eax + 92h]
        mov dword ptr [esi + 1ach], edx
        lea edx, [ecx + 18ah]
        mov dword ptr [esi + 194h], edi
        lea edi, [ecx + 1e9h]
        add esp, 10h
        mov dword ptr [esi + 1b0h], edx
        lea ebx, [eax + 0ddh]
        lea edx, [eax + 14dh]
        add ecx, 1afh
        mov byte ptr [esi + 18ah], 0
        mov byte ptr [esi + 18bh], 0
        mov byte ptr [esi + 18ch], 0
        mov byte ptr [esi + 18dh], 0
        mov dword ptr [esi + 198h], edi
        mov dword ptr [esi + 19ch], ebx
        mov dword ptr [esi + 1a8h], edi
        mov dword ptr [esi + 1b4h], edx
        mov dword ptr [esi + 1b8h], ecx
        add eax, 15eh
        mov dword ptr [esi + 1bch], eax
        mov eax, 0fff0h
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e5ffh
        mov eax, 500h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov eax, esi
        mov ecx, dword ptr [esp + 18h]
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
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
