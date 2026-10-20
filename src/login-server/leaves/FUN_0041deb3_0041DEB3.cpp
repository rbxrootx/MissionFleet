// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DEB3 .. +0x3DD bytes.
extern "C" __declspec(naked) void FUN_0041deb3_0041DEB3() {
    __asm {
        ; Exact mapped bytes B8 74 B0 43 00: mov eax, 0x43b074
        __asm _emit 0xb8
        __asm _emit 0x74
        __asm _emit 0xb0
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E8 4B 17 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EC 18: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x18
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 65 F0: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 0C C4 43 00: call dword ptr [0x43c40c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 06 14 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 75 05: jne 0x41dede
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 21 45 E0: and dword ptr [ebp - 0x20], eax
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes EB 06: jmp 0x41dee4
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 48 1C: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1c
        ; Exact mapped bytes 89 4D E0: mov dword ptr [ebp - 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 05: jne 0x41def0
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 21 4D DC: and dword ptr [ebp - 0x24], ecx
        __asm _emit 0x21
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes EB 06: jmp 0x41def6
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 49 1C: mov ecx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x1c
        ; Exact mapped bytes 89 4D DC: mov dword ptr [ebp - 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 59 04: mov ebx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x59
        __asm _emit 0x04
        ; Exact mapped bytes 81 FB 00 01 00 00: cmp ebx, 0x100
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5D E8: mov dword ptr [ebp - 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xe8
        ; Exact mapped bytes 72 08: jb 0x41df0f
        __asm _emit 0x72
        __asm _emit 0x08
        ; Exact mapped bytes 81 FB 08 01 00 00: cmp ebx, 0x108
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 18: jbe 0x41df27
        __asm _emit 0x76
        __asm _emit 0x18
        ; Exact mapped bytes 81 FB 00 02 00 00: cmp ebx, 0x200
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 82 B1 00 00 00: jb 0x41dfcc
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 FB 09 02 00 00: cmp ebx, 0x209
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 A5 00 00 00: ja 0x41dfcc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 74 50: je 0x41df7d
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 3D 08 C5 43 00: mov edi, dword ptr [0x43c508]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 38 00: cmp dword ptr [esi + 0x38], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 75 21: jne 0x41df5a
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes FF 76 1C: push dword ptr [esi + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x1c
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 94 13 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B 45 08: cmp eax, dword ptr [ebp + 8]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 74 11: je 0x41df5a
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes FF 76 1C: push dword ptr [esi + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x1c
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 84 13 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 D9: jne 0x41df33
        __asm _emit 0x75
        __asm _emit 0xd9
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 1F: je 0x41df7d
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 46 38: mov eax, dword ptr [esi + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x38
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 18: je 0x41df7d
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 40 54: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 11: je 0x41df7d
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x41e051
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 FB 01 01 00 00: cmp ebx, 0x101
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x41df95
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 81 FB 00 01 00 00: cmp ebx, 0x100
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x41df95
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 81 FB 02 01 00 00: cmp ebx, 0x102
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 37: jne 0x41dfcc
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 33: je 0x41dfcc
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8B 76 38: mov esi, dword ptr [esi + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x38
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 2C: je 0x41dfcc
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 40 08: mov ax, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes 66 3D 0D 00: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x41dfb6
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes F6 86 80 00 00 00 01: test byte ptr [esi + 0x80], 1
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 0F: jne 0x41dfc5
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 66 3D 1B 00: cmp ax, 0x1b
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x41dfcc
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes F6 86 80 00 00 00 02: test byte ptr [esi + 0x80], 2
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 74 07: je 0x41dfcc
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 67 01 00 00: jmp 0x41e133
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes FF 30: push dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x30
        ; Exact mapped bytes E8 02 13 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 2D 00 01 00 00: sub eax, 0x100
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 75 E4: mov dword ptr [ebp - 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x41e07b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 2F: je 0x41e021
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 83 E8 04: sub eax, 4
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x41e0b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 75 EC: cmp dword ptr [ebp - 0x14], esi
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes 75 11: jne 0x41e011
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 6A 12: push 0x12
        __asm _emit 0x6a
        __asm _emit 0x12
        ; Exact mapped bytes FF 15 48 C4 43 00: call dword ptr [0x43c448]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8D A4 00 00 00: jge 0x41e0b5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 75 0C: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 7E 08 20: cmp word ptr [esi + 8], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x20
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x41e0b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x41e024
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8B 75 0C: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 7D 08: cmp edi, dword ptr [ebp + 8]
        __asm _emit 0x3b
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 74 28: je 0x41e051
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A2 F8 FF FF: call 0x41d8d2
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 7D E8 02 01 00 00: cmp dword ptr [ebp - 0x18], 0x102
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x41e03d
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes A8 84: test al, 0x84
        __asm _emit 0xa8
        __asm _emit 0x84
        ; Exact mapped bytes 75 78: jne 0x41e0b5
        __asm _emit 0x75
        __asm _emit 0x78
        ; Exact mapped bytes 66 8B 4E 08: mov cx, word ptr [esi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 F9 09: cmp cx, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x09
        ; Exact mapped bytes 75 04: jne 0x41e04b
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 75 6A: jne 0x41e0b5
        __asm _emit 0x75
        __asm _emit 0x6a
        ; Exact mapped bytes 66 83 F9 20: cmp cx, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 75 08: jne 0x41e059
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x41e133
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 CA FA FF FF: call 0x41db2d
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4E: je 0x41e0b5
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 40 38: mov eax, dword ptr [eax + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x38
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 47: je 0x41e0b5
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F2 B9 FF FF: call 0x419a68
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x41e234
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 4E F8 FF FF: call 0x41d8d2
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 49 08: movzx ecx, word ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x49
        __asm _emit 0x08
        ; Exact mapped bytes 83 F9 1B: cmp ecx, 0x1b
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x1b
        ; Exact mapped bytes 0F 8F 05 01 00 00: jg 0x41e199
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x41e1e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 03: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x41e1e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 09: cmp ecx, 9
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x09
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x41e144
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 0D: cmp ecx, 0xd
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x41e1bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes FF 70 1C: push dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x70
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 F0 C4 43 00: call dword ptr [0x43c4f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 22: je 0x41e0ec
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 8B 35 0C C4 43 00: mov esi, dword ptr [0x43c40c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 00 12 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B 45 EC: cmp eax, dword ptr [ebp - 0x14]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 74 0F: je 0x41e0ec
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F3 11 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B7 FA FF FF: call 0x41dba2
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes FF 75 E0: push dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 35 A4 C4 43 00: mov esi, dword ptr [0x43c4a4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 36: je 0x41e131
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 1D 0C C4 43 00: mov ebx, dword ptr [0x43c40c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x0c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CF 11 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 75 EC: push dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes E8 ED FA FF FF: call 0x41dbff
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes FF 75 DC: push dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xdc
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 14: je 0x41e131
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B3 11 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 75 EC: push dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 95 FC FF FF: call 0x41ddc6
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes A8 02: test al, 2
        __asm _emit 0xa8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 69 FF FF FF: jne 0x41e0b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes FF 15 48 C4 43 00: call dword ptr [0x43c448]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 9C C1: setl cl
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xc1
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 03: je 0x41e165
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 8B 7F 1C: mov edi, dword ptr [edi + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 70 1C: push dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x70
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 94 C4 43 00: call dword ptr [0x43c494]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5F 11 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x41e234
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 77 F7 FF FF: call 0x41d900
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 75 EC: push dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes E8 6D FA FF FF: call 0x41dbff
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x41e234
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 25: cmp ecx, 0x25
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x25
        ; Exact mapped bytes 0F 8C 13 FF FF FF: jl 0x41e0b5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F9 26: cmp ecx, 0x26
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x26
        ; Exact mapped bytes 0F 8E 9F 00 00 00: jle 0x41e24a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 28: cmp ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x28
        ; Exact mapped bytes 0F 8E 9D 00 00 00: jle 0x41e251
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 2B: cmp ecx, 0x2b
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x2b
        ; Exact mapped bytes 0F 85 F8 FE FF FF: jne 0x41e0b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 75 EC: push dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes E8 51 FB FF FF: call 0x41dd16
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A8 10: test al, 0x10
        __asm _emit 0xa8
        __asm _emit 0x10
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 74 0C: je 0x41e1d6
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 75 EC: mov esi, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 A8 00 01 00: call 0x42e27c
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x41e1de
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 BB FB FF FF: call 0x41dd99
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 75 13: jne 0x41e1f7
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 85 FA FF FF: call 0x41dc72
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 84 BE FE FF FF: je 0x41e0b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 50 01 01 00: call 0x42e34e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0C: jne 0x41e20e
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 B4 C4 43 00: call dword ptr [0x43c4b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 FE FF FF: jmp 0x41e0b5
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 7E 38 00: cmp dword ptr [esi + 0x38], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 9D FE FF FF: je 0x41e0b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 68 D9 FD FF FF: push 0xfffffdd9
        __asm _emit 0x68
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes E8 84 01 01 00: call 0x42e3b1
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 83 4D FC FF: or dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes E9 B0 FE FF FF: jmp 0x41e0ec
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes E8 E2 44 01 00: call 0x432726
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B8 30 E2 41 00: mov eax, 0x41e230
        __asm _emit 0xb8
        __asm _emit 0x30
        __asm _emit 0xe2
        __asm _emit 0x41
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes C7 45 E4 01 00 00 00: mov dword ptr [ebp - 0x1c], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF 75 EC: push dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes E8 76 F6 FF FF: call 0x41d8d2
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 51 FE FF FF: jne 0x41e0b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 03: je 0x41e26e
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 8B 40 1C: mov eax, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x1c
        ; Exact mapped bytes FF 75 E4: push dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes FF 70 1C: push dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x70
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 B8 C4 43 00: call dword ptr [0x43c4b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 54 10 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 29 FE FF FF: je 0x41e0b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 78 38 00: cmp dword ptr [eax + 0x38], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x38
        __asm _emit 0x00
    }
}
