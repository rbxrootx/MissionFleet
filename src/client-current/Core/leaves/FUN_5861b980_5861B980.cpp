// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861B980 .. +0x9D9 bytes.
extern "C" __declspec(naked) void FUN_5861b980_5861B980() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 81 EC 84 00 00 00: sub esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 A8 09 00 00: je 0x5861c34d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 B8 1C 0D 00 00 00: cmp dword ptr [eax + 0xd1c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x1c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x5861b9c4
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F B6 91 9C 00 00 00: movzx edx, byte ptr [ecx + 0x9c]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FA 05: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 89 09 00 00: je 0x5861c34d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 78 3C 00: cmp dword ptr [eax + 0x3c], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x3c
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5861ba5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 51 3C: mov edx, dword ptr [ecx + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x3c
        ; Exact mapped bytes 81 3A 00 00 01 00: cmp dword ptr [edx], 0x10000
        __asm _emit 0x81
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 77 11: ja 0x5861b9f0
        __asm _emit 0x77
        __asm _emit 0x11
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes C7 40 3C 00 00 00 00: mov dword ptr [eax + 0x3c], 0
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 63 09 00 00: jmp 0x5861c353
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 49 3C: mov ecx, dword ptr [ecx + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x3c
        ; Exact mapped bytes E8 45 8F E6 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x8f
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 89 55 F8: mov dword ptr [ebp - 8], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 83 7D F8 00: cmp dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x5861ba0f
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 46 09 00 00: jmp 0x5861c353
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x5861ba3b
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 51 10: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 89 55 EC: mov dword ptr [ebp - 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 89 45 F8: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 49 3C: mov ecx, dword ptr [ecx + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x3c
        ; Exact mapped bytes E8 0E 8F E6 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8f
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 3B 10: cmp edx, dword ptr [eax]
        __asm _emit 0x3b
        __asm _emit 0x10
        ; Exact mapped bytes 75 02: jne 0x5861ba3b
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x5861ba5c
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 83 7D F8 00: cmp dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x00
        ; Exact mapped bytes 74 19: je 0x5861ba5a
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 81 38 00 00 01 00: cmp dword ptr [eax], 0x10000
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 77 0E: ja 0x5861ba5a
        __asm _emit 0x77
        __asm _emit 0x0e
        ; Exact mapped bytes C7 45 F8 00 00 00 00: mov dword ptr [ebp - 8], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 F9 08 00 00: jmp 0x5861c353
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x5861ba00
        __asm _emit 0xeb
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 83 79 70 00: cmp dword ptr [ecx + 0x70], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x70
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 90 07 00 00: je 0x5861c1f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 8F DE F0 FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xde
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 80 07 00 00: je 0x5861c1f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 0F B6 82 D0 00 00 00: movzx eax, byte ptr [edx + 0xd0]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 0F: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 85 6D 07 00 00: jne 0x5861c1f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 89 55 F4: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 45 F4: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 2D 00 02 00 00: sub eax, 0x200
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 F4: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 83 7D F4 04: cmp dword ptr [ebp - 0xc], 4
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf4
        __asm _emit 0x04
        ; Exact mapped bytes 0F 87 4A 07 00 00: ja 0x5861c1f4
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes FF 24 8D 5C C3 61 58: jmp dword ptr [ecx*4 + 0x5861c35c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xc3
        __asm _emit 0x61
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 8F E6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 58 9E E6 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9e
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x5861bbc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 83 BA 98 00 00 00 00: cmp dword ptr [edx + 0x98], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 41: je 0x5861bb1d
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 98 00 00 00: mov ecx, dword ptr [eax + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D E8: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 C9 02 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 98 00 00 00: mov ecx, dword ptr [eax + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D E4: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 82 98 00 00 00: mov eax, dword ptr [edx + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 89 55 E0: mov dword ptr [ebp - 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 3B 0A 00 00: call 0x5861c560
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x5861bbc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 2B 0A 00 00: call 0x5861c560
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5861bbc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 AE E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xae
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 41 04: sub eax, dword ptr [ecx + 4]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 89 82 BC 00 00 00: mov dword ptr [edx + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 05 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 41 08: sub eax, dword ptr [ecx + 8]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 89 82 C0 00 00 00: mov dword ptr [edx + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 8E E6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 89 88 B4 00 00 00: mov dword ptr [eax + 0xb4], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 90 B8 00 00 00: mov dword ptr [eax + 0xb8], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes C7 81 A8 00 00 00 00 00 00 00: mov dword ptr [ecx + 0xa8], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes C7 82 AC 00 00 00 00 00 00 00: mov dword ptr [edx + 0xac], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 1B 1E 00 00: call 0x5861d9d0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes C7 80 B0 00 00 00 01 00 00 00: mov dword ptr [eax + 0xb0], 1
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 8A 07 00 00: jmp 0x5861c353
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 26 06 00 00: jmp 0x5861c1f4
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 8E E6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 3E 9D E6 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x9d
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 02 02 00 00: je 0x5861bdec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 83 B9 D4 00 00 00 00: cmp dword ptr [ecx + 0xd4], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 F2 01 00 00: jne 0x5861bdec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 83 BA A8 00 00 00 00: cmp dword ptr [edx + 0xa8], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4A: je 0x5861bc50
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF AD E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xad
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 81 BC 00 00 00: sub eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x2b
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 89 82 C4 00 00 00: mov dword ptr [edx + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 04 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 81 C0 00 00 00: sub eax, dword ptr [ecx + 0xc0]
        __asm _emit 0x2b
        __asm _emit 0x81
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 89 82 C8 00 00 00: mov dword ptr [edx + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 76 0B 00 00: call 0x5861c7c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes E9 6E 01 00 00: jmp 0x5861bdbe
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 B8 18 0D 00 00 00: cmp dword ptr [eax + 0xd18], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x18
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x5861bd58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 89 14 0D 00 00: mov ecx, dword ptr [ecx + 0xd14]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C2 D9 EC FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd9
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 72: je 0x5861bce4
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 82 D8 00 00 00: mov eax, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 89 14 0D 00 00: mov ecx, dword ptr [ecx + 0xd14]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A4 D9 EC FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd9
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 DC: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 55 DC: mov edx, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D D8: mov ecx, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E8 15 B6 04 00: call 0x586672b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D D4: mov dword ptr [ebp - 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D D4: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E8 FF DE 04 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A0 D5 E9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C0: movzx eax, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 1A: jne 0x5861bce2
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 91 D8 00 00 00: mov edx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 12: mov edx, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x12
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 72: jmp 0x5861bd56
        __asm _emit 0xeb
        __asm _emit 0x72
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6E D5 E9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 D0: movzx edx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        ; Exact mapped bytes 83 FA 05: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 75 1A: jne 0x5861bd14
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4E 44 E9 FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x44
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 D0: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 81 C1 FC 0C 00 00: add ecx, 0xcfc
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E8 D9 0D 00 00: call 0x5861cb10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2B 44 E9 FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x44
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 59: jmp 0x5861bdb1
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FA D4 E9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd4
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 D0: movzx edx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        ; Exact mapped bytes 83 FA 05: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 75 43: jne 0x5861bdb1
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D CC: mov dword ptr [ebp - 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 83 C2 04: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x04
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E8 07 E4 04 00: call 0x5866a190
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 14 0D 00 00: mov ecx, dword ptr [eax + 0xd14]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F0 88 EA FF: call 0x584c46a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x88
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes C7 81 18 0D 00 00 00 00 00 00: mov dword ptr [ecx + 0xd18], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 CA FF: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 90 A4 00 00 00: mov word ptr [eax + 0xa4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes C7 81 A8 00 00 00 00 00 00 00: mov dword ptr [ecx + 0xa8], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes C7 82 B0 00 00 00 00 00 00 00: mov dword ptr [edx + 0xb0], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 67 05 00 00: jmp 0x5861c353
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 03 04 00 00: jmp 0x5861c1f4
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FE 03 00 00: jmp 0x5861c1f4
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 8B E6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8b
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 16 9B E6 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9b
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3E: je 0x5861be4c
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 44 D4 E9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd4
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 83 F9 05: cmp ecx, 5
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 75 28: jne 0x5861be4c
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B 89 DC 00 00 00: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 89 14 0D 00 00: mov ecx, dword ptr [ecx + 0xd14]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 55 88 EA FF: call 0x584c46a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x88
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes E9 A3 03 00 00: jmp 0x5861c1f4
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes E8 9C 8B E6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x8b
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 4D A4: mov dword ptr [ebp - 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 89 55 A8: mov dword ptr [ebp - 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 AB E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 9C: mov dword ptr [ebp - 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 02 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 A0: mov dword ptr [ebp - 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes 8B 45 A4: mov eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 2B 45 9C: sub eax, dword ptr [ebp - 0x64]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 76 51 23 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x51
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 1E: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1e
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x5861bf27
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 2B 4D A0: sub ecx, dword ptr [ebp - 0x60]
        __asm _emit 0x2b
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 5E 51 23 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x51
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 28: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x28
        ; Exact mapped bytes 7D 70: jge 0x5861bf27
        __asm _emit 0x7d
        __asm _emit 0x70
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes E8 C5 99 E7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1D: je 0x5861beef
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes 89 4D C8: mov dword ptr [ebp - 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D C8: mov ecx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F2 9F E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x9f
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes E8 8E 99 E7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x99
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 1C: jne 0x5861bf25
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes 89 4D C4: mov dword ptr [ebp - 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc4
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D C4: mov ecx, dword ptr [ebp - 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc4
        ; Exact mapped bytes E8 BC 9F E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x9f
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 6E: jmp 0x5861bf95
        __asm _emit 0xeb
        __asm _emit 0x6e
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes E8 55 99 E7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x99
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 1D: jne 0x5861bf5f
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes 89 4D C0: mov dword ptr [ebp - 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D C0: mov ecx, dword ptr [ebp - 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes E8 82 9F E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9f
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes E8 1E 99 E7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x99
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1C: je 0x5861bf95
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes 89 4D BC: mov dword ptr [ebp - 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D BC: mov ecx, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes E8 4C 9F E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9f
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 83 BA A8 00 00 00 00: cmp dword ptr [edx + 0xa8], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x5861c0ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 AA E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xaa
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 81 BC 00 00 00: sub eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x2b
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 7C FF FF FF: mov dword ptr [ebp - 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 00 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 82 C0 00 00 00: sub eax, dword ptr [edx + 0xc0]
        __asm _emit 0x2b
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 80: mov dword ptr [ebp - 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF A9 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa9
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 81 BC 00 00 00: sub eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x2b
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 FB: cmp eax, -5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xfb
        ; Exact mapped bytes 7C 39: jl 0x5861c028
        __asm _emit 0x7c
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 A9 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa9
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 82 BC 00 00 00: sub eax, dword ptr [edx + 0xbc]
        __asm _emit 0x2b
        __asm _emit 0x82
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D D5 03 00 00: cmp eax, 0x3d5
        __asm _emit 0x3d
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 1E: jg 0x5861c028
        __asm _emit 0x7f
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB A9 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa9
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 81 BC 00 00 00: sub eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x2b
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 89 96 19 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 2C 06 96 58: cmp edx, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 54: je 0x5861c08a
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 00 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 81 C0 00 00 00: sub eax, dword ptr [ecx + 0xc0]
        __asm _emit 0x2b
        __asm _emit 0x81
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 0F: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 7C 39: jl 0x5861c088
        __asm _emit 0x7c
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 00 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 82 C0 00 00 00: sub eax, dword ptr [edx + 0xc0]
        __asm _emit 0x2b
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D B2 02 00 00: cmp eax, 0x2b2
        __asm _emit 0x3d
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 1E: jg 0x5861c088
        __asm _emit 0x7f
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 00 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 81 C0 00 00 00: sub eax, dword ptr [ecx + 0xc0]
        __asm _emit 0x2b
        __asm _emit 0x81
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 A9 96 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x96
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 52: jmp 0x5861c0dc
        __asm _emit 0xeb
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 00 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 82 C0 00 00 00: sub eax, dword ptr [edx + 0xc0]
        __asm _emit 0x2b
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 0F: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 7C 39: jl 0x5861c0dc
        __asm _emit 0x7c
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 00 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 81 C0 00 00 00: sub eax, dword ptr [ecx + 0xc0]
        __asm _emit 0x2b
        __asm _emit 0x81
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 0A 02 00 00: cmp eax, 0x20a
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 1E: jg 0x5861c0dc
        __asm _emit 0x7f
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 FF E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 2B 82 C0 00 00 00: sub eax, dword ptr [edx + 0xc0]
        __asm _emit 0x2b
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 55 96 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x96
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 DA 06 00 00: call 0x5861c7c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x5861c1f4
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 B8 B0 00 00 00 00: cmp dword ptr [eax + 0xb0], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 63: je 0x5861c15b
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 88 E6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 4D 94: mov dword ptr [ebp - 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x94
        ; Exact mapped bytes 89 55 98: mov dword ptr [ebp - 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x98
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 B4 00 00 00: mov ecx, dword ptr [eax + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 4D 94: sub ecx, dword ptr [ebp - 0x6c]
        __asm _emit 0x2b
        __asm _emit 0x4d
        __asm _emit 0x94
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 F0 51 E7 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 7F 1A: jg 0x5861c142
        __asm _emit 0x7f
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 82 B8 00 00 00: mov eax, dword ptr [edx + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 45 98: sub eax, dword ptr [ebp - 0x68]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D6 51 E7 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x51
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 7E 0D: jle 0x5861c14f
        __asm _emit 0x7e
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes C7 81 A8 00 00 00 01 00 00 00: mov dword ptr [ecx + 0xa8], 1
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 FD 01 00 00: jmp 0x5861c353
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x5861c1f4
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 88 E6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 B1 97 E6 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x97
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 47: je 0x5861c1ba
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 83 BA AC 00 00 00 00: cmp dword ptr [edx + 0xac], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 39: jne 0x5861c1b8
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 69 98 E7 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x98
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2D: jne 0x5861c1b8
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes C7 80 AC 00 00 00 01 00 00 00: mov dword ptr [eax + 0xac], 1
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 8A A4 00 00 00: mov word ptr [edx + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 1F 18 00 00: call 0x5861d9d0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 9B 01 00 00: jmp 0x5861c353
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x5861c1f4
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 B8 AC 00 00 00 00: cmp dword ptr [eax + 0xac], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x5861c1f4
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 22 98 E7 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x98
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 21: jne 0x5861c1f4
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes C7 81 AC 00 00 00 00 00 00 00: mov dword ptr [ecx + 0xac], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 CA FF: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 90 A4 00 00 00: mov word ptr [eax + 0xa4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 5F 01 00 00: jmp 0x5861c353
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 54 01 00 00: jmp 0x5861c34d
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 81 79 04 00 02 00 00: cmp dword ptr [ecx + 4], 0x200
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 44 01 00 00: jne 0x5861c34d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes E8 E4 87 E6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 4D 8C: mov dword ptr [ebp - 0x74], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x8c
        ; Exact mapped bytes 89 55 90: mov dword ptr [ebp - 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x90
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E A7 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa7
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 84: mov dword ptr [ebp - 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 FE E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 88: mov dword ptr [ebp - 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes 8B 45 8C: mov eax, dword ptr [ebp - 0x74]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x8c
        ; Exact mapped bytes 2B 45 84: sub eax, dword ptr [ebp - 0x7c]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BE 4D 23 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 1E: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1e
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x5861c2df
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 90: mov ecx, dword ptr [ebp - 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes 2B 4D 88: sub ecx, dword ptr [ebp - 0x78]
        __asm _emit 0x2b
        __asm _emit 0x4d
        __asm _emit 0x88
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 A6 4D 23 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x4d
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 28: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x28
        ; Exact mapped bytes 7D 70: jge 0x5861c2df
        __asm _emit 0x7d
        __asm _emit 0x70
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes E8 0D 96 E7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x96
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1D: je 0x5861c2a7
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes 89 4D B8: mov dword ptr [ebp - 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D B8: mov ecx, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes E8 3A 9C E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9c
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes E8 D6 95 E7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 1C: jne 0x5861c2dd
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes 89 4D B4: mov dword ptr [ebp - 0x4c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D B4: mov ecx, dword ptr [ebp - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes E8 04 9C E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x9c
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 6E: jmp 0x5861c34d
        __asm _emit 0xeb
        __asm _emit 0x6e
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes E8 9D 95 E7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 1D: jne 0x5861c317
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes 89 4D B0: mov dword ptr [ebp - 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D B0: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes E8 CA 9B E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9b
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes E8 66 95 E7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1C: je 0x5861c34d
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 10 54: mov ecx, dword ptr [eax + edx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x54
        ; Exact mapped bytes 89 4D AC: mov dword ptr [ebp - 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes E8 94 9B E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x9b
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 42 34: mov eax, dword ptr [edx + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x34
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
