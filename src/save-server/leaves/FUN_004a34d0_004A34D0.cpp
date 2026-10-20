// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A34D0 .. +0x347 bytes.
extern "C" __declspec(naked) void FUN_004a34d0_004A34D0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 0C: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 7D 08 00: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x4a34e6
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 28 03 00 00: jmp 0x4a380e
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 24 6D 68 00: mov ecx, 0x686d24
        __asm _emit 0xb9
        __asm _emit 0x24
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 40 A1 09 00: call 0x53d630
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 78 18 00: cmp dword ptr [eax + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 74 51: je 0x4a354d
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 2F C4 02 00: call 0x4cf934
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 44: jne 0x4a354d
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 68 80 77 63 00: push 0x637780
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x77
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4A 18: mov ecx, dword ptr [edx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x18
        ; Exact mapped bytes E8 77 6C 03 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 11: jne 0x4a352e
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 6A 2F: push 0x2f
        __asm _emit 0x6a
        __asm _emit 0x2f
        ; Exact mapped bytes 68 F4 49 67 00: push 0x6749f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x49
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 17 58 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x4a352e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 D5: jne 0x4a3509
        __asm _emit 0x75
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4A 18: mov ecx, dword ptr [edx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x18
        ; Exact mapped bytes E8 C7 23 03 00: call 0x4d590a
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes C7 40 18 00 00 00 00: mov dword ptr [eax + 0x18], 0
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 7D 0C 10 01 00 00: cmp dword ptr [ebp + 0xc], 0x110
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 7A: jne 0x4a35d0
        __asm _emit 0x75
        __asm _emit 0x7a
        ; Exact mapped bytes 68 00 4A 67 00: push 0x674a00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 58 BF 68 00: call dword ptr [0x68bf58]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 58 6D 68 00: mov dword ptr [0x686d58], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 68 1C 4A 67 00: push 0x674a1c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 58 BF 68 00: call dword ptr [0x68bf58]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 54 6D 68 00: mov dword ptr [0x686d54], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 68 34 4A 67 00: push 0x674a34
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 58 BF 68 00: call dword ptr [0x68bf58]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 50 6D 68 00: mov dword ptr [0x686d50], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 68 48 4A 67 00: push 0x674a48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 58 BF 68 00: call dword ptr [0x68bf58]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 4C 6D 68 00: mov dword ptr [0x686d4c], eax
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 68 58 4A 67 00: push 0x674a58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 58 BF 68 00: call dword ptr [0x68bf58]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 48 6D 68 00: mov dword ptr [0x686d48], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 68 68 4A 67 00: push 0x674a68
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 58 BF 68 00: call dword ptr [0x68bf58]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 44 6D 68 00: mov dword ptr [0x686d44], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 55 A2 02 00: call 0x4cd820
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 3E 02 00 00: jmp 0x4a380e
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 15 48 6D 68 00: cmp edx, dword ptr [0x686d48]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 18: je 0x4a35f3
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 81 7D 0C 11 01 00 00: cmp dword ptr [ebp + 0xc], 0x111
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2F: jne 0x4a3613
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 25 FF FF 00 00: and eax, 0xffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 0E 04 00 00: cmp eax, 0x40e
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 20: jne 0x4a3613
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 46 E1 00 00: push 0xe146
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 11 01 00 00: push 0x111
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FB 01 00 00: jmp 0x4a380e
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 7D 0C 00 C0 00 00: cmp dword ptr [ebp + 0xc], 0xc000
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 07: jae 0x4a3623
        __asm _emit 0x73
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 EB 01 00 00: jmp 0x4a380e
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 08 C3 02 00: call 0x4cf934
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 F8: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 83 7D F8 00: cmp dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x4a3646
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 6A 4F: push 0x4f
        __asm _emit 0x6a
        __asm _emit 0x4f
        ; Exact mapped bytes 68 F4 49 67 00: push 0x6749f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x49
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF 56 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x4a3646
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 E3: jne 0x4a362f
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes 68 B0 48 63 00: push 0x6348b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x48
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes E8 37 6B 03 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 11: jne 0x4a366e
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes 68 F4 49 67 00: push 0x6749f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x49
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 D7 56 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x4a366e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 D8: jne 0x4a364c
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes 68 80 77 63 00: push 0x637780
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x77
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes E8 0F 6B 03 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 19: je 0x4a369e
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 82 90 00 00 00: mov eax, dword ptr [edx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 25 00 00 08 00: and eax, 0x80000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 07: je 0x4a369e
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 70 01 00 00: jmp 0x4a380e
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 0D 54 6D 68 00: cmp ecx, dword ptr [0x686d54]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 3F: jne 0x4a36e8
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes 68 80 77 63 00: push 0x637780
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x77
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes E8 DA 6A 03 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 11: jne 0x4a36cb
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 6A 60: push 0x60
        __asm _emit 0x6a
        __asm _emit 0x60
        ; Exact mapped bytes 68 F4 49 67 00: push 0x6749f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x49
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 7A 56 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x4a36cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 D8: jne 0x4a36a9
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 26 01 00 00: jmp 0x4a380e
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 05 50 6D 68 00: cmp eax, dword ptr [0x686d50]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 63: jne 0x4a3756
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes 68 80 77 63 00: push 0x637780
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x77
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes E8 90 6A 03 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 11: jne 0x4a3715
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 6A 65: push 0x65
        __asm _emit 0x6a
        __asm _emit 0x65
        ; Exact mapped bytes 68 F4 49 67 00: push 0x6749f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x49
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 30 56 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x4a3715
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 D8: jne 0x4a36f3
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x4a3730
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 89 82 F4 01 00 00: mov dword ptr [edx + 0x1f4], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes FF 92 DC 00 00 00: call dword ptr [edx + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 F4: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes C7 80 F4 01 00 00 00 00 00 00: mov dword ptr [eax + 0x1f4], 0
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 F4: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x4a380e
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 0D 58 6D 68 00: cmp ecx, dword ptr [0x686d58]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 59: jne 0x4a37ba
        __asm _emit 0x75
        __asm _emit 0x59
        ; Exact mapped bytes 68 80 77 63 00: push 0x637780
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x77
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes E8 22 6A 03 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 11: jne 0x4a3783
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 6A 72: push 0x72
        __asm _emit 0x6a
        __asm _emit 0x72
        ; Exact mapped bytes 68 F4 49 67 00: push 0x6749f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x49
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 C2 55 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x4a3783
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 D8: jne 0x4a3761
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes C1 E8 10: shr eax, 0x10
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x10
        ; Exact mapped bytes 25 FF FF 00 00: and eax, 0xffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 25 FF FF 00 00: and eax, 0xffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 81 E1 FF FF 00 00: and ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 54: jmp 0x4a380e
        __asm _emit 0xeb
        __asm _emit 0x54
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 05 4C 6D 68 00: cmp eax, dword ptr [0x686d4c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 38: jne 0x4a37fd
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 68 F8 96 63 00: push 0x6396f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x96
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes E8 BE 69 03 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 11: jne 0x4a37e7
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 6A 79: push 0x79
        __asm _emit 0x6a
        __asm _emit 0x79
        ; Exact mapped bytes 68 F4 49 67 00: push 0x6749f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x49
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 5E 55 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x4a37e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 D8: jne 0x4a37c5
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x4a380e
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 0D 44 6D 68 00: cmp ecx, dword ptr [0x686d44]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x4a380c
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 02: jmp 0x4a380e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
