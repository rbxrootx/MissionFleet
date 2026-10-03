// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 6596 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888E5E0 .. +0x19C4 bytes.
extern "C" __declspec(naked) void FUN_5888e5e0_segment_00() {
    __asm {
        push -1
        push 589870d0h
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
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 38h]
        mov ebp, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        push edx
        push ebp
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6E 4B 07 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4b
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor ebx, ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 54h
        mov dword ptr [esp + 28h], ebx
        mov dword ptr [esi], 5899fc9ch
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebp
        ; Exact mapped bytes E8 EE E5 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 34: je 0x5888e6a4
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], ebx
        ; Exact mapped bytes 7E 12: jle 0x5888e690
        __asm _emit 0x7e
        __asm _emit 0x12
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0A: je 0x5888e690
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x5888e692
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 5dch
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BE 35 EA FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x35
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888e6a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 6ch
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 160h], eax
        ; Exact mapped bytes E8 97 E5 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 32: je 0x5888e6f9
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 10: jle 0x5888e6e5
        __asm _emit 0x7e
        __asm _emit 0x10
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 08: je 0x5888e6e5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5888e6e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 5ddh
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F9 58 F0 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888e6fb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 164h], eax
        ; Exact mapped bytes E8 F4 56 F0 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0xf0
        __asm _emit 0xff
        push 6ch
        ; Exact mapped bytes E8 3B E5 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 3F: je 0x5888e762
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 13: jle 0x5888e745
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0B: je 0x5888e745
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 190h]
        sub edx, -80h
        ; Exact mapped bytes EB 02: jmp 0x5888e747
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 5ddh
        lea ecx, [ebp - 0ah]
        push ecx
        lea ecx, [edi - 96h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 90 58 F0 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888e764
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 168h], eax
        ; Exact mapped bytes E8 8B 56 F0 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xf0
        __asm _emit 0xff
        push 6ch
        ; Exact mapped bytes E8 D2 E4 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 4
        cmp eax, ebx
        ; Exact mapped bytes 74 39: je 0x5888e7c5
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 16: jle 0x5888e7b1
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888e7b1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x5888e7b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 640h
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2D 58 F0 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888e7c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 16ch], eax
        ; Exact mapped bytes E8 28 56 F0 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x56
        __asm _emit 0xf0
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 6C E4 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 5
        cmp eax, ebx
        ; Exact mapped bytes 74 4A: je 0x5888e83c
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 16: jle 0x5888e817
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888e817
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x5888e819
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 640h
        lea edx, [ebp - 0ah]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
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
        ; Exact mapped bytes E8 66 F5 EC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf5
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888e83e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 180h], eax
        ; Exact mapped bytes E8 FC E3 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 6
        cmp eax, ebx
        ; Exact mapped bytes 74 4A: je 0x5888e8ac
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 16: jle 0x5888e887
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888e887
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 180h
        ; Exact mapped bytes EB 02: jmp 0x5888e889
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 640h
        lea ecx, [ebp - 0ah]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
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
        ; Exact mapped bytes E8 F6 F4 EC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf4
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888e8ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 184h], eax
        ; Exact mapped bytes E8 8C E3 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 7
        cmp eax, ebx
        ; Exact mapped bytes 74 50: je 0x5888e922
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0ah
        ; Exact mapped bytes 7E 16: jle 0x5888e8f7
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888e8f7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 280h
        ; Exact mapped bytes EB 02: jmp 0x5888e8f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 640h
        lea ecx, [ebp + 19h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 12ch
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
        ; Exact mapped bytes E8 80 F4 EC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf4
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888e924
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 17ch], eax
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 0bh
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 7E 13: jle 0x5888e94f
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 194h], ebx
        ; Exact mapped bytes 74 0B: je 0x5888e94f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 194h]
        mov eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x5888e951
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 60h], eax
        xor eax, eax
        mov dword ptr [esi + 0b8h], 2
        mov dword ptr [esi + 0bch], 1
        mov dword ptr [esi + 0f0h], ebx
        mov dword ptr [esi + 0c0h], eax
        mov dword ptr [esi + 0c4h], eax
        mov dword ptr [esi + 0c8h], eax
        mov dword ptr [esi + 0cch], eax
        mov dword ptr [esi + 0d0h], eax
        mov dword ptr [esi + 0d4h], eax
        mov dword ptr [esi + 0d8h], eax
        mov dword ptr [esi + 0dch], eax
        mov dword ptr [esi + 0e0h], eax
        mov dword ptr [esi + 0e4h], eax
        mov dword ptr [esi + 0e8h], eax
        mov dword ptr [esi + 0ech], eax
        mov dword ptr [esi + 0b4h], 100000h
        mov dword ptr [esi + 74h], ebx
        mov dword ptr [esi + 10ch], ebx
        mov dword ptr [esi + 4ach], ebx
        mov dword ptr [esi + 108h], ebx
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 15ch], ebx
        or edi, 0ffffffffh
        mov dword ptr [esi + 0ach], edi
        mov dword ptr [esi + 0f8h], eax
        mov dword ptr [esi + 0fch], eax
        mov dword ptr [esi + 100h], eax
        push 78h
        mov dword ptr [esi + 104h], eax
        lea eax, [esi + 504h]
        push ebx
        push eax
        ; Exact mapped bytes E8 35 E2 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0x00
        push 78h
        lea eax, [esi + 57ch]
        push ebx
        push eax
        ; Exact mapped bytes E8 26 E2 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 18h
        mov ecx, esi
        mov dword ptr [esi + 5f4h], edi
        mov dword ptr [esi + 5f8h], edi
        mov dword ptr [esi + 5fch], edi
        ; Exact mapped bytes E8 82 E1 FF FF: call 0x5888cbc0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        push 10ch
        ; Exact mapped bytes E8 06 E2 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov edi, dword ptr [esp + 30h]
        mov byte ptr [esp + 24h], 8
        cmp eax, ebx
        ; Exact mapped bytes 74 33: je 0x5888ea8f
        __asm _emit 0x74
        __asm _emit 0x33
        push 646464h
        push ebx
        push 0ffffffh
        lea ecx, [ebp + 2dh]
        push ecx
        lea edx, [edi + 136h]
        push edx
        lea ecx, [ebp + 19h]
        push ecx
        ; Exact mapped bytes 8B 0D 40 45 A2 58: mov ecx, dword ptr [0x58a24540]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [edi + 0a6h]
        push edx
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 03 26 ED FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x26
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888ea91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 10ch
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 154h], eax
        ; Exact mapped bytes E8 A9 E1 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe1
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 9
        cmp eax, ebx
        ; Exact mapped bytes 74 33: je 0x5888eae8
        __asm _emit 0x74
        __asm _emit 0x33
        push 646464h
        push ebx
        push 0ffffffh
        lea edx, [ebp + 2dh]
        push edx
        lea ecx, [edi + 294h]
        push ecx
        ; Exact mapped bytes 8B 0D 3C 45 A2 58: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 19h]
        push edx
        add edi, 155h
        push edi
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AA 25 ED FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x25
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888eaea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 154h]
        mov dword ptr [esi + 150h], eax
        mov ecx, dword ptr [edi + 40h]
        mov edx, 672h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888eb10
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 40 44 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888eb1d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C3 43 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, dword ptr [esi + 150h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 672h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888eb39
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 17 44 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888eb46
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9A 43 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 154h]
        push 14h
        ; Exact mapped bytes E8 ED A2 EB FF: call 0x58748e40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa2
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 150h]
        push 41h
        ; Exact mapped bytes E8 E0 A2 EB FF: call 0x58748e40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa2
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 154h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 150h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 154h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 150h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 90h
        ; Exact mapped bytes E8 AE E0 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe0
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 0ah
        cmp eax, ebx
        ; Exact mapped bytes 74 50: je 0x5888ec00
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 160h]
        ; Exact mapped bytes 8B 15 04 46 A2 58: mov edx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, 26h
        cmp dword ptr [edx + 164h], 71h
        ; Exact mapped bytes 7E 16: jle 0x5888ebde
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [edx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5888ebde
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [edx + 18ch]
        mov edx, dword ptr [edx + 1c4h]
        ; Exact mapped bytes EB 02: jmp 0x5888ebe0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, 0c8h
        ; Exact mapped bytes 66 03 39: add di, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x39
        movzx ecx, di
        push ecx
        lea ecx, [ebp + 32h]
        push ecx
        push 320h
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 22 65 00 00: call 0x58895120
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5888ec02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 6ch
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 3E E0 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe0
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 0bh
        cmp eax, ebx
        ; Exact mapped bytes 74 43: je 0x5888ec63
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 16: jle 0x5888ec45
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888ec45
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 100h
        ; Exact mapped bytes EB 02: jmp 0x5888ec47
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 30h]
        push 578h
        lea ecx, [ebp - 0fah]
        push ecx
        push edi
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8F 53 F0 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5888ec69
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 30h]
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 188h], eax
        ; Exact mapped bytes E8 86 51 F0 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x51
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 188h]
        push 5ah
        ; Exact mapped bytes E8 59 40 07 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        push 6ch
        ; Exact mapped bytes E8 C0 DF 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xdf
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 0ch
        cmp eax, ebx
        ; Exact mapped bytes 74 3C: je 0x5888ecda
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 16: jle 0x5888ecc3
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888ecc3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 140h
        ; Exact mapped bytes EB 02: jmp 0x5888ecc5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 579h
        lea ecx, [ebp - 0ah]
        push ecx
        push edi
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 18 53 F0 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888ecdc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 18ch], eax
        ; Exact mapped bytes E8 13 51 F0 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x51
        __asm _emit 0xf0
        __asm _emit 0xff
        push 6ch
        ; Exact mapped bytes E8 5A DF 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xdf
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 0dh
        cmp eax, ebx
        ; Exact mapped bytes 74 3C: je 0x5888ed40
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 16: jle 0x5888ed29
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888ed29
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 340h
        ; Exact mapped bytes EB 02: jmp 0x5888ed2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 577h
        lea ecx, [ebp - 0ah]
        push ecx
        push edi
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B2 52 F0 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x52
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888ed42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 190h], eax
        ; Exact mapped bytes E8 C8 3F 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 190h]
        ; Exact mapped bytes E8 9D 50 F0 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x50
        __asm _emit 0xf0
        __asm _emit 0xff
        push 94h
        ; Exact mapped bytes E8 E1 DE 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xde
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 0eh
        cmp eax, ebx
        ; Exact mapped bytes 74 2F: je 0x5888edac
        __asm _emit 0x74
        __asm _emit 0x2f
        push ebx
        push ebx
        push 10101h
        lea edx, [ebp - 64h]
        push edx
        lea ecx, [edi + 253h]
        push ecx
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp - 7fh]
        push edx
        add edi, 13bh
        push edi
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 46 3C 04 00: call 0x588d29f0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5888edae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 194h], eax
        mov dword ptr [eax + 60h], 0ffffffh
        mov edi, dword ptr [esi + 194h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 640h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888eddb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 75 41 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888ede8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F8 40 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 194h]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 2E: je 0x5888ee23
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edi, 5898d61ch
        mov edx, 80h
        sub edi, eax
        lea ecx, [edx + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5888ee1c
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [eax + edi]
        cmp cl, bl
        ; Exact mapped bytes 74 0A: je 0x5888ee1c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x5888ee01
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5888ee20
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp edx, ebx
        ; Exact mapped bytes 75 01: jne 0x5888ee21
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], bl
        push 0fch
        ; Exact mapped bytes E8 21 DE 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xde
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 0fh
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x5888ee82
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x5888ee62
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888ee62
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5888ee64
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp - 7fh]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, 2b2h
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 82 82 07 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5888ee84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 498h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 640h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888eea4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AC 40 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888eeb1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2F 40 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 93 DD 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xdd
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 10h
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x5888ef10
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x5888eef0
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888eef0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5888eef2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp - 7fh]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, 2e4h
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F4 81 07 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x81
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5888ef12
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 49ch], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 640h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888ef32
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1E 40 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888ef3f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A1 3F 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 49ch]
        push ebx
        ; Exact mapped bytes E8 15 84 07 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 498h]
        push 101h
        ; Exact mapped bytes E8 C5 3D 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 49ch]
        push 101h
        ; Exact mapped bytes E8 B5 3D 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 194h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 498h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 49ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 B4 DC 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xdc
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 11h
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x5888efef
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x5888efcf
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888efcf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x5888efd1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp - 7fh]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 2dah
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 15 81 07 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x81
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5888eff1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 4a0h], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 640h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f011
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3F 3F 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x3f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f01e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C2 3E 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x3e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4a0h]
        push 101h
        ; Exact mapped bytes E8 F2 3C 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4a0h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 90h
        ; Exact mapped bytes E8 07 DC 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xdc
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 12h
        cmp eax, ebx
        ; Exact mapped bytes 74 36: je 0x5888f08d
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [esp + 30h]
        push 10101h
        push ebx
        push 0d0d0dfh
        lea edx, [ebp - 2]
        push edx
        lea edx, [ecx + 2f8h]
        push edx
        lea edx, [ebp - 6bh]
        push edx
        add ecx, 155h
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 45 8F 07 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5888f08f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 4c4h], eax
        mov dword ptr [eax + 5ch], 0dh
        mov eax, dword ptr [esi + 4c4h]
        mov edx, dword ptr [eax + 14h]
        add edx, 1a3h
        mov dword ptr [eax + 1ch], edx
        mov eax, dword ptr [esi + 4c4h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [eax + 18h]
        lea ecx, [ecx + ecx*8]
        lea ecx, [edx + ecx + 5]
        mov dword ptr [eax + 20h], ecx
        mov eax, dword ptr [esi + 4c4h]
        mov dword ptr [eax + 6ch], 0fefefeh
        mov dword ptr [eax + 70h], ebx
        mov edi, dword ptr [esi + 4c4h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 640h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f0f4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5C 3E 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x3e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f101
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DF 3D 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        push 90h
        ; Exact mapped bytes E8 43 DB 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 13h
        cmp eax, ebx
        ; Exact mapped bytes 74 32: je 0x5888f14d
        __asm _emit 0x74
        __asm _emit 0x32
        push ebx
        push ebx
        push 0ffffffh
        lea ecx, [ebp - 2]
        push ecx
        mov ecx, dword ptr [esp + 40h]
        lea edx, [ecx + 12ch]
        push edx
        lea edx, [ebp - 6bh]
        push edx
        add ecx, 0d2h
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 35 B1 EF FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb1
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888f14f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 4c8h], eax
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 4c8h]
        mov edx, dword ptr [eax + 14h]
        add edx, 5fh
        mov dword ptr [eax + 1ch], edx
        mov eax, dword ptr [esi + 4c8h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [eax + 18h]
        lea ecx, [ecx + ecx*2]
        lea ecx, [edx + ecx*2]
        mov dword ptr [eax + 20h], ecx
        mov eax, dword ptr [esi + 4c8h]
        mov dword ptr [eax + 6ch], 0ffffffh
        mov dword ptr [eax + 70h], ebx
        mov edi, dword ptr [esi + 4c8h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 640h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f1b0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A0 3D 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f1bd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 23 3D 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        push 90h
        ; Exact mapped bytes E8 87 DA 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 14h
        cmp eax, ebx
        ; Exact mapped bytes 74 2F: je 0x5888f206
        __asm _emit 0x74
        __asm _emit 0x2f
        push ebx
        push ebx
        push 0ffffffh
        lea ecx, [ebp - 2]
        push ecx
        mov ecx, dword ptr [esp + 40h]
        lea edx, [ecx + 0b4h]
        push edx
        add ebp, -6bh
        push ebp
        sub ecx, -80h
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CC 8D 07 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5888f208
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 4cch], eax
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 4cch]
        mov edx, dword ptr [eax + 14h]
        add edx, 5fh
        mov dword ptr [eax + 1ch], edx
        mov eax, dword ptr [esi + 4c8h]
        mov eax, dword ptr [eax + 5ch]
        mov ecx, dword ptr [esi + 4cch]
        lea edx, [eax + eax*2]
        mov eax, dword ptr [ecx + 18h]
        lea edx, [eax + edx*2]
        mov dword ptr [ecx + 20h], edx
        mov eax, dword ptr [esi + 4cch]
        mov dword ptr [eax + 6ch], 0ffffffh
        mov dword ptr [eax + 70h], ebx
        mov edi, dword ptr [esi + 4cch]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 640h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f26f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E1 3C 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f27c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 64 3C 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 34h]
        lea ecx, [esi + 4d0h]
        mov dword ptr [esp + 40h], ecx
        add ebp, -70h
        mov dword ptr [esp + 3ch], 6
        push 54h
        ; Exact mapped bytes E8 B2 D9 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 24h], 15h
        cmp edi, ebx
        ; Exact mapped bytes 74 23: je 0x5888f2d1
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [esp + 30h]
        push 640h
        push ebx
        push ebx
        push ebp
        add edx, 69h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DA 3E 07 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3e
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x5888f2d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 40h]
        mov dword ptr [eax], edi
        add eax, 4
        add ebp, 14h
        sub dword ptr [esp + 3ch], 1
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 75 A7: jne 0x5888f295
        __asm _emit 0x75
        __asm _emit 0xa7
        push 9ch
        ; Exact mapped bytes E8 56 D9 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov ebp, dword ptr [esp + 30h]
        mov byte ptr [esp + 24h], 16h
        cmp eax, ebx
        ; Exact mapped bytes 74 2E: je 0x5888f33a
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [esp + 34h]
        push ebx
        push 0efefefh
        add edx, -32h
        push edx
        lea ecx, [ebp + 302h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        lea edx, [ebp + 155h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F8 C9 07 00: call 0x5890bd30
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc9
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5888f33c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 4c0h], eax
        mov dword ptr [eax + 68h], 10101h
        mov eax, dword ptr [esi + 4c0h]
        mov edx, 0dfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4c0h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4c0h]
        mov dword ptr [eax + 98h], 0ah
        mov eax, dword ptr [esi + 4c0h]
        mov dword ptr [eax + 90h], 0bb8h
        mov edi, dword ptr [esi + 4c0h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 640h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f3a7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A9 3B 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f3b4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2C 3B 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 90 D8 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 17h
        cmp eax, ebx
        ; Exact mapped bytes 74 54: je 0x5888f422
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0ch
        ; Exact mapped bytes 7E 16: jle 0x5888f3f3
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888f3f3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 300h
        ; Exact mapped bytes EB 02: jmp 0x5888f3f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 34h]
        push 640h
        lea ecx, [edi - 6eh]
        push ecx
        lea ecx, [ebp + 2f8h]
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
        ; Exact mapped bytes E8 80 E9 EC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5888f428
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 34h]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 4b0h], eax
        ; Exact mapped bytes E8 12 D8 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd8
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 18h
        cmp eax, ebx
        ; Exact mapped bytes 74 50: je 0x5888f49c
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 16: jle 0x5888f471
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888f471
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x5888f473
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 640h
        lea ecx, [edi - 4]
        push ecx
        lea ecx, [ebp + 2f8h]
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
        ; Exact mapped bytes E8 06 E9 EC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888f49e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 4b4h], eax
        ; Exact mapped bytes E8 9C D7 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd7
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 19h
        cmp eax, ebx
        ; Exact mapped bytes 74 50: je 0x5888f512
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0ch
        ; Exact mapped bytes 7E 16: jle 0x5888f4e7
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888f4e7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 300h
        ; Exact mapped bytes EB 02: jmp 0x5888f4e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 640h
        lea ecx, [edi - 6eh]
        push ecx
        lea ecx, [ebp + 114h]
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
        ; Exact mapped bytes E8 90 E8 EC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888f514
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 4b8h], eax
        ; Exact mapped bytes E8 26 D7 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd7
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 1ah
        cmp eax, ebx
        ; Exact mapped bytes 74 50: je 0x5888f588
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 04 46 A2 58: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 16: jle 0x5888f55d
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888f55d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x5888f55f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 640h
        add edi, -4
        push edi
        add ebp, 114h
        push ebp
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
        ; Exact mapped bytes E8 1A E8 EC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888f58a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 4b4h]
        push 101h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 4bch], eax
        ; Exact mapped bytes E8 7C 37 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4b0h]
        push 101h
        ; Exact mapped bytes E8 6C 37 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4b8h]
        push 101h
        ; Exact mapped bytes E8 5C 37 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4bch]
        push 101h
        ; Exact mapped bytes E8 4C 37 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 73 D6 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 24h], 1bh
        cmp edi, ebx
        ; Exact mapped bytes 74 7F: je 0x5888f66c
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 20h
        ; Exact mapped bytes 7E 16: jle 0x5888f611
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888f611
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 800h
        ; Exact mapped bytes EB 02: jmp 0x5888f613
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push 583h
        push ebx
        push ebx
        add edx, -0eh
        push edx
        add eax, 2f8h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6C 3B 07 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x5888f66e
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        lea eax, [ebp + 20h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5888f66e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 4a4h], edi
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 4a4h]
        push 101h
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes E8 8F 36 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4a4h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 A7 D5 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 24h], 1ch
        cmp edi, ebx
        ; Exact mapped bytes 74 7F: je 0x5888f738
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 20h
        ; Exact mapped bytes 7E 16: jle 0x5888f6dd
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5888f6dd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 800h
        ; Exact mapped bytes EB 02: jmp 0x5888f6df
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push 583h
        push ebx
        push ebx
        add edx, -0eh
        push edx
        add eax, 114h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A0 3A 07 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3a
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x5888f73a
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        lea eax, [ebp + 20h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5888f73a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 34h]
        mov dword ptr [esi + 4a8h], edi
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 4a8h]
        push 101h
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes E8 BF 35 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4a8h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4a8h]
        mov ecx, 2
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [esi + 4a4h]
        push 1dch
        mov dword ptr [eax + 50h], ecx
        ; Exact mapped bytes E8 BD D4 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 1dh
        cmp eax, ebx
        ; Exact mapped bytes 74 15: je 0x5888f7b6
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push ebx
        push 7ffdh
        push ebx
        push 70h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2C 6A 02 00: call 0x588b61e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5888f7b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 4f4h], eax
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, 0e5ffh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4f4h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 94h
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes E8 5B D4 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 1eh
        cmp eax, ebx
        ; Exact mapped bytes 74 33: je 0x5888f836
        __asm _emit 0x74
        __asm _emit 0x33
        push ebx
        push ebx
        push 10101h
        lea ecx, [ebp - 64h]
        push ecx
        mov ecx, dword ptr [esp + 40h]
        lea edx, [ecx + 253h]
        push edx
        lea edx, [ebp - 7fh]
        push edx
        add ecx, 13bh
        push ecx
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BC 31 04 00: call 0x588d29f0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5888f838
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 4f8h], eax
        mov dword ptr [eax + 60h], 0ffffffh
        mov edi, dword ptr [esi + 4f8h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 640h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f865
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EB 36 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f872
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6E 36 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4f8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 94h
        ; Exact mapped bytes E8 C3 D3 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd3
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 1fh
        cmp eax, ebx
        ; Exact mapped bytes 74 35: je 0x5888f8d0
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esp + 30h]
        push ebx
        push ebx
        push 0a53737h
        lea edx, [ebp + 2bh]
        push edx
        lea edx, [ecx + 2f8h]
        push edx
        add ebp, 17h
        push ebp
        add ecx, 1b6h
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 24 31 04 00: call 0x588d29f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5888f8d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 4fch], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 672h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f8f2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5E 36 07 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5888f8ff
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E1 35 07 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        push 0f4h
        ; Exact mapped bytes E8 45 D3 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd3
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 20h
        cmp eax, ebx
        ; Exact mapped bytes 74 13: je 0x5888f92c
        __asm _emit 0x74
        __asm _emit 0x13
        push 1004h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 36 4F 01 00: call 0x588a4860
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5888f92e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 500h], eax
        ; Exact mapped bytes E8 0C D3 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd3
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 21h
        cmp eax, ebx
        ; Exact mapped bytes 74 11: je 0x5888f963
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push ebx
        push 5899ff68h
        mov ecx, eax
        ; Exact mapped bytes E8 0F 44 06 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5888f965
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 648h], eax
        mov dword ptr [esi + 64ch], ebx
        ; Exact mapped bytes E8 E4 DC FF FF: call 0x5888d660
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 600h]
        mov dword ptr [esp + 3ch], 32h
        mov dword ptr [esp + 40h], 0c8h
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 2ch], 2
        mov edi, edi
        push 54h
        ; Exact mapped bytes E8 A7 D2 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 22h
        cmp edi, ebx
        ; Exact mapped bytes 74 79: je 0x5888fa32
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [esi + 648h]
        mov ecx, dword ptr [esp + 3ch]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x5888f9e2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x5888f9e2
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x5888f9e2
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 40h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x5888f9e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push 640h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A3 37 07 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x5888fa34
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5888fa34
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        add dword ptr [esp + 40h], 4
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 38h], eax
        mov eax, 1
        add dword ptr [esp + 3ch], eax
        sub dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 0F 85 43 FF FF FF: jne 0x5888f9a0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 608h]
        mov dword ptr [esp + 3ch], 34h
        mov dword ptr [esp + 40h], 0d0h
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 2ch], 2
        nop
        push 54h
        ; Exact mapped bytes E8 C7 D1 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 23h
        cmp edi, ebx
        ; Exact mapped bytes 74 79: je 0x5888fb12
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [esi + 648h]
        mov ecx, dword ptr [esp + 3ch]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x5888fac2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x5888fac2
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x5888fac2
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 40h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x5888fac4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push 640h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C3 36 07 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x5888fb14
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5888fb14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        add dword ptr [esp + 40h], 4
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 38h], eax
        mov eax, 1
        add dword ptr [esp + 3ch], eax
        sub dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 0F 85 43 FF FF FF: jne 0x5888fa80
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 610h]
        mov dword ptr [esp + 3ch], 36h
        mov dword ptr [esp + 40h], 0d8h
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 2ch], 2
        nop
        push 54h
        ; Exact mapped bytes E8 E7 D0 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 24h
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 79 00 00 00: je 0x5888fbf6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 648h]
        mov ecx, dword ptr [esp + 3ch]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x5888fba6
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x5888fba6
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x5888fba6
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 40h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x5888fba8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push 640h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DF 35 07 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x5888fbf8
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5888fbf8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        add dword ptr [esp + 40h], 4
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 38h], eax
        mov eax, 1
        add dword ptr [esp + 3ch], eax
        sub dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 0F 85 3F FF FF FF: jne 0x5888fb60
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 618h]
        mov dword ptr [esp + 3ch], 38h
        mov dword ptr [esp + 40h], 0e0h
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 2ch], 2
        push 54h
        ; Exact mapped bytes E8 04 D0 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 25h
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 79 00 00 00: je 0x5888fcd9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 648h]
        mov ecx, dword ptr [esp + 3ch]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x5888fc89
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x5888fc89
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x5888fc89
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 40h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x5888fc8b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push 640h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FC 34 07 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x5888fcdb
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5888fcdb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        add dword ptr [esp + 40h], 4
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 38h], eax
        mov eax, 1
        add dword ptr [esp + 3ch], eax
        sub dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 0F 85 3F FF FF FF: jne 0x5888fc43
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 600h]
        push 101h
        ; Exact mapped bytes E8 0C 30 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 604h]
        push 0fffffeffh
        ; Exact mapped bytes E8 FC 2F 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 608h]
        push 101h
        ; Exact mapped bytes E8 EC 2F 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 DC 2F 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 610h]
        push 101h
        ; Exact mapped bytes E8 CC 2F 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 614h]
        push 0fffffeffh
        ; Exact mapped bytes E8 BC 2F 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 618h]
        push 101h
        ; Exact mapped bytes E8 AC 2F 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 61ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 9C 2F 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        push 134h
        ; Exact mapped bytes E8 C0 CE 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xce
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 26h
        cmp eax, ebx
        ; Exact mapped bytes 74 1B: je 0x5888fdb9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        push 672h
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 99 B7 01 00: call 0x588ab550
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5888fdbb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fff0h
        mov dword ptr [esi + 620h], eax
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov byte ptr [esp + 24h], bl
        lea ebp, [esi + 624h]
        mov edi, 4
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 64 CE 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xce
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 27h
        cmp eax, ebx
        ; Exact mapped bytes 74 43: je 0x5888fe3d
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [esi + 648h]
        cmp dword ptr [edx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x5888fe1b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x5888fe1b
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x5888fe1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 640h
        push ebx
        push ebx
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
        ; Exact mapped bytes E8 65 DF EC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888fe3f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        sub edi, 1
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 75 92: jne 0x5888fde0
        __asm _emit 0x75
        __asm _emit 0x92
        lea edi, [esi + 624h]
        mov ebp, 4
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 B4 2E 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x2e
        __asm _emit 0x07
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 EC: jne 0x5888fe60
        __asm _emit 0x75
        __asm _emit 0xec
        push 0ach
        ; Exact mapped bytes E8 D0 CD 0E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 24h], 28h
        cmp eax, ebx
        ; Exact mapped bytes 74 54: je 0x5888fee2
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [esi + 648h]
        cmp dword ptr [edx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x5888feaf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x5888feaf
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 100h
        ; Exact mapped bytes EB 02: jmp 0x5888feb1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 34h]
        push 640h
        add ecx, 14h
        push ecx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 301h
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
        ; Exact mapped bytes E8 C0 DE EC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5888fee4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 634h], eax
        mov dword ptr [esi + 638h], ebx
        mov dword ptr [esi + 63ch], ebx
        mov dword ptr [esi + 640h], ebx
        mov dword ptr [esi + 644h], ebx
        ; Exact mapped bytes 39 1D A0 B4 A0 58: cmp dword ptr [0x58a0b4a0], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 74 4B: je 0x5888ff55
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 39 1D A4 B4 A0 58: cmp dword ptr [0x58a0b4a4], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        mov edx, dword ptr [esi + 628h]
        mov eax, 1
        mov dword ptr [esi + 63ch], eax
        ; Exact mapped bytes 74 19: je 0x5888ff3c
        __asm _emit 0x74
        __asm _emit 0x19
        mov dword ptr [esi + 644h], eax
        mov eax, 5
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 630h]
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes EB 38: jmp 0x5888ff74
        __asm _emit 0xeb
        __asm _emit 0x38
        mov dword ptr [esi + 640h], eax
        mov eax, 5
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 62ch]
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes EB 1F: jmp 0x5888ff74
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 39 1D A4 B4 A0 58: cmp dword ptr [0x58a0b4a4], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 74 17: je 0x5888ff74
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [esi + 630h]
        mov dword ptr [esi + 644h], 1
        mov dword ptr [edx + 50h], 5
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
