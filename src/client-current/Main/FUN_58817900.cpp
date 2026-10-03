// Complete Ghidra body ranges for the selected function.
// 4 discontiguous segments; total 6580 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58817900 .. +0x26D bytes.
extern "C" __declspec(naked) void FUN_58817900_segment_00() {
    __asm {
        push -1
        push 5898337bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
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
        lea eax, [esp + 20h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes 0F BF 44 24 3C: movsx eax, word ptr [esp + 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        mov edi, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        push 40h
        xor ebp, ebp
        push ebp
        push eax
        push edi
        push ebx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 52 B8 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb8
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebp
        push 198h
        mov dword ptr [esp + 2ch], ebp
        mov dword ptr [esi], 5899d7ach
        ; Exact mapped bytes E8 D1 52 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x52
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 1
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x5881799e
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push ebp
        push 5899d7c8h
        mov ecx, eax
        ; Exact mapped bytes E8 D4 C3 0D 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588179a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 9F 52 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x52
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 2
        cmp eax, ebp
        ; Exact mapped bytes 74 39: je 0x588179f8
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 2
        ; Exact mapped bytes 7E 1C: jle 0x588179e7
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 12: je 0x588179e7
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 8]
        push 40h
        push edi
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7B A2 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa2
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588179fa
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push edi
        xor ecx, ecx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6A A2 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa2
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588179fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 12 B3 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 2D 52 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x52
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 3
        cmp eax, ebp
        ; Exact mapped bytes 74 39: je 0x58817a6a
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 1
        ; Exact mapped bytes 7E 1C: jle 0x58817a59
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 12: je 0x58817a59
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 4]
        push 40h
        push edi
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 09 A2 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa2
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x58817a6c
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push edi
        xor ecx, ecx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F8 A1 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58817a6c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 D3 51 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 4
        cmp eax, ebp
        ; Exact mapped bytes 74 39: je 0x58817ac4
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 4
        ; Exact mapped bytes 7E 1C: jle 0x58817ab3
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 12: je 0x58817ab3
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 10h]
        push 40h
        push edi
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AF A1 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x58817ac6
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push edi
        xor ecx, ecx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9E A1 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58817ac6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 46 B2 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 61 51 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 5
        cmp eax, ebp
        ; Exact mapped bytes 74 39: je 0x58817b36
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 3
        ; Exact mapped bytes 7E 1C: jle 0x58817b25
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 12: je 0x58817b25
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 0ch]
        push 40h
        push edi
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3D A1 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x58817b38
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push edi
        xor ecx, ecx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2C A1 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58817b38
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 D4 B1 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov dword ptr [esp + 14h], 9
        lea edi, [esi + 74h]
        mov dword ptr [esp + 30h], 24h
        ; Exact mapped bytes EB 03: jmp 0x58817b70
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58817B70 .. +0xFED bytes.
extern "C" __declspec(naked) void FUN_58817900_segment_01() {
    __asm {
        push 54h
        ; Exact mapped bytes E8 D7 50 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x50
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 1ch], ebp
        mov byte ptr [esp + 28h], 6
        test ebp, ebp
        ; Exact mapped bytes 74 78: je 0x58817c01
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 60h]
        inc ecx
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 18: jle 0x58817bb1
        __asm _emit 0x7e
        __asm _emit 0x18
        test ecx, ecx
        ; Exact mapped bytes 7C 14: jl 0x58817bb1
        __asm _emit 0x7c
        __asm _emit 0x14
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58817bb1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [esp + 30h]
        mov ebx, dword ptr [ecx + eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x58817bb3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 D5 B5 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x58817c03
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebx + 10h]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [ebp + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58817c03
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 0fffffeffh
        mov ecx, ebp
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [edi + 10h], ebp
        ; Exact mapped bytes E8 09 B1 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [edi + 10h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 10h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 18 50 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x50
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 1ch], ebp
        mov byte ptr [esp + 28h], 7
        test ebp, ebp
        ; Exact mapped bytes 74 76: je 0x58817cbe
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x58817c6e
        __asm _emit 0x7e
        __asm _emit 0x17
        test ecx, ecx
        ; Exact mapped bytes 7C 13: jl 0x58817c6e
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58817c6e
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 30h]
        mov ebx, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x58817c70
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 18 B5 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x58817cc0
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebx + 10h]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [ebp + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58817cc0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 101h
        mov ecx, ebp
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [edi], ebp
        ; Exact mapped bytes E8 4D B0 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        add dword ptr [esp + 14h], 2
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esp + 30h]
        add eax, 8
        add edi, 4
        cmp eax, 44h
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 0F 8C 6B FE FF FF: jl 0x58817b70
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 74h
        ; Exact mapped bytes E8 42 4F 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 8
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x58817d6a
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 0
        ; Exact mapped bytes 7E 0E: jle 0x58817d36
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x58817d36
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x58817d38
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        add edx, 32h
        push edx
        lea edx, [ebp + 182h]
        push edx
        lea edx, [ebx + 0fah]
        push edx
        push ecx
        push esi
        push 0
        push 0f4240h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 98 6A F6 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6a
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x58817d74
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        xor eax, eax
        push 74h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 C8 4E 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x4e
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 28h], 9
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x58817ddc
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 0
        ; Exact mapped bytes 7E 0E: jle 0x58817db0
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x58817db0
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x58817db2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        add edx, 32h
        push edx
        lea edx, [ebp + 16dh]
        push edx
        lea edx, [ebx + 0fah]
        push edx
        push ecx
        push esi
        push 0
        push 0f4240h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 26 6A F6 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6a
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58817dde
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 5E 4E 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4e
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 28h], 0ah
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x58817e34
        __asm _emit 0x74
        __asm _emit 0x34
        push 1
        push 0
        push 0ffffffh
        lea ecx, [ebp + 6eh]
        push ecx
        lea edx, [ebx + 1e4h]
        push edx
        lea ecx, [ebp + 5ah]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebx + 162h]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 50 B4 F1 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58817e36
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [esi + 0d8h], edi
        mov ecx, dword ptr [edi + 40h]
        add eax, 5ah
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58817e5d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F3 B0 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58817e6a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 76 B0 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 DD 4D 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4d
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 0bh
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x58817ebb
        __asm _emit 0x74
        __asm _emit 0x3a
        push 1
        push 0
        push 0ffffffh
        lea edx, [ebp + 0b4h]
        push edx
        lea ecx, [ebx + 1e4h]
        push ecx
        lea edx, [ebp + 0a0h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 162h]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C9 B3 F1 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb3
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58817ebd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 44 24 38: mov ax, word ptr [esp + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        mov dword ptr [esi + 0dch], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58817ede
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 72 B0 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58817eeb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F5 AF 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xaf
        __asm _emit 0x0e
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 5C 4D 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4d
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 0ch
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x58817f3c
        __asm _emit 0x74
        __asm _emit 0x3a
        push 1
        push 0
        push 0ffffffh
        lea ecx, [ebp + 0fch]
        push ecx
        lea edx, [ebx + 1e4h]
        push edx
        lea ecx, [ebp + 0e8h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebx + 162h]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 48 B3 F1 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb3
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58817f3e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 54 24 38: mov dx, word ptr [esp + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        mov dword ptr [esi + 0e0h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58817f5f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F1 AF 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xaf
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58817f6c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 74 AF 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xaf
        __asm _emit 0x0e
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 DB 4C 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x4c
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 0dh
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x58817fbd
        __asm _emit 0x74
        __asm _emit 0x3a
        push 1
        push 0
        push 0ffffffh
        lea ecx, [ebp + 134h]
        push ecx
        lea edx, [ebx + 1e4h]
        push edx
        lea ecx, [ebp + 120h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebx + 162h]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C7 B2 F1 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb2
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58817fbf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 54 24 38: mov dx, word ptr [esp + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        mov dword ptr [esi + 0e4h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58817fe0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 70 AF 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xaf
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58817fed
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F3 AE 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xae
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 57 4C 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4c
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 0eh
        mov edi, 2ch
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5881804e
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
        ; Exact mapped bytes 7E 17: jle 0x58818031
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58818031
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58818033
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 17dh]
        push ecx
        lea ecx, [ebx + 20dh]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B4 F0 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58818050
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 E9 4B 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588180b7
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
        ; Exact mapped bytes 7E 17: jle 0x5881809a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5881809a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x5881809c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 17dh]
        push ecx
        lea ecx, [ebx + 23fh]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4B F0 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588180b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 80 4B 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x4b
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 10h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x58818120
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
        ; Exact mapped bytes 7E 17: jle 0x58818103
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58818103
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58818105
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 169h]
        push ecx
        lea ecx, [ebx + 20dh]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E2 EF 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58818122
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 17 4B 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4b
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 11h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x58818189
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
        ; Exact mapped bytes 7E 17: jle 0x5881816c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5881816c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x5881816e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 169h]
        push ecx
        lea ecx, [ebx + 23fh]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 79 EF 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881818b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 AE 4A 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4a
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 12h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588181f2
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
        ; Exact mapped bytes 7E 17: jle 0x588181d5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588181d5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588181d7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0feh]
        push ecx
        lea ecx, [ebx + 221h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 10 EF 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588181f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 45 4A 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4a
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 13h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5881825b
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
        ; Exact mapped bytes 7E 17: jle 0x5881823e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5881823e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58818240
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0feh]
        push ecx
        lea ecx, [ebx + 244h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A7 EE 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881825d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 DC 49 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x49
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 14h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588182c4
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
        ; Exact mapped bytes 7E 17: jle 0x588182a7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588182a7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588182a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 136h]
        push ecx
        lea ecx, [ebx + 107h]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3E EE 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588182c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 73 49 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x49
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 15h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5881832d
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
        ; Exact mapped bytes 7E 17: jle 0x58818310
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58818310
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58818312
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0feh]
        push ecx
        lea ecx, [ebx + 107h]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D5 ED 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881832f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 0A 49 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x49
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 16h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x58818396
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
        ; Exact mapped bytes 7E 17: jle 0x58818379
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58818379
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x5881837b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0feh]
        push ecx
        lea ecx, [ebx + 13bh]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6C ED 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58818398
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 A1 48 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 17h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588183fc
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
        ; Exact mapped bytes 7E 17: jle 0x588183e2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588183e2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588183e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 70h]
        push ecx
        lea ecx, [ebx + 107h]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 06 ED 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588183fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 3B 48 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x48
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 18h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58818462
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
        ; Exact mapped bytes 7E 17: jle 0x58818448
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58818448
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x5881844a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 7eh]
        push ecx
        lea ecx, [ebx + 107h]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A0 EC 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58818464
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 D5 47 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x47
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 19h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588184cb
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
        ; Exact mapped bytes 7E 17: jle 0x588184ae
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588184ae
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588184b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0b6h]
        push ecx
        lea ecx, [ebx + 107h]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 37 EC 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588184cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 6C 47 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x47
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 1ah
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x58818534
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
        ; Exact mapped bytes 7E 17: jle 0x58818517
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58818517
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58818519
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0c4h]
        push ecx
        lea ecx, [ebx + 107h]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CE EB 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58818536
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 03 47 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5881859a
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
        ; Exact mapped bytes 7E 17: jle 0x58818580
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58818580
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58818582
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 5ah]
        push ecx
        lea ecx, [ebx + 118h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 68 EB 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xeb
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881859c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 100h], eax
        ; Exact mapped bytes E8 9D 46 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x46
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58818600
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
        ; Exact mapped bytes 7E 17: jle 0x588185e6
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588185e6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588185e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 5ah]
        push ecx
        lea ecx, [ebx + 12eh]
        push ecx
        push 1
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 02 EB 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xeb
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58818602
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 104h], eax
        ; Exact mapped bytes E8 37 46 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x46
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 1dh
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x58818669
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
        ; Exact mapped bytes 7E 17: jle 0x5881864c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5881864c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x5881864e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0a0h]
        push ecx
        lea ecx, [ebx + 118h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 99 EA 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881866b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 108h], eax
        ; Exact mapped bytes E8 CE 45 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x45
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 1eh
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588186d2
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
        ; Exact mapped bytes 7E 17: jle 0x588186b5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588186b5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588186b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0a0h]
        push ecx
        lea ecx, [ebx + 12eh]
        push ecx
        push 1
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 30 EA 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588186d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 10ch], eax
        ; Exact mapped bytes E8 65 45 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x45
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 1fh
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5881873b
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
        ; Exact mapped bytes 7E 17: jle 0x5881871e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5881871e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58818720
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0e7h]
        push ecx
        lea ecx, [ebx + 115h]
        push ecx
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C7 E9 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881873d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0f8h], eax
        ; Exact mapped bytes E8 FC 44 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 20h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588187a4
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
        ; Exact mapped bytes 7E 17: jle 0x58818787
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58818787
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58818789
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 120h]
        push ecx
        add ebx, 115h
        push ebx
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5E E9 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588187a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b4h]
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0fch], eax
        ; Exact mapped bytes E8 5F A5 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 101h
        ; Exact mapped bytes E8 4F A5 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 101h
        ; Exact mapped bytes E8 3F A5 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 101h
        ; Exact mapped bytes E8 2F A5 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 101h
        ; Exact mapped bytes E8 1F A5 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 101h
        ; Exact mapped bytes E8 0F A5 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 101h
        ; Exact mapped bytes E8 FF A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 EF A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 101h
        ; Exact mapped bytes E8 DF A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 101h
        ; Exact mapped bytes E8 CF A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0cch]
        push 101h
        ; Exact mapped bytes E8 BF A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        push 101h
        ; Exact mapped bytes E8 AF A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        push 101h
        ; Exact mapped bytes E8 9F A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        push 101h
        ; Exact mapped bytes E8 8F A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104h]
        push 101h
        ; Exact mapped bytes E8 7F A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        push 101h
        ; Exact mapped bytes E8 6F A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10ch]
        push 101h
        ; Exact mapped bytes E8 5F A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f8h]
        push 101h
        ; Exact mapped bytes E8 4F A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0fch]
        push 101h
        ; Exact mapped bytes E8 3F A4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0a4h]
        mov ecx, dword ptr [edi + 40h]
        mov ebx, dword ptr [esp + 38h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588188fc
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 54 A6 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818909
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D7 A5 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0a8h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818920
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 30 A6 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5881892d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B3 A5 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 9ch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818944
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0C A6 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818951
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8F A5 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0a0h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818968
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E8 A5 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818975
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6B A5 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0bch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5881898c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C4 A5 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818999
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 47 A5 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0c0h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588189b0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A0 A5 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588189bd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 23 A5 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588189d4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7C A5 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588189e1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FF A4 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0c8h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588189f8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 58 A5 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818a05
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DB A4 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0cch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818a1c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 34 A5 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818a29
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B7 A4 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d0h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818a40
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 10 A5 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818a4d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 93 A4 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d4h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818a64
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EC A4 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818a71
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6F A4 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 100h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818a88
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C8 A4 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818a95
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4B A4 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 104h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818aac
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A4 A4 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818ab9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 27 A4 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 108h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818ad0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 80 A4 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818add
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 03 A4 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 10ch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818af4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5C A4 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818b01
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DF A3 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0f8h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818b18
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 38 A4 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818b25
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BB A3 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0fch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818b3c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 14 A4 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818b49
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 97 A3 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ebx, [esi + 124h]
        mov dword ptr [esp + 38h], ebx
        mov dword ptr [esp + 30h], 5
        ; Exact mapped bytes EB 03: jmp 0x58818b60
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58818B60 .. +0x2C9 bytes.
extern "C" __declspec(naked) void FUN_58817900_segment_02() {
    __asm {
        push 0fch
        ; Exact mapped bytes E8 E4 40 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x40
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        mov byte ptr [esp + 28h], 21h
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x58818bbb
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 17: jle 0x58818ba0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58818ba0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58818ba2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 34h]
        push ebp
        add ecx, 212h
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 47 E5 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58818bbd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [ebx - 14h], eax
        ; Exact mapped bytes E8 4F A1 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [ebx - 14h]
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [edi + 40h]
        add eax, 5ah
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818bec
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 64 A3 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818bf9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E7 A2 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 4B 40 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x40
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        mov byte ptr [esp + 28h], 22h
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x58818c54
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 17: jle 0x58818c39
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58818c39
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58818c3b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 34h]
        push ebp
        add ecx, 23ah
        push ecx
        push 8
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AE E4 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58818c56
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [ebx], eax
        ; Exact mapped bytes E8 B7 A0 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [ebx]
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [edi + 40h]
        add eax, 5ah
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818c83
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CD A2 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818c90
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 50 A2 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 B7 3F 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3f
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 1ch], edi
        mov byte ptr [esp + 28h], 23h
        test edi, edi
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58818d2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 12: jle 0x58818ccb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x58818ccb
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 240h]
        ; Exact mapped bytes EB 02: jmp 0x58818ccd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 34h]
        add eax, 5ah
        push eax
        push 0
        push 0
        push ebp
        add edx, 27bh
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B3 A4 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x58818d27
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
        mov ebx, dword ptr [esp + 38h]
        ; Exact mapped bytes EB 02: jmp 0x58818d2f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [ebx + 14h], edi
        ; Exact mapped bytes E8 DD 9F 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x9f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 14h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add ebx, 4
        sub dword ptr [esp + 30h], 1
        mov dword ptr [esp + 38h], ebx
        ; Exact mapped bytes 0F 85 FF FD FF FF: jne 0x58818b60
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ebx, [esi + 0e8h]
        mov dword ptr [esp + 38h], 4
        nop
        push 0fch
        ; Exact mapped bytes E8 D4 3E 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x3e
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 28h], 24h
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x58818dcb
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 17: jle 0x58818db0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58818db0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58818db2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 34h]
        push ebp
        add ecx, 1e0h
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 37 E3 0E 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58818dcd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [ebx], eax
        ; Exact mapped bytes E8 40 9F 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [ebx]
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [edi + 40h]
        add eax, 5ah
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818dfa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 56 A1 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58818e07
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D9 A0 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa0
        __asm _emit 0x0e
        __asm _emit 0x00
        add ebx, 4
        sub dword ptr [esp + 38h], 1
        ; Exact mapped bytes 0F 85 5B FF FF FF: jne 0x58818d70
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 34h]
        lea edi, [esi + 15ch]
        mov dword ptr [esp + 38h], 4
        ; Exact mapped bytes EB 07: jmp 0x58818e30
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58818E30 .. +0x491 bytes.
extern "C" __declspec(naked) void FUN_58817900_segment_03() {
    __asm {
        push 0ach
        ; Exact mapped bytes E8 14 3E 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x3e
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 25h
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x58818e96
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x58818e68
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58818e68
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 100h]
        ; Exact mapped bytes EB 02: jmp 0x58818e6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 3ch]
        add ecx, 32h
        push ecx
        lea ecx, [ebp + 5ah]
        push ecx
        lea ecx, [ebx + 138h]
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
        ; Exact mapped bytes E8 0C 4F F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x4f
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58818e98
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [edi - 10h], eax
        ; Exact mapped bytes E8 A4 3D 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3d
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 26h
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x58818f06
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x58818ed8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58818ed8
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x58818eda
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        add edx, 32h
        push edx
        lea edx, [ebp + 64h]
        push edx
        lea edx, [ebx + 138h]
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
        ; Exact mapped bytes E8 9C 4E F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x4e
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58818f08
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi - 10h]
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 04 9E 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x9e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 F8 9D 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9d
        __asm _emit 0x0e
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 38h], 1
        ; Exact mapped bytes 0F 85 FA FE FF FF: jne 0x58818e30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 110h]
        lea edi, [ebp + 5dh]
        push edi
        ; Exact mapped bytes E8 1B A4 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        push edi
        ; Exact mapped bytes E8 0F A4 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 124h]
        push edi
        ; Exact mapped bytes E8 03 A4 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 138h]
        lea eax, [ebp + 5bh]
        push eax
        ; Exact mapped bytes E8 F4 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp + 57h]
        push ecx
        mov ecx, dword ptr [esi + 14ch]
        ; Exact mapped bytes E8 E5 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 15ch]
        lea edx, [ebp + 61h]
        push edx
        ; Exact mapped bytes E8 D6 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        lea edi, [ebp + 0a3h]
        push edi
        ; Exact mapped bytes E8 C4 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        push edi
        ; Exact mapped bytes E8 B8 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        push edi
        ; Exact mapped bytes E8 AC A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        lea eax, [ebp + 0a1h]
        push eax
        ; Exact mapped bytes E8 9A A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp + 9dh]
        push ecx
        mov ecx, dword ptr [esi + 150h]
        ; Exact mapped bytes E8 88 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 160h]
        lea edx, [ebp + 0a7h]
        push edx
        ; Exact mapped bytes E8 76 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        lea edi, [ebp + 0eah]
        push edi
        ; Exact mapped bytes E8 64 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f0h]
        push edi
        ; Exact mapped bytes E8 58 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12ch]
        push edi
        ; Exact mapped bytes E8 4C A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 140h]
        lea eax, [ebp + 0e8h]
        push eax
        ; Exact mapped bytes E8 3A A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp + 0e5h]
        push ecx
        mov ecx, dword ptr [esi + 154h]
        ; Exact mapped bytes E8 28 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        lea edx, [ebp + 0efh]
        push edx
        ; Exact mapped bytes E8 16 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 11ch]
        lea edi, [ebp + 123h]
        push edi
        ; Exact mapped bytes E8 04 A3 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        push edi
        ; Exact mapped bytes E8 F8 A2 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 130h]
        push edi
        ; Exact mapped bytes E8 EC A2 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 144h]
        lea eax, [ebp + 121h]
        push eax
        ; Exact mapped bytes E8 DA A2 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp + 11dh]
        push ecx
        mov ecx, dword ptr [esi + 158h]
        ; Exact mapped bytes E8 C8 A2 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 168h]
        lea edx, [ebp + 127h]
        push edx
        ; Exact mapped bytes E8 B6 A2 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        lea edi, [ebp + 198h]
        push edi
        lea eax, [ebx + 107h]
        push eax
        ; Exact mapped bytes E8 CD A1 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        push edi
        lea ecx, [ebx + 230h]
        push ecx
        mov ecx, dword ptr [esi + 134h]
        ; Exact mapped bytes E8 BA A1 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 148h]
        lea edx, [ebp + 196h]
        push edx
        lea eax, [ebx + 270h]
        push eax
        ; Exact mapped bytes E8 A1 A1 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 55 3B 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x3b
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 27h
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x58819158
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x58819127
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58819127
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x58819129
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 3ch]
        lea edx, [edi + 64h]
        push edx
        lea edx, [ebp + 1b3h]
        push edx
        lea edx, [ebx + 1cch]
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
        ; Exact mapped bytes E8 4A 4C F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x4c
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5881915e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 3ch]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 16ch], eax
        ; Exact mapped bytes E8 DB 3A 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3a
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 28h], 28h
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588191ce
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x588191a1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588191a1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x588191a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 64h]
        push edx
        lea edx, [ebp + 1b3h]
        push edx
        lea edx, [ebx + 21dh]
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
        ; Exact mapped bytes E8 D4 4B F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x4b
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588191d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 16ch]
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 170h], eax
        ; Exact mapped bytes E8 35 9B 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 170h]
        push 101h
        ; Exact mapped bytes E8 25 9B 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x9b
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 49 3A 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x3a
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 28h], 29h
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5881922b
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [esi + 60h]
        lea ecx, [edi + 63h]
        push ecx
        push ebp
        push ebx
        push esi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 49 0A 00 00: call 0x58819c70
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x5881922d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov dword ptr [esi + 174h], ebx
        mov ecx, dword ptr [ebx + 40h]
        add edi, 2710h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 7B 26: mov word ptr [ebx + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7b
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5881924f
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 01 9D 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5881925c
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 84 9C 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 174h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0f0ch
        ; Exact mapped bytes E8 B9 82 15 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x82
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [esi + 198h], eax
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
        add esp, 4
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 178h], 0
        mov eax, esi
        mov ecx, dword ptr [esp + 20h]
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
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
