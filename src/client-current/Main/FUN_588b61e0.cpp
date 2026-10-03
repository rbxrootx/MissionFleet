// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 7555 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B61E0 .. +0x1CCD bytes.
extern "C" __declspec(naked) void FUN_588b61e0_segment_00() {
    __asm {
        push -1
        push 58988536h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
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
        lea eax, [esp + 1ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov edi, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push edi
        push eax
        push ecx
        push ebx
        push ebp
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 6E CF 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor eax, eax
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esp + 24h], eax
        lea eax, [edi + 1]
        add ebp, 5fh
        add ebx, 2dh
        movzx ecx, ax
        movzx ebp, bp
        movzx ebx, bx
        push 198h
        mov dword ptr [esi], 589a0954h
        mov dword ptr [esp + 30h], ecx
        mov dword ptr [esp + 3ch], ebp
        mov dword ptr [esp + 40h], ebx
        ; Exact mapped bytes E8 CD 69 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x69
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov byte ptr [esp + 24h], 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x588b62a3
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        push 0
        push 589a0970h
        mov ecx, eax
        ; Exact mapped bytes E8 CF DA 03 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b62a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 9A 69 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x69
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov byte ptr [esp + 24h], 2
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x588b62f5
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x588b62df
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b62df
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x588b62e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6D B9 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb9
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b62f7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 48 69 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov byte ptr [esp + 24h], 3
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x588b6348
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 0
        ; Exact mapped bytes 7E 0E: jle 0x588b6330
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x588b6330
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x588b6332
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 34h]
        push edi
        push edx
        mov edx, dword ptr [esp + 38h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1A B9 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb9
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b634a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 F5 68 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov byte ptr [esp + 24h], 4
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x588b639f
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x588b6384
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b6384
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x588b6386
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 34h]
        add edi, -0ah
        push edi
        push edx
        mov edx, dword ptr [esp + 38h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C3 B8 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb8
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b63a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 6B C9 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 92 68 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov byte ptr [esp + 24h], 5
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x588b6404
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 6
        ; Exact mapped bytes 7E 0F: jle 0x588b63e7
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b63e7
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes EB 02: jmp 0x588b63e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 2ch]
        push edi
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        push edx
        push ecx
        mov ecx, dword ptr [esi + 6ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 5E B8 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb8
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x588b640a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 32 68 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 6
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588b6463
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 5
        ; Exact mapped bytes 7E 0F: jle 0x588b6447
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b6447
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x588b6449
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 1]
        push edx
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        push edx
        push ecx
        mov ecx, dword ptr [esi + 6ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 FF B7 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb7
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6465
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 D7 67 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 7
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588b64be
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 4
        ; Exact mapped bytes 7E 0F: jle 0x588b64a2
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b64a2
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes EB 02: jmp 0x588b64a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 0ah
        push edx
        push ecx
        mov ecx, dword ptr [esi + 6ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A4 B7 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb7
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b64c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 7C 67 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 8
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x588b651a
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 3
        ; Exact mapped bytes 7E 0F: jle 0x588b64fd
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b64fd
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x588b64ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        inc edi
        push edi
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 0ah
        push edx
        push ecx
        mov ecx, dword ptr [esi + 6ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 48 B7 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb7
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b651c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 E9 C7 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 0fffffeffh
        ; Exact mapped bytes E8 D9 C7 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 101h
        ; Exact mapped bytes E8 C9 C7 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 B9 C7 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 DD 66 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x66
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 9
        mov edi, 2ch
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588b65d1
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588b65ab
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588b65ab
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588b65ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 7ah
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 212h
        push edx
        push 0ah
        push ecx
        mov ecx, dword ptr [esi + 90h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 31 0B 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b65d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 69 66 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x66
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 0ah
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x588b6643
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588b661a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588b661a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588b661c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 0F BF CB: movsx ecx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcb
        add ecx, 92h
        push ecx
        ; Exact mapped bytes 0F BF CD: movsx ecx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcd
        add ecx, 212h
        push ecx
        push 0ah
        push edx
        mov edx, dword ptr [esi + 90h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 BF 0A 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b6645
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 F7 65 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x65
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 0bh
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588b66b2
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588b668c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588b668c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588b668e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 0F BF CB: movsx ecx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcb
        add ecx, 32h
        push ecx
        ; Exact mapped bytes 0F BF CD: movsx ecx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcd
        add ecx, 217h
        push ecx
        push 0ah
        push edx
        mov edx, dword ptr [esi + 90h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 50 0A 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b66b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 85 65 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 0ch
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588b6724
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588b66fe
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588b66fe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588b6700
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 0F BF CB: movsx ecx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcb
        add ecx, 41h
        push ecx
        ; Exact mapped bytes 0F BF CD: movsx ecx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcd
        add ecx, 217h
        push ecx
        push 0ah
        push edx
        mov edx, dword ptr [esi + 90h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 DE 09 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b6726
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 16 65 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x65
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 0dh
        mov edi, 19h
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x588b678d
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 0F: jle 0x588b6767
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b6767
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x588b6769
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 76h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 205h
        push edx
        push ecx
        mov ecx, dword ptr [esi + 90h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D5 B4 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb4
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b678f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 B0 64 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 0eh
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588b67f1
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 0F: jle 0x588b67c8
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b67c8
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x588b67ca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 8eh
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 205h
        push edx
        push ecx
        mov ecx, dword ptr [esi + 90h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 71 B4 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb4
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b67f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 4C 64 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 0fh
        mov edi, 18h
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x588b6857
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 0F: jle 0x588b6831
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b6831
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes EB 02: jmp 0x588b6833
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 76h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 205h
        push edx
        push ecx
        mov ecx, dword ptr [esi + 90h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 0B B4 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb4
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6859
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 E3 63 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 10h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588b68be
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 0F: jle 0x588b6895
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b6895
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes EB 02: jmp 0x588b6897
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 8eh
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 205h
        push edx
        push ecx
        mov ecx, dword ptr [esi + 90h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A4 B3 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb3
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b68c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 184h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 79 63 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 11h
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x588b6923
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        lea ecx, [edx + 4ch]
        push ecx
        ; Exact mapped bytes 0F BF FD: movsx edi, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfd
        lea ecx, [edi + 1c6h]
        push ecx
        mov ecx, dword ptr [esi + 90h]
        add edx, 40h
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 176h
        push edi
        push edx
        push 0
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 FF 8A EA FF: call 0x5875f420
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8a
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6925
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 14 63 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 12h
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x588b6993
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x588b6965
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b6965
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x588b6967
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 5dh
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 228h
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
        ; Exact mapped bytes E8 0F 74 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6995
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 A4 62 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x62
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 13h
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x588b69fe
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588b69d0
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588b69d2
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 5dh
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 228h
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
        ; Exact mapped bytes E8 A4 73 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6a00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 39 62 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x62
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 14h
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x588b6a74
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x588b6a43
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588b6a43
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x588b6a45
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 143h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 1e3h
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
        ; Exact mapped bytes E8 2E 73 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6a76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 C3 61 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 15h
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x588b6aea
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x588b6ab9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588b6ab9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x588b6abb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 143h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 1e3h
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
        ; Exact mapped bytes E8 B8 72 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x72
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6aec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 4D 61 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 16h
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x588b6b5d
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 0F: jle 0x588b6b2c
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b6b2c
        __asm _emit 0x74
        __asm _emit 0x05
        sub ecx, -80h
        ; Exact mapped bytes EB 02: jmp 0x588b6b2e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 143h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 22eh
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
        ; Exact mapped bytes E8 45 72 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x72
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6b5f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 DD 60 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 17h
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x588b6bc2
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 1ah
        ; Exact mapped bytes 7E 0F: jle 0x588b6b9c
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b6b9c
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes EB 02: jmp 0x588b6b9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 5dh
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 228h
        push edx
        push ecx
        mov ecx, dword ptr [esi + 90h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A0 B0 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xb0
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6bc4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 78 60 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 18h
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x588b6c2a
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 11h
        ; Exact mapped bytes 7E 0F: jle 0x588b6c01
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b6c01
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 44h]
        ; Exact mapped bytes EB 02: jmp 0x588b6c03
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 143h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 1e3h
        push edx
        push ecx
        mov ecx, dword ptr [esi + 90h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 38 B0 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb0
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6c2c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 10 60 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 19h
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x588b6c92
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 11h
        ; Exact mapped bytes 7E 0F: jle 0x588b6c69
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588b6c69
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 44h]
        ; Exact mapped bytes EB 02: jmp 0x588b6c6b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 143h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 22eh
        push edx
        push ecx
        mov ecx, dword ptr [esi + 90h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D0 AF E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xaf
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6c94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0d8h]
        push 0fffffeffh
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes E8 71 C0 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        push 0fffffeffh
        ; Exact mapped bytes E8 61 C0 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        push 0fffffeffh
        ; Exact mapped bytes E8 51 C0 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 101h
        ; Exact mapped bytes E8 41 C0 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 101h
        ; Exact mapped bytes E8 31 C0 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 101h
        ; Exact mapped bytes E8 21 C0 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 11 C0 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 101h
        ; Exact mapped bytes E8 01 C0 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b8h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 FB 5E 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x5e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 1ah
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x588b6daf
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x588b6d81
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588b6d81
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x588b6d83
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 78h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 25ch
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
        ; Exact mapped bytes E8 F3 6F EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x6f
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6db1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 88 5E 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x588b6e22
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x588b6df4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588b6df4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x588b6df6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        sub edx, -80h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 25ch
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
        ; Exact mapped bytes E8 80 6F EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x6f
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6e24
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 15 5E 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x5e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x588b6e98
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x588b6e67
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588b6e67
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x588b6e69
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 91h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 25ch
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
        ; Exact mapped bytes E8 0A 6F EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6f
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6e9a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 9F 5D 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x5d
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 1dh
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x588b6f0e
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x588b6edd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588b6edd
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x588b6edf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 99h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 25ch
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
        ; Exact mapped bytes E8 94 6E EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6e
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b6f10
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c8h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 F5 BD 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0cch]
        push 101h
        ; Exact mapped bytes E8 E5 BD 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        push 101h
        ; Exact mapped bytes E8 D5 BD 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        push 101h
        ; Exact mapped bytes E8 C5 BD 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 E9 5C 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 1eh
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x588b6fc1
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 17: jle 0x588b6f9b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588b6f9b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588b6f9d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 7ah
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 0d3h
        push edx
        push 0ah
        push ecx
        mov ecx, dword ptr [esi + 98h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 41 01 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b6fc3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 76 5C 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 1fh
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x588b7037
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 17: jle 0x588b700e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588b700e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588b7010
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 0F BF CB: movsx ecx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcb
        add ecx, 92h
        push ecx
        ; Exact mapped bytes 0F BF CD: movsx ecx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcd
        add ecx, 0d3h
        push ecx
        push 0ah
        push edx
        mov edx, dword ptr [esi + 98h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 CB 00 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b7039
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0bch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 00 5C 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x5c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 20h
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x588b707a
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EA 18 F1 FF: call 0x587c8960
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x18
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588b707c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 40h]
        mov dword ptr [esi + 88h], edi
        mov ecx, dword ptr [edi + 40h]
        add eax, 64h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588b709f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B1 BE 04 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588b70ac
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 34 BE 04 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        push 184h
        ; Exact mapped bytes E8 98 5B 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x5b
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 21h
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x588b7101
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        lea ecx, [edx + 4ch]
        push ecx
        ; Exact mapped bytes 0F BF FD: movsx edi, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfd
        lea ecx, [edi + 87h]
        push ecx
        mov ecx, dword ptr [esi + 98h]
        add edx, 40h
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 37h
        push edi
        push edx
        push 0
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 21 83 EA FF: call 0x5875f420
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b7103
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0b0h], eax
        mov eax, dword ptr [esi + 98h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9ch]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 90h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 1B 5B 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x5b
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 22h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588b7185
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        lea ecx, [edx + 126h]
        push ecx
        ; Exact mapped bytes 0F BF FD: movsx edi, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfd
        lea ecx, [edi + 1afh]
        push ecx
        mov ecx, dword ptr [esi + 90h]
        add edx, 0bbh
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 178h
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 4D 0E 05 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b7187
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 B2 5A 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x5a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 23h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588b71ee
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        lea ecx, [edx + 126h]
        push ecx
        ; Exact mapped bytes 0F BF FD: movsx edi, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfd
        lea ecx, [edi + 23dh]
        push ecx
        mov ecx, dword ptr [esi + 90h]
        add edx, 0bbh
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 1b5h
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E4 0D 05 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b71f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes E8 49 5A 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x5a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 24h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588b7257
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        lea ecx, [edx + 126h]
        push ecx
        ; Exact mapped bytes 0F BF FD: movsx edi, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfd
        lea ecx, [edi + 254h]
        push ecx
        mov ecx, dword ptr [esi + 90h]
        add edx, 0bbh
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 241h
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 7B 0D 05 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b7259
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0ech], eax
        ; Exact mapped bytes E8 E0 59 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 25h
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x588b72ba
        __asm _emit 0x74
        __asm _emit 0x3c
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        lea ecx, [edx + 126h]
        push ecx
        ; Exact mapped bytes 0F BF FD: movsx edi, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfd
        lea ecx, [edi + 70h]
        push ecx
        mov ecx, dword ptr [esi + 98h]
        add edx, 0bbh
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 39h
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 18 0D 05 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b72bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0f0h], eax
        ; Exact mapped bytes E8 7D 59 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 26h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588b7320
        __asm _emit 0x74
        __asm _emit 0x3f
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        lea ecx, [edx + 126h]
        push ecx
        ; Exact mapped bytes 0F BF FD: movsx edi, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfd
        lea ecx, [edi + 0feh]
        push ecx
        mov ecx, dword ptr [esi + 98h]
        add edx, 0bbh
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 76h
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B2 0C 05 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b7322
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0f4h], eax
        ; Exact mapped bytes E8 17 59 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 27h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588b7389
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        lea ecx, [edx + 126h]
        push ecx
        ; Exact mapped bytes 0F BF FD: movsx edi, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfd
        lea ecx, [edi + 115h]
        push ecx
        mov ecx, dword ptr [esi + 98h]
        add edx, 0bbh
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 102h
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 49 0C 05 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b738b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f8h], eax
        mov dword ptr [esp + 34h], 0
        lea edi, [esi + 11ch]
        push 58h
        ; Exact mapped bytes E8 A3 58 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 30h], ebp
        mov byte ptr [esp + 24h], 28h
        test ebp, ebp
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x588b7450
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 12h
        ; Exact mapped bytes 7E 12: jle 0x588b73df
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588b73df
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 480h]
        ; Exact mapped bytes EB 02: jmp 0x588b73e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 0F BF 54 24 3C: movsx edx, word ptr [esp + 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 90h]
        push 40h
        lea edx, [edx + ecx + 0bah]
        ; Exact mapped bytes 0F BF 4C 24 3C: movsx ecx, word ptr [esp + 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        push 0
        push 0
        push edx
        add ecx, 1b5h
        push ecx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 8E BD 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp], 5898ca74h
        mov dword ptr [ebp + 50h], 0
        mov dword ptr [ebp + 54h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2B: je 0x588b7452
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebx + 18h]
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebx + 1ch]
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebx + 20h]
        lea eax, [ebx + 20h]
        mov dword ptr [ebp + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x588b7452
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 58h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [edi - 20h], ebp
        ; Exact mapped bytes E8 ED 57 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x57
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 30h], ebp
        mov byte ptr [esp + 24h], 29h
        test ebp, ebp
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x588b7502
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 12h
        ; Exact mapped bytes 7E 12: jle 0x588b7495
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588b7495
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 480h]
        ; Exact mapped bytes EB 02: jmp 0x588b7497
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 0F BF 4C 24 3C: movsx ecx, word ptr [esp + 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 98h]
        push 40h
        lea ecx, [ecx + edx + 0bah]
        ; Exact mapped bytes 0F BF 54 24 3C: movsx edx, word ptr [esp + 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        push 0
        push 0
        push ecx
        add edx, 76h
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 DB BC 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp], 5898ca74h
        mov dword ptr [ebp + 50h], 0
        mov dword ptr [ebp + 54h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x588b7504
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 18h]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebx + 1ch]
        lea eax, [ebx + 20h]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [ebp + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x588b7504
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [edi - 20h]
        mov dword ptr [edi], ebp
        xor ecx, ecx
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [edi - 20h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [edi - 20h]
        push -32h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 EA B7 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push -32h
        ; Exact mapped bytes E8 E1 B7 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        add eax, 0dh
        add edi, 4
        cmp eax, 68h
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 8C 4E FE FF FF: jl 0x588b73a4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 F1 56 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x56
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 24h], 2ah
        test edi, edi
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x588b75f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 20h
        ; Exact mapped bytes 7E 12: jle 0x588b7591
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588b7591
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 80h]
        ; Exact mapped bytes EB 02: jmp 0x588b7593
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 0F BF 4C 24 3C: movsx ecx, word ptr [esp + 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        mov ebp, dword ptr [esp + 38h]
        mov eax, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        add ecx, 0a5h
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        push ecx
        add edx, 16eh
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 DF BB 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2E: je 0x588b75fc
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 06: jmp 0x588b75fc
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 38h]
        xor edi, edi
        mov ebx, dword ptr [esp + 3ch]
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 13ch], edi
        ; Exact mapped bytes E8 3C 56 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x56
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 24h], 2bh
        test edi, edi
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x588b76a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 20h
        ; Exact mapped bytes 7E 12: jle 0x588b7646
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588b7646
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 80h]
        ; Exact mapped bytes EB 02: jmp 0x588b7648
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 0F BF 4C 24 3C: movsx ecx, word ptr [esp + 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        mov eax, dword ptr [esi + 98h]
        push 40h
        push 0
        push 0
        add ecx, 0a5h
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        push ecx
        add edx, 2fh
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 31 BB 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x588b76a2
        __asm _emit 0x74
        __asm _emit 0x26
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
        mov ebx, dword ptr [esp + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x588b76aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 140h], edi
        ; Exact mapped bytes E8 92 55 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 24h], 2ch
        test edi, edi
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x588b7755
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x588b76f0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588b76f0
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes EB 02: jmp 0x588b76f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 0F BF 4C 24 3C: movsx ecx, word ptr [esp + 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        mov eax, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        add ecx, 0beh
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        push ecx
        add edx, 178h
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 84 BA 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x588b774f
        __asm _emit 0x74
        __asm _emit 0x26
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
        mov ebx, dword ptr [esp + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x588b7757
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 144h], edi
        ; Exact mapped bytes E8 E5 54 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x54
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 24h], 2dh
        test edi, edi
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x588b77ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x588b779d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588b779d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes EB 02: jmp 0x588b779f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 0F BF 4C 24 3C: movsx ecx, word ptr [esp + 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        mov eax, dword ptr [esi + 98h]
        push 40h
        push 0
        push 0
        add ecx, 0beh
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        push ecx
        add edx, 39h
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 DA B9 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x588b77f9
        __asm _emit 0x74
        __asm _emit 0x26
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
        mov ebx, dword ptr [esp + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x588b7801
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 144h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 148h], edi
        ; Exact mapped bytes E8 04 B5 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 148h]
        push 101h
        ; Exact mapped bytes E8 F4 B4 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 144h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 148h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 FD 53 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 2eh
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x588b78b6
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x588b787f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588b787f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x588b7881
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 0a2h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 25fh
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 90h]
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
        ; Exact mapped bytes E8 EC 64 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x64
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b78b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 14ch], eax
        ; Exact mapped bytes E8 81 53 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 2fh
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x588b7932
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x588b78fb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588b78fb
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x588b78fd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 123h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 25fh
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 90h]
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
        ; Exact mapped bytes E8 70 64 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x64
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b7934
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 150h], eax
        ; Exact mapped bytes E8 05 53 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 30h
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x588b79ae
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x588b7977
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588b7977
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x588b7979
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 0a2h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 120h
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 98h]
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
        ; Exact mapped bytes E8 F4 63 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x63
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b79b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 154h], eax
        ; Exact mapped bytes E8 89 52 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 31h
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x588b7a2a
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x588b79f3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588b79f3
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x588b79f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 123h
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 120h
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 98h]
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
        ; Exact mapped bytes E8 78 63 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x63
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b7a2c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 158h], eax
        ; Exact mapped bytes E8 10 52 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 24h], 32h
        test edi, edi
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x588b7adf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 12: jle 0x588b7a72
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588b7a72
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 240h]
        ; Exact mapped bytes EB 02: jmp 0x588b7a74
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 0F BF 54 24 3C: movsx edx, word ptr [esp + 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        mov eax, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        ; Exact mapped bytes 0F BF CD: movsx ecx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcd
        add edx, 0b2h
        push edx
        add ecx, 260h
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 02 B7 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 27: je 0x588b7ad9
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebx + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx + 1ch]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebx + 20h]
        lea eax, [ebx + 20h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        mov ebx, dword ptr [esp + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x588b7ae1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 15ch], edi
        ; Exact mapped bytes E8 5B 51 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 24h], 33h
        test edi, edi
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x588b7b93
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 12: jle 0x588b7b27
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588b7b27
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 240h]
        ; Exact mapped bytes EB 02: jmp 0x588b7b29
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 0F BF 4C 24 3C: movsx ecx, word ptr [esp + 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        mov eax, dword ptr [esi + 98h]
        push 40h
        push 0
        push 0
        add ecx, 0b2h
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        push ecx
        add edx, 121h
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 4D B6 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x588b7b8d
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebx + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx + 1ch]
        lea eax, [ebx + 20h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        mov ebx, dword ptr [esp + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x588b7b95
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 160h], edi
        ; Exact mapped bytes E8 A4 50 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 34h
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x588b7c0b
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [esi + 60h]
        xor edi, edi
        cmp dword ptr [ecx + 160h], 0ch
        ; Exact mapped bytes 7E 12: jle 0x588b7bda
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x588b7bda
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 300h
        ; Exact mapped bytes EB 02: jmp 0x588b7bdc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 8ah
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 170h
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
        ; Exact mapped bytes E8 97 61 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x61
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x588b7c0f
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        xor edi, edi
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 190h], eax
        ; Exact mapped bytes E8 2A 50 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 35h
        cmp eax, edi
        ; Exact mapped bytes 74 4F: je 0x588b7c83
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 12: jle 0x588b7c52
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x588b7c52
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 340h
        ; Exact mapped bytes EB 02: jmp 0x588b7c54
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 8ah
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 196h
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
        ; Exact mapped bytes E8 1F 61 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x61
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b7c85
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 194h], eax
        ; Exact mapped bytes E8 B4 4F 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 36h
        cmp eax, edi
        ; Exact mapped bytes 74 4F: je 0x588b7cf9
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 12: jle 0x588b7cc8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x588b7cc8
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x588b7cca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 8ah
        push edx
        ; Exact mapped bytes 0F BF D5: movsx edx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd5
        add edx, 1b6h
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
        ; Exact mapped bytes E8 A9 60 EA FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x60
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b7cfb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 190h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 198h], eax
        ; Exact mapped bytes E8 0A B0 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 194h]
        push 101h
        ; Exact mapped bytes E8 FA AF 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        push 101h
        ; Exact mapped bytes E8 EA AF 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 194h]
        push 13b8h
        mov dword ptr [eax + 50h], edi
        ; Exact mapped bytes E8 05 4F 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 37h
        cmp eax, edi
        ; Exact mapped bytes 74 2A: je 0x588b7d83
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 0F BF 4E 26: movsx ecx, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0x26
        push 40h
        push edi
        add ecx, 0c8h
        push ecx
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 54h
        push edx
        mov edx, dword ptr [esi + 60h]
        ; Exact mapped bytes 0F BF CD: movsx ecx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcd
        add ecx, 7dh
        push ecx
        push esi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 6F 39 00 00: call 0x588bb6f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b7d85
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 3e4h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 168h], eax
        ; Exact mapped bytes E8 B4 4E 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 38h
        cmp eax, edi
        ; Exact mapped bytes 74 2D: je 0x588b7dd7
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 0F BF 4E 26: movsx ecx, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0x26
        push 40h
        push edi
        add ecx, 0c8h
        push ecx
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        add edx, 40h
        push edx
        mov edx, dword ptr [esi + 60h]
        ; Exact mapped bytes 0F BF CD: movsx ecx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcd
        add ecx, 82h
        push ecx
        push esi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 EB 53 00 00: call 0x588bd1c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b7dd9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 33ch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 164h], eax
        ; Exact mapped bytes E8 60 4E 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 39h
        cmp eax, edi
        ; Exact mapped bytes 74 15: je 0x588b7e13
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push edi
        push edi
        push 1eh
        push 338h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8F 5F FB FF: call 0x5886dda0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x5f
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588b7e15
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 14ch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 16ch], eax
        ; Exact mapped bytes E8 24 4E 0C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 24h], 3ah
        cmp eax, edi
        ; Exact mapped bytes 74 19: je 0x588b7e53
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [esi + 60h]
        push 40h
        push edi
        push edi
        push 32h
        push 2ach
        push esi
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 6F 76 00 00: call 0x588bf4c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588b7e55
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 16ch]
        mov dword ptr [esi + 170h], eax
        mov eax, 1
        ; Exact mapped bytes 66 89 82 24 03 00 00: mov word ptr [edx + 0x324], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 89 8E 9C 01 00 00: mov word ptr [esi + 0x19c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 9E 01 00 00: mov word ptr [esi + 0x19e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 1a0h], dl
        mov ecx, eax
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [eax + 38h]
        cmp ecx, eax
        ; Exact mapped bytes 75 F0: jne 0x588b7e90
        __asm _emit 0x75
        __asm _emit 0xf0
        mov eax, dword ptr [esi + 90h]
        mov eax, dword ptr [eax + 3ch]
        mov ecx, eax
        ; Exact mapped bytes EB 03: jmp 0x588b7eb0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B7EB0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_588b61e0_segment_01() {
    __asm {
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [eax + 38h]
        cmp ecx, eax
        ; Exact mapped bytes 75 F0: jne 0x588b7eb0
        __asm _emit 0x75
        __asm _emit 0xf0
        mov eax, dword ptr [esi + 98h]
        mov eax, dword ptr [eax + 3ch]
        mov ecx, eax
        ; Exact mapped bytes EB 03: jmp 0x588b7ed0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B7ED0 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_588b61e0_segment_02() {
    __asm {
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [eax + 38h]
        cmp ecx, eax
        ; Exact mapped bytes 75 F0: jne 0x588b7ed0
        __asm _emit 0x75
        __asm _emit 0xf0
        xor edx, edx
        mov eax, 0fff0h
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        xor ecx, ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 96 82 01 00 00: mov word ptr [esi + 0x182], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 7C 01 00 00: mov word ptr [esi + 0x17c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        ; Exact mapped bytes 66 89 86 80 01 00 00: mov word ptr [esi + 0x180], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 7A 01 00 00: mov word ptr [esi + 0x17a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 1c4h], edi
        mov dword ptr [esi + 1c8h], edi
        mov dword ptr [esi + 1d0h], edi
        ; Exact mapped bytes 66 89 8E 84 01 00 00: mov word ptr [esi + 0x184], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E 7E 01 00 00: mov word ptr [esi + 0x17e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E 78 01 00 00: mov word ptr [esi + 0x178], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 1cch], edi
        mov dword ptr [esi + 50h], edx
        mov dword ptr [esi + 54h], 0fffffe3eh
        mov dword ptr [esi + 1d4h], edi
        mov dword ptr [esi + 1d8h], edi
        mov eax, esi
        mov ecx, dword ptr [esp + 1ch]
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
        add esp, 14h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
