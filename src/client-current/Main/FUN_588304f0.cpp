// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 4587 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588304F0 .. +0x11EB bytes.
extern "C" __declspec(naked) void FUN_588304f0_segment_00() {
    __asm {
        push -1
        push 58984015h
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
        mov edi, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push ebx
        push eax
        push ecx
        push edi
        push ebp
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 60 2C 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2c
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
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        push 198h
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esi], 5899e000h
        ; Exact mapped bytes E8 DD C6 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc6
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x58830593
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        push 0
        push 5899e150h
        mov ecx, eax
        ; Exact mapped bytes E8 DF 37 0C 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x37
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58830595
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes A1 B8 45 A2 58: mov eax, dword ptr [0x58a245b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 A2 C6 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc6
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 2
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x588305f2
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 0
        ; Exact mapped bytes 7E 1A: jle 0x588305e2
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x588305e2
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ecx]
        push ebx
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 80 16 F0 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x588305f4
        __asm _emit 0xeb
        __asm _emit 0x12
        push ebx
        push edi
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 70 16 F0 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588305f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 4B C6 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc6
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 3
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x5883064a
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 1
        ; Exact mapped bytes 7E 1B: jle 0x5883063a
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5883063a
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 4]
        push ebx
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 28 16 F0 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x16
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x5883064c
        __asm _emit 0xeb
        __asm _emit 0x12
        push ebx
        push edi
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 18 16 F0 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883064c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 64h]
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 BF 26 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x26
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 0fffffeffh
        ; Exact mapped bytes E8 B2 26 0D 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x26
        __asm _emit 0x0d
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D9 C5 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc5
        __asm _emit 0x14
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        mov byte ptr [esp + 20h], 4
        test ebx, ebx
        ; Exact mapped bytes 74 2B: je 0x588306b2
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [esp + 3ch]
        push ecx
        push 0
        push 0
        lea edx, [edi + 73h]
        push edx
        lea eax, [ebp + 0c5h]
        push eax
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 FD 2A 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x2a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebx], 5898c55ch
        mov dword ptr [ebx + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x588306b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 70h], ebx
        ; Exact mapped bytes E8 8B C5 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc5
        __asm _emit 0x14
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        mov byte ptr [esp + 20h], 5
        test ebx, ebx
        ; Exact mapped bytes 74 32: je 0x58830707
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esp + 3ch]
        push ecx
        push 0
        push 0
        lea edx, [edi + 87h]
        push edx
        lea eax, [ebp + 0c5h]
        push eax
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 AC 2A 0D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebx], 5898c55ch
        mov dword ptr [ebx + 50h], 0
        mov eax, ebx
        xor ebx, ebx
        ; Exact mapped bytes EB 04: jmp 0x5883070b
        __asm _emit 0xeb
        __asm _emit 0x04
        xor ebx, ebx
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 34 C5 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc5
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 6
        cmp eax, ebx
        ; Exact mapped bytes 74 32: je 0x5883075c
        __asm _emit 0x74
        __asm _emit 0x32
        push ebx
        push ebx
        push 0ffffffh
        lea ecx, [edi + 80h]
        push ecx
        lea edx, [ebp + 13fh]
        push edx
        lea ecx, [edi + 74h]
        push ecx
        ; Exact mapped bytes 8B 0D 3C 45 A2 58: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 0e2h]
        push edx
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 26 2B F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x2b
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883075e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 E1 C4 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc4
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 7
        cmp eax, ebx
        ; Exact mapped bytes 74 35: je 0x588307b2
        __asm _emit 0x74
        __asm _emit 0x35
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [edi + 94h]
        push edx
        lea ecx, [ebp + 14bh]
        push ecx
        lea edx, [edi + 88h]
        push edx
        ; Exact mapped bytes 8B 15 3C 45 A2 58: mov edx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 0e2h]
        push ecx
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D0 2A F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2a
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588307b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 8B C4 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc4
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 8
        cmp eax, ebx
        ; Exact mapped bytes 74 35: je 0x58830808
        __asm _emit 0x74
        __asm _emit 0x35
        push ebx
        push ebx
        push 0ffffffh
        lea ecx, [edi + 94h]
        push ecx
        lea edx, [ebp + 1d9h]
        push edx
        lea ecx, [edi + 89h]
        push ecx
        ; Exact mapped bytes 8B 0D 3C 45 A2 58: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 16dh]
        push edx
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7A 2A F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x2a
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883080a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 32 C4 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc4
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 9
        cmp eax, ebx
        ; Exact mapped bytes 74 35: je 0x58830861
        __asm _emit 0x74
        __asm _emit 0x35
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [edi + 0beh]
        push edx
        lea ecx, [ebp + 258h]
        push ecx
        lea edx, [edi + 9ch]
        push edx
        ; Exact mapped bytes 8B 15 3C 45 A2 58: mov edx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 10eh]
        push ecx
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 21 2A F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x2a
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58830863
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 D6 C3 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc3
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0ah
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x588308ce
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 0F: jle 0x588308a3
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x588308a3
        __asm _emit 0x74
        __asm _emit 0x05
        sub ecx, -80h
        ; Exact mapped bytes EB 02: jmp 0x588308a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 0aeh]
        push edx
        lea edx, [ebp + 1f9h]
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
        ; Exact mapped bytes E8 D4 D4 F2 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd4
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588308d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 69 C3 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc3
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0bh
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x5883093b
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 0F: jle 0x58830910
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x58830910
        __asm _emit 0x74
        __asm _emit 0x05
        sub ecx, -80h
        ; Exact mapped bytes EB 02: jmp 0x58830912
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 0d7h]
        push edx
        lea edx, [ebp + 1f9h]
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
        ; Exact mapped bytes E8 67 D4 F2 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd4
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883093d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 FC C2 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0ch
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x588309a8
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x5883097d
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x5883097d
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x5883097f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 138h]
        push edx
        lea edx, [ebp + 1e5h]
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
        ; Exact mapped bytes E8 FA D3 F2 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd3
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588309aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 8F C2 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0dh
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x58830a18
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x588309ed
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x588309ed
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x588309ef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 0afh]
        push edx
        lea edx, [ebp + 15fh]
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
        ; Exact mapped bytes E8 8A D3 F2 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd3
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58830a1a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 1F C2 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0eh
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x58830a88
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x58830a5d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x58830a5d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x58830a5f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 0b7h]
        push edx
        lea edx, [ebp + 15fh]
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
        ; Exact mapped bytes E8 1A D3 F2 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd3
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58830a8a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 AF C1 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc1
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0fh
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x58830af8
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x58830acd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x58830acd
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x58830acf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 0d7h]
        push edx
        lea edx, [ebp + 15fh]
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
        ; Exact mapped bytes E8 AA D2 F2 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd2
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58830afa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 3F C1 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc1
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 10h
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x58830b68
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x58830b3d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x58830b3d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x58830b3f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 0deh]
        push edx
        lea edx, [ebp + 15fh]
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
        ; Exact mapped bytes E8 3A D2 F2 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd2
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58830b6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 CF C0 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc0
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 11h
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x58830bd8
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x58830bad
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x58830bad
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x58830baf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 0abh]
        push edx
        lea edx, [ebp + 11fh]
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
        ; Exact mapped bytes E8 CA D1 F2 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd1
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58830bda
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 5F C0 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc0
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 12h
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x58830c48
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x58830c1d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x58830c1d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x58830c1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 0d4h]
        push edx
        lea edx, [ebp + 11fh]
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
        ; Exact mapped bytes E8 5A D1 F2 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd1
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58830c4a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 EF BF 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 13h
        cmp eax, ebx
        ; Exact mapped bytes 74 33: je 0x58830ca2
        __asm _emit 0x74
        __asm _emit 0x33
        push ebx
        push 0ffffffh
        lea ecx, [edi + 0beh]
        push ecx
        lea edx, [ebp + 1cch]
        push edx
        lea ecx, [edi + 0b1h]
        push ecx
        ; Exact mapped bytes 8B 0D 3C 45 A2 58: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 17ch]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 00 B0 0D 00: call 0x5890bca0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58830ca4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 95 BF 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 14h
        cmp eax, ebx
        ; Exact mapped bytes 74 33: je 0x58830cfc
        __asm _emit 0x74
        __asm _emit 0x33
        push ebx
        push 0ffffffh
        lea edx, [edi + 0e7h]
        push edx
        lea ecx, [ebp + 1cch]
        push ecx
        lea edx, [edi + 0d7h]
        push edx
        ; Exact mapped bytes 8B 15 3C 45 A2 58: mov edx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 17ch]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A6 AF 0D 00: call 0x5890bca0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58830cfe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0bch], eax
        mov dword ptr [esi + 0c0h], ebx
        mov dword ptr [esi + 0c4h], ebx
        mov dword ptr [esi + 0c8h], ebx
        mov dword ptr [esi + 0cch], ebx
        mov dword ptr [esi + 0d0h], ebx
        ; Exact mapped bytes E8 1D BF 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 15h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58830d83
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58830d66
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58830d66
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58830d68
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 9ch]
        push ecx
        lea ecx, [ebp + 0d5h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7F 63 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x63
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58830d85
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 B4 BE 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 16h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58830dec
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58830dcf
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58830dcf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58830dd1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0aeh]
        push ecx
        lea ecx, [ebp + 0c4h]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 16 63 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x63
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58830dee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes E8 4B BE 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 17h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58830e55
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58830e38
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58830e38
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58830e3a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0aeh]
        push ecx
        lea ecx, [ebp + 0efh]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AD 62 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58830e57
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 E2 BD 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbd
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 18h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58830ebe
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58830ea1
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58830ea1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58830ea3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0aeh]
        push ecx
        lea ecx, [ebp + 135h]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 44 62 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58830ec0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes E8 79 BD 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbd
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 19h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58830f27
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58830f0a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58830f0a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58830f0c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0d7h]
        push ecx
        lea ecx, [ebp + 0c4h]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DB 61 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58830f29
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0ech], eax
        ; Exact mapped bytes E8 10 BD 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xbd
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1ah
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58830f90
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58830f73
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58830f73
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58830f75
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0d7h]
        push ecx
        lea ecx, [ebp + 0efh]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 72 61 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58830f92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f0h], eax
        ; Exact mapped bytes E8 A7 BC 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbc
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1bh
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58830ff9
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58830fdc
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58830fdc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58830fde
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0d7h]
        push ecx
        lea ecx, [ebp + 131h]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 09 61 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58830ffb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f4h], eax
        ; Exact mapped bytes E8 3E BC 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xbc
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1ch
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58831062
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58831045
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58831045
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58831047
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 113h]
        push ecx
        lea ecx, [ebp + 0c6h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A0 60 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x60
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58831064
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f8h], eax
        ; Exact mapped bytes E8 D5 BB 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xbb
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1dh
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x588310cb
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x588310ae
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588310ae
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x588310b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 113h]
        push ecx
        lea ecx, [ebp + 0feh]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 37 60 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x60
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588310cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0fch], eax
        ; Exact mapped bytes E8 6C BB 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xbb
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1eh
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58831134
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58831117
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58831117
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58831119
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 113h]
        push ecx
        lea ecx, [ebp + 138h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CE 5F 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x5f
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58831136
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 100h], eax
        ; Exact mapped bytes E8 03 BB 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xbb
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1fh
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x5883119d
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58831180
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58831180
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58831182
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 113h]
        push ecx
        lea ecx, [ebp + 16fh]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 65 5F 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x5f
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5883119f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 104h], eax
        ; Exact mapped bytes E8 9A BA 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xba
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 20h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58831206
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x588311e9
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588311e9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x588311eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 113h]
        push ecx
        lea ecx, [ebp + 1a5h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FC 5E 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58831208
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 108h], eax
        ; Exact mapped bytes E8 31 BA 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xba
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 21h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x5883126f
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58831252
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58831252
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58831254
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 113h]
        push ecx
        lea ecx, [ebp + 1e3h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 93 5E 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58831271
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 10ch], eax
        ; Exact mapped bytes E8 C8 B9 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb9
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 22h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x588312d8
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x588312bb
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588312bb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x588312bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 129h]
        push ecx
        lea ecx, [ebp + 19ch]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2A 5E 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588312da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 110h], eax
        ; Exact mapped bytes E8 5F B9 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb9
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 23h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58831341
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x58831324
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58831324
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x58831326
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 129h]
        push ecx
        lea ecx, [ebp + 113h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C1 5D 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x5d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58831343
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 114h], eax
        ; Exact mapped bytes E8 F6 B8 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb8
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 24h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x588313aa
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x5883138d
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5883138d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5883138f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 13dh]
        push ecx
        lea ecx, [ebp + 0c4h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 58 5D 0D 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x5d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588313ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0bch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 118h], eax
        ; Exact mapped bytes E8 8D B8 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 25h
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x588313e1
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push edi
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 81 75 F9 FF: call 0x587c8960
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x75
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ebx, eax
        mov edx, dword ptr [esp + 3ch]
        mov dword ptr [esi + 11ch], ebx
        mov ecx, dword ptr [ebx + 40h]
        inc edx
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 53 26: mov word ptr [ebx + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58831402
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 4E 1B 0D 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5883140f
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 D1 1A 0D 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x0d
        __asm _emit 0x00
        push 0d8h
        lea ebx, [esi + 144h]
        push 0
        push ebx
        mov dword ptr [esi + 120h], 0a9h
        mov dword ptr [esi + 124h], 1b1h
        mov dword ptr [esi + 128h], 281h
        mov dword ptr [esi + 12ch], 379h
        mov dword ptr [esi + 130h], 411h
        mov dword ptr [esi + 134h], 551h
        mov dword ptr [esi + 138h], 609h
        mov dword ptr [esi + 13ch], 719h
        mov dword ptr [esi + 140h], 829h
        ; Exact mapped bytes E8 CC B7 14 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 0ch
        push 5898c922h
        push ebx
        ; Exact mapped bytes 8B 1D 98 C1 98 58: mov ebx, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 58995da0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esi + 15ch]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 58995d78h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esi + 174h]
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 58995d50h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esi + 18ch]
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 58995d28h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esi + 1a4h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 5899e124h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esi + 1bch]
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 5899e0f8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esi + 1d4h]
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 5899e0d0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esi + 1ech]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 5899e0a8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esi + 204h]
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea edx, [ebp + 1a1h]
        lea eax, [edi + 9ch]
        lea ecx, [ebp + 1cah]
        mov dword ptr [esi + 224h], edx
        mov dword ptr [esi + 228h], eax
        mov dword ptr [esi + 22ch], ecx
        lea ecx, [edi + 0afh]
        mov dword ptr [esi + 238h], ecx
        lea eax, [ebp + 135h]
        lea ecx, [ebp + 15eh]
        lea edx, [edi + 0a8h]
        mov dword ptr [esi + 230h], edx
        mov dword ptr [esi + 234h], eax
        mov dword ptr [esi + 23ch], ecx
        mov dword ptr [esi + 244h], eax
        mov dword ptr [esi + 24ch], ecx
        lea edx, [edi + 0bch]
        lea eax, [edi + 0d7h]
        lea ecx, [edi + 0e4h]
        push 70h
        mov dword ptr [esi + 240h], edx
        mov dword ptr [esi + 248h], eax
        mov dword ptr [esi + 250h], ecx
        mov byte ptr [esi + 21ch], 1
        mov dword ptr [esi + 220h], 0
        mov byte ptr [esi + 21dh], 0
        ; Exact mapped bytes E8 5E B6 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb6
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 26h
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x5883163b
        __asm _emit 0x74
        __asm _emit 0x3b
        push 3c3c3ch
        push 0
        push 3cdc3ch
        lea edx, [edi + 0ceh]
        push edx
        lea ecx, [ebp + 1eah]
        push ecx
        lea edx, [edi + 0beh]
        push edx
        ; Exact mapped bytes 8B 15 3C 45 A2 58: mov edx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 12ch]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 47 1C F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1c
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883163d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 254h], eax
        ; Exact mapped bytes E8 FF B5 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 27h
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x5883169a
        __asm _emit 0x74
        __asm _emit 0x3b
        push 3c3c3ch
        push 0
        push 3cdc3ch
        lea ecx, [edi + 0f7h]
        push ecx
        ; Exact mapped bytes 8B 0D 3C 45 A2 58: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 1eah]
        push edx
        add edi, 0e7h
        push edi
        add ebp, 12ch
        push ebp
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E8 1B F0 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883169c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 258h], eax
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e5ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
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
