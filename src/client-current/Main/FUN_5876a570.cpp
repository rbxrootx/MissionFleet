// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 4160 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876A570 .. +0x1040 bytes.
extern "C" __declspec(naked) void FUN_5876a570_segment_00() {
    __asm {
        push -1
        push 5897ee46h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0b5ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 0b58h], eax
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
        lea eax, [esp + 0b70h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 0b84h]
        mov esi, ecx
        mov ecx, dword ptr [esi + 64h]
        push 5898d61ch
        ; Exact mapped bytes E8 9F 4D FF FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        push 5898d61ch
        ; Exact mapped bytes E8 92 4D FF FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        push 5898d61ch
        ; Exact mapped bytes E8 85 4D FF FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        push 0e8h
        xor ebx, ebx
        push 0fbh
        mov ecx, esi
        mov dword ptr [esi + 0a4h], ebx
        ; Exact mapped bytes E8 6C 84 FF FF: call 0x58762a60
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        push 3
        mov ecx, esi
        ; Exact mapped bytes E8 62 85 FF FF: call 0x58762b60
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, 1
        push ebp
        push 4
        mov ecx, esi
        ; Exact mapped bytes E8 53 85 FF FF: call 0x58762b60
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 94h]
        push ebp
        mov dword ptr [eax + 54h], ebx
        mov ecx, dword ptr [esi + 94h]
        push ebx
        ; Exact mapped bytes E8 FD 36 FF FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 94h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 0b80h]
        cmp eax, 12ch
        mov dword ptr [esi + 78h], ebp
        ; Exact mapped bytes 0F 8F 57 03 00 00: jg 0x5876a99e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 08 03 00 00: je 0x5876a955
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0c8h
        ; Exact mapped bytes 0F 87 25 0F 00 00: ja 0x5876b57d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 5876b5ech]
        ; Exact mapped bytes FF 24 95 B0 B5 76 58: jmp dword ptr [edx*4 + 0x5876b5b0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xb5
        __asm _emit 0x76
        __asm _emit 0x58
        push 58995ad4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 74 9F FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], ebp
        ; Exact mapped bytes E9 F9 0E 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 106h
        push 0fbh
        mov ecx, esi
        ; Exact mapped bytes E8 CB 83 FF FF: call 0x58762a60
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        push 58995ab0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 45 9F FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0b0h], ebp
        mov dword ptr [esi + 7ch], 2
        ; Exact mapped bytes E9 C0 0E 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 58995a8ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1D 9F FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3
        ; Exact mapped bytes E9 9E 0E 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 58995a60h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FB 9E FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 4
        ; Exact mapped bytes E9 7C 0E 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 58995a38h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D9 9E FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 5
        ; Exact mapped bytes E9 5A 0E 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 58995a10h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B7 9E FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 6
        ; Exact mapped bytes E9 38 0E 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 106h
        push 0fbh
        mov ecx, esi
        ; Exact mapped bytes E8 0A 83 FF FF: call 0x58762a60
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        push 589959e8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 84 9E FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 7
        ; Exact mapped bytes E9 05 0E 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 589959bch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 62 9E FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 8
        ; Exact mapped bytes E9 E3 0D 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899598ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 40 9E FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 9
        ; Exact mapped bytes E9 C1 0D 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 2C 9E FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        push 58995a10h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 46 84 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 0ah
        ; Exact mapped bytes E9 97 0D 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 58995ad4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F4 9D FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 0bh
        ; Exact mapped bytes E9 75 0D 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0b88h]
        inc eax
        push eax
        push edi
        lea ecx, [esp + 0f4h]
        push ecx
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995964h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        lea edx, [esp + 0f4h]
        push edx
        mov eax, edx
        push 5899595ch
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 14h
        lea ecx, [esp + 0ech]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 9A 9D FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899593ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B8 83 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 64h
        ; Exact mapped bytes E9 09 0D 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 58995914h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 66 9D FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 79h
        ; Exact mapped bytes E9 E7 0C 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push 2
        mov ecx, esi
        ; Exact mapped bytes E8 C0 82 FF FF: call 0x58762b60
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        push ebp
        push 9
        mov ecx, esi
        ; Exact mapped bytes E8 B6 82 FF FF: call 0x58762b60
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 94h]
        push ebp
        mov dword ptr [edx + 54h], ebx
        mov ecx, dword ptr [esi + 94h]
        push ebx
        ; Exact mapped bytes E8 60 34 FF FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 589937e0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 09 9D FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 98 45 A2 58: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0db4h]
        mov eax, dword ptr [eax + 0c4h]
        mov ecx, dword ptr [eax + 2c8h]
        mov eax, dword ptr [eax + 2cch]
        push ecx
        push eax
        push 589937b8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 478h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        lea edx, [esp + 46ch]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 EE 82 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 19bh
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db4h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes E9 28 0C 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 589958ech
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 674h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 66ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 6B 9C FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 0b8ch]
        mov dword ptr [esi + 7ch], 12ch
        mov dword ptr [esi + 98h], edx
        ; Exact mapped bytes E9 DF 0B 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 258h
        ; Exact mapped bytes 0F 8F A8 07 00 00: jg 0x5876b151
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 52 07 00 00: je 0x5876b101
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffffed3h
        cmp eax, 0c7h
        ; Exact mapped bytes 0F 87 BE 0B 00 00: ja 0x5876b57d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbe
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 5876b720h]
        ; Exact mapped bytes FF 24 85 B8 B6 76 58: jmp dword ptr [eax*4 + 0x5876b6b8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0xb6
        __asm _emit 0x76
        __asm _emit 0x58
        push 589958c0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0D 9C FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 12dh
        ; Exact mapped bytes E9 8E 0B 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 5899589ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 374h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 36ch]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 D1 9B FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 12eh
        ; Exact mapped bytes E9 52 0B 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58995874h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 AF 9B FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 12fh
        ; Exact mapped bytes E9 30 0B 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58995848h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8D 9B FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 130h
        ; Exact mapped bytes E9 0E 0B 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995810h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 69 9B FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        push 589957d8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 87 81 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 131h
        ; Exact mapped bytes E9 D8 0A 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589957a4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 33 9B FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        push 58995770h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 51 81 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 132h
        ; Exact mapped bytes E9 A2 0A 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 0b88h], 3e8h
        ; Exact mapped bytes 75 48: jne 0x5876ab30
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995734h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F0 9A FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        push 589956f8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0E 81 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        push 589956bch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 AC 81 FF FF: call 0x58762cd0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 133h
        ; Exact mapped bytes E9 4D 0A 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        lea eax, [esp + 170h]
        push ebx
        push eax
        ; Exact mapped bytes E8 05 21 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x21
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995680h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 174h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 16ch]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 78 9A FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        push 58995644h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 96 80 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 133h
        ; Exact mapped bytes E9 E7 09 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995618h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 42 9A FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        push 589955ech
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 60 80 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 136h
        ; Exact mapped bytes E9 B1 09 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 589955c0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0E 9A FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 137h
        ; Exact mapped bytes E9 8F 09 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 58995590h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 EC 99 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 138h
        ; Exact mapped bytes E9 6D 09 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995568h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C8 99 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 58995540h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea eax, [esp + 874h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 86ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 CC 7F FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 139h
        ; Exact mapped bytes E9 1D 09 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995510h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 1f4h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 1ech]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5E 99 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        push 589954e0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 7C 7F FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 13ah
        ; Exact mapped bytes E9 CD 08 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589954b0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 774h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 76ch]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 0E 99 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        push 58995480h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2C 7F FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 13bh
        ; Exact mapped bytes E9 7D 08 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995450h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 574h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 56ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 BE 98 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        push 58995420h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DC 7E FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 13ch
        ; Exact mapped bytes E9 2D 08 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589953f0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 8f4h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 8ech]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6E 98 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        push 589953c0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8C 7E FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 13dh
        ; Exact mapped bytes E9 DD 07 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 58995390h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 274h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 26ch]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 20 98 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 13eh
        ; Exact mapped bytes E9 A1 07 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 58995360h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 2f4h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 2ech]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 E4 97 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 13fh
        ; Exact mapped bytes E9 65 07 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 58995330h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 3f4h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 3ech]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A8 97 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 140h
        ; Exact mapped bytes E9 29 07 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 58995300h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 4f4h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 4ech]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 6C 97 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 141h
        ; Exact mapped bytes E9 ED 06 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        lea eax, [esp + 970h]
        push ebx
        push eax
        ; Exact mapped bytes E8 A5 1D 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1d
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589952d4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 974h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push 589952a8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 10h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 18 97 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [esp + 96ch]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 39 7D FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 142h
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 79 06 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        lea edx, [esp + 0a70h]
        push ebx
        push edx
        ; Exact mapped bytes E8 31 1D 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1d
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899527ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 0a74h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995250h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 10h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A4 96 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 0a6ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 C5 7C FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 143h
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 04 06 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 58995224h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 61 96 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 144h
        ; Exact mapped bytes E9 E2 05 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0b8ch]
        push 80h
        mov dword ptr [esi + 98h], ecx
        ; Exact mapped bytes E8 7C 65 20 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [esi + 9ch], eax
        mov edx, dword ptr [edi]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [edi + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [edi + 0ch]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [edi + 10h]
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [edi + 14h]
        mov dword ptr [eax + 14h], ecx
        mov edx, dword ptr [edi + 1eh]
        mov ecx, dword ptr [edi + 26h]
        mov eax, dword ptr [edi + 22h]
        mov dword ptr [esp + 5ch], edx
        mov edx, dword ptr [edi + 2ah]
        add esp, 4
        mov dword ptr [esp + 60h], ecx
        lea ecx, [esp + 58h]
        mov dword ptr [esp + 64h], edx
        mov edx, dword ptr [esi + 9ch]
        push ecx
        mov dword ptr [esp + 60h], eax
        mov eax, dword ptr [edi + 2eh]
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push edx
        push 58995204h
        mov dword ptr [esp + 74h], eax
        mov dword ptr [esi + 0a0h], ebp
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 5f8h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        lea ecx, [esp + 5ech]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 AD 95 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        push 589951e4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CB 7B FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 15eh
        ; Exact mapped bytes E9 1C 05 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589951bch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 6f4h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 6ech]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5D 95 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        push 58995194h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 7B 7B FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0b8ch]
        mov dword ptr [esi + 98h], ecx
        mov dword ptr [esi + 7ch], 190h
        ; Exact mapped bytes E9 BF 04 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995164h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1A 95 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        push 58995134h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 38 7B FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 0b8ch]
        mov dword ptr [esi + 98h], edx
        mov dword ptr [esi + 7ch], 1f4h
        ; Exact mapped bytes E9 7C 04 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899510ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 7f4h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 7ech]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 BD 94 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        push 589950e4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DB 7A FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 258h
        ; Exact mapped bytes E9 2C 04 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4a4h
        ; Exact mapped bytes 0F 8F F5 00 00 00: jg 0x5876b251
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x5876b21b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 259h
        ; Exact mapped bytes 74 7C: je 0x5876b1e5
        __asm _emit 0x74
        __asm _emit 0x7c
        sub eax, 63h
        ; Exact mapped bytes 74 41: je 0x5876b1af
        __asm _emit 0x74
        __asm _emit 0x41
        sub eax, 1e7h
        ; Exact mapped bytes 0F 85 04 04 00 00: jne 0x5876b57d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589950bch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5F 94 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        push 58995094h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 7D 7A FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 4a3h
        ; Exact mapped bytes E9 CE 03 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995068h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 29 94 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899503ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 47 7A FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 2bch
        ; Exact mapped bytes E9 98 03 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58995018h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F3 93 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994ff4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 11 7A FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 259h
        ; Exact mapped bytes E9 62 03 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994fd0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BD 93 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994fach
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DB 79 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 4a4h
        ; Exact mapped bytes E9 2C 03 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 4a5h
        ; Exact mapped bytes 0F 84 61 02 00 00: je 0x5876b4bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0bh
        ; Exact mapped bytes 0F 84 9B 01 00 00: je 0x5876b400
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0cbh
        ; Exact mapped bytes 0F 85 0D 03 00 00: jne 0x5876b57d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 74h]
        lea edx, [esp + 14h]
        push edx
        push eax
        ; Exact mapped bytes E8 1C 01 11 00: call 0x5887b3a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x5876b339
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 74h]
        movzx eax, word ptr [edx + 2]
        sub eax, 0ddh
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x5876b32f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ebp
        ; Exact mapped bytes 74 45: je 0x5876b2f2
        __asm _emit 0x74
        __asm _emit 0x45
        sub eax, ebp
        ; Exact mapped bytes 0F 85 1D 01 00 00: jne 0x5876b3d2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esp + 16h]
        sub eax, ebp
        ; Exact mapped bytes 74 25: je 0x5876b2e3
        __asm _emit 0x74
        __asm _emit 0x25
        sub eax, ebp
        ; Exact mapped bytes 74 12: je 0x5876b2d4
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, ebp
        ; Exact mapped bytes 0F 85 08 01 00 00: jne 0x5876b3d2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994f88h
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x5876b3c4
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994f68h
        lea ecx, [esp + 70h]
        push ecx
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x5876b3c9
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994f48h
        lea edx, [esp + 70h]
        push edx
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x5876b3c9
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esp + 16h]
        sub eax, ebp
        ; Exact mapped bytes 74 25: je 0x5876b320
        __asm _emit 0x74
        __asm _emit 0x25
        sub eax, ebp
        ; Exact mapped bytes 74 12: je 0x5876b311
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, ebp
        ; Exact mapped bytes 0F 85 CB 00 00 00: jne 0x5876b3d2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994f20h
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x5876b3c4
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994ef8h
        lea ecx, [esp + 70h]
        push ecx
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x5876b3c9
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994ed4h
        lea edx, [esp + 70h]
        push edx
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5876b3c9
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994ec0h
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x5876b3c4
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x5876b3d2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 74h]
        movzx eax, word ptr [edx + 2]
        sub eax, 0ddh
        ; Exact mapped bytes 74 68: je 0x5876b3bf
        __asm _emit 0x74
        __asm _emit 0x68
        sub eax, ebp
        ; Exact mapped bytes 74 34: je 0x5876b38f
        __asm _emit 0x74
        __asm _emit 0x34
        sub eax, ebp
        ; Exact mapped bytes 75 73: jne 0x5876b3d2
        __asm _emit 0x75
        __asm _emit 0x73
        movzx eax, word ptr [esp + 16h]
        sub eax, ebp
        ; Exact mapped bytes 74 1B: je 0x5876b383
        __asm _emit 0x74
        __asm _emit 0x1b
        sub eax, ebp
        ; Exact mapped bytes 74 0B: je 0x5876b377
        __asm _emit 0x74
        __asm _emit 0x0b
        sub eax, ebp
        ; Exact mapped bytes 75 62: jne 0x5876b3d2
        __asm _emit 0x75
        __asm _emit 0x62
        push 58994ea0h
        ; Exact mapped bytes EB 4D: jmp 0x5876b3c4
        __asm _emit 0xeb
        __asm _emit 0x4d
        push 58994e80h
        lea ecx, [esp + 70h]
        push ecx
        ; Exact mapped bytes EB 46: jmp 0x5876b3c9
        __asm _emit 0xeb
        __asm _emit 0x46
        push 58994e60h
        lea edx, [esp + 70h]
        push edx
        ; Exact mapped bytes EB 3A: jmp 0x5876b3c9
        __asm _emit 0xeb
        __asm _emit 0x3a
        movzx eax, word ptr [esp + 16h]
        sub eax, ebp
        ; Exact mapped bytes 74 1B: je 0x5876b3b3
        __asm _emit 0x74
        __asm _emit 0x1b
        sub eax, ebp
        ; Exact mapped bytes 74 0B: je 0x5876b3a7
        __asm _emit 0x74
        __asm _emit 0x0b
        sub eax, ebp
        ; Exact mapped bytes 75 32: jne 0x5876b3d2
        __asm _emit 0x75
        __asm _emit 0x32
        push 58994e3ch
        ; Exact mapped bytes EB 1D: jmp 0x5876b3c4
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 58994e14h
        lea ecx, [esp + 70h]
        push ecx
        ; Exact mapped bytes EB 16: jmp 0x5876b3c9
        __asm _emit 0xeb
        __asm _emit 0x16
        push 58994df4h
        lea edx, [esp + 70h]
        push edx
        ; Exact mapped bytes EB 0A: jmp 0x5876b3c9
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 58994de0h
        lea eax, [esp + 70h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        lea ecx, [esp + 6ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 12 92 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994db8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2C 78 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 57bh
        ; Exact mapped bytes E9 7D 01 00 00: jmp 0x5876b57d
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898dc08h
        push edi
        lea ecx, [esp + 40h]
        ; Exact mapped bytes E8 51 77 19 00: call 0x58902b60
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x77
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 50h]
        sub ecx, dword ptr [esp + 4ch]
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub eax, ebp
        mov dword ptr [esp + 0b78h], ebp
        ; Exact mapped bytes 74 67: je 0x5876b49c
        __asm _emit 0x74
        __asm _emit 0x67
        sub eax, ebp
        ; Exact mapped bytes 74 47: je 0x5876b480
        __asm _emit 0x74
        __asm _emit 0x47
        sub eax, ebp
        ; Exact mapped bytes 75 70: jne 0x5876b4ad
        __asm _emit 0x75
        __asm _emit 0x70
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E8 EA 6B 19 00: call 0x58902030
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A2 91 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E8 39 6C 19 00: call 0x58902090
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6c
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C1 77 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E8 28 6C 19 00: call 0x58902090
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x6c
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 60 78 FF FF: call 0x58762cd0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 4b0h
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x5876b56d
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E8 A7 6B 19 00: call 0x58902030
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5F 91 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E8 F6 6B 19 00: call 0x58902090
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5876b4a5
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E8 8B 6B 19 00: call 0x58902030
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 73 77 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 4b0h
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x5876b56d
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 0b8ch]
        push 5898dc08h
        push edi
        lea ecx, [esp + 20h]
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes E8 87 76 19 00: call 0x58902b60
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x76
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        sub ecx, dword ptr [esp + 2ch]
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub eax, ebp
        mov dword ptr [esp + 0b78h], ebx
        ; Exact mapped bytes 74 59: je 0x5876b558
        __asm _emit 0x74
        __asm _emit 0x59
        sub eax, ebp
        ; Exact mapped bytes 74 39: je 0x5876b53c
        __asm _emit 0x74
        __asm _emit 0x39
        sub eax, ebp
        ; Exact mapped bytes 75 62: jne 0x5876b569
        __asm _emit 0x75
        __asm _emit 0x62
        lea ecx, [esp + 18h]
        ; Exact mapped bytes E8 20 6B 19 00: call 0x58902030
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D8 90 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 18h]
        ; Exact mapped bytes E8 6F 6B 19 00: call 0x58902090
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F7 76 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 18h]
        ; Exact mapped bytes E8 5E 6B 19 00: call 0x58902090
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 96 77 FF FF: call 0x58762cd0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2D: jmp 0x5876b569
        __asm _emit 0xeb
        __asm _emit 0x2d
        lea ecx, [esp + 18h]
        ; Exact mapped bytes E8 EB 6A 19 00: call 0x58902030
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6a
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A3 90 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 18h]
        ; Exact mapped bytes E8 3A 6B 19 00: call 0x58902090
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5876b561
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [esp + 18h]
        ; Exact mapped bytes E8 CF 6A 19 00: call 0x58902030
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6a
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B7 76 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 0b78h], 0ffffffffh
        ; Exact mapped bytes E8 33 6E 19 00: call 0x589023b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6e
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esp + 0b70h]
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
        mov ecx, dword ptr [esp + 0b58h]
        xor ecx, esp
        ; Exact mapped bytes E8 33 16 21 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x16
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0b68h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
