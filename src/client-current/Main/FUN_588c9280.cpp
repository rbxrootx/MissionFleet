// Complete Ghidra body ranges for the selected function.
// 5 discontiguous segments; total 7746 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C9280 .. +0x9B9 bytes.
extern "C" __declspec(naked) void FUN_588c9280_segment_00() {
    __asm {
        push -1
        push 58988ea4h
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
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push ebp
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D0 9E 03 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor ebx, ebx
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e5ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov dword ptr [esi], 589a0c78h
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        push 54h
        mov dword ptr [esp + 24h], ebx
        mov byte ptr [esi + 2a8h], 1
        ; Exact mapped bytes E8 28 39 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x39
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 40: je 0x588c9376
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 0dh
        ; Exact mapped bytes 7E 20: jle 0x588c9365
        __asm _emit 0x7e
        __asm _emit 0x20
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 18: je 0x588c9365
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 34h]
        push 40h
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FD 88 E6 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588c9378
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebp
        xor ecx, ecx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EC 88 E6 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c9378
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1b8h], eax
        ; Exact mapped bytes E8 91 99 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 B8 38 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 3E: je 0x588c93e4
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], ebx
        ; Exact mapped bytes 7E 1F: jle 0x588c93d3
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 17: je 0x588c93d3
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx]
        push 40h
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8F 88 E6 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588c93e6
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebp
        xor ecx, ecx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7E 88 E6 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c93e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1bch], eax
        ; Exact mapped bytes E8 56 38 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 40: je 0x588c9448
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 1
        ; Exact mapped bytes 7E 20: jle 0x588c9437
        __asm _emit 0x7e
        __asm _emit 0x20
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 18: je 0x588c9437
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 4]
        push 40h
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2B 88 E6 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588c944a
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebp
        xor ecx, ecx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1A 88 E6 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c944a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1c4h], eax
        ; Exact mapped bytes E8 BF 98 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E6 37 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x37
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 4
        cmp eax, ebx
        ; Exact mapped bytes 74 40: je 0x588c94b8
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 2
        ; Exact mapped bytes 7E 20: jle 0x588c94a7
        __asm _emit 0x7e
        __asm _emit 0x20
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 18: je 0x588c94a7
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 8]
        push 40h
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BB 87 E6 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588c94ba
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebp
        xor ecx, ecx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AA 87 E6 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c94ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1c0h], eax
        ; Exact mapped bytes E8 4F 98 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 73 37 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x37
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 5
        cmp eax, ebx
        ; Exact mapped bytes 74 3F: je 0x588c952a
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x588c9510
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588c9510
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588c9512
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 2dh]
        push edx
        lea edx, [edi + 218h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D8 DB 03 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c952c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1c8h], eax
        ; Exact mapped bytes E8 0D 37 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x37
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 6
        cmp eax, ebx
        ; Exact mapped bytes 74 3F: je 0x588c9590
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x588c9576
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588c9576
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588c9578
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 2dh]
        push ecx
        lea ecx, [edi + 263h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 72 DB 03 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c9592
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 10ch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1cch], eax
        ; Exact mapped bytes E8 A7 36 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 7
        cmp eax, ebx
        ; Exact mapped bytes 74 33: je 0x588c95ea
        __asm _emit 0x74
        __asm _emit 0x33
        push 1e1e1eh
        push ebx
        push 0c8c8c8h
        lea edx, [ebp + 5fh]
        push edx
        lea ecx, [edi + 165h]
        push ecx
        lea edx, [ebp + 54h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [edi + 0c3h]
        push ecx
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A8 7A E9 FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x7a
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c95ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 2ch
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1d0h], eax
        ; Exact mapped bytes E8 40 F8 E7 FF: call 0x58748e40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf8
        __asm _emit 0xe7
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 44 36 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 8
        cmp eax, ebx
        ; Exact mapped bytes 74 4D: je 0x588c9667
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 13: jle 0x588c963c
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0B: je 0x588c963c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 190h]
        sub edx, -80h
        ; Exact mapped bytes EB 02: jmp 0x588c963e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebp + 1b3h]
        push ecx
        lea ecx, [edi + 1d1h]
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
        ; Exact mapped bytes E8 3B 47 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x47
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c9669
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 2a0h], eax
        ; Exact mapped bytes E8 D0 35 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x35
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 9
        cmp eax, ebx
        ; Exact mapped bytes 74 50: je 0x588c96de
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 16: jle 0x588c96b3
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588c96b3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x588c96b5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebp + 1b3h]
        push ecx
        lea ecx, [edi + 226h]
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
        ; Exact mapped bytes E8 C4 46 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c96e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2a0h]
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 2a4h], eax
        ; Exact mapped bytes E8 25 96 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2a4h]
        push 101h
        ; Exact mapped bytes E8 15 96 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 39 35 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ah
        cmp eax, ebx
        ; Exact mapped bytes 74 3F: je 0x588c9764
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x588c974a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588c974a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588c974c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 6bh]
        push ecx
        lea ecx, [edi + 106h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9E D9 03 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c9766
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1f4h], eax
        ; Exact mapped bytes E8 D3 34 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x34
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0bh
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x588c97cd
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x588c97b0
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588c97b0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588c97b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 84h]
        push ecx
        lea ecx, [edi + 106h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 35 D9 03 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c97cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1f8h], eax
        ; Exact mapped bytes E8 6A 34 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x34
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ch
        cmp eax, ebx
        ; Exact mapped bytes 74 3F: je 0x588c9833
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x588c9819
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588c9819
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588c981b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 57h]
        push ecx
        lea ecx, [edi + 21ch]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CF D8 03 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c9835
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1fch], eax
        ; Exact mapped bytes E8 04 34 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x34
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0dh
        cmp eax, ebx
        ; Exact mapped bytes 74 3F: je 0x588c9899
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x588c987f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588c987f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588c9881
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 6eh]
        push ecx
        lea ecx, [edi + 21ch]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 69 D8 03 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c989b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 200h], eax
        ; Exact mapped bytes E8 9E 33 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x33
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0eh
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x588c9906
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 10: jle 0x588c98de
        __asm _emit 0x7e
        __asm _emit 0x10
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 08: je 0x588c98de
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588c98e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 69h]
        push edx
        lea edx, [edi + 155h]
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
        ; Exact mapped bytes E8 9C 44 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x44
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c9908
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ebx, [esi + 1d4h]
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx], eax
        ; Exact mapped bytes E8 2F 33 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x33
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588c997a
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 14: jle 0x588c9952
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x588c9952
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 190h]
        add edx, 40h
        ; Exact mapped bytes EB 02: jmp 0x588c9954
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebp + 71h]
        push ecx
        lea ecx, [edi + 155h]
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
        ; Exact mapped bytes E8 28 44 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x44
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c997c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1e4h], eax
        ; Exact mapped bytes E8 BD 32 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x32
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 10h
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588c99ec
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588c99c1
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588c99c1
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588c99c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 81h]
        push edx
        lea edx, [edi + 155h]
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
        ; Exact mapped bytes E8 B6 43 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x43
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c99ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1d8h], eax
        ; Exact mapped bytes E8 4B 32 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x32
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 11h
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x588c9a61
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 14: jle 0x588c9a36
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x588c9a36
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 190h]
        add edx, 40h
        ; Exact mapped bytes EB 02: jmp 0x588c9a38
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebp + 89h]
        push ecx
        lea ecx, [edi + 155h]
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
        ; Exact mapped bytes E8 41 43 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x43
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c9a63
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1e8h], eax
        ; Exact mapped bytes E8 D6 31 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x31
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 12h
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x588c9ad0
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588c9aa8
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588c9aa8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588c9aaa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 55h]
        push edx
        lea edx, [edi + 247h]
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
        ; Exact mapped bytes E8 D2 42 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x42
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c9ad2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1dch], eax
        ; Exact mapped bytes E8 67 31 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x31
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 13h
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588c9b42
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 14: jle 0x588c9b1a
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x588c9b1a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 190h]
        add edx, 40h
        ; Exact mapped bytes EB 02: jmp 0x588c9b1c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebp + 5dh]
        push ecx
        lea ecx, [edi + 247h]
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
        ; Exact mapped bytes E8 60 42 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x42
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c9b44
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1ech], eax
        ; Exact mapped bytes E8 F5 30 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x30
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 14h
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x588c9bb1
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588c9b89
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588c9b89
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588c9b8b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 6eh]
        push edx
        lea edx, [edi + 247h]
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
        ; Exact mapped bytes E8 F1 41 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x41
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c9bb3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1e0h], eax
        ; Exact mapped bytes E8 86 30 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 15h
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588c9c23
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 14: jle 0x588c9bfb
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x588c9bfb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 190h]
        add edx, 40h
        ; Exact mapped bytes EB 02: jmp 0x588c9bfd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebp + 76h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 247h
        push edi
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
        ; Exact mapped bytes E8 7F 41 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x41
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c9c25
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, ebx
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 1f0h], eax
        mov ebx, 4
        ; Exact mapped bytes EB 07: jmp 0x588c9c40
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C9C40 .. +0x358 bytes.
extern "C" __declspec(naked) void FUN_588c9280_segment_01() {
    __asm {
        mov ecx, dword ptr [edi + 20h]
        push 101h
        ; Exact mapped bytes E8 D3 90 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 C7 90 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 10h]
        push 101h
        ; Exact mapped bytes E8 BA 90 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 D2: jne 0x588c9c40
        __asm _emit 0x75
        __asm _emit 0xd2
        push 54h
        ; Exact mapped bytes E8 D9 2F 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 16h
        test edi, edi
        ; Exact mapped bytes 74 79: je 0x588c9d00
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 90 46 A2 58: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 21h
        ; Exact mapped bytes 7E 16: jle 0x588c9cab
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x588c9cab
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebx, dword ptr [edx + 84h]
        ; Exact mapped bytes EB 02: jmp 0x588c9cad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        lea eax, [ebp + 51h]
        push eax
        add ecx, 0bdh
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D6 94 03 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2B: je 0x588c9d02
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx + 14h]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebx + 18h]
        lea eax, [ebx + 18h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x588c9d02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 204h], edi
        ; Exact mapped bytes E8 3A 2F 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 17h
        test edi, edi
        ; Exact mapped bytes 74 79: je 0x588c9d9f
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 90 46 A2 58: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 20h
        ; Exact mapped bytes 7E 17: jle 0x588c9d4b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588c9d4b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebx, dword ptr [eax + 80h]
        ; Exact mapped bytes EB 02: jmp 0x588c9d4d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        lea ecx, [ebp + 68h]
        push ecx
        add edx, 0bdh
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 36 94 03 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x588c9da1
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
        ; Exact mapped bytes EB 02: jmp 0x588c9da1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 208h], edi
        ; Exact mapped bytes E8 9B 2E 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x2e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 18h
        test edi, edi
        ; Exact mapped bytes 74 7B: je 0x588c9e40
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 90 46 A2 58: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 20h
        ; Exact mapped bytes 7E 17: jle 0x588c9dea
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588c9dea
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebx, dword ptr [ecx + 80h]
        ; Exact mapped bytes EB 02: jmp 0x588c9dec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        lea edx, [ebp + 80h]
        push edx
        add eax, 0bdh
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 95 93 03 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x588c9e42
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x588c9e42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 20ch], edi
        ; Exact mapped bytes E8 FA 2D 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x2d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 19h
        test edi, edi
        ; Exact mapped bytes 74 79: je 0x588c9edf
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 90 46 A2 58: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 22h
        ; Exact mapped bytes 7E 17: jle 0x588c9e8b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588c9e8b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebx, dword ptr [eax + 88h]
        ; Exact mapped bytes EB 02: jmp 0x588c9e8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        lea ecx, [ebp + 53h]
        push ecx
        add edx, 201h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F6 92 03 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x588c9ee1
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
        ; Exact mapped bytes EB 02: jmp 0x588c9ee1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 210h], edi
        ; Exact mapped bytes E8 5B 2D 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x2d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 1ah
        test edi, edi
        ; Exact mapped bytes 74 79: je 0x588c9f7e
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 90 46 A2 58: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 22h
        ; Exact mapped bytes 7E 17: jle 0x588c9f2a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588c9f2a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebx, dword ptr [ecx + 88h]
        ; Exact mapped bytes EB 02: jmp 0x588c9f2c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        add ebp, 6bh
        push ebp
        add edx, 201h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 57 92 03 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x588c9f80
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
        ; Exact mapped bytes EB 02: jmp 0x588c9f80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 214h], edi
        lea ecx, [esi + 204h]
        mov edx, 5
        ; Exact mapped bytes EB 08: jmp 0x588c9fa0
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C9FA0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_588c9280_segment_02() {
    __asm {
        mov eax, dword ptr [ecx]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x588c9fa0
        __asm _emit 0x75
        __asm _emit 0xed
        xor ebp, ebp
        lea ebx, [esi + 218h]
        ; Exact mapped bytes EB 03: jmp 0x588c9fc0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C9FC0 .. +0x9DD bytes.
extern "C" __declspec(naked) void FUN_588c9280_segment_03() {
    __asm {
        push 54h
        ; Exact mapped bytes E8 87 2C 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 1bh
        test edi, edi
        ; Exact mapped bytes 74 32: je 0x588ca00b
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        add ecx, 7dh
        push ecx
        add edx, 173h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A6 91 03 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x588ca00d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, ebp
        neg eax
        sbb eax, eax
        and eax, 202h
        add eax, 0fffffeffh
        push eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx], ecx
        ; Exact mapped bytes E8 F6 8C 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        inc ebp
        add ebx, 4
        cmp ebp, 2
        ; Exact mapped bytes 7C 82: jl 0x588c9fc0
        __asm _emit 0x7c
        __asm _emit 0x82
        push 0ach
        ; Exact mapped bytes E8 06 2C 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x588ca0b1
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0fh
        ; Exact mapped bytes 7E 17: jle 0x588ca07e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ca07e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x588ca080
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        push 40h
        lea ecx, [edi + 86h]
        push ecx
        lea ecx, [ebx + 208h]
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
        ; Exact mapped bytes E8 F1 3C E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3c
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x588ca0bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edi, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 224h], eax
        ; Exact mapped bytes E8 4E 8C 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 224h]
        xor ebp, ebp
        push 0ach
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes E8 67 2B 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x2b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1dh
        cmp eax, ebp
        ; Exact mapped bytes 74 50: je 0x588ca147
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 16: jle 0x588ca11c
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588ca11c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x588ca11e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 86h]
        push edx
        lea edx, [ebx + 1d2h]
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
        ; Exact mapped bytes E8 5B 3C E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3c
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca149
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 220h], eax
        ; Exact mapped bytes E8 C0 8B 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 220h]
        push 0ach
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes E8 DB 2A 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x2a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1eh
        cmp eax, ebp
        ; Exact mapped bytes 74 50: je 0x588ca1d3
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 10h
        ; Exact mapped bytes 7E 16: jle 0x588ca1a8
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588ca1a8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 400h
        ; Exact mapped bytes EB 02: jmp 0x588ca1aa
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
        push 40h
        add edi, 86h
        push edi
        add ebx, 23eh
        push ebx
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
        ; Exact mapped bytes E8 CF 3B E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x3b
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca1d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 238h], eax
        ; Exact mapped bytes E8 34 8B 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 238h]
        mov dword ptr [eax + 50h], ebp
        lea eax, [esi + 258h]
        mov dword ptr [esp + 3ch], 67h
        mov dword ptr [esp + 38h], eax
        mov ebx, 19ch
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 37 2A 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x2a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 1fh
        test edi, edi
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x588ca2af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 90 46 A2 58: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 3ch]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 18: jle 0x588ca256
        __asm _emit 0x7e
        __asm _emit 0x18
        test ecx, ecx
        ; Exact mapped bytes 7C 14: jl 0x588ca256
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588ca256
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ebx + ecx]
        ; Exact mapped bytes EB 02: jmp 0x588ca258
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        add edx, 0bdh
        push edx
        add eax, 2ch
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 27 8F 03 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588ca2b1
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebp]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x588ca2b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        dec dword ptr [esp + 3ch]
        mov dword ptr [eax], edi
        add eax, 4
        sub ebx, 4
        cmp ebx, 194h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8F 3A FF FF FF: jg 0x588ca210
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 6E 29 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x29
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 20h
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x588ca349
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 17: jle 0x588ca316
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ca316
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 500h
        ; Exact mapped bytes EB 02: jmp 0x588ca318
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        push 40h
        lea ecx, [ebx + 0c4h]
        push ecx
        lea ecx, [ebp + 0a6h]
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
        ; Exact mapped bytes E8 59 3A E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3a
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x588ca353
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 2ch]
        mov ebx, dword ptr [esp + 30h]
        xor eax, eax
        lea edi, [esi + 260h]
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 E4 28 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x28
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 21h
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x588ca3cb
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 17: jle 0x588ca3a0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ca3a0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 540h
        ; Exact mapped bytes EB 02: jmp 0x588ca3a2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 0c4h]
        push edx
        lea edx, [ebp + 0a6h]
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
        ; Exact mapped bytes E8 D7 39 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x39
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca3cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 264h], eax
        ; Exact mapped bytes E8 6C 28 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x28
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 22h
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x588ca443
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 16h
        ; Exact mapped bytes 7E 17: jle 0x588ca418
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ca418
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 580h
        ; Exact mapped bytes EB 02: jmp 0x588ca41a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebx + 0d2h]
        push ecx
        lea ecx, [ebp + 0a6h]
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
        ; Exact mapped bytes E8 5F 39 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x39
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca445
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 268h], eax
        ; Exact mapped bytes E8 F4 27 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x27
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 23h
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x588ca4bb
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 17h
        ; Exact mapped bytes 7E 17: jle 0x588ca490
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ca490
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x588ca492
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebx + 0d2h]
        push ecx
        lea ecx, [ebp + 0e6h]
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
        ; Exact mapped bytes E8 E7 38 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca4bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 26ch], eax
        ; Exact mapped bytes E8 7C 27 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x27
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 24h
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588ca52d
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 4C 47 A2 58: mov ecx, dword ptr [0x58a2474c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588ca502
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588ca502
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588ca504
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 0d2h]
        push edx
        lea edx, [ebp + 126h]
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
        ; Exact mapped bytes E8 75 38 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca52f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 270h], eax
        ; Exact mapped bytes E8 0A 27 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x27
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 25h
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588ca59f
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 44 47 A2 58: mov ecx, dword ptr [0x58a24744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588ca574
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588ca574
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588ca576
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 0d2h]
        push edx
        lea edx, [ebp + 166h]
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
        ; Exact mapped bytes E8 03 38 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca5a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 274h], eax
        ; Exact mapped bytes E8 98 26 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x26
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 26h
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588ca611
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 48 47 A2 58: mov ecx, dword ptr [0x58a24748]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588ca5e6
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588ca5e6
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588ca5e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 0d2h]
        push edx
        lea edx, [ebp + 1a6h]
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
        ; Exact mapped bytes E8 91 37 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x37
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca613
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 278h], eax
        ; Exact mapped bytes E8 26 26 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x26
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 27h
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x588ca686
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 38 46 A2 58: mov ecx, dword ptr [0x58a24638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 14: jle 0x588ca65b
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x588ca65b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 190h]
        add edx, 40h
        ; Exact mapped bytes EB 02: jmp 0x588ca65d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebx + 0d2h]
        push ecx
        lea ecx, [ebp + 1e6h]
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
        ; Exact mapped bytes E8 1C 37 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x37
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca688
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 27ch], eax
        ; Exact mapped bytes E8 B1 25 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x25
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 28h
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x588ca6fe
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 18h
        ; Exact mapped bytes 7E 17: jle 0x588ca6d3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ca6d3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 600h
        ; Exact mapped bytes EB 02: jmp 0x588ca6d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebx + 0d2h]
        push ecx
        lea ecx, [ebp + 226h]
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
        ; Exact mapped bytes E8 A4 36 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x36
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca700
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 280h], eax
        ; Exact mapped bytes E8 39 25 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x25
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 29h
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x588ca74f
        __asm _emit 0x74
        __asm _emit 0x2a
        push 40h
        lea edx, [ebx + 0d2h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 0a6h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 53 36 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x36
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca751
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 284h], eax
        ; Exact mapped bytes E8 E8 24 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 2ah
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588ca7c1
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 50 47 A2 58: mov ecx, dword ptr [0x58a24750]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588ca796
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588ca796
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588ca798
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 0beh]
        push edx
        lea edx, [ebp + 0a6h]
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
        ; Exact mapped bytes E8 E1 35 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x35
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca7c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 288h], eax
        ; Exact mapped bytes E8 76 24 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 2bh
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588ca833
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 54 47 A2 58: mov ecx, dword ptr [0x58a24754]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588ca808
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588ca808
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588ca80a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 0beh]
        push edx
        lea edx, [ebp + 0e6h]
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
        ; Exact mapped bytes E8 6F 35 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca835
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 28ch], eax
        ; Exact mapped bytes E8 04 24 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 2ch
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588ca8a5
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 58 47 A2 58: mov ecx, dword ptr [0x58a24758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588ca87a
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588ca87a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588ca87c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 0beh]
        push edx
        lea edx, [ebp + 126h]
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
        ; Exact mapped bytes E8 FD 34 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x34
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca8a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 290h], eax
        ; Exact mapped bytes E8 92 23 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 2dh
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588ca917
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 40 46 A2 58: mov ecx, dword ptr [0x58a24640]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588ca8ec
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588ca8ec
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588ca8ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 0beh]
        push edx
        lea edx, [ebp + 166h]
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
        ; Exact mapped bytes E8 8B 34 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x34
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca919
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 294h], eax
        ; Exact mapped bytes E8 20 23 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 2eh
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588ca989
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 64 47 A2 58: mov ecx, dword ptr [0x58a24764]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588ca95e
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588ca95e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588ca960
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 0beh]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebp, 1a6h
        push ebp
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
        ; Exact mapped bytes E8 19 34 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x34
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ca98b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 298h], eax
        mov ebp, 0fh
        ; Exact mapped bytes EB 03: jmp 0x588ca9a0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CA9A0 .. +0x737 bytes.
