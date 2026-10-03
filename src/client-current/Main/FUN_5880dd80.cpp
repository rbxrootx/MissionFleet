// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 7101 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880DD80 .. +0xE3A bytes.
extern "C" __declspec(naked) void FUN_5880dd80_segment_00() {
    __asm {
        push -1
        push 58982ee1h
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
        mov dword ptr [esp + 14h], esi
        mov eax, dword ptr [esp + 44h]
        mov ecx, dword ptr [esp + 40h]
        mov edx, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 38h]
        mov ebp, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 34h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CE 53 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor edi, edi
        push 84h
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esi], 5899d5f4h
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        ; Exact mapped bytes E8 4B EE 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xee
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], 1
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5880de24
        __asm _emit 0x74
        __asm _emit 0x11
        push 40h
        push edi
        push edi
        push edi
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 6E 0A F6 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880de26
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 3fch], eax
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3fch]
        mov edx, 0dfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 FE ED 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xed
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], 2
        cmp eax, edi
        ; Exact mapped bytes 74 36: je 0x5880de96
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 2
        ; Exact mapped bytes 7E 13: jle 0x5880de82
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x5880de82
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x5880de84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CC 3D F2 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3d
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880de98
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 400h], eax
        ; Exact mapped bytes E8 A4 ED 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xed
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], 3
        cmp eax, edi
        ; Exact mapped bytes 74 36: je 0x5880def0
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 3
        ; Exact mapped bytes 7E 13: jle 0x5880dedc
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x5880dedc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x5880dede
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3f2h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 72 3D F2 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3d
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880def2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ebx, [esi + 408h]
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 404h], eax
        mov ebp, ebx
        mov dword ptr [esp + 40h], 2
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 37 ED 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xed
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 28h], 4
        test edi, edi
        ; Exact mapped bytes 74 2A: je 0x5880df53
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        push 3fch
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5C 52 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x52
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5880df55
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        add ebp, 4
        sub dword ptr [esp + 40h], 1
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 75 A9: jne 0x5880df10
        __asm _emit 0x75
        __asm _emit 0xa9
        mov ecx, dword ptr [esi + 404h]
        push 0fffffeffh
        ; Exact mapped bytes E8 A9 4D 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 404h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 404h]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 400h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 400h]
        push 0c8h
        ; Exact mapped bytes E8 2F 4D 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 404h]
        push 0c8h
        ; Exact mapped bytes E8 1F 4D 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 53 4D 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 40ch]
        push 101h
        ; Exact mapped bytes E8 43 4D 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 6A EC 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xec
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 28h], 5
        test edi, edi
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5880e07a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 32h
        ; Exact mapped bytes 7E 17: jle 0x5880e01f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5880e01f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 0c8h]
        ; Exact mapped bytes EB 02: jmp 0x5880e021
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ebx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        push 0bb8h
        push 0
        push 0
        lea ecx, [ebx + 69h]
        push ecx
        add edx, 238h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5B 51 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x51
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2E: je 0x5880e080
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 06: jmp 0x5880e080
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 38h]
        xor edi, edi
        push 54h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 410h], edi
        ; Exact mapped bytes E8 BC EB 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xeb
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 28h], 6
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x5880e122
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 28 47 A2 58: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 8ah
        ; Exact mapped bytes 7E 17: jle 0x5880e0cc
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5880e0cc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 228h]
        ; Exact mapped bytes EB 02: jmp 0x5880e0ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        push 0bb8h
        push 0
        push 0
        lea edx, [ebx + 69h]
        push edx
        add eax, 238h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B3 50 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x50
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x5880e124
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
        ; Exact mapped bytes EB 02: jmp 0x5880e124
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 414h], edi
        ; Exact mapped bytes E8 18 EB 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xeb
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 28h], 7
        test edi, edi
        ; Exact mapped bytes 74 7C: je 0x5880e1c4
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 34h
        ; Exact mapped bytes 7E 17: jle 0x5880e16d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5880e16d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 0d0h]
        ; Exact mapped bytes EB 02: jmp 0x5880e16f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        push 0bb8h
        push 0
        push 0
        lea ecx, [ebx + 69h]
        push ecx
        add edx, 238h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 11 50 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x50
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x5880e1c6
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes EB 02: jmp 0x5880e1c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 418h], edi
        ; Exact mapped bytes E8 76 EA 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 28h], 8
        test edi, edi
        ; Exact mapped bytes 74 7B: je 0x5880e265
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 28 47 A2 58: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 79h
        ; Exact mapped bytes 7E 17: jle 0x5880e20f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5880e20f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 1e4h]
        ; Exact mapped bytes EB 02: jmp 0x5880e211
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        push 0bb8h
        push 0
        push 0
        lea edx, [ebx + 69h]
        push edx
        add eax, 238h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 70 4F 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x4f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x5880e267
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
        ; Exact mapped bytes EB 02: jmp 0x5880e267
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 420h], edi
        ; Exact mapped bytes E8 D5 E9 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 28h], 9
        test edi, edi
        ; Exact mapped bytes 74 7C: je 0x5880e307
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 28 47 A2 58: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 7ah
        ; Exact mapped bytes 7E 17: jle 0x5880e2b0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5880e2b0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 1e8h]
        ; Exact mapped bytes EB 02: jmp 0x5880e2b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        push 0bb8h
        push 0
        push 0
        lea ecx, [ebx + 69h]
        push ecx
        add edx, 238h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CE 4E 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x5880e309
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes EB 02: jmp 0x5880e309
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 424h], edi
        ; Exact mapped bytes E8 33 E9 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 28h], 0ah
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x5880e3ab
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 28 47 A2 58: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0a1h
        ; Exact mapped bytes 7E 17: jle 0x5880e355
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5880e355
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 284h]
        ; Exact mapped bytes EB 02: jmp 0x5880e357
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        push 0bb8h
        push 0
        push 0
        lea edx, [ebx + 69h]
        push edx
        add eax, 238h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2A 4E 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x4e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x5880e3ad
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
        ; Exact mapped bytes EB 02: jmp 0x5880e3ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 410h]
        mov ecx, 7fffh
        mov dword ptr [esi + 41ch], edi
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 410h]
        push 0fffffeffh
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 49 49 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x49
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 410h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 414h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 418h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 420h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 424h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 41ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 2D E8 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 28h], 0bh
        test edi, edi
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x5880e4bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 98 46 A2 58: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 4
        ; Exact mapped bytes 7E 17: jle 0x5880e45c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5880e45c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 100h
        ; Exact mapped bytes EB 02: jmp 0x5880e45e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        push 44ch
        push 0
        push 0
        add ebx, 6dh
        push ebx
        add edx, 157h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 22 4D 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x5880e4b8
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        lea eax, [ebp + 20h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x5880e4be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 394h], ecx
        ; Exact mapped bytes E8 4D 48 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x48
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 394h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 394h]
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 394h]
        push 6ch
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes E8 49 E7 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe7
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov ebx, 0ch
        mov byte ptr [esp + 28h], bl
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x5880e555
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 17: jle 0x5880e53f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5880e53f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 340h
        ; Exact mapped bytes EB 02: jmp 0x5880e541
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 7d0h
        push 0
        push 0
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9D 5A F8 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880e557
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 398h], eax
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 0fh
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 7E 14: jle 0x5880e585
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x5880e585
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x5880e587
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 01 59 F8 FF: call 0x58793e90
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 14: jle 0x5880e5b0
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x5880e5b0
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 194h]
        mov eax, dword ptr [edx + 30h]
        ; Exact mapped bytes EB 02: jmp 0x5880e5b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 398h]
        push eax
        ; Exact mapped bytes E8 62 58 F8 FF: call 0x58793e20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        push 6ch
        ; Exact mapped bytes E8 89 E6 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe6
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], 0dh
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x5880e611
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 17: jle 0x5880e5fb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5880e5fb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x5880e5fd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 7cfh
        push 0
        push 0
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E1 59 F8 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880e613
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 39ch], eax
        ; Exact mapped bytes E8 F6 46 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x46
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 39ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov dword ptr [esp + 40h], 199h
        mov ebx, 664h
        mov dword ptr [esp + 3ch], 2
        mov edi, edi
        push 54h
        ; Exact mapped bytes E8 F7 E5 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe5
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 28h], 0eh
        test edi, edi
        ; Exact mapped bytes 74 7C: je 0x5880e6e5
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 98 46 A2 58: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 40h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 18: jle 0x5880e692
        __asm _emit 0x7e
        __asm _emit 0x18
        test ecx, ecx
        ; Exact mapped bytes 7C 14: jl 0x5880e692
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5880e692
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ebx + edx]
        ; Exact mapped bytes EB 02: jmp 0x5880e694
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        push 9c4h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F1 4A 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x4a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x5880e6e7
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp + 18h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5880e6e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 1
        add dword ptr [esp + 40h], eax
        mov dword ptr [esi + ebx - 2c4h], edi
        add ebx, 4
        sub dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 0F 85 47 FF FF FF: jne 0x5880e650
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3a0h]
        push 0fffffeffh
        ; Exact mapped bytes E8 07 46 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x46
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3a4h]
        push 101h
        ; Exact mapped bytes E8 F7 45 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x45
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 398h]
        mov ecx, 0dfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 39ch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 160h
        ; Exact mapped bytes E8 00 E5 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe5
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov ebp, dword ptr [esp + 34h]
        mov byte ptr [esp + 28h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5880e782
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [esp + 38h]
        push 0bb8h
        add ecx, 64h
        push ecx
        lea edx, [ebp + 0a0h]
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 32 21 06 00: call 0x588708b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5880e784
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 3b4h], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 2af8h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880e7a5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AB 47 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x47
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880e7b2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2E 47 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x47
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 92 E4 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], 10h
        mov ebx, 11h
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x5880e828
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5880e7f6
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5880e7f6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 440h
        ; Exact mapped bytes EB 02: jmp 0x5880e7f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 38h]
        push 44ch
        lea ecx, [edi + 1dah]
        push ecx
        lea ecx, [ebp + 235h]
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
        ; Exact mapped bytes E8 7A F5 F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf5
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5880e82e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 38h]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 428h], eax
        ; Exact mapped bytes E8 0B E4 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe4
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], bl
        mov ebx, 12h
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x5880e8aa
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5880e87c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5880e87c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 480h
        ; Exact mapped bytes EB 02: jmp 0x5880e87e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 44ch
        lea edx, [edi + 147h]
        push edx
        lea edx, [ebp + 2a3h]
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
        ; Exact mapped bytes E8 F8 F4 F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf4
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880e8ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 42ch], eax
        ; Exact mapped bytes E8 8D E3 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], bl
        mov ebx, 13h
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x5880e928
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5880e8fa
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5880e8fa
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 4c0h
        ; Exact mapped bytes EB 02: jmp 0x5880e8fc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 44ch
        lea edx, [edi + 1efh]
        push edx
        lea edx, [ebp + 2a3h]
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
        ; Exact mapped bytes E8 7A F4 F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf4
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880e92a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 428h]
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 430h], eax
        ; Exact mapped bytes E8 DB 43 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 428h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 42ch]
        push 101h
        ; Exact mapped bytes E8 BC 43 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 42ch]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 430h]
        push 101h
        ; Exact mapped bytes E8 9D 43 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 430h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 B2 E2 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe2
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], bl
        mov ebx, 14h
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x5880ea00
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5880e9d5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5880e9d5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 500h
        ; Exact mapped bytes EB 02: jmp 0x5880e9d7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 803h
        lea edx, [edi + 3ch]
        push edx
        lea edx, [ebp + 1ebh]
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
        ; Exact mapped bytes E8 A2 F3 F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf3
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880ea02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 3ach], eax
        ; Exact mapped bytes E8 37 E2 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe2
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], bl
        mov ebx, 15h
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x5880ea7b
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5880ea50
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5880ea50
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 540h
        ; Exact mapped bytes EB 02: jmp 0x5880ea52
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 803h
        lea edx, [edi + 3ch]
        push edx
        lea edx, [ebp + 235h]
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
        ; Exact mapped bytes E8 27 F3 F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf3
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880ea7d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 3a8h], eax
        ; Exact mapped bytes E8 BC E1 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe1
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], bl
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x5880eaec
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 9C 46 A2 58: mov ecx, dword ptr [0x58a2469c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x5880eac1
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x5880eac1
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5880eac3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 803h
        add edi, 3ch
        push edi
        lea edx, [ebp + 27fh]
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
        ; Exact mapped bytes E8 B6 F2 F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf2
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880eaee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3ach]
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 3b0h], eax
        ; Exact mapped bytes E8 17 42 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3a8h]
        push 101h
        ; Exact mapped bytes E8 07 42 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3b0h]
        push 101h
        ; Exact mapped bytes E8 F7 41 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x41
        __asm _emit 0x0f
        __asm _emit 0x00
        lea edi, [esi + 2d4h]
        add ebp, 1c2h
        mov ebx, 8
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 04 E1 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe1
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], 16h
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5880eb82
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [esp + 38h]
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 7d0h
        add ecx, 73h
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push 0
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 20 F2 F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880eb84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 0a0h], eax
        mov dword ptr [edi], 0
        add ebp, 19h
        add edi, 4
        sub ebx, 1
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 75 A0: jne 0x5880eb40
        __asm _emit 0x75
        __asm _emit 0xa0
        xor eax, eax
        lea edi, [esi + 0d4h]
        mov ecx, 80h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea ebp, [esi + 2f4h]
        lea ebx, [eax + 20h]
        ; Exact mapped bytes EB 06: jmp 0x5880ebc0
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880EBC0 .. +0xD83 bytes.
extern "C" __declspec(naked) void FUN_5880dd80_segment_01() {
    __asm {
        push 3a0h
        ; Exact mapped bytes E8 84 E0 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 28h], 17h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x5880ebf7
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 7d0h
        add edx, 75h
        push edx
        add ecx, 6eh
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5B 8E 0B 00: call 0x588c7a50
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5880ebf9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov edi, dword ptr [ebp]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 7d0h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880ec23
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2D 43 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880ec30
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B0 42 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        add ebp, 4
        sub ebx, 1
        ; Exact mapped bytes 75 88: jne 0x5880ebc0
        __asm _emit 0x75
        __asm _emit 0x88
        mov dword ptr [esp + 40h], ebx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov edi, dword ptr [esp + 40h]
        mov edx, dword ptr [esp + 34h]
        mov ebp, edi
        shr ebp, 2
        mov ecx, ebp
        imul ecx, ecx, 150h
        and edi, 3
        lea ebx, [ecx + edx + 94h]
        mov ecx, dword ptr [esp + 38h]
        lea eax, [edi*8]
        sub eax, edi
        lea edx, [ecx + eax*2 + 97h]
        push 0fch
        mov dword ptr [esp + 20h], edx
        ; Exact mapped bytes E8 CD DF 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xdf
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 28h], 18h
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x5880ecce
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 94 46 A2 58: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 17: jle 0x5880ecb7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5880ecb7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x5880ecb9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 1ch]
        push edx
        push ebx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 36 84 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x5880ecd0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        lea eax, [edi + ebp*4]
        mov ecx, 0bb8h
        mov dword ptr [esi + eax*4 + 3b8h], ebx
        ; Exact mapped bytes 66 89 4B 26: mov word ptr [ebx + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x26
        mov ecx, dword ptr [ebx + 40h]
        mov byte ptr [esp + 28h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880ecf5
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 5B 42 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880ed02
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 DE 41 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x41
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 40h]
        inc eax
        cmp eax, 8
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 0F 8C 2C FF FF FF: jl 0x5880ec40
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 40h], 0
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov edi, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 34h]
        mov ebp, edi
        shr ebp, 2
        mov edx, ebp
        imul edx, edx, 0cfh
        and edi, 3
        lea ebx, [edx + eax + 119h]
        mov edx, dword ptr [esp + 38h]
        lea ecx, [edi*8]
        sub ecx, edi
        lea eax, [edx + ecx*2 + 0cbh]
        push 74h
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes E8 F0 DE 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xde
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 28h], 19h
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x5880edb5
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 36h
        ; Exact mapped bytes 7E 17: jle 0x5880ed94
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5880ed94
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes EB 02: jmp 0x5880ed96
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 1ch]
        push 0bb8h
        push edx
        push ebx
        push ecx
        push esi
        push 0
        push 80h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 4D FA F6 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880edb7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [edi + ebp*4]
        lea edi, [esi + ecx*4 + 3d8h]
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 4C 3F 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ebx, dword ptr [edi]
        mov ecx, dword ptr [ebx + 40h]
        mov eax, 0bb8h
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880edf7
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 59 41 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x41
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880ee04
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 DC 40 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x40
        __asm _emit 0x0f
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 74 07: je 0x5880ee0f
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 31 F7 F6 FF: call 0x5877e540
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf7
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [esp + 40h]
        inc eax
        cmp eax, 8
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 0F 8C FF FE FF FF: jl 0x5880ed20
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 26 DE 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xde
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        xor ecx, ecx
        mov byte ptr [esp + 28h], 1ah
        cmp edi, ecx
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x5880eecc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 98 46 A2 58: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 37h
        ; Exact mapped bytes 7E 1A: jle 0x5880ee68
        __asm _emit 0x7e
        __asm _emit 0x1a
        cmp dword ptr [eax + 18ch], ecx
        ; Exact mapped bytes 74 12: je 0x5880ee68
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes EB 04: jmp 0x5880ee6c
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 40h], ecx
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        push 0bb8h
        push ecx
        push ecx
        lea ecx, [ebp + 0a5h]
        push ecx
        lea edx, [ebx + 13bh]
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0F 43 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 40h]
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5880eec8
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        mov ecx, edi
        ; Exact mapped bytes EB 08: jmp 0x5880eed4
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 3f8h], ecx
        ; Exact mapped bytes E8 37 3E 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        xor edi, edi
        mov ecx, esi
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 9B A8 FF FF: call 0x58809790
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        push 70h
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov dword ptr [esi + 60h], edi
        mov dword ptr [esi + 8d8h], edi
        mov dword ptr [esi + 8dch], edi
        mov dword ptr [esi + 8e0h], edi
        mov dword ptr [esi + 8e4h], edi
        mov dword ptr [esi + 8e8h], edi
        mov dword ptr [esi + 8ech], edi
        mov dword ptr [esi + 8f0h], edi
        ; Exact mapped bytes E8 04 DD 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xdd
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 1bh
        cmp eax, edi
        ; Exact mapped bytes 74 33: je 0x5880ef8d
        __asm _emit 0x74
        __asm _emit 0x33
        push 282828h
        push edi
        push 0ffffffh
        lea ecx, [ebp + 6ah]
        push ecx
        lea edx, [ebx + 17ch]
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
        lea edx, [ebx + 0b4h]
        push edx
        push ecx
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F5 42 F2 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x42
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880ef8f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 8f4h], eax
        ; Exact mapped bytes E8 AD DC 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xdc
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 1ch
        cmp eax, edi
        ; Exact mapped bytes 74 33: je 0x5880efe4
        __asm _emit 0x74
        __asm _emit 0x33
        push 282828h
        push edi
        push 0ffffffh
        lea edx, [ebp + 7ah]
        push edx
        lea ecx, [ebx + 17ch]
        push ecx
        lea edx, [ebp + 6ah]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 0b4h]
        push ecx
        push edx
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9E 42 F2 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x42
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880efe6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 8f8h], eax
        ; Exact mapped bytes E8 56 DC 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xdc
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 1dh
        cmp eax, edi
        ; Exact mapped bytes 74 36: je 0x5880f03e
        __asm _emit 0x74
        __asm _emit 0x36
        push 282828h
        push edi
        push 0ffffffh
        lea ecx, [ebp + 88h]
        push ecx
        lea edx, [ebx + 17ch]
        push edx
        lea ecx, [ebp + 7ah]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebx + 0b4h]
        push edx
        push ecx
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 44 42 F2 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880f040
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 8fch], eax
        ; Exact mapped bytes E8 FC DB 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xdb
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 1eh
        cmp eax, edi
        ; Exact mapped bytes 74 39: je 0x5880f09b
        __asm _emit 0x74
        __asm _emit 0x39
        push 282828h
        push edi
        push 0ffffffh
        lea edx, [ebp + 98h]
        push edx
        lea ecx, [ebx + 17ch]
        push ecx
        lea edx, [ebp + 88h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 0b4h]
        push ecx
        push edx
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E7 41 F2 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x41
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880f09d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 8f4h]
        mov dword ptr [esi + 900h], eax
        mov ecx, dword ptr [edi + 40h]
        mov eax, 1388h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f0c4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8C 3E 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f0d1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0F 3E 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 8f8h]
        mov ecx, 1388h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f0ed
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 63 3E 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f0fa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E6 3D 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 8fch]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 1388h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f116
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3A 3E 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f123
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BD 3D 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 900h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 1388h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f13f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 11 3E 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f14c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 94 3D 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8f4h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8f8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8fch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 900h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 70h
        ; Exact mapped bytes E8 CC DA 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xda
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 1fh
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5880f1c7
        __asm _emit 0x74
        __asm _emit 0x35
        push 282828h
        push 0
        push 30e030h
        lea ecx, [ebp + 78h]
        push ecx
        lea edx, [ebx + 210h]
        push edx
        lea ecx, [ebp + 6dh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebx + 1a3h]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BB 40 F2 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x40
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880f1c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 904h], eax
        ; Exact mapped bytes E8 73 DA 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xda
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 20h
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x5880f226
        __asm _emit 0x74
        __asm _emit 0x3b
        push 282828h
        push 0
        push 6effffh
        lea edx, [ebp + 8bh]
        push edx
        lea ecx, [ebx + 210h]
        push ecx
        lea edx, [ebp + 80h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 1a3h]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5C 40 F2 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x40
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880f228
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 904h]
        mov dword ptr [esi + 908h], eax
        mov ecx, dword ptr [edi + 40h]
        mov eax, 1388h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f24f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 01 3D 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f25c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 84 3C 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 908h]
        mov ecx, 1388h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f278
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D8 3C 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f285
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5B 3C 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 904h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 908h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 1f8h
        ; Exact mapped bytes E8 A4 D9 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd9
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 21h
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5880f2da
        __asm _emit 0x74
        __asm _emit 0x20
        push 40h
        push 0
        push 2af8h
        lea edx, [ebp + 64h]
        push edx
        lea ecx, [ebx + 0a0h]
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5A 0A 04 00: call 0x5884fd30
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5880f2dc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 8ach], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 2af8h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f2fd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 53 3C 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f30a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D6 3B 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x3b
        __asm _emit 0x0f
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 3D D9 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd9
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 28h], 22h
        test edi, edi
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5880f3aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 46 A2 58: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 16h
        ; Exact mapped bytes 7E 18: jle 0x5880f34d
        __asm _emit 0x7e
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x5880f34d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [esp + 34h], ecx
        ; Exact mapped bytes EB 08: jmp 0x5880f355
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 34h], 0
        push 0c80h
        push 0
        push 0
        lea edx, [ebp + 4bh]
        push edx
        lea eax, [ebx + 0a0h]
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2F 3E 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x5880f3ac
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5880f3ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + 8b0h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 87 D8 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd8
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 28h], 23h
        test edi, edi
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5880f460
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 46 A2 58: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 17h
        ; Exact mapped bytes 7E 18: jle 0x5880f403
        __asm _emit 0x7e
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x5880f403
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes EB 08: jmp 0x5880f40b
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 34h], 0
        push 0bb8h
        push 0
        push 0
        lea eax, [ebp + 55h]
        push eax
        lea ecx, [ebx + 226h]
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 79 3D 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x5880f462
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [edi + 0ch], edx
        mov ecx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x5880f462
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 8b4h], edi
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 410h]
        lea edi, [ebp + 76h]
        push edi
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 DB 3E 0F 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 414h]
        push edi
        lea edx, [ebx + 226h]
        push edx
        ; Exact mapped bytes E8 F8 3D 0F 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 418h]
        push edi
        ; Exact mapped bytes E8 BC 3E 0F 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 420h]
        push edi
        ; Exact mapped bytes E8 B0 3E 0F 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 424h]
        push edi
        ; Exact mapped bytes E8 A4 3E 0F 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 41ch]
        push edi
        ; Exact mapped bytes E8 98 3E 0F 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        lea eax, [esi + 8b8h]
        mov dword ptr [esp + 38h], eax
        lea eax, [ebx + 14h]
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 40h], 3
        push 54h
        ; Exact mapped bytes E8 66 D7 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd7
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 28h], 24h
        test edi, edi
        ; Exact mapped bytes 74 29: je 0x5880f523
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [esp + 34h]
        push 0c80h
        push 0
        push 0
        lea ecx, [ebp - 78h]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8C 3C 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5880f525
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        add dword ptr [esp + 34h], 5ah
        mov dword ptr [eax], edi
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        add eax, 4
        sub dword ptr [esp + 40h], 1
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 75 95: jne 0x5880f4e1
        __asm _emit 0x75
        __asm _emit 0x95
        push 54h
        ; Exact mapped bytes E8 FB D6 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd6
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 28h], 25h
        test edi, edi
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5880f5e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 46 A2 58: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1eh
        ; Exact mapped bytes 7E 18: jle 0x5880f58f
        __asm _emit 0x7e
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x5880f58f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes EB 08: jmp 0x5880f597
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 34h], 0
        push 0c80h
        push 0
        push 0
        lea ecx, [ebp - 50h]
        push ecx
        lea eax, [ebx + 14h]
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F0 3B 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x3b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x5880f5eb
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [edi + 0ch], edx
        mov ecx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x5880f5eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 0fffeh
        mov dword ptr [esi + 8c4h], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 48 D6 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd6
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 26h
        test edi, edi
        ; Exact mapped bytes 74 2B: je 0x5880f643
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0c80h
        push 0
        push 0
        lea edx, [ebp - 50h]
        push edx
        lea eax, [ebx + 0c6h]
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6C 3B 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x3b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5880f645
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 0fffeh
        mov dword ptr [esi + 8c8h], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        push 0a0h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 EB D5 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd5
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 27h
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x5880f6c2
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D D4 46 A2 58: mov ecx, dword ptr [0x58a246d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 14: jle 0x5880f696
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x5880f696
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 190h]
        add edx, 40h
        ; Exact mapped bytes EB 02: jmp 0x5880f698
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 44h]
        push 64h
        push 1
        lea ecx, [edi + 4a38h]
        push ecx
        lea ecx, [ebp + 0ebh]
        push ecx
        lea ecx, [ebx + 17ch]
        push ecx
        push edx
        push esi
        push 8
        mov ecx, eax
        ; Exact mapped bytes E8 00 E3 F5 FF: call 0x5876d9c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5880f6c8
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 44h]
        xor eax, eax
        mov dword ptr [esi + 8cch], eax
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 8cch]
        push 80h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 34 36 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x36
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0a4h
        ; Exact mapped bytes E8 58 D5 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd5
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 28h
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x5880f75f
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D D4 46 A2 58: mov ecx, dword ptr [0x58a246d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 48h
        ; Exact mapped bytes 7E 17: jle 0x5880f72c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5880f72c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 120h]
        ; Exact mapped bytes EB 02: jmp 0x5880f72e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8cch]
        push 0
        push edx
        push 64h
        push 64h
        push 1
        lea edx, [edi + 4a9ch]
        push edx
        lea edx, [ebp + 30ch]
        push edx
        lea edx, [ebx + 0d2h]
        push edx
        push ecx
        push esi
        push 8
        mov ecx, eax
        ; Exact mapped bytes E8 93 E6 F5 FF: call 0x5876ddf0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe6
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880f761
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 8d0h], eax
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 8d0h]
        push 101h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 9B 35 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x35
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0a4h
        ; Exact mapped bytes E8 BF D4 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd4
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 29h
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x5880f7f8
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D D4 46 A2 58: mov ecx, dword ptr [0x58a246d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 49h
        ; Exact mapped bytes 7E 17: jle 0x5880f7c5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5880f7c5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 124h]
        ; Exact mapped bytes EB 02: jmp 0x5880f7c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8cch]
        push 0
        push edx
        push 64h
        push 64h
        push 1
        lea edx, [edi + 4a38h]
        push edx
        lea edx, [ebp + 30ch]
        push edx
        lea edx, [ebx + 0d2h]
        push edx
        push ecx
        push esi
        push 8
        mov ecx, eax
        ; Exact mapped bytes E8 FA E5 F5 FF: call 0x5876ddf0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe5
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880f7fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 8d4h], eax
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 8d4h]
        push 0fffffeffh
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 02 35 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x35
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8d4h]
        push 70h
        mov dword ptr [eax + 78h], 0fffffeffh
        ; Exact mapped bytes E8 1C D4 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd4
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 2ah
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5880f877
        __asm _emit 0x74
        __asm _emit 0x35
        push 282828h
        push 0
        push 30ffffh
        lea edx, [ebp + 39h]
        push edx
        lea ecx, [ebx + 3e8h]
        push ecx
        lea edx, [ebp + 25h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 0efh]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0B 3A F2 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x3a
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880f879
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 434h], eax
        ; Exact mapped bytes E8 C3 D3 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd3
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 28h], 2bh
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5880f8d0
        __asm _emit 0x74
        __asm _emit 0x35
        push 282828h
        push 0
        push 30ffffh
        lea ecx, [ebp + 4dh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebx + 3e8h]
        push edx
        add ebp, 39h
        push ebp
        add ebx, 0efh
        push ebx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B2 39 F2 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x39
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880f8d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ebx, dword ptr [esi + 434h]
        mov dword ptr [esi + 438h], eax
        mov ecx, dword ptr [ebx + 40h]
        lea ebp, [edi + 4b00h]
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 6B 26: mov word ptr [ebx + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6b
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f8fa
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 56 36 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x36
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f907
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 D9 35 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x35
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 438h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f91e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 32 36 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x36
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5880f92b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B5 35 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x35
        __asm _emit 0x0f
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
