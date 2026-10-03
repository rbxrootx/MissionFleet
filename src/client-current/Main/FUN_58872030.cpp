// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 4094 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58872030 .. +0xFFE bytes.
extern "C" __declspec(naked) void FUN_58872030_segment_00() {
    __asm {
        push -1
        push 58986352h
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
        mov ebp, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push ebp
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        push edi
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 30 42 F4 FF: call 0x587b62b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x42
        __asm _emit 0xf4
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esi], 5899ee18h
        ; Exact mapped bytes E8 BB AB 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xab
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 37: je 0x588720da
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], ebx
        ; Exact mapped bytes 7E 12: jle 0x588720c3
        __asm _emit 0x7e
        __asm _emit 0x12
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0A: je 0x588720c3
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x588720c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 5]
        push edx
        mov edx, dword ptr [esp + 30h]
        push edi
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 88 FB EB FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588720dc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 60 AB 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xab
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 39: je 0x58872137
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 1
        ; Exact mapped bytes 7E 13: jle 0x58872120
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0B: je 0x58872120
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x58872122
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0ah]
        push edx
        mov edx, dword ptr [esp + 30h]
        push edi
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2B FB EB FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfb
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872139
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 03 AB 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xab
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x588721a1
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 2
        ; Exact mapped bytes 7E 23: jle 0x5887218d
        __asm _emit 0x7e
        __asm _emit 0x23
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 1B: je 0x5887218d
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [ecx + 8]
        push ebp
        push edi
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D5 FA EB FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfa
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 16: jmp 0x588721a3
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [esp + 2ch]
        push ebp
        push edi
        xor ecx, ecx
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C1 FA EB FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588721a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a0h]
        push 0c8h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 22 0B 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a8h]
        push 0fffffeffh
        ; Exact mapped bytes E8 43 0B 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 5B AA 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xaa
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 4
        cmp edi, ebx
        ; Exact mapped bytes 74 29: je 0x5887222e
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        lea eax, [ebp + 0fh]
        push eax
        push ebx
        push ebx
        add ecx, 0a1h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7D 0F 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x0f
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x58872230
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0ach], edi
        ; Exact mapped bytes E8 0C AA 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xaa
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 5
        cmp eax, ebx
        ; Exact mapped bytes 74 3D: je 0x5887228f
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 4
        ; Exact mapped bytes 7E 13: jle 0x58872274
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0B: je 0x58872274
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes EB 02: jmp 0x58872276
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        add ebp, 0fh
        push ebp
        push edx
        mov edx, dword ptr [esp + 34h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D3 F9 EB FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf9
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872291
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0ach]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 74 0A 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 101h
        ; Exact mapped bytes E8 64 0A 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b0h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 33ch
        ; Exact mapped bytes E8 6D A9 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa9
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 6
        cmp eax, ebx
        ; Exact mapped bytes 74 19: je 0x5887230a
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push 1eh
        push 36ah
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 98 BA FF FF: call 0x5886dda0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5887230c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0b4h], eax
        mov edx, 0dfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0b4h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 9c4h
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        mov byte ptr [esp + 20h], 0
        movzx eax, ax
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58872343
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0D 0C 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58872350
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 90 0B 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        push 1f48h
        ; Exact mapped bytes E8 F4 A8 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa8
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov ebp, dword ptr [esp + 28h]
        mov byte ptr [esp + 20h], 7
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x5887237e
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 54 1C FF FF: call 0x58863fd0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872380
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0b8h], eax
        mov ecx, 0dfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0b8h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 0bb8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        mov byte ptr [esp + 20h], 0
        movzx eax, dx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x588723b7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 99 0B 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x588723c4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1C 0B 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 0ch
        ; Exact mapped bytes 7E 13: jle 0x588723e5
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 194h], ebx
        ; Exact mapped bytes 74 0B: je 0x588723e5
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov eax, dword ptr [eax + 30h]
        ; Exact mapped bytes EB 02: jmp 0x588723e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b8h]
        push eax
        push ebx
        ; Exact mapped bytes E8 7C 3C F4 FF: call 0x587b6070
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3c
        __asm _emit 0xf4
        __asm _emit 0xff
        push 247ch
        ; Exact mapped bytes E8 50 A8 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa8
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 8
        cmp eax, ebx
        ; Exact mapped bytes 74 12: je 0x58872420
        __asm _emit 0x74
        __asm _emit 0x12
        push 40h
        push ebx
        push ebx
        push 54h
        push 70h
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 22 E5 03 00: call 0x588b0940
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58872422
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0bch], eax
        mov ecx, 0dfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0bch]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 0bb8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        mov byte ptr [esp + 20h], 0
        movzx eax, dx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58872459
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F7 0A 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58872466
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7A 0A 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        push 294h
        ; Exact mapped bytes E8 DE A7 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa7
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 9
        cmp eax, ebx
        ; Exact mapped bytes 74 18: je 0x58872498
        __asm _emit 0x74
        __asm _emit 0x18
        push 40h
        push ebx
        push ebx
        push 0a4h
        push 190h
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 FA 81 FF FF: call 0x5886a690
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5887249a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0c0h], eax
        mov ecx, 0dfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0c0h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 0bb8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        mov byte ptr [esp + 20h], 0
        movzx eax, dx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x588724d1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7F 0A 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x588724de
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 02 0A 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        push 2d4h
        ; Exact mapped bytes E8 66 A7 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xa7
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ah
        cmp eax, ebx
        ; Exact mapped bytes 74 15: je 0x5887250d
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push ebx
        push ebx
        push 50h
        push 12ch
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 35 66 FF FF: call 0x58868b40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5887250f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0c4h], eax
        mov ecx, 0dfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 0bb8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        mov byte ptr [esp + 20h], 0
        movzx eax, dx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58872546
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0A 0A 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58872553
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8D 09 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x09
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 F1 A6 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa6
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0bh
        cmp eax, ebx
        ; Exact mapped bytes 74 63: je 0x588725d0
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 16: jle 0x58872592
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58872592
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 380h
        ; Exact mapped bytes EB 02: jmp 0x58872594
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, 3e8h
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx ecx, cx
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, 9eh
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, 159h
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
        ; Exact mapped bytes E8 D2 B7 EE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb7
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588725d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 37 07 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d8h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 4C A6 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa6
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ch
        cmp eax, ebx
        ; Exact mapped bytes 74 63: je 0x58872675
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0fh
        ; Exact mapped bytes 7E 16: jle 0x58872637
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58872637
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x58872639
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, 3e8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        movzx edx, dx
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 0a4h
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 189h
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
        ; Exact mapped bytes E8 2D B7 EE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb7
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872677
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 92 06 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 A7 A5 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa5
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0dh
        mov ebx, 10h
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x5887271f
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x588726e1
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588726e1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 400h
        ; Exact mapped bytes EB 02: jmp 0x588726e3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 2ch]
        mov edx, 3e8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        movzx edx, dx
        push edx
        lea edx, [ebp + 0a4h]
        push edx
        lea edx, [edi + 1bbh]
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
        ; Exact mapped bytes E8 83 B6 EE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb6
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x58872729
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 E0 05 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d4h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 F5 A4 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa4
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 0eh
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x588727c5
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 33h
        ; Exact mapped bytes 7E 17: jle 0x5887278f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5887278f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0cc0h
        ; Exact mapped bytes EB 02: jmp 0x58872791
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, 3e8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        movzx edx, dx
        push edx
        lea edx, [ebp + 0a6h]
        push edx
        lea edx, [edi + 0cdh]
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
        ; Exact mapped bytes E8 DD B5 EE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb5
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588727c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 42 05 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 57 A4 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa4
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x58872863
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 31h
        ; Exact mapped bytes 7E 17: jle 0x5887282d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5887282d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0c40h
        ; Exact mapped bytes EB 02: jmp 0x5887282f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, 3e8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        movzx edx, dx
        push edx
        lea edx, [ebp + 0a6h]
        push edx
        lea edx, [edi + 0ebh]
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
        ; Exact mapped bytes E8 3F B5 EE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb5
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872865
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 A4 04 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 B9 A3 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], bl
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x58872900
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 32h
        ; Exact mapped bytes 7E 17: jle 0x588728ca
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588728ca
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x588728cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, 3e8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        movzx edx, dx
        push edx
        lea edx, [ebp + 0a6h]
        push edx
        lea edx, [edi + 109h]
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
        ; Exact mapped bytes E8 A2 B4 EE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb4
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872902
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 07 04 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 1C A3 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 11h
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x5887299e
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 30h
        ; Exact mapped bytes 7E 17: jle 0x58872968
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58872968
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0c00h
        ; Exact mapped bytes EB 02: jmp 0x5887296a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, 3e8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        movzx edx, dx
        push edx
        lea edx, [ebp + 0a6h]
        push edx
        lea edx, [edi + 127h]
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
        ; Exact mapped bytes E8 04 B4 EE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb4
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588729a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 69 03 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        mov dword ptr [esi + 84h], 0
        ; Exact mapped bytes E8 74 A2 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa2
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 12h
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x58872a40
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 34h
        ; Exact mapped bytes 7E 17: jle 0x58872a10
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58872a10
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0d00h
        ; Exact mapped bytes EB 02: jmp 0x58872a12
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, 3e8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        movzx edx, dx
        push edx
        lea edx, [ebp + 0dh]
        push edx
        lea edx, [edi + 3]
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
        ; Exact mapped bytes E8 62 B3 EE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb3
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872a42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 C7 02 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 DC A1 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 13h
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x58872adb
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 17: jle 0x58872aa8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58872aa8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x58872aaa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, 3e8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        add edi, 1cbh
        movzx edx, dx
        push edx
        lea edx, [ebp + 25h]
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
        ; Exact mapped bytes E8 C7 B2 EE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb2
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872add
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 5C A1 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 14h
        mov edi, 0cbh
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x58872b4a
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x58872b2c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58872b2c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x58872b2e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [esp + 2ch]
        lea ecx, [ebp + 0a8h]
        push ecx
        lea ecx, [ebx + 33h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B8 45 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x58872b50
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 2ch]
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 E9 A0 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 15h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58872bb4
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x58872b9a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58872b9a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x58872b9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0a8h]
        push ecx
        lea ecx, [ebx + 57h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4E 45 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58872bb6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes E8 83 A0 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa0
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 16h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x58872c1d
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x58872c00
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58872c00
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x58872c02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add ebp, 0a8h
        push ebp
        add ebx, 96h
        push ebx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E5 44 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58872c1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        mov edi, dword ptr [esi + 0e4h]
        mov dword ptr [esi + 0ech], eax
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        movzx eax, dx
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58872c4c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 04 03 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58872c59
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 87 02 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov edi, dword ptr [esi + 0e8h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 C0 64: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x64
        movzx eax, ax
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58872c7b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D5 02 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58872c88
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 58 02 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 26: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x26
        mov edi, dword ptr [esi + 0ech]
        ; Exact mapped bytes 66 83 C1 64: add cx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x64
        movzx eax, cx
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58872caa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A6 02 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58872cb7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 29 02 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        push 7ch
        ; Exact mapped bytes E8 90 9F 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 17h
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x58872ce7
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 0
        push 0
        push 64h
        push 0fah
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5D 86 FF FF: call 0x5886b340
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58872ce9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, 0bb8h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        mov dword ptr [esi + 0e0h], edi
        mov ecx, dword ptr [edi + 40h]
        movzx eax, dx
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58872d11
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3F 02 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58872d1e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C2 01 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x09
        __asm _emit 0x00
        push 50h
        ; Exact mapped bytes E8 29 9F 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 18h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x58872d49
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 59 04 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58872d4b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0f4h], eax
        xor edi, edi
        lea ebp, [esi + 0f8h]
        mov bl, 19h
        push 74h
        ; Exact mapped bytes E8 E7 9E 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], bl
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58872d9e
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, 1f4h
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx edx, cx
        mov ecx, dword ptr [esi + 0f4h]
        push edx
        push 0fffffda8h
        push 0fffffce0h
        push edi
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E4 B3 F0 FF: call 0x5877e180
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb3
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872da0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        inc edi
        add ebp, 4
        cmp edi, 5
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 7C A6: jl 0x58872d60
        __asm _emit 0x7c
        __asm _emit 0xa6
        cmp edi, 20h
        ; Exact mapped bytes 0F 8D 92 00 00 00: jge 0x58872e55
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [edi*8]
        lea eax, [edi + edi*4]
        sub edx, edi
        lea ecx, [eax*8 + 0beh]
        add edx, edx
        mov ebp, 122h
        mov eax, 20h
        sub ebp, edx
        sub eax, edi
        mov dword ptr [esp + 2ch], ecx
        lea ebx, [esi + edi*4 + 0f8h]
        mov dword ptr [esp + 30h], eax
        push 74h
        ; Exact mapped bytes E8 52 9E 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1ah
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x58872e30
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, 1f4h
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx edx, cx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        mov edx, dword ptr [esi + 0f4h]
        push ebp
        push ecx
        push edi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 52 B3 F0 FF: call 0x5877e180
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb3
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872e32
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add dword ptr [esp + 2ch], 28h
        mov dword ptr [ebx], eax
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        inc edi
        add ebx, 4
        sub ebp, 0eh
        sub dword ptr [esp + 30h], 1
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 75 A0: jne 0x58872df5
        __asm _emit 0x75
        __asm _emit 0xa0
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 89 96 86 01 00 00: mov word ptr [esi + 0x186], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes 66 89 86 88 01 00 00: mov word ptr [esi + 0x188], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 178h], al
        mov byte ptr [esi + 179h], al
        mov dword ptr [esi + 180h], ebx
        mov dword ptr [esi + 190h], ebx
        mov dword ptr [esi + 17ah], eax
        mov byte ptr [esi + 17eh], al
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0e5ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        push 20h
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 9ch], ebx
        ; Exact mapped bytes E8 93 9D 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9d
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 1bh
        cmp eax, ebx
        ; Exact mapped bytes 74 36: je 0x58872f01
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D F0 46 A2 58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 9
        ; Exact mapped bytes 7E 1B: jle 0x58872ef5
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp dword ptr [ecx + 194h], ebx
        ; Exact mapped bytes 74 13: je 0x58872ef5
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [edx + 24h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 5D 44 F4 FF: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x44
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x58872f03
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 51 44 F4 FF: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x44
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872f03
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 60h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes A3 AC AD A0 58: mov dword ptr [0x58a0adac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 9D 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9d
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 1ch
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x58872f34
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push -0ah
        push ebx
        push ebx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 DE AF F0 FF: call 0x5877df10
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xaf
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58872f36
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 7ch
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes A3 A8 AD A0 58: mov dword ptr [0x58a0ada8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 9D 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9d
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 1dh
        cmp eax, ebx
        ; Exact mapped bytes 74 1E: je 0x58872f75
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esp + 28h]
        push 2328h
        push ebx
        push ebx
        push 50h
        push 12ch
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 6F D9 04 00: call 0x588c08e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58872f77
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 194h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 2710h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58872f98
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B8 FF 08 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58872fa5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3B FF 08 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0x08
        __asm _emit 0x00
        push 7ch
        ; Exact mapped bytes E8 A2 9C 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 1eh
        cmp eax, ebx
        ; Exact mapped bytes 74 1E: je 0x58872fda
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push 0fah
        push 186h
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 4A 14 00 00: call 0x58874420
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58872fdc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0c8h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 2710h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58872ffd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 53 FF 08 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5887300a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D6 FE 08 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi + 198h], ebx
        mov dword ptr [esi + 19ch], ebx
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
