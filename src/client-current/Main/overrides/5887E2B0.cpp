// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E2B0 .. +0x5AA bytes.
extern "C" __declspec(naked) void FUN_5887e2b0_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 14 01 00 00: sub esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 84 24 10 01 00 00: mov dword ptr [esp + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 24 18 01 00 00: mov eax, dword ptr [esp + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B1 A4 00 00 00: mov esi, dword ptr [ecx + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4C 24 10: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 3B B1 A8 00 00 00: cmp esi, dword ptr [ecx + 0xa8]
        __asm _emit 0x3b
        __asm _emit 0xb1
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x5887e2ea
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 88 E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B A8 98 00 00 00: mov ebp, dword ptr [eax + 0x98]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B DE: mov ebx, esi
        __asm _emit 0x8b
        __asm _emit 0xde
        ; Exact mapped bytes 89 6C 24 14: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 5C 24 18: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8D 7E 22: lea edi, [esi + 0x22]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x22
        ; Exact mapped bytes 8B B0 A8 00 00 00: mov esi, dword ptr [eax + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B0 A4 00 00 00: cmp dword ptr [eax + 0xa4], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x5887e314
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 5E E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 81 98 00 00 00: mov eax, dword ptr [ecx + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 04: je 0x5887e326
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3B E8: cmp ebp, eax
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 74 05: je 0x5887e32b
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 47 E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 3B DE: cmp ebx, esi
        __asm _emit 0x3b
        __asm _emit 0xde
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5887e3c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 38: jne 0x5887e36f
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes E8 36 E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 10: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887e348
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 2A E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 57 E0: mov dx, word ptr [edi - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 66 3B 50 02: cmp dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 74 3E: je 0x5887e394
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 1A: jne 0x5887e374
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 13 E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 78 10: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes 77 1A: ja 0x5887e380
        __asm _emit 0x77
        __asm _emit 0x1a
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 0F: je 0x5887e379
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5887e37b
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB CA: jmp 0x5887e33e
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB E8: jmp 0x5887e361
        __asm _emit 0xeb
        __asm _emit 0xe8
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 78 0C: cmp edi, dword ptr [eax + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x0c
        ; Exact mapped bytes 73 05: jae 0x5887e385
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 ED E8 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 C3 22: add ebx, 0x22
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x22
        ; Exact mapped bytes 83 C7 22: add edi, 0x22
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x22
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x5887e301
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        ; Exact mapped bytes 0F B7 40 08: movzx eax, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes 66 49: dec cx
        __asm _emit 0x66
        __asm _emit 0x49
        ; Exact mapped bytes 89 5C 24 18: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F B7 E9: movzx ebp, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x5887e4b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B0 F3 99 58: push 0x5899f3b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 28: lea edx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x5887e4e2
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 30 F6 99 58: push 0x5899f630
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xf6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 89 5C 24 1C: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 83 C8 01 00 00: mov eax, dword ptr [ebx + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2C: je 0x5887e418
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 28: je 0x5887e418
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887e410
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e410
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887e3f5
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e414
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e415
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 0C F6 99 58: push 0x5899f60c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0xf6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 83 D0 01 00 00: mov eax, dword ptr [ebx + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 32: je 0x5887e463
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 2E: je 0x5887e463
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887e45b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e45b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887e440
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e45f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e460
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 F5 99 58: push 0x5899f5e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 83 D4 01 00 00: mov eax, dword ptr [ebx + 0x1d4]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 35: je 0x5887e4b1
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 31: je 0x5887e4b1
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1A: je 0x5887e4a9
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 14: je 0x5887e4a9
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887e485
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E9 6E 04 00 00: jmp 0x5887e917
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e4ae
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E9 5F 04 00 00: jmp 0x5887e917
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x5887e4d1
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 68 74 F2 99 58: push 0x5899f274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 28: lea eax, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 11: jmp 0x5887e4e2
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 68 50 F5 99 58: push 0x5899f550
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 28: lea ecx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 1D C4 C3 98 58: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5887e580
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 E7 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe7
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 3B 50 10: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887e50e
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 64 E7 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe7
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F B7 48 08: movzx ecx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 64 02 00 00: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3A 8E 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 64 02 00 00: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8D BE F4 01 00 00: lea edi, [esi + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes BA 03 00 00 00: mov edx, 3
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 F1: jne 0x5887e540
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 86 C8 01 00 00: mov eax, dword ptr [esi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 37: je 0x5887e593
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8D 54 24 20: lea edx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 18: je 0x5887e587
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 12: je 0x5887e587
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887e565
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 0B: jmp 0x5887e58b
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x5887e500
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e58c
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF ED: movsx ebp, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xed
        ; Exact mapped bytes 83 FD 0F: cmp ebp, 0xf
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 87 83 03 00 00: ja 0x5887e922
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 95 54 E9 87 58: movzx edx, byte ptr [ebp + 0x5887e954]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 95 40 E9 87 58: jmp dword ptr [edx*4 + 0x5887e940]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x58
        ; Exact mapped bytes 68 90 F5 99 58: push 0x5899f590
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E D0 01 00 00: mov ecx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 19 37 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x37
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E9 49 03 00 00: jmp 0x5887e91d
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 F5 99 58: push 0x5899f580
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 86 CC 01 00 00: mov eax, dword ptr [esi + 0x1cc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 36: je 0x5887e627
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 32: je 0x5887e627
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887e61b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e61b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887e600
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e61f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e620
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 60 F5 99 58: push 0x5899f560
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 86 D4 01 00 00: mov eax, dword ptr [esi + 0x1d4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 33: je 0x5887e677
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 2F: je 0x5887e677
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887e66b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e66b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887e650
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e66f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e670
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 00 02 00 00: lea ecx, [esi + 0x200]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 03 00 00 00: mov edx, 3
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 F3: jne 0x5887e687
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8D 45 F8: lea eax, [ebp - 8]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 83 F8 07: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 77 23: ja 0x5887e6bf
        __asm _emit 0x77
        __asm _emit 0x23
        ; Exact mapped bytes FF 24 85 64 E9 87 58: jmp dword ptr [eax*4 + 0x5887e964]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x58
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5887e6c2
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes B8 05 00 00 00: mov eax, 5
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x5887e6c2
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes B8 06 00 00 00: mov eax, 6
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x5887e6c2
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes B8 07 00 00 00: mov eax, 7
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x5887e6c2
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 45 FF: lea eax, [ebp - 1]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 90 CC B4 A0 58: movzx edx, byte ptr [eax + 0x58a0b4cc]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 68 02 00 00: mov ecx, dword ptr [esi + 0x268]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 8B 8C 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 68 02 00 00: mov eax, dword ptr [esi + 0x268]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E9 32 02 00 00: jmp 0x5887e91d
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B0 F3 99 58: push 0x5899f3b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 28: lea eax, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 6C 24 20: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 77: jne 0x5887e780
        __asm _emit 0x75
        __asm _emit 0x77
        ; Exact mapped bytes E8 64 E5 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 5C 24 18: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 3B 58 10: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887e71e
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 54 E5 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 4B 08: movzx ecx, word ptr [ebx + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 64 02 00 00: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 32 8C 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 64 02 00 00: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes BA 03 00 00 00: mov edx, 3
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 F1: jne 0x5887e740
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 86 C8 01 00 00: mov eax, dword ptr [esi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3D: je 0x5887e799
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8D 54 24 20: lea edx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 16: je 0x5887e785
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 10: je 0x5887e785
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887e765
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 09: jmp 0x5887e789
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 8B: jmp 0x5887e710
        __asm _emit 0xeb
        __asm _emit 0x8b
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e78a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 5C 24 18: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 6C 24 14: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 60 F5 99 58: push 0x5899f560
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 86 D0 01 00 00: mov eax, dword ptr [esi + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 39: je 0x5887e7ef
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 35: je 0x5887e7ef
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887e7db
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e7db
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887e7c0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e7df
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e7e0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 5C 24 18: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 6C 24 14: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 2E: jne 0x5887e821
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes E8 7A E4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 58 10: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887e804
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 6E E4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 53 08: movzx edx, word ptr [ebx + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x53
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8E 64 02 00 00: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 4C 8B 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x5887e91d
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB D4: jmp 0x5887e7fa
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 0C DC FF FF: call 0x5887c440
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x5887e922
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE C8 01 00 00: lea edi, [esi + 0x1c8]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 58 0B: lea ebx, [eax + 0xb]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 39: je 0x5887e887
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes BA 22 C9 98 58: mov edx, 0x5898c922
        __asm _emit 0xba
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x5887e860
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E860 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_5887e2b0_segment_01() {
    __asm {
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887e87b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e87b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887e860
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e87f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e880
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 B6: jne 0x5887e845
        __asm _emit 0x75
        __asm _emit 0xb6
        ; Exact mapped bytes 8B 86 34 02 00 00: mov eax, dword ptr [esi + 0x234]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 31: je 0x5887e8cd
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes BA 22 C9 98 58: mov edx, 0x5898c922
        __asm _emit 0xba
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887e8c1
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887e8c1
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887e8a6
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e8c5
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887e8c6
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 30 F6 99 58: push 0x5899f630
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xf6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 8E C8 01 00 00: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F7 33 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x33
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 68 0C F6 99 58: push 0x5899f60c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0xf6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 8E D0 01 00 00: mov ecx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E1 33 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x33
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 68 E8 F5 99 58: push 0x5899f5e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 8E D4 01 00 00: mov ecx, dword ptr [esi + 0x1d4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CB 33 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x33
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 8E BF FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8C 24 20 01 00 00: mov ecx, dword ptr [esp + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 A6 E2 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 14 01 00 00: add esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
