// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 4536 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BF4C0 .. +0xBAA bytes.
extern "C" __declspec(naked) void FUN_588bf4c0_segment_00() {
    __asm {
        push -1
        push 5898897ah
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
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 90 3C 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor edi, edi
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esi], 589a0a18h
        mov dword ptr [esi + 140h], edi
        cmp eax, edi
        ; Exact mapped bytes 75 32: jne 0x588bf577
        __asm _emit 0x75
        __asm _emit 0x32
        push 198h
        ; Exact mapped bytes E8 FF D6 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x588bf570
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 589a0970h
        mov ecx, eax
        ; Exact mapped bytes E8 02 48 03 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588bf572
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 20h], 0
        push 198h
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 CA D6 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x588bf5a5
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 5899bb08h
        mov ecx, eax
        ; Exact mapped bytes E8 CD 47 03 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588bf5a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 98 D6 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 3
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588bf602
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 4bh
        ; Exact mapped bytes 7E 1F: jle 0x588bf5f1
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 15: je 0x588bf5f1
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 12ch]
        push 40h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 71 26 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x26
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588bf604
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebx
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 60 26 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x26
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bf604
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 3B D6 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 4
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588bf65f
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 4ch
        ; Exact mapped bytes 7E 1F: jle 0x588bf64e
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 15: je 0x588bf64e
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 130h]
        push 40h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 14 26 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x26
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588bf661
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebx
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 03 26 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x26
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bf661
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 DE D5 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 5
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588bf6bc
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 4dh
        ; Exact mapped bytes 7E 1F: jle 0x588bf6ab
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 15: je 0x588bf6ab
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 134h]
        push 40h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B7 25 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588bf6be
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebx
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A6 25 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bf6be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 81 D5 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 6
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588bf719
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 4eh
        ; Exact mapped bytes 7E 1F: jle 0x588bf708
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 15: je 0x588bf708
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 138h]
        push 40h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5A 25 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588bf71b
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebx
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 49 25 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bf71b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 24 D5 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 7
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588bf776
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 61h
        ; Exact mapped bytes 7E 1F: jle 0x588bf765
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 15: je 0x588bf765
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 184h]
        push 40h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FD 24 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x24
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588bf778
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebx
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EC 24 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x24
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bf778
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 C7 D4 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 8
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588bf7d3
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 60h
        ; Exact mapped bytes 7E 1F: jle 0x588bf7c2
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 15: je 0x588bf7c2
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 180h]
        push 40h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A0 24 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x24
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588bf7d5
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebx
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8F 24 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x24
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bf7d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 68h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 36 35 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 0fffffeffh
        ; Exact mapped bytes E8 29 35 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 101h
        ; Exact mapped bytes E8 1C 35 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 0fffffeffh
        ; Exact mapped bytes E8 0F 35 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 101h
        ; Exact mapped bytes E8 02 35 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 7ch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 14 D4 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 9
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588bf886
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 65h
        ; Exact mapped bytes 7E 1F: jle 0x588bf875
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 15: je 0x588bf875
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 194h]
        push 40h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 ED 23 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588bf888
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebx
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DC 23 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bf888
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 B4 D3 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd3
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 0ah
        cmp eax, edi
        ; Exact mapped bytes 74 35: je 0x588bf8df
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 64h
        ; Exact mapped bytes 7E 12: jle 0x588bf8c8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x588bf8c8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588bf8ca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        push ebx
        push ebp
        push ecx
        mov ecx, dword ptr [esi + 80h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 83 23 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bf8e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 5B D3 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd3
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 0bh
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588bf93f
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 67h
        ; Exact mapped bytes 7E 1F: jle 0x588bf92e
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 15: je 0x588bf92e
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 19ch]
        push 40h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 34 23 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588bf941
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebx
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 23 23 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bf941
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 FB D2 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 0ch
        cmp eax, edi
        ; Exact mapped bytes 74 35: je 0x588bf998
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 66h
        ; Exact mapped bytes 7E 12: jle 0x588bf981
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x588bf981
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes EB 02: jmp 0x588bf983
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 88h]
        push 40h
        push ebx
        push ebp
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 CA 22 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x22
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bf99a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 A2 D2 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 0dh
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588bf9f8
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 63h
        ; Exact mapped bytes 7E 1F: jle 0x588bf9e7
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 15: je 0x588bf9e7
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 18ch]
        push 40h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7B 22 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x22
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588bf9fa
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebx
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6A 22 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x22
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bf9fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 42 D2 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 0eh
        cmp eax, edi
        ; Exact mapped bytes 74 35: je 0x588bfa51
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 62h
        ; Exact mapped bytes 7E 12: jle 0x588bfa3a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x588bfa3a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 188h]
        ; Exact mapped bytes EB 02: jmp 0x588bfa3c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        push ebx
        push ebp
        push ecx
        mov ecx, dword ptr [esi + 90h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 11 22 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x22
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bfa53
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 B2 32 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 101h
        ; Exact mapped bytes E8 A2 32 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 0fffffeffh
        ; Exact mapped bytes E8 92 32 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        ; Exact mapped bytes E8 82 32 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 0fffffeffh
        ; Exact mapped bytes E8 72 32 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 101h
        ; Exact mapped bytes E8 62 32 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov eax, dword ptr [esi + 88h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 90h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 63 D1 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd1
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 0fh
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588bfb37
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 68h
        ; Exact mapped bytes 7E 1F: jle 0x588bfb26
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 15: je 0x588bfb26
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 1a0h]
        push 40h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3C 21 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x21
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588bfb39
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebx
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2B 21 E7 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x21
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bfb39
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 D0 31 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 E8 D0 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 20h], 10h
        test edi, edi
        ; Exact mapped bytes 74 26: je 0x588bfb9e
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        push 0
        push 0
        lea eax, [ebx + 50h]
        push eax
        lea ecx, [ebp + 2dh]
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 12 36 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x588bfba0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 9ch], edi
        mov dword ptr [esi + 0a0h], 0
        ; Exact mapped bytes E8 92 D0 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 11h
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x588bfbfe
        __asm _emit 0x74
        __asm _emit 0x32
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        lea edx, [ebx + 1fh]
        push edx
        lea ecx, [ebp + 0fah]
        push ecx
        lea edx, [ebx + 13h]
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 3bh]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 84 36 E7 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bfc00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 3C D0 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 12h
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x588bfc54
        __asm _emit 0x74
        __asm _emit 0x32
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        lea ecx, [ebx + 31h]
        push ecx
        lea edx, [ebp + 0fah]
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 25h]
        push ecx
        add ebp, 3bh
        push ebp
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2E 36 E7 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bfc56
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esp + 30h]
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a8h], eax
        lea ebp, [esi + 0ach]
        add edi, 0c8h
        mov dword ptr [esp + 40h], 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 C4 CF 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 13h
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x588bfcd7
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 17: jle 0x588bfcc0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588bfcc0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588bfcc2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 86h]
        push ecx
        push edi
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2B 74 04 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588bfcd9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 2dh
        sub dword ptr [esp + 40h], 1
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 75 92: jne 0x588bfc80
        __asm _emit 0x75
        __asm _emit 0x92
        mov edi, dword ptr [esp + 30h]
        lea ebp, [esi + 0b4h]
        add edi, 0c8h
        mov dword ptr [esp + 40h], 2
        push 0fch
        ; Exact mapped bytes E8 3E CF 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xcf
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 14h
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x588bfd5d
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 17: jle 0x588bfd46
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588bfd46
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588bfd48
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 92h]
        push ecx
        push edi
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A5 73 04 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588bfd5f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 2dh
        sub dword ptr [esp + 40h], 1
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 75 92: jne 0x588bfd06
        __asm _emit 0x75
        __asm _emit 0x92
        push 70h
        ; Exact mapped bytes E8 D3 CE 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov edi, dword ptr [esp + 30h]
        mov byte ptr [esp + 20h], 15h
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x588bfdc7
        __asm _emit 0x74
        __asm _emit 0x38
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        lea edx, [ebx + 0d1h]
        push edx
        lea ecx, [edi + 0c3h]
        push ecx
        lea edx, [ebx + 0c5h]
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [edi + 1fh]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BB 34 E7 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x34
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bfdc9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 70 CE 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 16h
        mov ebp, 2eh
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588bfe35
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 17: jle 0x588bfe18
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588bfe18
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588bfe1a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 0c2h]
        push ecx
        lea ecx, [edi + 0efh]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CD 72 04 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588bfe37
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 02 CE 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 17h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588bfe9e
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 17: jle 0x588bfe81
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588bfe81
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588bfe83
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 0cdh]
        push ecx
        lea ecx, [edi + 0efh]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 64 72 04 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588bfea0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 9C CD 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 18h
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x588bfefa
        __asm _emit 0x74
        __asm _emit 0x38
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        lea edx, [ebx + 101h]
        push edx
        lea ecx, [edi + 0c3h]
        push ecx
        lea edx, [ebx + 0f5h]
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [edi + 1fh]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 88 33 E7 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x33
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588bfefc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 3D CD 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 19h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588bff63
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 17: jle 0x588bff46
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588bff46
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588bff48
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 0f5h]
        push ecx
        lea ecx, [edi + 0efh]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9F 71 04 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588bff65
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 D4 CC 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 1ah
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588bffcc
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 17: jle 0x588bffaf
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588bffaf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588bffb1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add ebx, 102h
        push ebx
        add edi, 0efh
        push edi
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 36 71 04 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588bffce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esp + 34h]
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0d0h], eax
        lea ebp, [esi + 0d4h]
        add edi, 127h
        mov ebx, 4
        mov edi, edi
        push 70h
        ; Exact mapped bytes E8 57 CC 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x588c003a
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [esp + 30h]
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        lea edx, [edi + 0ch]
        push edx
        lea edx, [ecx + 0c3h]
        push edx
        push edi
        add ecx, 4ah
        push ecx
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 48 32 E7 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x32
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c003c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 0dh
        sub ebx, 1
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 75 A1: jne 0x588bfff0
        __asm _emit 0x75
        __asm _emit 0xa1
        mov edi, dword ptr [esp + 34h]
        add edi, 128h
        lea ebp, [esi + 0e4h]
        mov dword ptr [esp + 40h], edi
        mov ebx, 2
        ; Exact mapped bytes EB 06: jmp 0x588c0070
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C0070 .. +0x60E bytes.
extern "C" __declspec(naked) void FUN_588bf4c0_segment_01() {
    __asm {
        push 0fch
        ; Exact mapped bytes E8 D4 CB 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xcb
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x588c00cb
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 17: jle 0x588c00b0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588c00b0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588c00b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push edi
        add ecx, 0bbh
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 37 70 04 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c00cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 0dh
        sub ebx, 1
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 75 90: jne 0x588c0070
        __asm _emit 0x75
        __asm _emit 0x90
        mov edi, dword ptr [esp + 40h]
        lea ebp, [esi + 0ech]
        mov ebx, 2
        nop
        push 0fch
        ; Exact mapped bytes E8 54 CB 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1dh
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x588c014b
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 17: jle 0x588c0130
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588c0130
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588c0132
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push edi
        add ecx, 0c8h
        push ecx
        push 1
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B7 6F 04 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c014d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 0dh
        sub ebx, 1
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 75 90: jne 0x588c00f0
        __asm _emit 0x75
        __asm _emit 0x90
        mov edi, dword ptr [esp + 34h]
        lea ebp, [esi + 0f4h]
        add edi, 142h
        mov ebx, 2
        push 0fch
        ; Exact mapped bytes E8 CF CA 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xca
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1eh
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x588c01d0
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 17: jle 0x588c01b5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588c01b5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588c01b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push edi
        add ecx, 0bch
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 32 6F 04 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c01d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 0dh
        sub ebx, 1
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 75 90: jne 0x588c0175
        __asm _emit 0x75
        __asm _emit 0x90
        mov edi, dword ptr [esp + 40h]
        lea ebp, [esi + 0fch]
        mov ebx, 4
        push 0fch
        ; Exact mapped bytes E8 50 CA 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xca
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1fh
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x588c024f
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 17: jle 0x588c0234
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588c0234
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588c0236
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push edi
        add ecx, 0ceh
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B3 6E 04 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c0251
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 0dh
        sub ebx, 1
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 75 90: jne 0x588c01f4
        __asm _emit 0x75
        __asm _emit 0x90
        mov edi, dword ptr [esp + 40h]
        lea ebp, [esi + 10ch]
        mov ebx, 4
        push 0fch
        ; Exact mapped bytes E8 D1 C9 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc9
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 20h
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x588c02ce
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 17: jle 0x588c02b3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588c02b3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588c02b5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push edi
        add ecx, 107h
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 34 6E 04 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c02d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 0dh
        sub ebx, 1
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 75 90: jne 0x588c0273
        __asm _emit 0x75
        __asm _emit 0x90
        push 0ach
        ; Exact mapped bytes E8 61 C9 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc9
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 21h
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x588c034e
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [esi + 60h]
        cmp dword ptr [edx + 160h], 0fh
        ; Exact mapped bytes 7E 12: jle 0x588c031b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x588c031b
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x588c031d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 34h]
        mov ebx, dword ptr [esp + 30h]
        push 40h
        lea ecx, [edi + 160h]
        push ecx
        lea ecx, [ebx + 0d4h]
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
        ; Exact mapped bytes E8 54 DA E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xda
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x588c0358
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 34h]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 11ch], eax
        ; Exact mapped bytes E8 E1 C8 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 22h
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x588c03c6
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 10h
        ; Exact mapped bytes 7E 12: jle 0x588c039b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588c039b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 400h
        ; Exact mapped bytes EB 02: jmp 0x588c039d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 160h]
        push edx
        lea edx, [ebx + 0efh]
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
        ; Exact mapped bytes E8 DC D9 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd9
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c03c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 120h], eax
        ; Exact mapped bytes E8 71 C8 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 23h
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x588c0436
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 11h
        ; Exact mapped bytes 7E 12: jle 0x588c040b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588c040b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 440h
        ; Exact mapped bytes EB 02: jmp 0x588c040d
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
        add edi, 160h
        push edi
        add ebx, 10ah
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
        ; Exact mapped bytes E8 6C D9 E9 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd9
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588c0438
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ebx, dword ptr [esp + 34h]
        mov dword ptr [esi + 124h], eax
        mov eax, dword ptr [esi + 11ch]
        mov dword ptr [eax + 50h], 5
        mov eax, dword ptr [esi + 120h]
        mov ecx, 1
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [esi + 124h]
        mov dword ptr [eax + 50h], ecx
        lea eax, [esi + 128h]
        add ebx, 192h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 38h], ebx
        mov dword ptr [esp + 3ch], 4
        push 58h
        ; Exact mapped bytes E8 C0 C7 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc7
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 20h], 24h
        test edi, edi
        ; Exact mapped bytes 74 74: je 0x588c0514
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 12h
        ; Exact mapped bytes 7E 12: jle 0x588c04be
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588c04be
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 480h]
        ; Exact mapped bytes EB 02: jmp 0x588c04c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        push ebx
        add ecx, 28h
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C9 2C 04 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588c0516
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp + 20h]
        lea eax, [ebp + 20h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x588c0516
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 40h]
        mov dword ptr [eax], edi
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        add eax, 4
        add ebx, 0eh
        sub dword ptr [esp + 3ch], 1
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 0F 85 48 FF FF FF: jne 0x588c0487
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 05 C7 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc7
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov edi, dword ptr [esp + 30h]
        mov byte ptr [esp + 20h], 25h
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x588c058f
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [esp + 34h]
        push 0
        push 0
        push 9696h
        add edx, 1cch
        push edx
        mov edx, dword ptr [esp + 48h]
        lea ecx, [edi + 48h]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [edi + 3bh]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 43 7A 04 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c0591
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 138h], eax
        ; Exact mapped bytes E8 A8 C6 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 26h
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x588c05eb
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esp + 34h]
        push 0
        push 0
        push 969696h
        add ecx, 1cch
        push ecx
        mov ecx, dword ptr [esp + 48h]
        lea edx, [edi + 11eh]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        add edi, 49h
        push edi
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E7 79 04 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588c05ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 13ch], eax
        mov ecx, dword ptr [esi + 138h]
        mov eax, 0fh
        mov dword ptr [ecx + 5ch], eax
        mov edx, dword ptr [esi + 138h]
        mov ecx, 1
        mov dword ptr [edx + 74h], ecx
        mov edx, dword ptr [esi + 13ch]
        mov dword ptr [edx + 5ch], eax
        mov eax, dword ptr [esi + 13ch]
        mov dword ptr [eax + 74h], ecx
        mov ecx, dword ptr [esi + 138h]
        mov dword ptr [ecx + 6ch], 0ffffh
        mov edx, dword ptr [esi + 13ch]
        mov dword ptr [edx + 6ch], 0ffffffh
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
        mov dword ptr [esi + 148h], 0
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