extern "C" __declspec(naked) void FUN_588c9280_segment_04() {
    __asm {
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 74 83 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E1: jne 0x588ca9a0
        __asm _emit 0x75
        __asm _emit 0xe1
        push 70h
        ; Exact mapped bytes E8 88 22 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov ebp, dword ptr [esp + 2ch]
        mov byte ptr [esp + 20h], 2fh
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588ca9f1
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 91 25 00 00: call 0x588ccf80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588ca9f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 184h], eax
        ; Exact mapped bytes E8 49 22 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 30h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588caa2c
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 96 29 00 00: call 0x588cd3c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588caa2e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a4h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 188h], eax
        ; Exact mapped bytes E8 0B 22 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 31h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588caa6a
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E8 44 00 00: call 0x588cef50
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588caa6c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 74h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 17ch], eax
        ; Exact mapped bytes E8 D0 21 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 32h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588caaa5
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DD 4D 00 00: call 0x588cf880
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588caaa7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 19ch], eax
        ; Exact mapped bytes E8 95 21 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 33h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588caae0
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 92 4A 00 00: call 0x588cf570
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588caae2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 194h], eax
        ; Exact mapped bytes E8 5A 21 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 34h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588cab1b
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 97 13 00 00: call 0x588cbeb0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588cab1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 190h], eax
        ; Exact mapped bytes E8 1F 21 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 35h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588cab56
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0C 74 00 00: call 0x588d1f60
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588cab58
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 88h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 180h], eax
        ; Exact mapped bytes E8 E1 20 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x20
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 36h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588cab94
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9E 64 00 00: call 0x588d1030
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588cab96
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 8ch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 18ch], eax
        ; Exact mapped bytes E8 A3 20 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 37h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588cabd2
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 40 1A 00 00: call 0x588cc610
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588cabd4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 198h], eax
        ; Exact mapped bytes E8 68 20 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 38h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588cac0d
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 65 33 00 00: call 0x588cdf70
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588cac0f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 7ch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1a0h], eax
        ; Exact mapped bytes E8 2D 20 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x20
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 39h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588cac48
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FA 2A 00 00: call 0x588cd740
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588cac4a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1a4h], eax
        ; Exact mapped bytes E8 F2 1F 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 3ah
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588cac83
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2F 75 00 00: call 0x588d21b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588cac85
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1a8h], eax
        ; Exact mapped bytes E8 B7 1F 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 3bh
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588cacbe
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 94 6F 00 00: call 0x588d1c50
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588cacc0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 9ch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1ach], eax
        ; Exact mapped bytes E8 79 1F 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 3ch
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588cacfc
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 16 5A 00 00: call 0x588d0710
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588cacfe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1b0h], eax
        ; Exact mapped bytes E8 3E 1F 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 3dh
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588cad37
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [esi + 12ch]
        push edx
        lea ecx, [esi + 68h]
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BB 0D 00 00: call 0x588cbaf0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588cad39
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1b4h], eax
        ; Exact mapped bytes E8 03 1F 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 3eh
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x588cad93
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        push 0
        push 0ffffffh
        lea edx, [ebx + 0a8h]
        push edx
        lea ecx, [ebp + 120h]
        push ecx
        lea edx, [ebx + 9ah]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 0bfh]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EF 84 E6 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588cad95
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 23ch], eax
        ; Exact mapped bytes E8 A4 1E 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 3fh
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x588cae0b
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 13h
        ; Exact mapped bytes 7E 17: jle 0x588cade0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588cade0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 4c0h
        ; Exact mapped bytes EB 02: jmp 0x588cade2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebx + 97h]
        push ecx
        lea ecx, [ebp + 125h]
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
        ; Exact mapped bytes E8 97 2F E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2f
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588cae0d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 240h], eax
        push 5ch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes E8 28 1E 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 40h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x588cae4a
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 18 F1 E8 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588cae4c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 244h], eax
        ; Exact mapped bytes E8 C1 F0 E8 FF: call 0x58759f20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [esi + 244h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 D9 1D 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 41h
        test edi, edi
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x588caf14
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 90 46 A2 58: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0c8h
        ; Exact mapped bytes 7E 17: jle 0x588caeb3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588caeb3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 320h]
        ; Exact mapped bytes EB 02: jmp 0x588caeb5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esi + 244h]
        push 40h
        push 0
        push 0
        lea ecx, [ebx + 0a9h]
        push ecx
        add edx, 0beh
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 C5 82 03 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x588caf0e
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
        mov ebp, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x588caf16
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 248h], edi
        ; Exact mapped bytes E8 23 1D 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 42h
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x588caf77
        __asm _emit 0x74
        __asm _emit 0x3c
        push 0
        push 0
        push 0ffffffh
        lea ecx, [ebx + 14ch]
        push ecx
        lea edx, [ebp + 11eh]
        push edx
        lea ecx, [ebx + 0adh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 0c0h]
        push edx
        mov edx, dword ptr [esi + 244h]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 5B D0 03 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588caf79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 24ch], eax
        ; Exact mapped bytes E8 C0 1C 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 43h
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x588cafef
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588cafbe
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588cafbe
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588cafc0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 0aah]
        push edx
        lea edx, [ebp + 118h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 244h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B3 2D E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2d
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588caff1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 250h], eax
        ; Exact mapped bytes E8 18 7D 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 3C 1C 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 44h
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x588cb076
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 14: jle 0x588cb045
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x588cb045
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 190h]
        add edx, 40h
        ; Exact mapped bytes EB 02: jmp 0x588cb047
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40h
        add ebx, 146h
        push ebx
        add ebp, 118h
        push ebp
        push edx
        mov edx, dword ptr [esi + 244h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 2C 2D E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x2d
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588cb078
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 254h], eax
        ; Exact mapped bytes E8 91 7C 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 220h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 228h], ecx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [esi + 224h]
        mov dword ptr [esi + 22ch], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 230h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esi + 234h], edx
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
