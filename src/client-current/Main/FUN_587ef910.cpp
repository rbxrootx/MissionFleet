// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 1068 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EF910 .. +0x1D7 bytes.
extern "C" __declspec(naked) void FUN_587ef910_segment_00() {
    __asm {
        ; Exact mapped bytes A1 6C 45 A2 58: mov eax, dword ptr [0x58a2456c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 24: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x24
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F B7 08: movzx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x08
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes A1 70 45 A2 58: mov eax, dword ptr [0x58a24570]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 48 24: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 24: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B9 FF E4 00 00: mov ecx, 0xe4ff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 04 00 00: mov edx, 0x400
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B8 FD FF 00 00: mov eax, 0xfffd
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 74 04 01 00 00 00 00 20: mov dword ptr [esi + 0x10474], 0x20000000
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes E8 65 33 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x33
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 9B 33 11 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x33
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 5E 58: mov dword ptr [esi + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x58
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 66 83 BE F0 05 01 00 0A: cmp word ptr [esi + 0x105f0], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 75 18: jne 0x587ef9b7
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 8E 84 00 00 00: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587ef9b7
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 84 00 00 00: mov dword ptr [esi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 C4 00 00 00: mov eax, dword ptr [ecx + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes C7 40 54 C4 FF FF FF: mov dword ptr [eax + 0x54], 0xffffffc4
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A C4 00 00 00: mov ecx, dword ptr [edx + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes C7 40 54 CE 02 00 00: mov dword ptr [eax + 0x54], 0x2ce
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 4C 0A 00: call 0x588946b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E FC 0B 01 00: mov ecx, dword ptr [esi + 0x10bfc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E 30 0D 02 00: mov ecx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 8E 28 0D 02 00: lea ecx, [esi + 0x20d28]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x587efa21
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 8B 8E 34 0D 02 00: mov ecx, dword ptr [esi + 0x20d34]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 B1 8D 11 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8d
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 40 0D 02 00: mov dword ptr [esi + 0x20d40], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 0C 48 A2 58: mov eax, dword ptr [0x58a2480c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 48 24: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 24: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x24
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes A1 BC B1 A0 58: mov eax, dword ptr [0x58a0b1bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 48 24: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 24: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes A1 C0 B1 A0 58: mov eax, dword ptr [0x58a0b1c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 48 24: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 24: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D BC B1 A0 58: mov ecx, dword ptr [0x58a0b1bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 D7 78 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x78
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 B1 A0 58: mov ecx, dword ptr [0x58a0b1c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 CB 78 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x78
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 44 05 01 00: mov ecx, dword ptr [esi + 0x10544]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x587efaad
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 44 05 01 00: mov dword ptr [esi + 0x10544], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 48 05 01 00: mov eax, dword ptr [esi + 0x10548]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 20: je 0x587efad7
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 69 D3 18 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd3
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes B8 AA AA AA AA: mov eax, 0xaaaaaaaa
        __asm _emit 0xb8
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 86 4C 05 01 00: mov dword ptr [esi + 0x1054c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 50 05 01 00: mov dword ptr [esi + 0x10550], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 48 05 01 00: mov dword ptr [esi + 0x10548], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 AC 04 01 00: mov eax, dword ptr [esi + 0x104ac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 B0 04 01 00: cmp eax, dword ptr [esi + 0x104b0]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 72: je 0x587efb57
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes EB 09: jmp 0x587efaf0
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EFAF0 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_587ef910_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 86 B0 04 01 00: mov eax, dword ptr [esi + 0x104b0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 AC 04 01 00: cmp eax, dword ptr [esi + 0x104ac]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x587efb1c
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 8E A4 04 01 00: mov ecx, dword ptr [esi + 0x104a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 04: jne 0x587efb0d
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes EB 03: jmp 0x587efb10
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 48 01: lea ecx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x01
        ; Exact mapped bytes FF 8E A8 04 01 00: dec dword ptr [esi + 0x104a8]
        __asm _emit 0xff
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E B0 04 01 00: mov dword ptr [esi + 0x104b0], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 04: shl eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        ; Exact mapped bytes 03 86 B4 04 01 00: add eax, dword ptr [esi + 0x104b4]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 54 24 10: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4C 24 14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 54 24 18: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 09: je 0x587efb49
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E0 D2 18 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd2
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B 86 AC 04 01 00: mov eax, dword ptr [esi + 0x104ac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 B0 04 01 00: cmp eax, dword ptr [esi + 0x104b0]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 99: jne 0x587efaf0
        __asm _emit 0x75
        __asm _emit 0x99
        ; Exact mapped bytes 8B 86 3C 1C 02 00: mov eax, dword ptr [esi + 0x21c3c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 11: je 0x587efb73
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 86 3C 1C 02 00 FF FF FF FF: mov dword ptr [esi + 0x21c3c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E A0 0C 02 00: lea ecx, [esi + 0x20ca0]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 C3 D0 18 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd0
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 47 A2 58: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 2C 01 00 00: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 08 12 0D 00: call 0x588c0da0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 F4 1E 02 00: mov eax, dword ptr [esi + 0x21ef4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F8 1E 02 00: mov eax, dword ptr [esi + 0x21ef8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8D BE F0 18 02 00: lea edi, [esi + 0x218f0]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BD 08 00 00 00: mov ebp, 8
        __asm _emit 0xbd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x587efbc0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EFBC0 .. +0x188 bytes.
extern "C" __declspec(naked) void FUN_587ef910_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 5F 3F 0C 00: call 0x588b3b30
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x587efbc0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 54 01 00 00: mov edx, dword ptr [ecx + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D 30 C0 98 58: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B BA 80 00 00 00: mov edi, dword ptr [edx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0xba
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 74 A2 99 58: push 0x5899a274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xa2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8A 11: mov dl, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x11
        ; Exact mapped bytes 3A 10: cmp dl, byte ptr [eax]
        __asm _emit 0x3a
        __asm _emit 0x10
        ; Exact mapped bytes 75 1A: jne 0x587efc20
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 74 12: je 0x587efc1c
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8A 51 01: mov dl, byte ptr [ecx + 1]
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x01
        ; Exact mapped bytes 3A 50 01: cmp dl, byte ptr [eax + 1]
        __asm _emit 0x3a
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 75 0E: jne 0x587efc20
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 75 E4: jne 0x587efc00
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 05: jmp 0x587efc25
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes 83 D8 FF: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 46: je 0x587efc6f
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 54 01 00 00: mov ecx, dword ptr [eax + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B9 80 00 00 00: mov edi, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 08 C2 99 58: push 0x5899c208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xc2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 8A 11: mov dl, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x11
        ; Exact mapped bytes 3A 10: cmp dl, byte ptr [eax]
        __asm _emit 0x3a
        __asm _emit 0x10
        ; Exact mapped bytes 75 1A: jne 0x587efc66
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 74 12: je 0x587efc62
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8A 51 01: mov dl, byte ptr [ecx + 1]
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x01
        ; Exact mapped bytes 3A 50 01: cmp dl, byte ptr [eax + 1]
        __asm _emit 0x3a
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 75 0E: jne 0x587efc66
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 75 E4: jne 0x587efc46
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 05: jmp 0x587efc6b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes 83 D8 FF: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 10: jne 0x587efc7f
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 C0 45 A2 58: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C7 82 B8 00 00 00 02 00 00 00: mov dword ptr [edx + 0xb8], 2
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 41 24: mov al, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 24 0F: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 3C 04: cmp al, 4
        __asm _emit 0x3c
        __asm _emit 0x04
        ; Exact mapped bytes 74 0F: je 0x587efcb1
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 3C 05: cmp al, 5
        __asm _emit 0x3c
        __asm _emit 0x05
        ; Exact mapped bytes 74 0B: je 0x587efcb1
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 3A C3: cmp al, bl
        __asm _emit 0x3a
        __asm _emit 0xc3
        ; Exact mapped bytes 74 07: je 0x587efcb1
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 41 24: mov al, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 24 0F: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 3C 04: cmp al, 4
        __asm _emit 0x3c
        __asm _emit 0x04
        ; Exact mapped bytes 74 0F: je 0x587efcd5
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 3C 05: cmp al, 5
        __asm _emit 0x3c
        __asm _emit 0x05
        ; Exact mapped bytes 74 0B: je 0x587efcd5
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 3A C3: cmp al, bl
        __asm _emit 0x3a
        __asm _emit 0xc3
        ; Exact mapped bytes 74 07: je 0x587efcd5
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E C8 1C 02 00: mov dword ptr [esi + 0x21cc8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 80 01 00 00: mov edx, dword ptr [ecx + 0x180]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 42 50 01 00 00 00: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE F0 05 01 00 06: cmp word ptr [esi + 0x105f0], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 75 0B: jne 0x587efd03
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 8E 08 1F 02 00: mov ecx, dword ptr [esi + 0x21f08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 BD D7 F6 FF: call 0x5875d4c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd7
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 88 1D 5F 48 A2 58: mov byte ptr [0x58a2485f], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x5f
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 88 1D 08 49 A2 58: mov byte ptr [0x58a24908], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 88 1D 09 49 A2 58: mov byte ptr [0x58a24909], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 86 BC 18 02 00: mov eax, dword ptr [esi + 0x218bc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 C0 18 02 00: mov eax, dword ptr [esi + 0x218c0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 89 9E 2C 1D 02 00: mov dword ptr [esi + 0x21d2c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x2c
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B B6 C8 0B 01 00: mov esi, dword ptr [esi + 0x10bc8]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
